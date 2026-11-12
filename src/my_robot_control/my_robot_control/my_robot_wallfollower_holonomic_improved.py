#!/usr/bin/env python3
"""Reactive holonomic right-wall follower for the mecanum rUBot."""

import math
import time

import rclpy
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from rclpy.signals import SignalHandlerOptions
from sensor_msgs.msg import LaserScan


class ImprovedHolonomicWallFollower(Node):
    FOLLOW_RIGHT = 'FOLLOW_RIGHT'
    FOLLOW_FRONT = 'FOLLOW_FRONT'
    BYPASS_OBSTACLE = 'BYPASS_OBSTACLE'
    TURN_TO_RIGHT = 'TURN_TO_RIGHT'
    BYPASS_FRONT_RIGHT = 'BYPASS_FRONT_RIGHT'
    BYPASS_RIGHT = 'BYPASS_RIGHT'
    BYPASS_BACK_RIGHT = 'BYPASS_BACK_RIGHT'

    def __init__(self):
        super().__init__('improved_holonomic_wall_follower')
        defaults = {
            'follow_distance': 0.35,
            'max_front_length': 0.50,
            'forward_speed': 0.30,
            'lateral_speed': 0.40,
            'distance_gain': 0.80,
            'angle_gain': 1.20,
            'max_angular_speed': 1.00,
            'detection_limit': 1.20,
            'back_right_limit_factor': 1.50,
        }
        for name, default in defaults.items():
            value = float(self.declare_parameter(name, default).value)
            if not math.isfinite(value) or value <= 0.0:
                raise ValueError(f'{name} must be finite and positive')
            setattr(self, name, value)

        self.state = self.FOLLOW_RIGHT
        self.bypass_phase = self.BYPASS_FRONT_RIGHT
        self.command = Twist()
        self.odom_pose = None
        self.front_start_pose = None
        self.last_scan_time = None
        self.last_odom_time = None
        self.sensor_timeout = 1.0

        self.subscription = self.create_subscription(
            LaserScan, '/scan', self.scan_callback, qos_profile_sensor_data)
        self.odom_subscription = self.create_subscription(
            Odometry, '/odom', self.odom_callback, qos_profile_sensor_data)
        self.publisher = self.create_publisher(Twist, '/cmd_vel', 10)
        self.timer = self.create_timer(0.05, self.publish_command)
        self.get_logger().info('Improved wall follower started: FOLLOW_RIGHT')

    @staticmethod
    def clamp(value, limit):
        return max(-limit, min(limit, value))

    def odom_is_fresh(self):
        return (self.odom_pose is not None
                and self.last_odom_time is not None
                and time.monotonic() - self.last_odom_time < self.sensor_timeout)

    def publish_command(self):
        # A stopped sensor must not leave an old motion command active.
        if (self.last_scan_time is None
                or time.monotonic() - self.last_scan_time > self.sensor_timeout
                or (self.state == self.FOLLOW_FRONT and not self.odom_is_fresh())):
            self.command = Twist()
        self.publisher.publish(self.command)

    def odom_callback(self, msg):
        position = msg.pose.pose.position
        q = msg.pose.pose.orientation
        values = (position.x, position.y, q.x, q.y, q.z, q.w)
        if not all(math.isfinite(value) for value in values):
            self.odom_pose = None
            return
        norm = math.sqrt(q.x*q.x + q.y*q.y + q.z*q.z + q.w*q.w)
        if norm < 1e-9:
            self.odom_pose = None
            return
        x, y, z, w = q.x/norm, q.y/norm, q.z/norm, q.w/norm
        yaw = math.atan2(2.0*(w*z + x*y), 1.0 - 2.0*(y*y + z*z))
        self.odom_pose = (position.x, position.y, yaw)
        self.last_odom_time = time.monotonic()

    def set_state(self, state):
        if state != self.state:
            self.get_logger().info(f'{self.state} -> {state}')
            self.state = state

    def set_phase(self, phase):
        if phase != self.bypass_phase:
            self.get_logger().info(f'{self.bypass_phase} -> {phase}')
            self.bypass_phase = phase

    def read_regions(self, scan):
        """Return distance/angle averages of up to five nearest valid rays.

        A finite return beyond detection_limit confirms an observed but distant
        surface. A region containing only invalid returns is unknown, not clear.
        Infinite measurements are never used as distance observations.
        """
        buckets = {name: [] for name in ('front', 'front_right', 'right', 'back_right')}
        minimum = math.inf
        if (not math.isfinite(scan.angle_min)
                or not math.isfinite(scan.angle_increment)
                or scan.angle_increment == 0.0
                or not math.isfinite(scan.range_min)
                or not math.isfinite(scan.range_max)
                or scan.range_min < 0.0 or scan.range_max <= scan.range_min):
            return None, minimum
        for index, distance in enumerate(scan.ranges):
            if (not math.isfinite(distance) or distance <= 0.0
                    or not scan.range_min <= distance <= scan.range_max):
                continue
            minimum = min(minimum, distance)
            angle = scan.angle_min + index * scan.angle_increment
            angle = math.atan2(math.sin(angle), math.cos(angle))
            degrees = math.degrees(angle)
            if -20.0 <= degrees <= 20.0:
                name = 'front'
            elif -70.0 <= degrees < -20.0:
                name = 'front_right'
            elif -110.0 <= degrees < -70.0:
                name = 'right'
            elif -160.0 <= degrees < -110.0:
                name = 'back_right'
            else:
                continue
            buckets[name].append((distance, angle))

        regions = {}
        for name, rays in buckets.items():
            if not rays:
                return None, minimum
            nearest = sorted(rays)[:5]
            distance = sum(ray[0] for ray in nearest) / len(nearest)
            angle = math.atan2(sum(math.sin(ray[1]) for ray in nearest),
                               sum(math.cos(ray[1]) for ray in nearest))
            regions[name] = (distance, angle)
        return regions, minimum

    def scan_callback(self, scan):
        self.last_scan_time = time.monotonic()
        self.command = Twist()  # Every undefined path leaves a zero command.
        regions, minimum = self.read_regions(scan)
        if regions is None:
            return
        # Conservative emergency clearance; no manoeuvre overrides it.
        if minimum < max(scan.range_min, 0.45 * self.follow_distance):
            return

        front, front_angle = regions['front']
        right, right_angle = regions['right']
        back_right, _ = regions['back_right']
        closest = min(regions, key=lambda name: regions[name][0])
        if regions[closest][0] > self.detection_limit:
            return
        front_blocked = front < 1.5 * self.follow_distance
        right_seen = right <= self.detection_limit
        back_right_seen = back_right <= self.detection_limit

        if self.state == self.FOLLOW_RIGHT:
            if front_blocked:
                if not self.odom_is_fresh():
                    return
                self.front_start_pose = tuple(self.odom_pose)
                self.set_state(self.FOLLOW_FRONT)
            elif not right_seen:
                return

        elif self.state == self.FOLLOW_FRONT:
            if not self.odom_is_fresh() or self.front_start_pose is None:
                return
            x0, y0, yaw0 = self.front_start_pose
            x, y, _ = self.odom_pose
            progress = abs(-math.sin(yaw0)*(x-x0) + math.cos(yaw0)*(y-y0))
            if not front_blocked:
                self.bypass_phase = self.BYPASS_FRONT_RIGHT
                self.set_state(self.BYPASS_OBSTACLE)
            elif progress >= self.max_front_length:
                self.set_state(self.TURN_TO_RIGHT)

        elif self.state == self.TURN_TO_RIGHT:
            if closest == 'right' and right_seen and not front_blocked:
                self.front_start_pose = None
                self.set_state(self.FOLLOW_RIGHT)

        elif self.state == self.BYPASS_OBSTACLE:
            # Only the matching closest sector can advance each subphase.
            if self.bypass_phase == self.BYPASS_FRONT_RIGHT:
                if closest == 'right' and right_seen:
                    self.set_phase(self.BYPASS_RIGHT)
            elif self.bypass_phase == self.BYPASS_RIGHT:
                if closest == 'back_right' and back_right_seen:
                    self.set_phase(self.BYPASS_BACK_RIGHT)
            elif self.bypass_phase == self.BYPASS_BACK_RIGHT:
                if closest == 'right' and right_seen and not front_blocked:
                    self.front_start_pose = None
                    self.set_state(self.FOLLOW_RIGHT)
            else:
                return
        else:
            return

        command = Twist()
        if self.state == self.FOLLOW_RIGHT:
            if not right_seen:
                return
            command.linear.x = self.forward_speed
            # Positive vy moves left: move away when the right wall is close.
            command.linear.y = self.distance_gain * (self.follow_distance - right)
            command.angular.z = self.angle_gain * (right_angle + math.pi / 2.0)

        elif self.state == self.FOLLOW_FRONT:
            if not self.odom_is_fresh():
                return
            command.linear.y = self.lateral_speed
            command.linear.x = self.distance_gain * (front - self.follow_distance)
            command.angular.z = self.angle_gain * front_angle

        elif self.state == self.TURN_TO_RIGHT:
            command.angular.z = self.max_angular_speed

        elif self.state == self.BYPASS_OBSTACLE:
            # A new obstacle directly ahead takes priority over the bypass.
            if front_blocked:
                return
            command.linear.x = 0.5 * self.forward_speed
            if self.bypass_phase == self.BYPASS_FRONT_RIGHT:
                command.linear.y = 0.25 * self.lateral_speed
            elif self.bypass_phase == self.BYPASS_RIGHT:
                if not right_seen:
                    return
                command.linear.y = self.distance_gain * (self.follow_distance - right)
            elif self.bypass_phase == self.BYPASS_BACK_RIGHT:
                if not back_right_seen:
                    return
                excess = max(0.0, back_right - self.back_right_limit_factor*self.follow_distance)
                command.linear.y = -(0.25*self.lateral_speed + self.distance_gain*excess)
            else:
                return
            command.angular.z = 0.0

        command.linear.x = self.clamp(command.linear.x, self.forward_speed)
        command.linear.y = self.clamp(command.linear.y, self.lateral_speed)
        command.angular.z = self.clamp(command.angular.z, self.max_angular_speed)
        if all(math.isfinite(v) for v in
               (command.linear.x, command.linear.y, command.angular.z)):
            self.command = command

    def stop(self):
        self.command = Twist()
        self.timer.cancel()
        try:
            self.publisher.publish(self.command)
        except Exception:
            pass


def main(args=None):
    rclpy.init(args=args, signal_handler_options=SignalHandlerOptions.NO)
    node = ImprovedHolonomicWallFollower()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.stop()
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()
