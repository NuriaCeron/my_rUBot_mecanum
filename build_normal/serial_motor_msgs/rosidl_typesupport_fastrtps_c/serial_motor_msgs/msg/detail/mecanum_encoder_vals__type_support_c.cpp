// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from serial_motor_msgs:msg/MecanumEncoderVals.idl
// generated code does not contain a copyright notice
#include "serial_motor_msgs/msg/detail/mecanum_encoder_vals__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "serial_motor_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "serial_motor_msgs/msg/detail/mecanum_encoder_vals__struct.h"
#include "serial_motor_msgs/msg/detail/mecanum_encoder_vals__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MecanumEncoderVals__ros_msg_type = serial_motor_msgs__msg__MecanumEncoderVals;

static bool _MecanumEncoderVals__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MecanumEncoderVals__ros_msg_type * ros_message = static_cast<const _MecanumEncoderVals__ros_msg_type *>(untyped_ros_message);
  // Field name: fl_enc_val
  {
    cdr << ros_message->fl_enc_val;
  }

  // Field name: fr_enc_val
  {
    cdr << ros_message->fr_enc_val;
  }

  // Field name: bl_enc_val
  {
    cdr << ros_message->bl_enc_val;
  }

  // Field name: br_enc_val
  {
    cdr << ros_message->br_enc_val;
  }

  return true;
}

static bool _MecanumEncoderVals__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MecanumEncoderVals__ros_msg_type * ros_message = static_cast<_MecanumEncoderVals__ros_msg_type *>(untyped_ros_message);
  // Field name: fl_enc_val
  {
    cdr >> ros_message->fl_enc_val;
  }

  // Field name: fr_enc_val
  {
    cdr >> ros_message->fr_enc_val;
  }

  // Field name: bl_enc_val
  {
    cdr >> ros_message->bl_enc_val;
  }

  // Field name: br_enc_val
  {
    cdr >> ros_message->br_enc_val;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_serial_motor_msgs
size_t get_serialized_size_serial_motor_msgs__msg__MecanumEncoderVals(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MecanumEncoderVals__ros_msg_type * ros_message = static_cast<const _MecanumEncoderVals__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name fl_enc_val
  {
    size_t item_size = sizeof(ros_message->fl_enc_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fr_enc_val
  {
    size_t item_size = sizeof(ros_message->fr_enc_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bl_enc_val
  {
    size_t item_size = sizeof(ros_message->bl_enc_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name br_enc_val
  {
    size_t item_size = sizeof(ros_message->br_enc_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MecanumEncoderVals__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_serial_motor_msgs__msg__MecanumEncoderVals(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_serial_motor_msgs
size_t max_serialized_size_serial_motor_msgs__msg__MecanumEncoderVals(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: fl_enc_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fr_enc_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bl_enc_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: br_enc_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = serial_motor_msgs__msg__MecanumEncoderVals;
    is_plain =
      (
      offsetof(DataType, br_enc_val) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MecanumEncoderVals__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_serial_motor_msgs__msg__MecanumEncoderVals(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MecanumEncoderVals = {
  "serial_motor_msgs::msg",
  "MecanumEncoderVals",
  _MecanumEncoderVals__cdr_serialize,
  _MecanumEncoderVals__cdr_deserialize,
  _MecanumEncoderVals__get_serialized_size,
  _MecanumEncoderVals__max_serialized_size
};

static rosidl_message_type_support_t _MecanumEncoderVals__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MecanumEncoderVals,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, serial_motor_msgs, msg, MecanumEncoderVals)() {
  return &_MecanumEncoderVals__type_support;
}

#if defined(__cplusplus)
}
#endif
