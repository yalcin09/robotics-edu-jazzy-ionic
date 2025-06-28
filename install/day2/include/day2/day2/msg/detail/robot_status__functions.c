// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from day2:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#include "day2/msg/detail/robot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_name`
// Member `sensor_names`
// Member `current_task`
// Member `error_message`
#include "rosidl_runtime_c/string_functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `sensor_status`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
day2__msg__RobotStatus__init(day2__msg__RobotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    day2__msg__RobotStatus__fini(msg);
    return false;
  }
  // robot_id
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    day2__msg__RobotStatus__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    day2__msg__RobotStatus__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Vector3__init(&msg->orientation)) {
    day2__msg__RobotStatus__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__init(&msg->velocity)) {
    day2__msg__RobotStatus__fini(msg);
    return false;
  }
  // status
  // battery_level
  // temperature
  // sensor_status
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->sensor_status, 0)) {
    day2__msg__RobotStatus__fini(msg);
    return false;
  }
  // sensor_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->sensor_names, 0)) {
    day2__msg__RobotStatus__fini(msg);
    return false;
  }
  // current_task
  if (!rosidl_runtime_c__String__init(&msg->current_task)) {
    day2__msg__RobotStatus__fini(msg);
    return false;
  }
  // task_progress
  // error_message
  if (!rosidl_runtime_c__String__init(&msg->error_message)) {
    day2__msg__RobotStatus__fini(msg);
    return false;
  }
  return true;
}

void
day2__msg__RobotStatus__fini(day2__msg__RobotStatus * msg)
{
  if (!msg) {
    return;
  }
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // robot_id
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // orientation
  geometry_msgs__msg__Vector3__fini(&msg->orientation);
  // velocity
  geometry_msgs__msg__Twist__fini(&msg->velocity);
  // status
  // battery_level
  // temperature
  // sensor_status
  rosidl_runtime_c__boolean__Sequence__fini(&msg->sensor_status);
  // sensor_names
  rosidl_runtime_c__String__Sequence__fini(&msg->sensor_names);
  // current_task
  rosidl_runtime_c__String__fini(&msg->current_task);
  // task_progress
  // error_message
  rosidl_runtime_c__String__fini(&msg->error_message);
}

bool
day2__msg__RobotStatus__are_equal(const day2__msg__RobotStatus * lhs, const day2__msg__RobotStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_name), &(rhs->robot_name)))
  {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // battery_level
  if (lhs->battery_level != rhs->battery_level) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // sensor_status
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->sensor_status), &(rhs->sensor_status)))
  {
    return false;
  }
  // sensor_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->sensor_names), &(rhs->sensor_names)))
  {
    return false;
  }
  // current_task
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_task), &(rhs->current_task)))
  {
    return false;
  }
  // task_progress
  if (lhs->task_progress != rhs->task_progress) {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_message), &(rhs->error_message)))
  {
    return false;
  }
  return true;
}

bool
day2__msg__RobotStatus__copy(
  const day2__msg__RobotStatus * input,
  day2__msg__RobotStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_name), &(output->robot_name)))
  {
    return false;
  }
  // robot_id
  output->robot_id = input->robot_id;
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // status
  output->status = input->status;
  // battery_level
  output->battery_level = input->battery_level;
  // temperature
  output->temperature = input->temperature;
  // sensor_status
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->sensor_status), &(output->sensor_status)))
  {
    return false;
  }
  // sensor_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->sensor_names), &(output->sensor_names)))
  {
    return false;
  }
  // current_task
  if (!rosidl_runtime_c__String__copy(
      &(input->current_task), &(output->current_task)))
  {
    return false;
  }
  // task_progress
  output->task_progress = input->task_progress;
  // error_message
  if (!rosidl_runtime_c__String__copy(
      &(input->error_message), &(output->error_message)))
  {
    return false;
  }
  return true;
}

day2__msg__RobotStatus *
day2__msg__RobotStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__msg__RobotStatus * msg = (day2__msg__RobotStatus *)allocator.allocate(sizeof(day2__msg__RobotStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__msg__RobotStatus));
  bool success = day2__msg__RobotStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__msg__RobotStatus__destroy(day2__msg__RobotStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__msg__RobotStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__msg__RobotStatus__Sequence__init(day2__msg__RobotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__msg__RobotStatus * data = NULL;

  if (size) {
    data = (day2__msg__RobotStatus *)allocator.zero_allocate(size, sizeof(day2__msg__RobotStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__msg__RobotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__msg__RobotStatus__fini(&data[i - 1]);
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
day2__msg__RobotStatus__Sequence__fini(day2__msg__RobotStatus__Sequence * array)
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
      day2__msg__RobotStatus__fini(&array->data[i]);
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

day2__msg__RobotStatus__Sequence *
day2__msg__RobotStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__msg__RobotStatus__Sequence * array = (day2__msg__RobotStatus__Sequence *)allocator.allocate(sizeof(day2__msg__RobotStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__msg__RobotStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__msg__RobotStatus__Sequence__destroy(day2__msg__RobotStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__msg__RobotStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__msg__RobotStatus__Sequence__are_equal(const day2__msg__RobotStatus__Sequence * lhs, const day2__msg__RobotStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__msg__RobotStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__msg__RobotStatus__Sequence__copy(
  const day2__msg__RobotStatus__Sequence * input,
  day2__msg__RobotStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__msg__RobotStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__msg__RobotStatus * data =
      (day2__msg__RobotStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__msg__RobotStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__msg__RobotStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__msg__RobotStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
