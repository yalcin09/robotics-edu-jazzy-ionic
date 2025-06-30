// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from day2:action/Navigate.idl
// generated code does not contain a copyright notice
#include "day2/action/detail/navigate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `planning_algorithm`
// Member `behavior_on_failure`
#include "rosidl_runtime_c/string_functions.h"
// Member `waypoints`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
day2__action__Navigate_Goal__init(day2__action__Navigate_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->target_pose)) {
    day2__action__Navigate_Goal__fini(msg);
    return false;
  }
  // max_speed
  // tolerance_distance
  // tolerance_angle
  // use_obstacle_avoidance
  // planning_algorithm
  if (!rosidl_runtime_c__String__init(&msg->planning_algorithm)) {
    day2__action__Navigate_Goal__fini(msg);
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->waypoints, 0)) {
    day2__action__Navigate_Goal__fini(msg);
    return false;
  }
  // timeout_seconds
  // behavior_on_failure
  if (!rosidl_runtime_c__String__init(&msg->behavior_on_failure)) {
    day2__action__Navigate_Goal__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__Navigate_Goal__fini(day2__action__Navigate_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->target_pose);
  // max_speed
  // tolerance_distance
  // tolerance_angle
  // use_obstacle_avoidance
  // planning_algorithm
  rosidl_runtime_c__String__fini(&msg->planning_algorithm);
  // waypoints
  geometry_msgs__msg__Point__Sequence__fini(&msg->waypoints);
  // timeout_seconds
  // behavior_on_failure
  rosidl_runtime_c__String__fini(&msg->behavior_on_failure);
}

bool
day2__action__Navigate_Goal__are_equal(const day2__action__Navigate_Goal * lhs, const day2__action__Navigate_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->target_pose), &(rhs->target_pose)))
  {
    return false;
  }
  // max_speed
  if (lhs->max_speed != rhs->max_speed) {
    return false;
  }
  // tolerance_distance
  if (lhs->tolerance_distance != rhs->tolerance_distance) {
    return false;
  }
  // tolerance_angle
  if (lhs->tolerance_angle != rhs->tolerance_angle) {
    return false;
  }
  // use_obstacle_avoidance
  if (lhs->use_obstacle_avoidance != rhs->use_obstacle_avoidance) {
    return false;
  }
  // planning_algorithm
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->planning_algorithm), &(rhs->planning_algorithm)))
  {
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  // timeout_seconds
  if (lhs->timeout_seconds != rhs->timeout_seconds) {
    return false;
  }
  // behavior_on_failure
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->behavior_on_failure), &(rhs->behavior_on_failure)))
  {
    return false;
  }
  return true;
}

bool
day2__action__Navigate_Goal__copy(
  const day2__action__Navigate_Goal * input,
  day2__action__Navigate_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->target_pose), &(output->target_pose)))
  {
    return false;
  }
  // max_speed
  output->max_speed = input->max_speed;
  // tolerance_distance
  output->tolerance_distance = input->tolerance_distance;
  // tolerance_angle
  output->tolerance_angle = input->tolerance_angle;
  // use_obstacle_avoidance
  output->use_obstacle_avoidance = input->use_obstacle_avoidance;
  // planning_algorithm
  if (!rosidl_runtime_c__String__copy(
      &(input->planning_algorithm), &(output->planning_algorithm)))
  {
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  // timeout_seconds
  output->timeout_seconds = input->timeout_seconds;
  // behavior_on_failure
  if (!rosidl_runtime_c__String__copy(
      &(input->behavior_on_failure), &(output->behavior_on_failure)))
  {
    return false;
  }
  return true;
}

