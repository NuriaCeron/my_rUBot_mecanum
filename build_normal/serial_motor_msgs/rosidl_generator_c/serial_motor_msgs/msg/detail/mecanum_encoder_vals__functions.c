// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from serial_motor_msgs:msg/MecanumEncoderVals.idl
// generated code does not contain a copyright notice
#include "serial_motor_msgs/msg/detail/mecanum_encoder_vals__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
serial_motor_msgs__msg__MecanumEncoderVals__init(serial_motor_msgs__msg__MecanumEncoderVals * msg)
{
  if (!msg) {
    return false;
  }
  // fl_enc_val
  // fr_enc_val
  // bl_enc_val
  // br_enc_val
  return true;
}

void
serial_motor_msgs__msg__MecanumEncoderVals__fini(serial_motor_msgs__msg__MecanumEncoderVals * msg)
{
  if (!msg) {
    return;
  }
  // fl_enc_val
  // fr_enc_val
  // bl_enc_val
  // br_enc_val
}

bool
serial_motor_msgs__msg__MecanumEncoderVals__are_equal(const serial_motor_msgs__msg__MecanumEncoderVals * lhs, const serial_motor_msgs__msg__MecanumEncoderVals * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fl_enc_val
  if (lhs->fl_enc_val != rhs->fl_enc_val) {
    return false;
  }
  // fr_enc_val
  if (lhs->fr_enc_val != rhs->fr_enc_val) {
    return false;
  }
  // bl_enc_val
  if (lhs->bl_enc_val != rhs->bl_enc_val) {
    return false;
  }
  // br_enc_val
  if (lhs->br_enc_val != rhs->br_enc_val) {
    return false;
  }
  return true;
}

bool
serial_motor_msgs__msg__MecanumEncoderVals__copy(
  const serial_motor_msgs__msg__MecanumEncoderVals * input,
  serial_motor_msgs__msg__MecanumEncoderVals * output)
{
  if (!input || !output) {
    return false;
  }
  // fl_enc_val
  output->fl_enc_val = input->fl_enc_val;
  // fr_enc_val
  output->fr_enc_val = input->fr_enc_val;
  // bl_enc_val
  output->bl_enc_val = input->bl_enc_val;
  // br_enc_val
  output->br_enc_val = input->br_enc_val;
  return true;
}

serial_motor_msgs__msg__MecanumEncoderVals *
serial_motor_msgs__msg__MecanumEncoderVals__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serial_motor_msgs__msg__MecanumEncoderVals * msg = (serial_motor_msgs__msg__MecanumEncoderVals *)allocator.allocate(sizeof(serial_motor_msgs__msg__MecanumEncoderVals), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(serial_motor_msgs__msg__MecanumEncoderVals));
  bool success = serial_motor_msgs__msg__MecanumEncoderVals__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
serial_motor_msgs__msg__MecanumEncoderVals__destroy(serial_motor_msgs__msg__MecanumEncoderVals * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    serial_motor_msgs__msg__MecanumEncoderVals__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
serial_motor_msgs__msg__MecanumEncoderVals__Sequence__init(serial_motor_msgs__msg__MecanumEncoderVals__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serial_motor_msgs__msg__MecanumEncoderVals * data = NULL;

  if (size) {
    data = (serial_motor_msgs__msg__MecanumEncoderVals *)allocator.zero_allocate(size, sizeof(serial_motor_msgs__msg__MecanumEncoderVals), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = serial_motor_msgs__msg__MecanumEncoderVals__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        serial_motor_msgs__msg__MecanumEncoderVals__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
serial_motor_msgs__msg__MecanumEncoderVals__Sequence__fini(serial_motor_msgs__msg__MecanumEncoderVals__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      serial_motor_msgs__msg__MecanumEncoderVals__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

serial_motor_msgs__msg__MecanumEncoderVals__Sequence *
serial_motor_msgs__msg__MecanumEncoderVals__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serial_motor_msgs__msg__MecanumEncoderVals__Sequence * array = (serial_motor_msgs__msg__MecanumEncoderVals__Sequence *)allocator.allocate(sizeof(serial_motor_msgs__msg__MecanumEncoderVals__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = serial_motor_msgs__msg__MecanumEncoderVals__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
serial_motor_msgs__msg__MecanumEncoderVals__Sequence__destroy(serial_motor_msgs__msg__MecanumEncoderVals__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    serial_motor_msgs__msg__MecanumEncoderVals__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
serial_motor_msgs__msg__MecanumEncoderVals__Sequence__are_equal(const serial_motor_msgs__msg__MecanumEncoderVals__Sequence * lhs, const serial_motor_msgs__msg__MecanumEncoderVals__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!serial_motor_msgs__msg__MecanumEncoderVals__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
serial_motor_msgs__msg__MecanumEncoderVals__Sequence__copy(
  const serial_motor_msgs__msg__MecanumEncoderVals__Sequence * input,
  serial_motor_msgs__msg__MecanumEncoderVals__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(serial_motor_msgs__msg__MecanumEncoderVals);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    serial_motor_msgs__msg__MecanumEncoderVals * data =
      (serial_motor_msgs__msg__MecanumEncoderVals *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!serial_motor_msgs__msg__MecanumEncoderVals__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          serial_motor_msgs__msg__MecanumEncoderVals__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!serial_motor_msgs__msg__MecanumEncoderVals__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
