// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from serial_motor_msgs:msg/MecanumEncoderVals.idl
// generated code does not contain a copyright notice

#ifndef SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_ENCODER_VALS__BUILDER_HPP_
#define SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_ENCODER_VALS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "serial_motor_msgs/msg/detail/mecanum_encoder_vals__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace serial_motor_msgs
{

namespace msg
{

namespace builder
{

class Init_MecanumEncoderVals_br_enc_val
{
public:
  explicit Init_MecanumEncoderVals_br_enc_val(::serial_motor_msgs::msg::MecanumEncoderVals & msg)
  : msg_(msg)
  {}
  ::serial_motor_msgs::msg::MecanumEncoderVals br_enc_val(::serial_motor_msgs::msg::MecanumEncoderVals::_br_enc_val_type arg)
  {
    msg_.br_enc_val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serial_motor_msgs::msg::MecanumEncoderVals msg_;
};

class Init_MecanumEncoderVals_bl_enc_val
{
public:
  explicit Init_MecanumEncoderVals_bl_enc_val(::serial_motor_msgs::msg::MecanumEncoderVals & msg)
  : msg_(msg)
  {}
  Init_MecanumEncoderVals_br_enc_val bl_enc_val(::serial_motor_msgs::msg::MecanumEncoderVals::_bl_enc_val_type arg)
  {
    msg_.bl_enc_val = std::move(arg);
    return Init_MecanumEncoderVals_br_enc_val(msg_);
  }

private:
  ::serial_motor_msgs::msg::MecanumEncoderVals msg_;
};

class Init_MecanumEncoderVals_fr_enc_val
{
public:
  explicit Init_MecanumEncoderVals_fr_enc_val(::serial_motor_msgs::msg::MecanumEncoderVals & msg)
  : msg_(msg)
  {}
  Init_MecanumEncoderVals_bl_enc_val fr_enc_val(::serial_motor_msgs::msg::MecanumEncoderVals::_fr_enc_val_type arg)
  {
    msg_.fr_enc_val = std::move(arg);
    return Init_MecanumEncoderVals_bl_enc_val(msg_);
  }

private:
  ::serial_motor_msgs::msg::MecanumEncoderVals msg_;
};

class Init_MecanumEncoderVals_fl_enc_val
{
public:
  Init_MecanumEncoderVals_fl_enc_val()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MecanumEncoderVals_fr_enc_val fl_enc_val(::serial_motor_msgs::msg::MecanumEncoderVals::_fl_enc_val_type arg)
  {
    msg_.fl_enc_val = std::move(arg);
    return Init_MecanumEncoderVals_fr_enc_val(msg_);
  }

private:
  ::serial_motor_msgs::msg::MecanumEncoderVals msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::serial_motor_msgs::msg::MecanumEncoderVals>()
{
  return serial_motor_msgs::msg::builder::Init_MecanumEncoderVals_fl_enc_val();
}

}  // namespace serial_motor_msgs

#endif  // SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_ENCODER_VALS__BUILDER_HPP_