day2__action__Navigate_Goal *
day2__action__Navigate_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_Goal * msg = (day2__action__Navigate_Goal *)allocator.allocate(sizeof(day2__action__Navigate_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__Navigate_Goal));
  bool success = day2__action__Navigate_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__Navigate_Goal__destroy(day2__action__Navigate_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__Navigate_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__Navigate_Goal__Sequence__init(day2__action__Navigate_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_Goal * data = NULL;

  if (size) {
    data = (day2__action__Navigate_Goal *)allocator.zero_allocate(size, sizeof(day2__action__Navigate_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__Navigate_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__Navigate_Goal__fini(&data[i - 1]);
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
day2__action__Navigate_Goal__Sequence__fini(day2__action__Navigate_Goal__Sequence * array)
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
      day2__action__Navigate_Goal__fini(&array->data[i]);
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

day2__action__Navigate_Goal__Sequence *
day2__action__Navigate_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_Goal__Sequence * array = (day2__action__Navigate_Goal__Sequence *)allocator.allocate(sizeof(day2__action__Navigate_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__Navigate_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__Navigate_Goal__Sequence__destroy(day2__action__Navigate_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__Navigate_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__Navigate_Goal__Sequence__are_equal(const day2__action__Navigate_Goal__Sequence * lhs, const day2__action__Navigate_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__Navigate_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__Navigate_Goal__Sequence__copy(
  const day2__action__Navigate_Goal__Sequence * input,
  day2__action__Navigate_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__Navigate_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__Navigate_Goal * data =
      (day2__action__Navigate_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__Navigate_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__Navigate_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__Navigate_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result_message`
// Member `warnings`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `final_pose`
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
day2__action__Navigate_Result__init(day2__action__Navigate_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // result_message
  if (!rosidl_runtime_c__String__init(&msg->result_message)) {
    day2__action__Navigate_Result__fini(msg);
    return false;
  }
  // final_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->final_pose)) {
    day2__action__Navigate_Result__fini(msg);
    return false;
  }
  // total_distance_traveled
  // total_time_elapsed
  // average_speed
  // obstacle_encounters
  // warnings
  if (!rosidl_runtime_c__String__Sequence__init(&msg->warnings, 0)) {
    day2__action__Navigate_Result__fini(msg);
    return false;
  }
  // path_efficiency
  // smoothness_score
  // replanning_count
  // error_code
  return true;
}

void
day2__action__Navigate_Result__fini(day2__action__Navigate_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // result_message
  rosidl_runtime_c__String__fini(&msg->result_message);
  // final_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->final_pose);
  // total_distance_traveled
  // total_time_elapsed
  // average_speed
  // obstacle_encounters
  // warnings
  rosidl_runtime_c__String__Sequence__fini(&msg->warnings);
  // path_efficiency
  // smoothness_score
  // replanning_count
  // error_code
}

bool
day2__action__Navigate_Result__are_equal(const day2__action__Navigate_Result * lhs, const day2__action__Navigate_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // result_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result_message), &(rhs->result_message)))
  {
    return false;
  }
  // final_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->final_pose), &(rhs->final_pose)))
  {
    return false;
  }
  // total_distance_traveled
  if (lhs->total_distance_traveled != rhs->total_distance_traveled) {
    return false;
  }
  // total_time_elapsed
  if (lhs->total_time_elapsed != rhs->total_time_elapsed) {
    return false;
  }
  // average_speed
  if (lhs->average_speed != rhs->average_speed) {
    return false;
  }
  // obstacle_encounters
  if (lhs->obstacle_encounters != rhs->obstacle_encounters) {
    return false;
  }
  // warnings
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->warnings), &(rhs->warnings)))
  {
    return false;
  }
  // path_efficiency
  if (lhs->path_efficiency != rhs->path_efficiency) {
    return false;
  }
  // smoothness_score
  if (lhs->smoothness_score != rhs->smoothness_score) {
    return false;
  }
  // replanning_count
  if (lhs->replanning_count != rhs->replanning_count) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  return true;
}

bool
day2__action__Navigate_Result__copy(
  const day2__action__Navigate_Result * input,
  day2__action__Navigate_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // result_message
  if (!rosidl_runtime_c__String__copy(
      &(input->result_message), &(output->result_message)))
  {
    return false;
  }
  // final_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->final_pose), &(output->final_pose)))
  {
    return false;
  }
  // total_distance_traveled
  output->total_distance_traveled = input->total_distance_traveled;
  // total_time_elapsed
  output->total_time_elapsed = input->total_time_elapsed;
  // average_speed
  output->average_speed = input->average_speed;
  // obstacle_encounters
  output->obstacle_encounters = input->obstacle_encounters;
  // warnings
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->warnings), &(output->warnings)))
  {
    return false;
  }
  // path_efficiency
  output->path_efficiency = input->path_efficiency;
  // smoothness_score
  output->smoothness_score = input->smoothness_score;
  // replanning_count
  output->replanning_count = input->replanning_count;
  // error_code
  output->error_code = input->error_code;
  return true;
}

day2__action__Navigate_Result *
day2__action__Navigate_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_Result * msg = (day2__action__Navigate_Result *)allocator.allocate(sizeof(day2__action__Navigate_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__Navigate_Result));
  bool success = day2__action__Navigate_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__Navigate_Result__destroy(day2__action__Navigate_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__Navigate_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__Navigate_Result__Sequence__init(day2__action__Navigate_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_Result * data = NULL;

  if (size) {
    data = (day2__action__Navigate_Result *)allocator.zero_allocate(size, sizeof(day2__action__Navigate_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__Navigate_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__Navigate_Result__fini(&data[i - 1]);
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
day2__action__Navigate_Result__Sequence__fini(day2__action__Navigate_Result__Sequence * array)
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
      day2__action__Navigate_Result__fini(&array->data[i]);
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

day2__action__Navigate_Result__Sequence *
day2__action__Navigate_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_Result__Sequence * array = (day2__action__Navigate_Result__Sequence *)allocator.allocate(sizeof(day2__action__Navigate_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__Navigate_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__Navigate_Result__Sequence__destroy(day2__action__Navigate_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__Navigate_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__Navigate_Result__Sequence__are_equal(const day2__action__Navigate_Result__Sequence * lhs, const day2__action__Navigate_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__Navigate_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__Navigate_Result__Sequence__copy(
  const day2__action__Navigate_Result__Sequence * input,
  day2__action__Navigate_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__Navigate_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__Navigate_Result * data =
      (day2__action__Navigate_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__Navigate_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__Navigate_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__Navigate_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_pose`
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `remaining_path`
// already included above
// #include "geometry_msgs/msg/detail/point__functions.h"
// Member `current_behavior`
// Member `current_status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `last_update_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
day2__action__Navigate_Feedback__init(day2__action__Navigate_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->current_pose)) {
    day2__action__Navigate_Feedback__fini(msg);
    return false;
  }
  // distance_to_goal
  // estimated_time_remaining
  // current_speed
  // completion_percentage
  // remaining_path
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->remaining_path, 0)) {
    day2__action__Navigate_Feedback__fini(msg);
    return false;
  }
  // current_waypoint_index
  // current_behavior
  if (!rosidl_runtime_c__String__init(&msg->current_behavior)) {
    day2__action__Navigate_Feedback__fini(msg);
    return false;
  }
  // obstacle_detected
  // current_status
  if (!rosidl_runtime_c__String__init(&msg->current_status)) {
    day2__action__Navigate_Feedback__fini(msg);
    return false;
  }
  // path_deviation
  // battery_consumption_rate
  // cpu_usage
  // memory_usage
  // last_update_time
  if (!builtin_interfaces__msg__Time__init(&msg->last_update_time)) {
    day2__action__Navigate_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__Navigate_Feedback__fini(day2__action__Navigate_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->current_pose);
  // distance_to_goal
  // estimated_time_remaining
  // current_speed
  // completion_percentage
  // remaining_path
  geometry_msgs__msg__Point__Sequence__fini(&msg->remaining_path);
  // current_waypoint_index
  // current_behavior
  rosidl_runtime_c__String__fini(&msg->current_behavior);
  // obstacle_detected
  // current_status
  rosidl_runtime_c__String__fini(&msg->current_status);
  // path_deviation
  // battery_consumption_rate
  // cpu_usage
  // memory_usage
  // last_update_time
  builtin_interfaces__msg__Time__fini(&msg->last_update_time);
}

bool
day2__action__Navigate_Feedback__are_equal(const day2__action__Navigate_Feedback * lhs, const day2__action__Navigate_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->current_pose), &(rhs->current_pose)))
  {
    return false;
  }
  // distance_to_goal
  if (lhs->distance_to_goal != rhs->distance_to_goal) {
    return false;
  }
  // estimated_time_remaining
  if (lhs->estimated_time_remaining != rhs->estimated_time_remaining) {
    return false;
  }
  // current_speed
  if (lhs->current_speed != rhs->current_speed) {
    return false;
  }
  // completion_percentage
  if (lhs->completion_percentage != rhs->completion_percentage) {
    return false;
  }
  // remaining_path
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->remaining_path), &(rhs->remaining_path)))
  {
    return false;
  }
  // current_waypoint_index
  if (lhs->current_waypoint_index != rhs->current_waypoint_index) {
    return false;
  }
  // current_behavior
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_behavior), &(rhs->current_behavior)))
  {
    return false;
  }
  // obstacle_detected
  if (lhs->obstacle_detected != rhs->obstacle_detected) {
    return false;
  }
  // current_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_status), &(rhs->current_status)))
  {
    return false;
  }
  // path_deviation
  if (lhs->path_deviation != rhs->path_deviation) {
    return false;
  }
  // battery_consumption_rate
  if (lhs->battery_consumption_rate != rhs->battery_consumption_rate) {
    return false;
  }
  // cpu_usage
  if (lhs->cpu_usage != rhs->cpu_usage) {
    return false;
  }
  // memory_usage
  if (lhs->memory_usage != rhs->memory_usage) {
    return false;
  }
  // last_update_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->last_update_time), &(rhs->last_update_time)))
  {
    return false;
  }
  return true;
}

