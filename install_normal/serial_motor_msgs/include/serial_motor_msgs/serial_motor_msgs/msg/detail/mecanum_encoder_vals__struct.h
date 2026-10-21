// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from serial_motor_msgs:msg/MecanumEncoderVals.idl
// generated code does not contain a copyright notice

#ifndef SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_ENCODER_VALS__STRUCT_H_
#define SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_ENCODER_VALS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MecanumEncoderVals in the package serial_motor_msgs.
typedef struct serial_motor_msgs__msg__MecanumEncoderVals
{
  int32_t fl_enc_val;
  int32_t fr_enc_val;
  int32_t bl_enc_val;
  int32_t br_enc_val;
} serial_motor_msgs__msg__MecanumEncoderVals;

// Struct for a sequence of serial_motor_msgs__msg__MecanumEncoderVals.
typedef struct serial_motor_msgs__msg__MecanumEncoderVals__Sequence
{
  serial_motor_msgs__msg__MecanumEncoderVals * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serial_motor_msgs__msg__MecanumEncoderVals__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERIAL_MOTOR_MSGS__MSG__DETAIL__MECANUM_ENCODER_VALS__STRUCT_H_
