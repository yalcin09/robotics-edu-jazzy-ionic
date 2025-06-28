// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from day2:msg/MotorStatus.idl
// generated code does not contain a copyright notice
#include "day2/msg/detail/motor_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `motor_name`
#include "rosidl_runtime_c/string_functions.h"

bool
day2__msg__MotorStatus__init(day2__msg__MotorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    day2__msg__MotorStatus__fini(msg);
    return false;
  }
  // motor_name
  if (!rosidl_runtime_c__String__init(&msg->motor_name)) {
    day2__msg__MotorStatus__fini(msg);
    return false;
  }
  // motor_id
  // rpm
  // target_rpm
  // current
  // voltage
  // power
  // temperature
  // max_temperature
  // position
  // target_position
  // velocity
  // acceleration
  // status
  // error_flags
  // control_effort
  // pid_error
  // pid_output
  // total_revolutions
  // uptime_hours
  // start_count
  return true;
}

void
day2__msg__MotorStatus__fini(day2__msg__MotorStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // motor_name
  rosidl_runtime_c__String__fini(&msg->motor_name);
  // motor_id
  // rpm
  // target_rpm
  // current
  // voltage
  // power
  // temperature
  // max_temperature
  // position
  // target_position
  // velocity
  // acceleration
  // status
  // error_flags
  // control_effort
  // pid_error
  // pid_output
  // total_revolutions
  // uptime_hours
  // start_count
}

bool
day2__msg__MotorStatus__are_equal(const day2__msg__MotorStatus * lhs, const day2__msg__MotorStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // motor_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->motor_name), &(rhs->motor_name)))
  {
    return false;
  }
  // motor_id
  if (lhs->motor_id != rhs->motor_id) {
    return false;
  }
  // rpm
  if (lhs->rpm != rhs->rpm) {
    return false;
  }
  // target_rpm
  if (lhs->target_rpm != rhs->target_rpm) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // power
  if (lhs->power != rhs->power) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // max_temperature
  if (lhs->max_temperature != rhs->max_temperature) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // target_position
  if (lhs->target_position != rhs->target_position) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // acceleration
  if (lhs->acceleration != rhs->acceleration) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // error_flags
  if (lhs->error_flags != rhs->error_flags) {
    return false;
  }
  // control_effort
  if (lhs->control_effort != rhs->control_effort) {
    return false;
  }
  // pid_error
  if (lhs->pid_error != rhs->pid_error) {
    return false;
  }
  // pid_output
  if (lhs->pid_output != rhs->pid_output) {
    return false;
  }
  // total_revolutions
  if (lhs->total_revolutions != rhs->total_revolutions) {
    return false;
  }
  // uptime_hours
  if (lhs->uptime_hours != rhs->uptime_hours) {
    return false;
  }
  // start_count
  if (lhs->start_count != rhs->start_count) {
    return false;
  }
  return true;
}

bool
day2__msg__MotorStatus__copy(
  const day2__msg__MotorStatus * input,
  day2__msg__MotorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // motor_name
  if (!rosidl_runtime_c__String__copy(
      &(input->motor_name), &(output->motor_name)))
  {
    return false;
  }
  // motor_id
  output->motor_id = input->motor_id;
  // rpm
  output->rpm = input->rpm;
  // target_rpm
  output->target_rpm = input->target_rpm;
  // current
  output->current = input->current;
  // voltage
  output->voltage = input->voltage;
  // power
  output->power = input->power;
  // temperature
  output->temperature = input->temperature;
  // max_temperature
  output->max_temperature = input->max_temperature;
  // position
  output->position = input->position;
  // target_position
  output->target_position = input->target_position;
  // velocity
  output->velocity = input->velocity;
  // acceleration
  output->acceleration = input->acceleration;
  // status
  output->status = input->status;
  // error_flags
  output->error_flags = input->error_flags;
  // control_effort
  output->control_effort = input->control_effort;
  // pid_error
  output->pid_error = input->pid_error;
  // pid_output
  output->pid_output = input->pid_output;
  // total_revolutions
  output->total_revolutions = input->total_revolutions;
  // uptime_hours
  output->uptime_hours = input->uptime_hours;
  // start_count
  output->start_count = input->start_count;
  return true;
}

day2__msg__MotorStatus *
day2__msg__MotorStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__msg__MotorStatus * msg = (day2__msg__MotorStatus *)allocator.allocate(sizeof(day2__msg__MotorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__msg__MotorStatus));
  bool success = day2__msg__MotorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__msg__MotorStatus__destroy(day2__msg__MotorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__msg__MotorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__msg__MotorStatus__Sequence__init(day2__msg__MotorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__msg__MotorStatus * data = NULL;

  if (size) {
    data = (day2__msg__MotorStatus *)allocator.zero_allocate(size, sizeof(day2__msg__MotorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__msg__MotorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__msg__MotorStatus__fini(&data[i - 1]);
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
day2__msg__MotorStatus__Sequence__fini(day2__msg__MotorStatus__Sequence * array)
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
      day2__msg__MotorStatus__fini(&array->data[i]);
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

day2__msg__MotorStatus__Sequence *
day2__msg__MotorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__msg__MotorStatus__Sequence * array = (day2__msg__MotorStatus__Sequence *)allocator.allocate(sizeof(day2__msg__MotorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__msg__MotorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__msg__MotorStatus__Sequence__destroy(day2__msg__MotorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__msg__MotorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__msg__MotorStatus__Sequence__are_equal(const day2__msg__MotorStatus__Sequence * lhs, const day2__msg__MotorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__msg__MotorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__msg__MotorStatus__Sequence__copy(
  const day2__msg__MotorStatus__Sequence * input,
  day2__msg__MotorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__msg__MotorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__msg__MotorStatus * data =
      (day2__msg__MotorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__msg__MotorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__msg__MotorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__msg__MotorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
