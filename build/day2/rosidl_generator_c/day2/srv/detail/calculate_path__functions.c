// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from day2:srv/CalculatePath.idl
// generated code does not contain a copyright notice
#include "day2/srv/detail/calculate_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `start_position`
// Member `goal_position`
// Member `waypoints`
// Member `forbidden_zones`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `start_orientation`
// Member `goal_orientation`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `planning_algorithm`
// Member `special_constraints`
#include "rosidl_runtime_c/string_functions.h"

bool
day2__srv__CalculatePath_Request__init(day2__srv__CalculatePath_Request * msg)
{
  if (!msg) {
    return false;
  }
  // start_position
  if (!geometry_msgs__msg__Point__init(&msg->start_position)) {
    day2__srv__CalculatePath_Request__fini(msg);
    return false;
  }
  // goal_position
  if (!geometry_msgs__msg__Point__init(&msg->goal_position)) {
    day2__srv__CalculatePath_Request__fini(msg);
    return false;
  }
  // start_orientation
  if (!geometry_msgs__msg__Vector3__init(&msg->start_orientation)) {
    day2__srv__CalculatePath_Request__fini(msg);
    return false;
  }
  // goal_orientation
  if (!geometry_msgs__msg__Vector3__init(&msg->goal_orientation)) {
    day2__srv__CalculatePath_Request__fini(msg);
    return false;
  }
  // max_velocity
  // max_acceleration
  // turning_radius
  // safety_margin
  // planning_algorithm
  if (!rosidl_runtime_c__String__init(&msg->planning_algorithm)) {
    day2__srv__CalculatePath_Request__fini(msg);
    return false;
  }
  // planning_timeout
  // optimize_for_speed
  // optimize_for_smoothness
  // avoid_dynamic_obstacles
  // waypoints
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->waypoints, 0)) {
    day2__srv__CalculatePath_Request__fini(msg);
    return false;
  }
  // forbidden_zones
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->forbidden_zones, 0)) {
    day2__srv__CalculatePath_Request__fini(msg);
    return false;
  }
  // special_constraints
  if (!rosidl_runtime_c__String__Sequence__init(&msg->special_constraints, 0)) {
    day2__srv__CalculatePath_Request__fini(msg);
    return false;
  }
  return true;
}

void
day2__srv__CalculatePath_Request__fini(day2__srv__CalculatePath_Request * msg)
{
  if (!msg) {
    return;
  }
  // start_position
  geometry_msgs__msg__Point__fini(&msg->start_position);
  // goal_position
  geometry_msgs__msg__Point__fini(&msg->goal_position);
  // start_orientation
  geometry_msgs__msg__Vector3__fini(&msg->start_orientation);
  // goal_orientation
  geometry_msgs__msg__Vector3__fini(&msg->goal_orientation);
  // max_velocity
  // max_acceleration
  // turning_radius
  // safety_margin
  // planning_algorithm
  rosidl_runtime_c__String__fini(&msg->planning_algorithm);
  // planning_timeout
  // optimize_for_speed
  // optimize_for_smoothness
  // avoid_dynamic_obstacles
  // waypoints
  geometry_msgs__msg__Point__Sequence__fini(&msg->waypoints);
  // forbidden_zones
  geometry_msgs__msg__Point__Sequence__fini(&msg->forbidden_zones);
  // special_constraints
  rosidl_runtime_c__String__Sequence__fini(&msg->special_constraints);
}

