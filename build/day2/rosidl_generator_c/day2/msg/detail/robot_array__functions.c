// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from day2:msg/RobotArray.idl
// generated code does not contain a copyright notice
#include "day2/msg/detail/robot_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `fleet_name`
// Member `coordinator_node`
// Member `workspace_name`
// Member `emergency_reason`
// Member `critical_warnings`
// Member `system_messages`
#include "rosidl_runtime_c/string_functions.h"
// Member `robots`
#include "day2/msg/detail/robot_status__functions.h"
// Member `workspace_min`
// Member `workspace_max`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `emergency_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
day2__msg__RobotArray__init(day2__msg__RobotArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    day2__msg__RobotArray__fini(msg);
    return false;
  }
  // fleet_name
  if (!rosidl_runtime_c__String__init(&msg->fleet_name)) {
    day2__msg__RobotArray__fini(msg);
    return false;
  }
  // fleet_id
  // coordinator_node
  if (!rosidl_runtime_c__String__init(&msg->coordinator_node)) {
    day2__msg__RobotArray__fini(msg);
    return false;
  }
  // robots
  if (!day2__msg__RobotStatus__Sequence__init(&msg->robots, 0)) {
    day2__msg__RobotArray__fini(msg);
    return false;
  }
  // total_robots
  // active_robots
  // idle_robots
  // charging_robots
  // error_robots
  // fleet_status
  // average_battery_level
  // total_distance_traveled
  // average_speed
  // completed_tasks
  // pending_tasks
  // workspace_min
  if (!geometry_msgs__msg__Point__init(&msg->workspace_min)) {
    day2__msg__RobotArray__fini(msg);
    return false;
  }
  // workspace_max
  if (!geometry_msgs__msg__Point__init(&msg->workspace_max)) {
    day2__msg__RobotArray__fini(msg);
    return false;
  }
  // workspace_name
  if (!rosidl_runtime_c__String__init(&msg->workspace_name)) {
    day2__msg__RobotArray__fini(msg);
    return false;
  }
  // emergency_stop
  // emergency_reason
  if (!rosidl_runtime_c__String__init(&msg->emergency_reason)) {
    day2__msg__RobotArray__fini(msg);
    return false;
  }
  // emergency_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->emergency_timestamp)) {
    day2__msg__RobotArray__fini(msg);
    return false;
  }
  // system_health_score
  // critical_warnings
  if (!rosidl_runtime_c__String__Sequence__init(&msg->critical_warnings, 0)) {
    day2__msg__RobotArray__fini(msg);
    return false;
  }
  // system_messages
  if (!rosidl_runtime_c__String__Sequence__init(&msg->system_messages, 0)) {
    day2__msg__RobotArray__fini(msg);
    return false;
  }
  // update_frequency_hz
  return true;
}

void
day2__msg__RobotArray__fini(day2__msg__RobotArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // fleet_name
  rosidl_runtime_c__String__fini(&msg->fleet_name);
  // fleet_id
  // coordinator_node
  rosidl_runtime_c__String__fini(&msg->coordinator_node);
  // robots
  day2__msg__RobotStatus__Sequence__fini(&msg->robots);
  // total_robots
  // active_robots
  // idle_robots
  // charging_robots
  // error_robots
  // fleet_status
  // average_battery_level
  // total_distance_traveled
  // average_speed
  // completed_tasks
  // pending_tasks
  // workspace_min
  geometry_msgs__msg__Point__fini(&msg->workspace_min);
  // workspace_max
  geometry_msgs__msg__Point__fini(&msg->workspace_max);
  // workspace_name
  rosidl_runtime_c__String__fini(&msg->workspace_name);
  // emergency_stop
  // emergency_reason
  rosidl_runtime_c__String__fini(&msg->emergency_reason);
  // emergency_timestamp
  builtin_interfaces__msg__Time__fini(&msg->emergency_timestamp);
  // system_health_score
  // critical_warnings
  rosidl_runtime_c__String__Sequence__fini(&msg->critical_warnings);
  // system_messages
  rosidl_runtime_c__String__Sequence__fini(&msg->system_messages);
  // update_frequency_hz
}

bool
day2__msg__RobotArray__are_equal(const day2__msg__RobotArray * lhs, const day2__msg__RobotArray * rhs)
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
  // fleet_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fleet_name), &(rhs->fleet_name)))
  {
    return false;
  }
  // fleet_id
  if (lhs->fleet_id != rhs->fleet_id) {
    return false;
  }
  // coordinator_node
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->coordinator_node), &(rhs->coordinator_node)))
  {
    return false;
  }
  // robots
  if (!day2__msg__RobotStatus__Sequence__are_equal(
      &(lhs->robots), &(rhs->robots)))
  {
    return false;
  }
  // total_robots
  if (lhs->total_robots != rhs->total_robots) {
    return false;
  }
  // active_robots
  if (lhs->active_robots != rhs->active_robots) {
    return false;
  }
  // idle_robots
  if (lhs->idle_robots != rhs->idle_robots) {
    return false;
  }
  // charging_robots
  if (lhs->charging_robots != rhs->charging_robots) {
    return false;
  }
  // error_robots
  if (lhs->error_robots != rhs->error_robots) {
    return false;
  }
  // fleet_status
  if (lhs->fleet_status != rhs->fleet_status) {
    return false;
  }
  // average_battery_level
  if (lhs->average_battery_level != rhs->average_battery_level) {
    return false;
  }
  // total_distance_traveled
  if (lhs->total_distance_traveled != rhs->total_distance_traveled) {
    return false;
  }
  // average_speed
  if (lhs->average_speed != rhs->average_speed) {
    return false;
  }
  // completed_tasks
  if (lhs->completed_tasks != rhs->completed_tasks) {
    return false;
  }
  // pending_tasks
  if (lhs->pending_tasks != rhs->pending_tasks) {
    return false;
  }
  // workspace_min
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->workspace_min), &(rhs->workspace_min)))
  {
    return false;
  }
  // workspace_max
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->workspace_max), &(rhs->workspace_max)))
  {
    return false;
  }
  // workspace_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->workspace_name), &(rhs->workspace_name)))
  {
    return false;
  }
  // emergency_stop
  if (lhs->emergency_stop != rhs->emergency_stop) {
    return false;
  }
  // emergency_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->emergency_reason), &(rhs->emergency_reason)))
  {
    return false;
  }
  // emergency_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->emergency_timestamp), &(rhs->emergency_timestamp)))
  {
    return false;
  }
  // system_health_score
  if (lhs->system_health_score != rhs->system_health_score) {
    return false;
  }
  // critical_warnings
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->critical_warnings), &(rhs->critical_warnings)))
  {
    return false;
  }
  // system_messages
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->system_messages), &(rhs->system_messages)))
  {
    return false;
  }
  // update_frequency_hz
  if (lhs->update_frequency_hz != rhs->update_frequency_hz) {
    return false;
  }
  return true;
}

