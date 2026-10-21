// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from serial_motor_msgs:msg/MecanumEncoderVals.idl
// generated code does not contain a copyright notice

#ifndef SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_ENCODER_VALS__STRUCT_HPP_
#define SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_ENCODER_VALS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__serial_motor_msgs__msg__MecanumEncoderVals __attribute__((deprecated))
#else
# define DEPRECATED__serial_motor_msgs__msg__MecanumEncoderVals __declspec(deprecated)
#endif

namespace serial_motor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MecanumEncoderVals_
{
  using Type = MecanumEncoderVals_<ContainerAllocator>;

  explicit MecanumEncoderVals_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fl_enc_val = 0l;
      this->fr_enc_val = 0l;
      this->bl_enc_val = 0l;
      this->br_enc_val = 0l;
    }
  }

  explicit MecanumEncoderVals_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fl_enc_val = 0l;
      this->fr_enc_val = 0l;
      this->bl_enc_val = 0l;
      this->br_enc_val = 0l;
    }
  }

  // field types and members
  using _fl_enc_val_type =
    int32_t;
  _fl_enc_val_type fl_enc_val;
  using _fr_enc_val_type =
    int32_t;
  _fr_enc_val_type fr_enc_val;
  using _bl_enc_val_type =
    int32_t;
  _bl_enc_val_type bl_enc_val;
  using _br_enc_val_type =
    int32_t;
  _br_enc_val_type br_enc_val;

  // setters for named parameter idiom
  Type & set__fl_enc_val(
    const int32_t & _arg)
  {
    this->fl_enc_val = _arg;
    return *this;
  }
  Type & set__fr_enc_val(
    const int32_t & _arg)
  {
    this->fr_enc_val = _arg;
    return *this;
  }
  Type & set__bl_enc_val(
    const int32_t & _arg)
  {
    this->bl_enc_val = _arg;
    return *this;
  }
  Type & set__br_enc_val(
    const int32_t & _arg)
  {
    this->br_enc_val = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    serial_motor_msgs::msg::MecanumEncoderVals_<ContainerAllocator> *;
  using ConstRawPtr =
    const serial_motor_msgs::msg::MecanumEncoderVals_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<serial_motor_msgs::msg::MecanumEncoderVals_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<serial_motor_msgs::msg::MecanumEncoderVals_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      serial_motor_msgs::msg::MecanumEncoderVals_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<serial_motor_msgs::msg::MecanumEncoderVals_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      serial_motor_msgs::msg::MecanumEncoderVals_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<serial_motor_msgs::msg::MecanumEncoderVals_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<serial_motor_msgs::msg::MecanumEncoderVals_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<serial_motor_msgs::msg::MecanumEncoderVals_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__serial_motor_msgs__msg__MecanumEncoderVals
    std::shared_ptr<serial_motor_msgs::msg::MecanumEncoderVals_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__serial_motor_msgs__msg__MecanumEncoderVals
    std::shared_ptr<serial_motor_msgs::msg::MecanumEncoderVals_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MecanumEncoderVals_ & other) const
  {
    if (this->fl_enc_val != other.fl_enc_val) {
      return false;
    }
    if (this->fr_enc_val != other.fr_enc_val) {
      return false;
    }
    if (this->bl_enc_val != other.bl_enc_val) {
      return false;
    }
    if (this->br_enc_val != other.br_enc_val) {
      return false;
    }
    return true;
  }
  bool operator!=(const MecanumEncoderVals_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MecanumEncoderVals_

// alias to use template instance with default allocator
using MecanumEncoderVals =
  serial_motor_msgs::msg::MecanumEncoderVals_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace serial_motor_msgs

#endif  // SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_ENCODER_VALS__STRUCT_HPP_