bool
day2__srv__CalculatePath_Request__are_equal(const day2__srv__CalculatePath_Request * lhs, const day2__srv__CalculatePath_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->start_position), &(rhs->start_position)))
  {
    return false;
  }
  // goal_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->goal_position), &(rhs->goal_position)))
  {
    return false;
  }
  // start_orientation
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->start_orientation), &(rhs->start_orientation)))
  {
    return false;
  }
  // goal_orientation
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->goal_orientation), &(rhs->goal_orientation)))
  {
    return false;
  }
  // max_velocity
  if (lhs->max_velocity != rhs->max_velocity) {
    return false;
  }
  // max_acceleration
  if (lhs->max_acceleration != rhs->max_acceleration) {
    return false;
  }
  // turning_radius
  if (lhs->turning_radius != rhs->turning_radius) {
    return false;
  }
  // safety_margin
  if (lhs->safety_margin != rhs->safety_margin) {
    return false;
  }
  // planning_algorithm
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->planning_algorithm), &(rhs->planning_algorithm)))
  {
    return false;
  }
  // planning_timeout
  if (lhs->planning_timeout != rhs->planning_timeout) {
    return false;
  }
  // optimize_for_speed
  if (lhs->optimize_for_speed != rhs->optimize_for_speed) {
    return false;
  }
  // optimize_for_smoothness
  if (lhs->optimize_for_smoothness != rhs->optimize_for_smoothness) {
    return false;
  }
  // avoid_dynamic_obstacles
  if (lhs->avoid_dynamic_obstacles != rhs->avoid_dynamic_obstacles) {
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  // forbidden_zones
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->forbidden_zones), &(rhs->forbidden_zones)))
  {
    return false;
  }
  // special_constraints
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->special_constraints), &(rhs->special_constraints)))
  {
    return false;
  }
  return true;
}

bool
day2__srv__CalculatePath_Request__copy(
  const day2__srv__CalculatePath_Request * input,
  day2__srv__CalculatePath_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // start_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->start_position), &(output->start_position)))
  {
    return false;
  }
  // goal_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->goal_position), &(output->goal_position)))
  {
    return false;
  }
  // start_orientation
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->start_orientation), &(output->start_orientation)))
  {
    return false;
  }
  // goal_orientation
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->goal_orientation), &(output->goal_orientation)))
  {
    return false;
  }
  // max_velocity
  output->max_velocity = input->max_velocity;
  // max_acceleration
  output->max_acceleration = input->max_acceleration;
  // turning_radius
  output->turning_radius = input->turning_radius;
  // safety_margin
  output->safety_margin = input->safety_margin;
  // planning_algorithm
  if (!rosidl_runtime_c__String__copy(
      &(input->planning_algorithm), &(output->planning_algorithm)))
  {
    return false;
  }
  // planning_timeout
  output->planning_timeout = input->planning_timeout;
  // optimize_for_speed
  output->optimize_for_speed = input->optimize_for_speed;
  // optimize_for_smoothness
  output->optimize_for_smoothness = input->optimize_for_smoothness;
  // avoid_dynamic_obstacles
  output->avoid_dynamic_obstacles = input->avoid_dynamic_obstacles;
  // waypoints
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  // forbidden_zones
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->forbidden_zones), &(output->forbidden_zones)))
  {
    return false;
  }
  // special_constraints
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->special_constraints), &(output->special_constraints)))
  {
    return false;
  }
  return true;
}

