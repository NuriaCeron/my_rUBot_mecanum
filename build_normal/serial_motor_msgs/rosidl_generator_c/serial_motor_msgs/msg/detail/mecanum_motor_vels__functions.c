// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from serial_motor_msgs:msg/MecanumMotorVels.idl
// generated code does not contain a copyright notice
#include "serial_motor_msgs/msg/detail/mecanum_motor_vels__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
serial_motor_msgs__msg__MecanumMotorVels__init(serial_motor_msgs__msg__MecanumMotorVels * msg)
{
  if (!msg) {
    return false;
  }
  // fl_rad_sec
  // fr_rad_sec
  // bl_rad_sec
  // br_rad_sec
  return true;
}

void
serial_motor_msgs__msg__MecanumMotorVels__fini(serial_motor_msgs__msg__MecanumMotorVels * msg)
{
  if (!msg) {
    return;
  }
  // fl_rad_sec
  // fr_rad_sec
  // bl_rad_sec
  // br_rad_sec
}

bool
serial_motor_msgs__msg__MecanumMotorVels__are_equal(const serial_motor_msgs__msg__MecanumMotorVels * lhs, const serial_motor_msgs__msg__MecanumMotorVels * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fl_rad_sec
  if (lhs->fl_rad_sec != rhs->fl_rad_sec) {
    return false;
  }
  // fr_rad_sec
  if (lhs->fr_rad_sec != rhs->fr_rad_sec) {
    return false;
  }
  // bl_rad_sec
  if (lhs->bl_rad_sec != rhs->bl_rad_sec) {
    return false;
  }
  // br_rad_sec
  if (lhs->br_rad_sec != rhs->br_rad_sec) {
    return false;
  }
  return true;
}

bool
serial_motor_msgs__msg__MecanumMotorVels__copy(
  const serial_motor_msgs__msg__MecanumMotorVels * input,
  serial_motor_msgs__msg__MecanumMotorVels * output)
{
  if (!input || !output) {
    return false;
  }
  // fl_rad_sec
  output->fl_rad_sec = input->fl_rad_sec;
  // fr_rad_sec
  output->fr_rad_sec = input->fr_rad_sec;
  // bl_rad_sec
  output->bl_rad_sec = input->bl_rad_sec;
  // br_rad_sec
  output->br_rad_sec = input->br_rad_sec;
  return true;
}

serial_motor_msgs__msg__MecanumMotorVels *
serial_motor_msgs__msg__MecanumMotorVels__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serial_motor_msgs__msg__MecanumMotorVels * msg = (serial_motor_msgs__msg__MecanumMotorVels *)allocator.allocate(sizeof(serial_motor_msgs__msg__MecanumMotorVels), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(serial_motor_msgs__msg__MecanumMotorVels));
  bool success = serial_motor_msgs__msg__MecanumMotorVels__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
serial_motor_msgs__msg__MecanumMotorVels__destroy(serial_motor_msgs__msg__MecanumMotorVels * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    serial_motor_msgs__msg__MecanumMotorVels__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
serial_motor_msgs__msg__MecanumMotorVels__Sequence__init(serial_motor_msgs__msg__MecanumMotorVels__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serial_motor_msgs__msg__MecanumMotorVels * data = NULL;

  if (size) {
    data = (serial_motor_msgs__msg__MecanumMotorVels *)allocator.zero_allocate(size, sizeof(serial_motor_msgs__msg__MecanumMotorVels), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = serial_motor_msgs__msg__MecanumMotorVels__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        serial_motor_msgs__msg__MecanumMotorVels__fini(&data[i - 1]);
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
serial_motor_msgs__msg__MecanumMotorVels__Sequence__fini(serial_motor_msgs__msg__MecanumMotorVels__Sequence * array)
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
      serial_motor_msgs__msg__MecanumMotorVels__fini(&array->data[i]);
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

serial_motor_msgs__msg__MecanumMotorVels__Sequence *
serial_motor_msgs__msg__MecanumMotorVels__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serial_motor_msgs__msg__MecanumMotorVels__Sequence * array = (serial_motor_msgs__msg__MecanumMotorVels__Sequence *)allocator.allocate(sizeof(serial_motor_msgs__msg__MecanumMotorVels__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = serial_motor_msgs__msg__MecanumMotorVels__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
serial_motor_msgs__msg__MecanumMotorVels__Sequence__destroy(serial_motor_msgs__msg__MecanumMotorVels__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    serial_motor_msgs__msg__MecanumMotorVels__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
serial_motor_msgs__msg__MecanumMotorVels__Sequence__are_equal(const serial_motor_msgs__msg__MecanumMotorVels__Sequence * lhs, const serial_motor_msgs__msg__MecanumMotorVels__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!serial_motor_msgs__msg__MecanumMotorVels__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
serial_motor_msgs__msg__MecanumMotorVels__Sequence__copy(
  const serial_motor_msgs__msg__MecanumMotorVels__Sequence * input,
  serial_motor_msgs__msg__MecanumMotorVels__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(serial_motor_msgs__msg__MecanumMotorVels);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    serial_motor_msgs__msg__MecanumMotorVels * data =
      (serial_motor_msgs__msg__MecanumMotorVels *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!serial_motor_msgs__msg__MecanumMotorVels__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          serial_motor_msgs__msg__MecanumMotorVels__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!serial_motor_msgs__msg__MecanumMotorVels__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
