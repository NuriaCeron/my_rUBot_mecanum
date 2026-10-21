// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from serial_motor_msgs:msg/MecanumMotorVels.idl
// generated code does not contain a copyright notice

#ifndef SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_MOTOR_VELS__STRUCT_HPP_
#define SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_MOTOR_VELS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__serial_motor_msgs__msg__MecanumMotorVels __attribute__((deprecated))
#else
# define DEPRECATED__serial_motor_msgs__msg__MecanumMotorVels __declspec(deprecated)
#endif

namespace serial_motor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MecanumMotorVels_
{
  using Type = MecanumMotorVels_<ContainerAllocator>;

  explicit MecanumMotorVels_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fl_rad_sec = 0.0f;
      this->fr_rad_sec = 0.0f;
      this->bl_rad_sec = 0.0f;
      this->br_rad_sec = 0.0f;
    }
  }

  explicit MecanumMotorVels_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fl_rad_sec = 0.0f;
      this->fr_rad_sec = 0.0f;
      this->bl_rad_sec = 0.0f;
      this->br_rad_sec = 0.0f;
    }
  }

  // field types and members
  using _fl_rad_sec_type =
    float;
  _fl_rad_sec_type fl_rad_sec;
  using _fr_rad_sec_type =
    float;
  _fr_rad_sec_type fr_rad_sec;
  using _bl_rad_sec_type =
    float;
  _bl_rad_sec_type bl_rad_sec;
  using _br_rad_sec_type =
    float;
  _br_rad_sec_type br_rad_sec;

  // setters for named parameter idiom
  Type & set__fl_rad_sec(
    const float & _arg)
  {
    this->fl_rad_sec = _arg;
    return *this;
  }
  Type & set__fr_rad_sec(
    const float & _arg)
  {
    this->fr_rad_sec = _arg;
    return *this;
  }
  Type & set__bl_rad_sec(
    const float & _arg)
  {
    this->bl_rad_sec = _arg;
    return *this;
  }
  Type & set__br_rad_sec(
    const float & _arg)
  {
    this->br_rad_sec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    serial_motor_msgs::msg::MecanumMotorVels_<ContainerAllocator> *;
  using ConstRawPtr =
    const serial_motor_msgs::msg::MecanumMotorVels_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<serial_motor_msgs::msg::MecanumMotorVels_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<serial_motor_msgs::msg::MecanumMotorVels_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      serial_motor_msgs::msg::MecanumMotorVels_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<serial_motor_msgs::msg::MecanumMotorVels_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      serial_motor_msgs::msg::MecanumMotorVels_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<serial_motor_msgs::msg::MecanumMotorVels_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<serial_motor_msgs::msg::MecanumMotorVels_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<serial_motor_msgs::msg::MecanumMotorVels_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__serial_motor_msgs__msg__MecanumMotorVels
    std::shared_ptr<serial_motor_msgs::msg::MecanumMotorVels_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__serial_motor_msgs__msg__MecanumMotorVels
    std::shared_ptr<serial_motor_msgs::msg::MecanumMotorVels_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MecanumMotorVels_ & other) const
  {
    if (this->fl_rad_sec != other.fl_rad_sec) {
      return false;
    }
    if (this->fr_rad_sec != other.fr_rad_sec) {
      return false;
    }
    if (this->bl_rad_sec != other.bl_rad_sec) {
      return false;
    }
    if (this->br_rad_sec != other.br_rad_sec) {
      return false;
    }
    return true;
  }
  bool operator!=(const MecanumMotorVels_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MecanumMotorVels_

// alias to use template instance with default allocator
using MecanumMotorVels =
  serial_motor_msgs::msg::MecanumMotorVels_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace serial_motor_msgs

#endif  // SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_MOTOR_VELS__STRUCT_HPP_