day2__srv__CalculatePath_Request *
day2__srv__CalculatePath_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__CalculatePath_Request * msg = (day2__srv__CalculatePath_Request *)allocator.allocate(sizeof(day2__srv__CalculatePath_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__srv__CalculatePath_Request));
  bool success = day2__srv__CalculatePath_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__srv__CalculatePath_Request__destroy(day2__srv__CalculatePath_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__srv__CalculatePath_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__srv__CalculatePath_Request__Sequence__init(day2__srv__CalculatePath_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__CalculatePath_Request * data = NULL;

  if (size) {
    data = (day2__srv__CalculatePath_Request *)allocator.zero_allocate(size, sizeof(day2__srv__CalculatePath_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__srv__CalculatePath_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__srv__CalculatePath_Request__fini(&data[i - 1]);
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
day2__srv__CalculatePath_Request__Sequence__fini(day2__srv__CalculatePath_Request__Sequence * array)
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
      day2__srv__CalculatePath_Request__fini(&array->data[i]);
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

day2__srv__CalculatePath_Request__Sequence *
day2__srv__CalculatePath_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__CalculatePath_Request__Sequence * array = (day2__srv__CalculatePath_Request__Sequence *)allocator.allocate(sizeof(day2__srv__CalculatePath_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__srv__CalculatePath_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__srv__CalculatePath_Request__Sequence__destroy(day2__srv__CalculatePath_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__srv__CalculatePath_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__srv__CalculatePath_Request__Sequence__are_equal(const day2__srv__CalculatePath_Request__Sequence * lhs, const day2__srv__CalculatePath_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__srv__CalculatePath_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__srv__CalculatePath_Request__Sequence__copy(
  const day2__srv__CalculatePath_Request__Sequence * input,
  day2__srv__CalculatePath_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__srv__CalculatePath_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__srv__CalculatePath_Request * data =
      (day2__srv__CalculatePath_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__srv__CalculatePath_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__srv__CalculatePath_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__srv__CalculatePath_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// Member `algorithm_used`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `path_points`
// Member `alternative_paths`
// already included above
// #include "geometry_msgs/msg/detail/point__functions.h"
// Member `path_orientations`
// already included above
// #include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `path_velocities`
// Member `path_timestamps`
// Member `alternative_scores`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
day2__srv__CalculatePath_Response__init(day2__srv__CalculatePath_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    day2__srv__CalculatePath_Response__fini(msg);
    return false;
  }
  // path_points
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->path_points, 0)) {
    day2__srv__CalculatePath_Response__fini(msg);
    return false;
  }
  // path_orientations
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->path_orientations, 0)) {
    day2__srv__CalculatePath_Response__fini(msg);
    return false;
  }
  // path_velocities
  if (!rosidl_runtime_c__float__Sequence__init(&msg->path_velocities, 0)) {
    day2__srv__CalculatePath_Response__fini(msg);
    return false;
  }
  // path_timestamps
  if (!rosidl_runtime_c__float__Sequence__init(&msg->path_timestamps, 0)) {
    day2__srv__CalculatePath_Response__fini(msg);
    return false;
  }
  // total_distance
  // total_time
  // path_smoothness
  // safety_score
  // num_waypoints
  // alternative_paths
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->alternative_paths, 0)) {
    day2__srv__CalculatePath_Response__fini(msg);
    return false;
  }
  // alternative_scores
  if (!rosidl_runtime_c__float__Sequence__init(&msg->alternative_scores, 0)) {
    day2__srv__CalculatePath_Response__fini(msg);
    return false;
  }
  // planning_time_ms
  // algorithm_used
  if (!rosidl_runtime_c__String__init(&msg->algorithm_used)) {
    day2__srv__CalculatePath_Response__fini(msg);
    return false;
  }
  // nodes_explored
  // iterations_count
  // error_code
  return true;
}

void
day2__srv__CalculatePath_Response__fini(day2__srv__CalculatePath_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // path_points
  geometry_msgs__msg__Point__Sequence__fini(&msg->path_points);
  // path_orientations
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->path_orientations);
  // path_velocities
  rosidl_runtime_c__float__Sequence__fini(&msg->path_velocities);
  // path_timestamps
  rosidl_runtime_c__float__Sequence__fini(&msg->path_timestamps);
  // total_distance
  // total_time
  // path_smoothness
  // safety_score
  // num_waypoints
  // alternative_paths
  geometry_msgs__msg__Point__Sequence__fini(&msg->alternative_paths);
  // alternative_scores
  rosidl_runtime_c__float__Sequence__fini(&msg->alternative_scores);
  // planning_time_ms
  // algorithm_used
  rosidl_runtime_c__String__fini(&msg->algorithm_used);
  // nodes_explored
  // iterations_count
  // error_code
}

bool
day2__srv__CalculatePath_Response__are_equal(const day2__srv__CalculatePath_Response * lhs, const day2__srv__CalculatePath_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // path_points
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->path_points), &(rhs->path_points)))
  {
    return false;
  }
  // path_orientations
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->path_orientations), &(rhs->path_orientations)))
  {
    return false;
  }
  // path_velocities
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->path_velocities), &(rhs->path_velocities)))
  {
    return false;
  }
  // path_timestamps
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->path_timestamps), &(rhs->path_timestamps)))
  {
    return false;
  }
  // total_distance
  if (lhs->total_distance != rhs->total_distance) {
    return false;
  }
  // total_time
  if (lhs->total_time != rhs->total_time) {
    return false;
  }
  // path_smoothness
  if (lhs->path_smoothness != rhs->path_smoothness) {
    return false;
  }
  // safety_score
  if (lhs->safety_score != rhs->safety_score) {
    return false;
  }
  // num_waypoints
  if (lhs->num_waypoints != rhs->num_waypoints) {
    return false;
  }
  // alternative_paths
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->alternative_paths), &(rhs->alternative_paths)))
  {
    return false;
  }
  // alternative_scores
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->alternative_scores), &(rhs->alternative_scores)))
  {
    return false;
  }
  // planning_time_ms
  if (lhs->planning_time_ms != rhs->planning_time_ms) {
    return false;
  }
  // algorithm_used
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->algorithm_used), &(rhs->algorithm_used)))
  {
    return false;
  }
  // nodes_explored
  if (lhs->nodes_explored != rhs->nodes_explored) {
    return false;
  }
  // iterations_count
  if (lhs->iterations_count != rhs->iterations_count) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  return true;
}