bool
day2__action__Navigate_Feedback__copy(
  const day2__action__Navigate_Feedback * input,
  day2__action__Navigate_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->current_pose), &(output->current_pose)))
  {
    return false;
  }
  // distance_to_goal
  output->distance_to_goal = input->distance_to_goal;
  // estimated_time_remaining
  output->estimated_time_remaining = input->estimated_time_remaining;
  // current_speed
  output->current_speed = input->current_speed;
  // completion_percentage
  output->completion_percentage = input->completion_percentage;
  // remaining_path
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->remaining_path), &(output->remaining_path)))
  {
    return false;
  }
  // current_waypoint_index
  output->current_waypoint_index = input->current_waypoint_index;
  // current_behavior
  if (!rosidl_runtime_c__String__copy(
      &(input->current_behavior), &(output->current_behavior)))
  {
    return false;
  }
  // obstacle_detected
  output->obstacle_detected = input->obstacle_detected;
  // current_status
  if (!rosidl_runtime_c__String__copy(
      &(input->current_status), &(output->current_status)))
  {
    return false;
  }
  // path_deviation
  output->path_deviation = input->path_deviation;
  // battery_consumption_rate
  output->battery_consumption_rate = input->battery_consumption_rate;
  // cpu_usage
  output->cpu_usage = input->cpu_usage;
  // memory_usage
  output->memory_usage = input->memory_usage;
  // last_update_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->last_update_time), &(output->last_update_time)))
  {
    return false;
  }
  return true;
}

