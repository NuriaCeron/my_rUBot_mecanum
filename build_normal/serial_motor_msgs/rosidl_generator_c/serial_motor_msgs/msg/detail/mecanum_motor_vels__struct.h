// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from serial_motor_msgs:msg/MecanumMotorVels.idl
// generated code does not contain a copyright notice

#ifndef SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_MOTOR_VELS__STRUCT_H_
#define SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_MOTOR_VELS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MecanumMotorVels in the package serial_motor_msgs.
typedef struct serial_motor_msgs__msg__MecanumMotorVels
{
  float fl_rad_sec;
  float fr_rad_sec;
  float bl_rad_sec;
  float br_rad_sec;
} serial_motor_msgs__msg__MecanumMotorVels;

// Struct for a sequence of serial_motor_msgs__msg__MecanumMotorVels.
typedef struct serial_motor_msgs__msg__MecanumMotorVels__Sequence
{
  serial_motor_msgs__msg__MecanumMotorVels * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serial_motor_msgs__msg__MecanumMotorVels__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_MOTOR_VELS__STRUCT_H_