bool
day2__srv__CalculatePath_Response__copy(
  const day2__srv__CalculatePath_Response * input,
  day2__srv__CalculatePath_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // path_points
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->path_points), &(output->path_points)))
  {
    return false;
  }
  // path_orientations
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->path_orientations), &(output->path_orientations)))
  {
    return false;
  }
  // path_velocities
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->path_velocities), &(output->path_velocities)))
  {
    return false;
  }
  // path_timestamps
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->path_timestamps), &(output->path_timestamps)))
  {
    return false;
  }
  // total_distance
  output->total_distance = input->total_distance;
  // total_time
  output->total_time = input->total_time;
  // path_smoothness
  output->path_smoothness = input->path_smoothness;
  // safety_score
  output->safety_score = input->safety_score;
  // num_waypoints
  output->num_waypoints = input->num_waypoints;
  // alternative_paths
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->alternative_paths), &(output->alternative_paths)))
  {
    return false;
  }
  // alternative_scores
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->alternative_scores), &(output->alternative_scores)))
  {
    return false;
  }
  // planning_time_ms
  output->planning_time_ms = input->planning_time_ms;
  // algorithm_used
  if (!rosidl_runtime_c__String__copy(
      &(input->algorithm_used), &(output->algorithm_used)))
  {
    return false;
  }
  // nodes_explored
  output->nodes_explored = input->nodes_explored;
  // iterations_count
  output->iterations_count = input->iterations_count;
  // error_code
  output->error_code = input->error_code;
  return true;
}

