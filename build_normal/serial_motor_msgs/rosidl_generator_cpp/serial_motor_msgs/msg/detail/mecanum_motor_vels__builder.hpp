// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from serial_motor_msgs:msg/MecanumMotorVels.idl
// generated code does not contain a copyright notice

#ifndef SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_MOTOR_VELS__BUILDER_HPP_
#define SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_MOTOR_VELS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "serial_motor_msgs/msg/detail/mecanum_motor_vels__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace serial_motor_msgs
{

namespace msg
{

namespace builder
{

class Init_MecanumMotorVels_br_rad_sec
{
public:
  explicit Init_MecanumMotorVels_br_rad_sec(::serial_motor_msgs::msg::MecanumMotorVels & msg)
  : msg_(msg)
  {}
  ::serial_motor_msgs::msg::MecanumMotorVels br_rad_sec(::serial_motor_msgs::msg::MecanumMotorVels::_br_rad_sec_type arg)
  {
    msg_.br_rad_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serial_motor_msgs::msg::MecanumMotorVels msg_;
};

class Init_MecanumMotorVels_bl_rad_sec
{
public:
  explicit Init_MecanumMotorVels_bl_rad_sec(::serial_motor_msgs::msg::MecanumMotorVels & msg)
  : msg_(msg)
  {}
  Init_MecanumMotorVels_br_rad_sec bl_rad_sec(::serial_motor_msgs::msg::MecanumMotorVels::_bl_rad_sec_type arg)
  {
    msg_.bl_rad_sec = std::move(arg);
    return Init_MecanumMotorVels_br_rad_sec(msg_);
  }

private:
  ::serial_motor_msgs::msg::MecanumMotorVels msg_;
};

class Init_MecanumMotorVels_fr_rad_sec
{
public:
  explicit Init_MecanumMotorVels_fr_rad_sec(::serial_motor_msgs::msg::MecanumMotorVels & msg)
  : msg_(msg)
  {}
  Init_MecanumMotorVels_bl_rad_sec fr_rad_sec(::serial_motor_msgs::msg::MecanumMotorVels::_fr_rad_sec_type arg)
  {
    msg_.fr_rad_sec = std::move(arg);
    return Init_MecanumMotorVels_bl_rad_sec(msg_);
  }

private:
  ::serial_motor_msgs::msg::MecanumMotorVels msg_;
};

class Init_MecanumMotorVels_fl_rad_sec
{
public:
  Init_MecanumMotorVels_fl_rad_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MecanumMotorVels_fr_rad_sec fl_rad_sec(::serial_motor_msgs::msg::MecanumMotorVels::_fl_rad_sec_type arg)
  {
    msg_.fl_rad_sec = std::move(arg);
    return Init_MecanumMotorVels_fr_rad_sec(msg_);
  }

private:
  ::serial_motor_msgs::msg::MecanumMotorVels msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::serial_motor_msgs::msg::MecanumMotorVels>()
{
  return serial_motor_msgs::msg::builder::Init_MecanumMotorVels_fl_rad_sec();
}

}  // namespace serial_motor_msgs

#endif  // SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_MOTOR_VELS__BUILDER_HPP_