bool
day2__msg__RobotArray__copy(
  const day2__msg__RobotArray * input,
  day2__msg__RobotArray * output)
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
  // fleet_name
  if (!rosidl_runtime_c__String__copy(
      &(input->fleet_name), &(output->fleet_name)))
  {
    return false;
  }
  // fleet_id
  output->fleet_id = input->fleet_id;
  // coordinator_node
  if (!rosidl_runtime_c__String__copy(
      &(input->coordinator_node), &(output->coordinator_node)))
  {
    return false;
  }
  // robots
  if (!day2__msg__RobotStatus__Sequence__copy(
      &(input->robots), &(output->robots)))
  {
    return false;
  }
  // total_robots
  output->total_robots = input->total_robots;
  // active_robots
  output->active_robots = input->active_robots;
  // idle_robots
  output->idle_robots = input->idle_robots;
  // charging_robots
  output->charging_robots = input->charging_robots;
  // error_robots
  output->error_robots = input->error_robots;
  // fleet_status
  output->fleet_status = input->fleet_status;
  // average_battery_level
  output->average_battery_level = input->average_battery_level;
  // total_distance_traveled
  output->total_distance_traveled = input->total_distance_traveled;
  // average_speed
  output->average_speed = input->average_speed;
  // completed_tasks
  output->completed_tasks = input->completed_tasks;
  // pending_tasks
  output->pending_tasks = input->pending_tasks;
  // workspace_min
  if (!geometry_msgs__msg__Point__copy(
      &(input->workspace_min), &(output->workspace_min)))
  {
    return false;
  }
  // workspace_max
  if (!geometry_msgs__msg__Point__copy(
      &(input->workspace_max), &(output->workspace_max)))
  {
    return false;
  }
  // workspace_name
  if (!rosidl_runtime_c__String__copy(
      &(input->workspace_name), &(output->workspace_name)))
  {
    return false;
  }
  // emergency_stop
  output->emergency_stop = input->emergency_stop;
  // emergency_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->emergency_reason), &(output->emergency_reason)))
  {
    return false;
  }
  // emergency_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->emergency_timestamp), &(output->emergency_timestamp)))
  {
    return false;
  }
  // system_health_score
  output->system_health_score = input->system_health_score;
  // critical_warnings
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->critical_warnings), &(output->critical_warnings)))
  {
    return false;
  }
  // system_messages
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->system_messages), &(output->system_messages)))
  {
    return false;
  }
  // update_frequency_hz
  output->update_frequency_hz = input->update_frequency_hz;
  return true;
}

day2__msg__RobotArray *
day2__msg__RobotArray__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__msg__RobotArray * msg = (day2__msg__RobotArray *)allocator.allocate(sizeof(day2__msg__RobotArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__msg__RobotArray));
  bool success = day2__msg__RobotArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__msg__RobotArray__destroy(day2__msg__RobotArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__msg__RobotArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__msg__RobotArray__Sequence__init(day2__msg__RobotArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__msg__RobotArray * data = NULL;

  if (size) {
    data = (day2__msg__RobotArray *)allocator.zero_allocate(size, sizeof(day2__msg__RobotArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__msg__RobotArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__msg__RobotArray__fini(&data[i - 1]);
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
day2__msg__RobotArray__Sequence__fini(day2__msg__RobotArray__Sequence * array)
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
      day2__msg__RobotArray__fini(&array->data[i]);
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

day2__msg__RobotArray__Sequence *
day2__msg__RobotArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__msg__RobotArray__Sequence * array = (day2__msg__RobotArray__Sequence *)allocator.allocate(sizeof(day2__msg__RobotArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__msg__RobotArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__msg__RobotArray__Sequence__destroy(day2__msg__RobotArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__msg__RobotArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__msg__RobotArray__Sequence__are_equal(const day2__msg__RobotArray__Sequence * lhs, const day2__msg__RobotArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__msg__RobotArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__msg__RobotArray__Sequence__copy(
  const day2__msg__RobotArray__Sequence * input,
  day2__msg__RobotArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__msg__RobotArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__msg__RobotArray * data =
      (day2__msg__RobotArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__msg__RobotArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__msg__RobotArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__msg__RobotArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
