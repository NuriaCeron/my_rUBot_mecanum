// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/InferenceData.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__INFERENCE_DATA__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__INFERENCE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/inference_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_InferenceData_depth
{
public:
  explicit Init_InferenceData_depth(::custom_msgs::msg::InferenceData & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::InferenceData depth(::custom_msgs::msg::InferenceData::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::InferenceData msg_;
};

class Init_InferenceData_class_name
{
public:
  Init_InferenceData_class_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InferenceData_depth class_name(::custom_msgs::msg::InferenceData::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_InferenceData_depth(msg_);
  }

private:
  ::custom_msgs::msg::InferenceData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::InferenceData>()
{
  return custom_msgs::msg::builder::Init_InferenceData_class_name();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__INFERENCE_DATA__BUILDER_HPP_
