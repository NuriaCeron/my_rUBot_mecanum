// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from serial_motor_msgs:msg/MecanumEncoderVals.idl
// generated code does not contain a copyright notice

#ifndef SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_ENCODER_VALS__TRAITS_HPP_
#define SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_ENCODER_VALS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "serial_motor_msgs/msg/detail/mecanum_encoder_vals__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace serial_motor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MecanumEncoderVals & msg,
  std::ostream & out)
{
  out << "{";
  // member: fl_enc_val
  {
    out << "fl_enc_val: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_enc_val, out);
    out << ", ";
  }

  // member: fr_enc_val
  {
    out << "fr_enc_val: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_enc_val, out);
    out << ", ";
  }

  // member: bl_enc_val
  {
    out << "bl_enc_val: ";
    rosidl_generator_traits::value_to_yaml(msg.bl_enc_val, out);
    out << ", ";
  }

  // member: br_enc_val
  {
    out << "br_enc_val: ";
    rosidl_generator_traits::value_to_yaml(msg.br_enc_val, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MecanumEncoderVals & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fl_enc_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_enc_val: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_enc_val, out);
    out << "\n";
  }

  // member: fr_enc_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_enc_val: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_enc_val, out);
    out << "\n";
  }

  // member: bl_enc_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bl_enc_val: ";
    rosidl_generator_traits::value_to_yaml(msg.bl_enc_val, out);
    out << "\n";
  }

  // member: br_enc_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "br_enc_val: ";
    rosidl_generator_traits::value_to_yaml(msg.br_enc_val, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MecanumEncoderVals & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace serial_motor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use serial_motor_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const serial_motor_msgs::msg::MecanumEncoderVals & msg,
  std::ostream & out, size_t indentation = 0)
{
  serial_motor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use serial_motor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const serial_motor_msgs::msg::MecanumEncoderVals & msg)
{
  return serial_motor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<serial_motor_msgs::msg::MecanumEncoderVals>()
{
  return "serial_motor_msgs::msg::MecanumEncoderVals";
}

template<>
inline const char * name<serial_motor_msgs::msg::MecanumEncoderVals>()
{
  return "serial_motor_msgs/msg/MecanumEncoderVals";
}

template<>
struct has_fixed_size<serial_motor_msgs::msg::MecanumEncoderVals>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<serial_motor_msgs::msg::MecanumEncoderVals>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<serial_motor_msgs::msg::MecanumEncoderVals>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_ENCODER_VALS__TRAITS_HPP_