day2__action__Navigate_Feedback *
day2__action__Navigate_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_Feedback * msg = (day2__action__Navigate_Feedback *)allocator.allocate(sizeof(day2__action__Navigate_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__Navigate_Feedback));
  bool success = day2__action__Navigate_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__Navigate_Feedback__destroy(day2__action__Navigate_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__Navigate_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__Navigate_Feedback__Sequence__init(day2__action__Navigate_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_Feedback * data = NULL;

  if (size) {
    data = (day2__action__Navigate_Feedback *)allocator.zero_allocate(size, sizeof(day2__action__Navigate_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__Navigate_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__Navigate_Feedback__fini(&data[i - 1]);
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
day2__action__Navigate_Feedback__Sequence__fini(day2__action__Navigate_Feedback__Sequence * array)
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
      day2__action__Navigate_Feedback__fini(&array->data[i]);
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

day2__action__Navigate_Feedback__Sequence *
day2__action__Navigate_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_Feedback__Sequence * array = (day2__action__Navigate_Feedback__Sequence *)allocator.allocate(sizeof(day2__action__Navigate_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__Navigate_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__Navigate_Feedback__Sequence__destroy(day2__action__Navigate_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__Navigate_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__Navigate_Feedback__Sequence__are_equal(const day2__action__Navigate_Feedback__Sequence * lhs, const day2__action__Navigate_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__Navigate_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__Navigate_Feedback__Sequence__copy(
  const day2__action__Navigate_Feedback__Sequence * input,
  day2__action__Navigate_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__Navigate_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__Navigate_Feedback * data =
      (day2__action__Navigate_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__Navigate_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__Navigate_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__Navigate_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "day2/action/detail/navigate__functions.h"

bool
day2__action__Navigate_SendGoal_Request__init(day2__action__Navigate_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    day2__action__Navigate_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!day2__action__Navigate_Goal__init(&msg->goal)) {
    day2__action__Navigate_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__Navigate_SendGoal_Request__fini(day2__action__Navigate_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  day2__action__Navigate_Goal__fini(&msg->goal);
}

bool
day2__action__Navigate_SendGoal_Request__are_equal(const day2__action__Navigate_SendGoal_Request * lhs, const day2__action__Navigate_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!day2__action__Navigate_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
day2__action__Navigate_SendGoal_Request__copy(
  const day2__action__Navigate_SendGoal_Request * input,
  day2__action__Navigate_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!day2__action__Navigate_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

day2__action__Navigate_SendGoal_Request *
day2__action__Navigate_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_SendGoal_Request * msg = (day2__action__Navigate_SendGoal_Request *)allocator.allocate(sizeof(day2__action__Navigate_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__Navigate_SendGoal_Request));
  bool success = day2__action__Navigate_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__Navigate_SendGoal_Request__destroy(day2__action__Navigate_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__Navigate_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__Navigate_SendGoal_Request__Sequence__init(day2__action__Navigate_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_SendGoal_Request * data = NULL;

  if (size) {
    data = (day2__action__Navigate_SendGoal_Request *)allocator.zero_allocate(size, sizeof(day2__action__Navigate_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__Navigate_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__Navigate_SendGoal_Request__fini(&data[i - 1]);
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
day2__action__Navigate_SendGoal_Request__Sequence__fini(day2__action__Navigate_SendGoal_Request__Sequence * array)
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
      day2__action__Navigate_SendGoal_Request__fini(&array->data[i]);
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

day2__action__Navigate_SendGoal_Request__Sequence *
day2__action__Navigate_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_SendGoal_Request__Sequence * array = (day2__action__Navigate_SendGoal_Request__Sequence *)allocator.allocate(sizeof(day2__action__Navigate_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__Navigate_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__Navigate_SendGoal_Request__Sequence__destroy(day2__action__Navigate_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__Navigate_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__Navigate_SendGoal_Request__Sequence__are_equal(const day2__action__Navigate_SendGoal_Request__Sequence * lhs, const day2__action__Navigate_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__Navigate_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__Navigate_SendGoal_Request__Sequence__copy(
  const day2__action__Navigate_SendGoal_Request__Sequence * input,
  day2__action__Navigate_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__Navigate_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__Navigate_SendGoal_Request * data =
      (day2__action__Navigate_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__Navigate_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__Navigate_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__Navigate_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
// already included above
// #include "builtin_interfaces/msg/detail/time__functions.h"

bool
day2__action__Navigate_SendGoal_Response__init(day2__action__Navigate_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    day2__action__Navigate_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__Navigate_SendGoal_Response__fini(day2__action__Navigate_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
day2__action__Navigate_SendGoal_Response__are_equal(const day2__action__Navigate_SendGoal_Response * lhs, const day2__action__Navigate_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
day2__action__Navigate_SendGoal_Response__copy(
  const day2__action__Navigate_SendGoal_Response * input,
  day2__action__Navigate_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

day2__action__Navigate_SendGoal_Response *
day2__action__Navigate_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_SendGoal_Response * msg = (day2__action__Navigate_SendGoal_Response *)allocator.allocate(sizeof(day2__action__Navigate_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__Navigate_SendGoal_Response));
  bool success = day2__action__Navigate_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__Navigate_SendGoal_Response__destroy(day2__action__Navigate_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__Navigate_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__Navigate_SendGoal_Response__Sequence__init(day2__action__Navigate_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_SendGoal_Response * data = NULL;

  if (size) {
    data = (day2__action__Navigate_SendGoal_Response *)allocator.zero_allocate(size, sizeof(day2__action__Navigate_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__Navigate_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__Navigate_SendGoal_Response__fini(&data[i - 1]);
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
day2__action__Navigate_SendGoal_Response__Sequence__fini(day2__action__Navigate_SendGoal_Response__Sequence * array)
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
      day2__action__Navigate_SendGoal_Response__fini(&array->data[i]);
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

day2__action__Navigate_SendGoal_Response__Sequence *
day2__action__Navigate_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_SendGoal_Response__Sequence * array = (day2__action__Navigate_SendGoal_Response__Sequence *)allocator.allocate(sizeof(day2__action__Navigate_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__Navigate_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__Navigate_SendGoal_Response__Sequence__destroy(day2__action__Navigate_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__Navigate_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__Navigate_SendGoal_Response__Sequence__are_equal(const day2__action__Navigate_SendGoal_Response__Sequence * lhs, const day2__action__Navigate_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__Navigate_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__Navigate_SendGoal_Response__Sequence__copy(
  const day2__action__Navigate_SendGoal_Response__Sequence * input,
  day2__action__Navigate_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__Navigate_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__Navigate_SendGoal_Response * data =
      (day2__action__Navigate_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__Navigate_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__Navigate_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__Navigate_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/action/detail/navigate__functions.h"

bool
day2__action__Navigate_SendGoal_Event__init(day2__action__Navigate_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    day2__action__Navigate_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!day2__action__Navigate_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    day2__action__Navigate_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!day2__action__Navigate_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    day2__action__Navigate_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__Navigate_SendGoal_Event__fini(day2__action__Navigate_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  day2__action__Navigate_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  day2__action__Navigate_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
day2__action__Navigate_SendGoal_Event__are_equal(const day2__action__Navigate_SendGoal_Event * lhs, const day2__action__Navigate_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!day2__action__Navigate_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!day2__action__Navigate_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
day2__action__Navigate_SendGoal_Event__copy(
  const day2__action__Navigate_SendGoal_Event * input,
  day2__action__Navigate_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!day2__action__Navigate_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!day2__action__Navigate_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

day2__action__Navigate_SendGoal_Event *
day2__action__Navigate_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_SendGoal_Event * msg = (day2__action__Navigate_SendGoal_Event *)allocator.allocate(sizeof(day2__action__Navigate_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__Navigate_SendGoal_Event));
  bool success = day2__action__Navigate_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__Navigate_SendGoal_Event__destroy(day2__action__Navigate_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__Navigate_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__Navigate_SendGoal_Event__Sequence__init(day2__action__Navigate_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_SendGoal_Event * data = NULL;

  if (size) {
    data = (day2__action__Navigate_SendGoal_Event *)allocator.zero_allocate(size, sizeof(day2__action__Navigate_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__Navigate_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__Navigate_SendGoal_Event__fini(&data[i - 1]);
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
day2__action__Navigate_SendGoal_Event__Sequence__fini(day2__action__Navigate_SendGoal_Event__Sequence * array)
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
      day2__action__Navigate_SendGoal_Event__fini(&array->data[i]);
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

day2__action__Navigate_SendGoal_Event__Sequence *
day2__action__Navigate_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_SendGoal_Event__Sequence * array = (day2__action__Navigate_SendGoal_Event__Sequence *)allocator.allocate(sizeof(day2__action__Navigate_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__Navigate_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__Navigate_SendGoal_Event__Sequence__destroy(day2__action__Navigate_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__Navigate_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__Navigate_SendGoal_Event__Sequence__are_equal(const day2__action__Navigate_SendGoal_Event__Sequence * lhs, const day2__action__Navigate_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__Navigate_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__Navigate_SendGoal_Event__Sequence__copy(
  const day2__action__Navigate_SendGoal_Event__Sequence * input,
  day2__action__Navigate_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__Navigate_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__Navigate_SendGoal_Event * data =
      (day2__action__Navigate_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__Navigate_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__Navigate_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__Navigate_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
day2__action__Navigate_GetResult_Request__init(day2__action__Navigate_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    day2__action__Navigate_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__Navigate_GetResult_Request__fini(day2__action__Navigate_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
day2__action__Navigate_GetResult_Request__are_equal(const day2__action__Navigate_GetResult_Request * lhs, const day2__action__Navigate_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
day2__action__Navigate_GetResult_Request__copy(
  const day2__action__Navigate_GetResult_Request * input,
  day2__action__Navigate_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

day2__action__Navigate_GetResult_Request *
day2__action__Navigate_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_GetResult_Request * msg = (day2__action__Navigate_GetResult_Request *)allocator.allocate(sizeof(day2__action__Navigate_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__Navigate_GetResult_Request));
  bool success = day2__action__Navigate_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__Navigate_GetResult_Request__destroy(day2__action__Navigate_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__Navigate_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__Navigate_GetResult_Request__Sequence__init(day2__action__Navigate_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_GetResult_Request * data = NULL;

  if (size) {
    data = (day2__action__Navigate_GetResult_Request *)allocator.zero_allocate(size, sizeof(day2__action__Navigate_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__Navigate_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__Navigate_GetResult_Request__fini(&data[i - 1]);
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
day2__action__Navigate_GetResult_Request__Sequence__fini(day2__action__Navigate_GetResult_Request__Sequence * array)
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
      day2__action__Navigate_GetResult_Request__fini(&array->data[i]);
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

day2__action__Navigate_GetResult_Request__Sequence *
day2__action__Navigate_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_GetResult_Request__Sequence * array = (day2__action__Navigate_GetResult_Request__Sequence *)allocator.allocate(sizeof(day2__action__Navigate_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__Navigate_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__Navigate_GetResult_Request__Sequence__destroy(day2__action__Navigate_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__Navigate_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__Navigate_GetResult_Request__Sequence__are_equal(const day2__action__Navigate_GetResult_Request__Sequence * lhs, const day2__action__Navigate_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__Navigate_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__Navigate_GetResult_Request__Sequence__copy(
  const day2__action__Navigate_GetResult_Request__Sequence * input,
  day2__action__Navigate_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__Navigate_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__Navigate_GetResult_Request * data =
      (day2__action__Navigate_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__Navigate_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__Navigate_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__Navigate_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "day2/action/detail/navigate__functions.h"

bool
day2__action__Navigate_GetResult_Response__init(day2__action__Navigate_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!day2__action__Navigate_Result__init(&msg->result)) {
    day2__action__Navigate_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__Navigate_GetResult_Response__fini(day2__action__Navigate_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  day2__action__Navigate_Result__fini(&msg->result);
}

bool
day2__action__Navigate_GetResult_Response__are_equal(const day2__action__Navigate_GetResult_Response * lhs, const day2__action__Navigate_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!day2__action__Navigate_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
day2__action__Navigate_GetResult_Response__copy(
  const day2__action__Navigate_GetResult_Response * input,
  day2__action__Navigate_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!day2__action__Navigate_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

day2__action__Navigate_GetResult_Response *
day2__action__Navigate_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_GetResult_Response * msg = (day2__action__Navigate_GetResult_Response *)allocator.allocate(sizeof(day2__action__Navigate_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__Navigate_GetResult_Response));
  bool success = day2__action__Navigate_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__Navigate_GetResult_Response__destroy(day2__action__Navigate_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__Navigate_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__Navigate_GetResult_Response__Sequence__init(day2__action__Navigate_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_GetResult_Response * data = NULL;

  if (size) {
    data = (day2__action__Navigate_GetResult_Response *)allocator.zero_allocate(size, sizeof(day2__action__Navigate_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__Navigate_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__Navigate_GetResult_Response__fini(&data[i - 1]);
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
day2__action__Navigate_GetResult_Response__Sequence__fini(day2__action__Navigate_GetResult_Response__Sequence * array)
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
      day2__action__Navigate_GetResult_Response__fini(&array->data[i]);
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

day2__action__Navigate_GetResult_Response__Sequence *
day2__action__Navigate_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_GetResult_Response__Sequence * array = (day2__action__Navigate_GetResult_Response__Sequence *)allocator.allocate(sizeof(day2__action__Navigate_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__Navigate_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__Navigate_GetResult_Response__Sequence__destroy(day2__action__Navigate_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__Navigate_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__Navigate_GetResult_Response__Sequence__are_equal(const day2__action__Navigate_GetResult_Response__Sequence * lhs, const day2__action__Navigate_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__Navigate_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__Navigate_GetResult_Response__Sequence__copy(
  const day2__action__Navigate_GetResult_Response__Sequence * input,
  day2__action__Navigate_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__Navigate_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__Navigate_GetResult_Response * data =
      (day2__action__Navigate_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__Navigate_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__Navigate_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__Navigate_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/action/detail/navigate__functions.h"

bool
day2__action__Navigate_GetResult_Event__init(day2__action__Navigate_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    day2__action__Navigate_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!day2__action__Navigate_GetResult_Request__Sequence__init(&msg->request, 0)) {
    day2__action__Navigate_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!day2__action__Navigate_GetResult_Response__Sequence__init(&msg->response, 0)) {
    day2__action__Navigate_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__Navigate_GetResult_Event__fini(day2__action__Navigate_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  day2__action__Navigate_GetResult_Request__Sequence__fini(&msg->request);
  // response
  day2__action__Navigate_GetResult_Response__Sequence__fini(&msg->response);
}

bool
day2__action__Navigate_GetResult_Event__are_equal(const day2__action__Navigate_GetResult_Event * lhs, const day2__action__Navigate_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!day2__action__Navigate_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!day2__action__Navigate_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
day2__action__Navigate_GetResult_Event__copy(
  const day2__action__Navigate_GetResult_Event * input,
  day2__action__Navigate_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!day2__action__Navigate_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!day2__action__Navigate_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

day2__action__Navigate_GetResult_Event *
day2__action__Navigate_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_GetResult_Event * msg = (day2__action__Navigate_GetResult_Event *)allocator.allocate(sizeof(day2__action__Navigate_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__Navigate_GetResult_Event));
  bool success = day2__action__Navigate_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__Navigate_GetResult_Event__destroy(day2__action__Navigate_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__Navigate_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__Navigate_GetResult_Event__Sequence__init(day2__action__Navigate_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_GetResult_Event * data = NULL;

  if (size) {
    data = (day2__action__Navigate_GetResult_Event *)allocator.zero_allocate(size, sizeof(day2__action__Navigate_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__Navigate_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__Navigate_GetResult_Event__fini(&data[i - 1]);
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
day2__action__Navigate_GetResult_Event__Sequence__fini(day2__action__Navigate_GetResult_Event__Sequence * array)
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
      day2__action__Navigate_GetResult_Event__fini(&array->data[i]);
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

day2__action__Navigate_GetResult_Event__Sequence *
day2__action__Navigate_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_GetResult_Event__Sequence * array = (day2__action__Navigate_GetResult_Event__Sequence *)allocator.allocate(sizeof(day2__action__Navigate_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__Navigate_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__Navigate_GetResult_Event__Sequence__destroy(day2__action__Navigate_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__Navigate_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__Navigate_GetResult_Event__Sequence__are_equal(const day2__action__Navigate_GetResult_Event__Sequence * lhs, const day2__action__Navigate_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__Navigate_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__Navigate_GetResult_Event__Sequence__copy(
  const day2__action__Navigate_GetResult_Event__Sequence * input,
  day2__action__Navigate_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__Navigate_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__Navigate_GetResult_Event * data =
      (day2__action__Navigate_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__Navigate_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__Navigate_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__Navigate_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "day2/action/detail/navigate__functions.h"

bool
day2__action__Navigate_FeedbackMessage__init(day2__action__Navigate_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    day2__action__Navigate_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!day2__action__Navigate_Feedback__init(&msg->feedback)) {
    day2__action__Navigate_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__Navigate_FeedbackMessage__fini(day2__action__Navigate_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  day2__action__Navigate_Feedback__fini(&msg->feedback);
}

bool
day2__action__Navigate_FeedbackMessage__are_equal(const day2__action__Navigate_FeedbackMessage * lhs, const day2__action__Navigate_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!day2__action__Navigate_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
day2__action__Navigate_FeedbackMessage__copy(
  const day2__action__Navigate_FeedbackMessage * input,
  day2__action__Navigate_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!day2__action__Navigate_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

day2__action__Navigate_FeedbackMessage *
day2__action__Navigate_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_FeedbackMessage * msg = (day2__action__Navigate_FeedbackMessage *)allocator.allocate(sizeof(day2__action__Navigate_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__Navigate_FeedbackMessage));
  bool success = day2__action__Navigate_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__Navigate_FeedbackMessage__destroy(day2__action__Navigate_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__Navigate_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__Navigate_FeedbackMessage__Sequence__init(day2__action__Navigate_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_FeedbackMessage * data = NULL;

  if (size) {
    data = (day2__action__Navigate_FeedbackMessage *)allocator.zero_allocate(size, sizeof(day2__action__Navigate_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__Navigate_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__Navigate_FeedbackMessage__fini(&data[i - 1]);
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
day2__action__Navigate_FeedbackMessage__Sequence__fini(day2__action__Navigate_FeedbackMessage__Sequence * array)
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
      day2__action__Navigate_FeedbackMessage__fini(&array->data[i]);
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

day2__action__Navigate_FeedbackMessage__Sequence *
day2__action__Navigate_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__Navigate_FeedbackMessage__Sequence * array = (day2__action__Navigate_FeedbackMessage__Sequence *)allocator.allocate(sizeof(day2__action__Navigate_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__Navigate_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__Navigate_FeedbackMessage__Sequence__destroy(day2__action__Navigate_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__Navigate_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__Navigate_FeedbackMessage__Sequence__are_equal(const day2__action__Navigate_FeedbackMessage__Sequence * lhs, const day2__action__Navigate_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__Navigate_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__Navigate_FeedbackMessage__Sequence__copy(
  const day2__action__Navigate_FeedbackMessage__Sequence * input,
  day2__action__Navigate_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__Navigate_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__Navigate_FeedbackMessage * data =
      (day2__action__Navigate_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__Navigate_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__Navigate_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__Navigate_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