day2__srv__CalculatePath_Response *
day2__srv__CalculatePath_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__CalculatePath_Response * msg = (day2__srv__CalculatePath_Response *)allocator.allocate(sizeof(day2__srv__CalculatePath_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__srv__CalculatePath_Response));
  bool success = day2__srv__CalculatePath_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__srv__CalculatePath_Response__destroy(day2__srv__CalculatePath_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__srv__CalculatePath_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__srv__CalculatePath_Response__Sequence__init(day2__srv__CalculatePath_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__CalculatePath_Response * data = NULL;

  if (size) {
    data = (day2__srv__CalculatePath_Response *)allocator.zero_allocate(size, sizeof(day2__srv__CalculatePath_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__srv__CalculatePath_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__srv__CalculatePath_Response__fini(&data[i - 1]);
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
day2__srv__CalculatePath_Response__Sequence__fini(day2__srv__CalculatePath_Response__Sequence * array)
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
      day2__srv__CalculatePath_Response__fini(&array->data[i]);
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

day2__srv__CalculatePath_Response__Sequence *
day2__srv__CalculatePath_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__CalculatePath_Response__Sequence * array = (day2__srv__CalculatePath_Response__Sequence *)allocator.allocate(sizeof(day2__srv__CalculatePath_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__srv__CalculatePath_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__srv__CalculatePath_Response__Sequence__destroy(day2__srv__CalculatePath_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__srv__CalculatePath_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__srv__CalculatePath_Response__Sequence__are_equal(const day2__srv__CalculatePath_Response__Sequence * lhs, const day2__srv__CalculatePath_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__srv__CalculatePath_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__srv__CalculatePath_Response__Sequence__copy(
  const day2__srv__CalculatePath_Response__Sequence * input,
  day2__srv__CalculatePath_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__srv__CalculatePath_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__srv__CalculatePath_Response * data =
      (day2__srv__CalculatePath_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__srv__CalculatePath_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__srv__CalculatePath_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__srv__CalculatePath_Response__copy(
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
// #include "day2/srv/detail/calculate_path__functions.h"

bool
day2__srv__CalculatePath_Event__init(day2__srv__CalculatePath_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    day2__srv__CalculatePath_Event__fini(msg);
    return false;
  }
  // request
  if (!day2__srv__CalculatePath_Request__Sequence__init(&msg->request, 0)) {
    day2__srv__CalculatePath_Event__fini(msg);
    return false;
  }
  // response
  if (!day2__srv__CalculatePath_Response__Sequence__init(&msg->response, 0)) {
    day2__srv__CalculatePath_Event__fini(msg);
    return false;
  }
  return true;
}

void
day2__srv__CalculatePath_Event__fini(day2__srv__CalculatePath_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  day2__srv__CalculatePath_Request__Sequence__fini(&msg->request);
  // response
  day2__srv__CalculatePath_Response__Sequence__fini(&msg->response);
}

bool
day2__srv__CalculatePath_Event__are_equal(const day2__srv__CalculatePath_Event * lhs, const day2__srv__CalculatePath_Event * rhs)
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
  if (!day2__srv__CalculatePath_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!day2__srv__CalculatePath_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
day2__srv__CalculatePath_Event__copy(
  const day2__srv__CalculatePath_Event * input,
  day2__srv__CalculatePath_Event * output)
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
  if (!day2__srv__CalculatePath_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!day2__srv__CalculatePath_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

day2__srv__CalculatePath_Event *
day2__srv__CalculatePath_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__CalculatePath_Event * msg = (day2__srv__CalculatePath_Event *)allocator.allocate(sizeof(day2__srv__CalculatePath_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__srv__CalculatePath_Event));
  bool success = day2__srv__CalculatePath_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__srv__CalculatePath_Event__destroy(day2__srv__CalculatePath_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__srv__CalculatePath_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__srv__CalculatePath_Event__Sequence__init(day2__srv__CalculatePath_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__CalculatePath_Event * data = NULL;

  if (size) {
    data = (day2__srv__CalculatePath_Event *)allocator.zero_allocate(size, sizeof(day2__srv__CalculatePath_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__srv__CalculatePath_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__srv__CalculatePath_Event__fini(&data[i - 1]);
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
day2__srv__CalculatePath_Event__Sequence__fini(day2__srv__CalculatePath_Event__Sequence * array)
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
      day2__srv__CalculatePath_Event__fini(&array->data[i]);
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

day2__srv__CalculatePath_Event__Sequence *
day2__srv__CalculatePath_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__CalculatePath_Event__Sequence * array = (day2__srv__CalculatePath_Event__Sequence *)allocator.allocate(sizeof(day2__srv__CalculatePath_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__srv__CalculatePath_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__srv__CalculatePath_Event__Sequence__destroy(day2__srv__CalculatePath_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__srv__CalculatePath_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__srv__CalculatePath_Event__Sequence__are_equal(const day2__srv__CalculatePath_Event__Sequence * lhs, const day2__srv__CalculatePath_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__srv__CalculatePath_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__srv__CalculatePath_Event__Sequence__copy(
  const day2__srv__CalculatePath_Event__Sequence * input,
  day2__srv__CalculatePath_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__srv__CalculatePath_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__srv__CalculatePath_Event * data =
      (day2__srv__CalculatePath_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__srv__CalculatePath_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__srv__CalculatePath_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__srv__CalculatePath_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
