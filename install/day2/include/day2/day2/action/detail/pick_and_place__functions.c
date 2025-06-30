// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from day2:action/PickAndPlace.idl
// generated code does not contain a copyright notice
#include "day2/action/detail/pick_and_place__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object_id`
// Member `object_type`
// Member `grasp_type`
// Member `forbidden_zones`
#include "rosidl_runtime_c/string_functions.h"
// Member `pickup_location`
// Member `place_location`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `object_dimensions`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
day2__action__PickAndPlace_Goal__init(day2__action__PickAndPlace_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__init(&msg->object_id)) {
    day2__action__PickAndPlace_Goal__fini(msg);
    return false;
  }
  // pickup_location
  if (!geometry_msgs__msg__Point__init(&msg->pickup_location)) {
    day2__action__PickAndPlace_Goal__fini(msg);
    return false;
  }
  // place_location
  if (!geometry_msgs__msg__Point__init(&msg->place_location)) {
    day2__action__PickAndPlace_Goal__fini(msg);
    return false;
  }
  // object_type
  if (!rosidl_runtime_c__String__init(&msg->object_type)) {
    day2__action__PickAndPlace_Goal__fini(msg);
    return false;
  }
  // object_weight
  // object_dimensions
  if (!geometry_msgs__msg__Vector3__init(&msg->object_dimensions)) {
    day2__action__PickAndPlace_Goal__fini(msg);
    return false;
  }
  // grasp_type
  if (!rosidl_runtime_c__String__init(&msg->grasp_type)) {
    day2__action__PickAndPlace_Goal__fini(msg);
    return false;
  }
  // grasp_force
  // approach_distance
  // lift_height
  // max_velocity
  // max_acceleration
  // use_careful_mode
  // timeout_seconds
  // collision_threshold
  // enable_force_feedback
  // forbidden_zones
  if (!rosidl_runtime_c__String__Sequence__init(&msg->forbidden_zones, 0)) {
    day2__action__PickAndPlace_Goal__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__PickAndPlace_Goal__fini(day2__action__PickAndPlace_Goal * msg)
{
  if (!msg) {
    return;
  }
  // object_id
  rosidl_runtime_c__String__fini(&msg->object_id);
  // pickup_location
  geometry_msgs__msg__Point__fini(&msg->pickup_location);
  // place_location
  geometry_msgs__msg__Point__fini(&msg->place_location);
  // object_type
  rosidl_runtime_c__String__fini(&msg->object_type);
  // object_weight
  // object_dimensions
  geometry_msgs__msg__Vector3__fini(&msg->object_dimensions);
  // grasp_type
  rosidl_runtime_c__String__fini(&msg->grasp_type);
  // grasp_force
  // approach_distance
  // lift_height
  // max_velocity
  // max_acceleration
  // use_careful_mode
  // timeout_seconds
  // collision_threshold
  // enable_force_feedback
  // forbidden_zones
  rosidl_runtime_c__String__Sequence__fini(&msg->forbidden_zones);
}

bool
day2__action__PickAndPlace_Goal__are_equal(const day2__action__PickAndPlace_Goal * lhs, const day2__action__PickAndPlace_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_id), &(rhs->object_id)))
  {
    return false;
  }
  // pickup_location
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->pickup_location), &(rhs->pickup_location)))
  {
    return false;
  }
  // place_location
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->place_location), &(rhs->place_location)))
  {
    return false;
  }
  // object_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_type), &(rhs->object_type)))
  {
    return false;
  }
  // object_weight
  if (lhs->object_weight != rhs->object_weight) {
    return false;
  }
  // object_dimensions
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->object_dimensions), &(rhs->object_dimensions)))
  {
    return false;
  }
  // grasp_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->grasp_type), &(rhs->grasp_type)))
  {
    return false;
  }
  // grasp_force
  if (lhs->grasp_force != rhs->grasp_force) {
    return false;
  }
  // approach_distance
  if (lhs->approach_distance != rhs->approach_distance) {
    return false;
  }
  // lift_height
  if (lhs->lift_height != rhs->lift_height) {
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
  // use_careful_mode
  if (lhs->use_careful_mode != rhs->use_careful_mode) {
    return false;
  }
  // timeout_seconds
  if (lhs->timeout_seconds != rhs->timeout_seconds) {
    return false;
  }
  // collision_threshold
  if (lhs->collision_threshold != rhs->collision_threshold) {
    return false;
  }
  // enable_force_feedback
  if (lhs->enable_force_feedback != rhs->enable_force_feedback) {
    return false;
  }
  // forbidden_zones
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->forbidden_zones), &(rhs->forbidden_zones)))
  {
    return false;
  }
  return true;
}

bool
day2__action__PickAndPlace_Goal__copy(
  const day2__action__PickAndPlace_Goal * input,
  day2__action__PickAndPlace_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__copy(
      &(input->object_id), &(output->object_id)))
  {
    return false;
  }
  // pickup_location
  if (!geometry_msgs__msg__Point__copy(
      &(input->pickup_location), &(output->pickup_location)))
  {
    return false;
  }
  // place_location
  if (!geometry_msgs__msg__Point__copy(
      &(input->place_location), &(output->place_location)))
  {
    return false;
  }
  // object_type
  if (!rosidl_runtime_c__String__copy(
      &(input->object_type), &(output->object_type)))
  {
    return false;
  }
  // object_weight
  output->object_weight = input->object_weight;
  // object_dimensions
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->object_dimensions), &(output->object_dimensions)))
  {
    return false;
  }
  // grasp_type
  if (!rosidl_runtime_c__String__copy(
      &(input->grasp_type), &(output->grasp_type)))
  {
    return false;
  }
  // grasp_force
  output->grasp_force = input->grasp_force;
  // approach_distance
  output->approach_distance = input->approach_distance;
  // lift_height
  output->lift_height = input->lift_height;
  // max_velocity
  output->max_velocity = input->max_velocity;
  // max_acceleration
  output->max_acceleration = input->max_acceleration;
  // use_careful_mode
  output->use_careful_mode = input->use_careful_mode;
  // timeout_seconds
  output->timeout_seconds = input->timeout_seconds;
  // collision_threshold
  output->collision_threshold = input->collision_threshold;
  // enable_force_feedback
  output->enable_force_feedback = input->enable_force_feedback;
  // forbidden_zones
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->forbidden_zones), &(output->forbidden_zones)))
  {
    return false;
  }
  return true;
}

day2__action__PickAndPlace_Goal *
day2__action__PickAndPlace_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_Goal * msg = (day2__action__PickAndPlace_Goal *)allocator.allocate(sizeof(day2__action__PickAndPlace_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__PickAndPlace_Goal));
  bool success = day2__action__PickAndPlace_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__PickAndPlace_Goal__destroy(day2__action__PickAndPlace_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__PickAndPlace_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__PickAndPlace_Goal__Sequence__init(day2__action__PickAndPlace_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_Goal * data = NULL;

  if (size) {
    data = (day2__action__PickAndPlace_Goal *)allocator.zero_allocate(size, sizeof(day2__action__PickAndPlace_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__PickAndPlace_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__PickAndPlace_Goal__fini(&data[i - 1]);
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
day2__action__PickAndPlace_Goal__Sequence__fini(day2__action__PickAndPlace_Goal__Sequence * array)
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
      day2__action__PickAndPlace_Goal__fini(&array->data[i]);
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

day2__action__PickAndPlace_Goal__Sequence *
day2__action__PickAndPlace_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_Goal__Sequence * array = (day2__action__PickAndPlace_Goal__Sequence *)allocator.allocate(sizeof(day2__action__PickAndPlace_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__PickAndPlace_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__PickAndPlace_Goal__Sequence__destroy(day2__action__PickAndPlace_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__PickAndPlace_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__PickAndPlace_Goal__Sequence__are_equal(const day2__action__PickAndPlace_Goal__Sequence * lhs, const day2__action__PickAndPlace_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__PickAndPlace_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__PickAndPlace_Goal__Sequence__copy(
  const day2__action__PickAndPlace_Goal__Sequence * input,
  day2__action__PickAndPlace_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__PickAndPlace_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__PickAndPlace_Goal * data =
      (day2__action__PickAndPlace_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__PickAndPlace_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__PickAndPlace_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__PickAndPlace_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result_message`
// Member `error_details`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `final_object_location`
// already included above
// #include "geometry_msgs/msg/detail/point__functions.h"

bool
day2__action__PickAndPlace_Result__init(day2__action__PickAndPlace_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // result_message
  if (!rosidl_runtime_c__String__init(&msg->result_message)) {
    day2__action__PickAndPlace_Result__fini(msg);
    return false;
  }
  // final_object_location
  if (!geometry_msgs__msg__Point__init(&msg->final_object_location)) {
    day2__action__PickAndPlace_Result__fini(msg);
    return false;
  }
  // total_task_time
  // pickup_successful
  // transport_successful
  // place_successful
  // pickup_duration
  // transport_duration
  // place_duration
  // accuracy_score
  // max_force_applied
  // grasp_quality
  // error_code
  // error_details
  if (!rosidl_runtime_c__String__init(&msg->error_details)) {
    day2__action__PickAndPlace_Result__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__PickAndPlace_Result__fini(day2__action__PickAndPlace_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // result_message
  rosidl_runtime_c__String__fini(&msg->result_message);
  // final_object_location
  geometry_msgs__msg__Point__fini(&msg->final_object_location);
  // total_task_time
  // pickup_successful
  // transport_successful
  // place_successful
  // pickup_duration
  // transport_duration
  // place_duration
  // accuracy_score
  // max_force_applied
  // grasp_quality
  // error_code
  // error_details
  rosidl_runtime_c__String__fini(&msg->error_details);
}

bool
day2__action__PickAndPlace_Result__are_equal(const day2__action__PickAndPlace_Result * lhs, const day2__action__PickAndPlace_Result * rhs)
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
  // final_object_location
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->final_object_location), &(rhs->final_object_location)))
  {
    return false;
  }
  // total_task_time
  if (lhs->total_task_time != rhs->total_task_time) {
    return false;
  }
  // pickup_successful
  if (lhs->pickup_successful != rhs->pickup_successful) {
    return false;
  }
  // transport_successful
  if (lhs->transport_successful != rhs->transport_successful) {
    return false;
  }
  // place_successful
  if (lhs->place_successful != rhs->place_successful) {
    return false;
  }
  // pickup_duration
  if (lhs->pickup_duration != rhs->pickup_duration) {
    return false;
  }
  // transport_duration
  if (lhs->transport_duration != rhs->transport_duration) {
    return false;
  }
  // place_duration
  if (lhs->place_duration != rhs->place_duration) {
    return false;
  }
  // accuracy_score
  if (lhs->accuracy_score != rhs->accuracy_score) {
    return false;
  }
  // max_force_applied
  if (lhs->max_force_applied != rhs->max_force_applied) {
    return false;
  }
  // grasp_quality
  if (lhs->grasp_quality != rhs->grasp_quality) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // error_details
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_details), &(rhs->error_details)))
  {
    return false;
  }
  return true;
}

bool
day2__action__PickAndPlace_Result__copy(
  const day2__action__PickAndPlace_Result * input,
  day2__action__PickAndPlace_Result * output)
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
  // final_object_location
  if (!geometry_msgs__msg__Point__copy(
      &(input->final_object_location), &(output->final_object_location)))
  {
    return false;
  }
  // total_task_time
  output->total_task_time = input->total_task_time;
  // pickup_successful
  output->pickup_successful = input->pickup_successful;
  // transport_successful
  output->transport_successful = input->transport_successful;
  // place_successful
  output->place_successful = input->place_successful;
  // pickup_duration
  output->pickup_duration = input->pickup_duration;
  // transport_duration
  output->transport_duration = input->transport_duration;
  // place_duration
  output->place_duration = input->place_duration;
  // accuracy_score
  output->accuracy_score = input->accuracy_score;
  // max_force_applied
  output->max_force_applied = input->max_force_applied;
  // grasp_quality
  output->grasp_quality = input->grasp_quality;
  // error_code
  output->error_code = input->error_code;
  // error_details
  if (!rosidl_runtime_c__String__copy(
      &(input->error_details), &(output->error_details)))
  {
    return false;
  }
  return true;
}

day2__action__PickAndPlace_Result *
day2__action__PickAndPlace_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_Result * msg = (day2__action__PickAndPlace_Result *)allocator.allocate(sizeof(day2__action__PickAndPlace_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__PickAndPlace_Result));
  bool success = day2__action__PickAndPlace_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__PickAndPlace_Result__destroy(day2__action__PickAndPlace_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__PickAndPlace_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__PickAndPlace_Result__Sequence__init(day2__action__PickAndPlace_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_Result * data = NULL;

  if (size) {
    data = (day2__action__PickAndPlace_Result *)allocator.zero_allocate(size, sizeof(day2__action__PickAndPlace_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__PickAndPlace_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__PickAndPlace_Result__fini(&data[i - 1]);
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
day2__action__PickAndPlace_Result__Sequence__fini(day2__action__PickAndPlace_Result__Sequence * array)
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
      day2__action__PickAndPlace_Result__fini(&array->data[i]);
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

day2__action__PickAndPlace_Result__Sequence *
day2__action__PickAndPlace_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_Result__Sequence * array = (day2__action__PickAndPlace_Result__Sequence *)allocator.allocate(sizeof(day2__action__PickAndPlace_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__PickAndPlace_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__PickAndPlace_Result__Sequence__destroy(day2__action__PickAndPlace_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__PickAndPlace_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__PickAndPlace_Result__Sequence__are_equal(const day2__action__PickAndPlace_Result__Sequence * lhs, const day2__action__PickAndPlace_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__PickAndPlace_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__PickAndPlace_Result__Sequence__copy(
  const day2__action__PickAndPlace_Result__Sequence * input,
  day2__action__PickAndPlace_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__PickAndPlace_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__PickAndPlace_Result * data =
      (day2__action__PickAndPlace_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__PickAndPlace_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__PickAndPlace_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__PickAndPlace_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_phase`
// Member `current_behavior`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `gripper_position`
// Member `object_position`
// already included above
// #include "geometry_msgs/msg/detail/point__functions.h"
// Member `force_torque_readings`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `current_velocity`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `phase_start_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
day2__action__PickAndPlace_Feedback__init(day2__action__PickAndPlace_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_phase
  if (!rosidl_runtime_c__String__init(&msg->current_phase)) {
    day2__action__PickAndPlace_Feedback__fini(msg);
    return false;
  }
  // completion_percentage
  // gripper_position
  if (!geometry_msgs__msg__Point__init(&msg->gripper_position)) {
    day2__action__PickAndPlace_Feedback__fini(msg);
    return false;
  }
  // object_position
  if (!geometry_msgs__msg__Point__init(&msg->object_position)) {
    day2__action__PickAndPlace_Feedback__fini(msg);
    return false;
  }
  // object_detected
  // object_in_grasp
  // current_grasp_force
  // transport_progress
  // force_torque_readings
  if (!rosidl_runtime_c__float__Sequence__init(&msg->force_torque_readings, 0)) {
    day2__action__PickAndPlace_Feedback__fini(msg);
    return false;
  }
  // collision_warning
  // estimated_time_remaining
  // current_velocity
  if (!geometry_msgs__msg__Twist__init(&msg->current_velocity)) {
    day2__action__PickAndPlace_Feedback__fini(msg);
    return false;
  }
  // current_behavior
  if (!rosidl_runtime_c__String__init(&msg->current_behavior)) {
    day2__action__PickAndPlace_Feedback__fini(msg);
    return false;
  }
  // is_moving
  // grasp_stability
  // path_deviation
  // phase_start_time
  if (!builtin_interfaces__msg__Time__init(&msg->phase_start_time)) {
    day2__action__PickAndPlace_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__PickAndPlace_Feedback__fini(day2__action__PickAndPlace_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_phase
  rosidl_runtime_c__String__fini(&msg->current_phase);
  // completion_percentage
  // gripper_position
  geometry_msgs__msg__Point__fini(&msg->gripper_position);
  // object_position
  geometry_msgs__msg__Point__fini(&msg->object_position);
  // object_detected
  // object_in_grasp
  // current_grasp_force
  // transport_progress
  // force_torque_readings
  rosidl_runtime_c__float__Sequence__fini(&msg->force_torque_readings);
  // collision_warning
  // estimated_time_remaining
  // current_velocity
  geometry_msgs__msg__Twist__fini(&msg->current_velocity);
  // current_behavior
  rosidl_runtime_c__String__fini(&msg->current_behavior);
  // is_moving
  // grasp_stability
  // path_deviation
  // phase_start_time
  builtin_interfaces__msg__Time__fini(&msg->phase_start_time);
}

bool
day2__action__PickAndPlace_Feedback__are_equal(const day2__action__PickAndPlace_Feedback * lhs, const day2__action__PickAndPlace_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_phase
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_phase), &(rhs->current_phase)))
  {
    return false;
  }
  // completion_percentage
  if (lhs->completion_percentage != rhs->completion_percentage) {
    return false;
  }
  // gripper_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->gripper_position), &(rhs->gripper_position)))
  {
    return false;
  }
  // object_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->object_position), &(rhs->object_position)))
  {
    return false;
  }
  // object_detected
  if (lhs->object_detected != rhs->object_detected) {
    return false;
  }
  // object_in_grasp
  if (lhs->object_in_grasp != rhs->object_in_grasp) {
    return false;
  }
  // current_grasp_force
  if (lhs->current_grasp_force != rhs->current_grasp_force) {
    return false;
  }
  // transport_progress
  if (lhs->transport_progress != rhs->transport_progress) {
    return false;
  }
  // force_torque_readings
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->force_torque_readings), &(rhs->force_torque_readings)))
  {
    return false;
  }
  // collision_warning
  if (lhs->collision_warning != rhs->collision_warning) {
    return false;
  }
  // estimated_time_remaining
  if (lhs->estimated_time_remaining != rhs->estimated_time_remaining) {
    return false;
  }
  // current_velocity
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->current_velocity), &(rhs->current_velocity)))
  {
    return false;
  }
  // current_behavior
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_behavior), &(rhs->current_behavior)))
  {
    return false;
  }
  // is_moving
  if (lhs->is_moving != rhs->is_moving) {
    return false;
  }
  // grasp_stability
  if (lhs->grasp_stability != rhs->grasp_stability) {
    return false;
  }
  // path_deviation
  if (lhs->path_deviation != rhs->path_deviation) {
    return false;
  }
  // phase_start_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->phase_start_time), &(rhs->phase_start_time)))
  {
    return false;
  }
  return true;
}

bool
day2__action__PickAndPlace_Feedback__copy(
  const day2__action__PickAndPlace_Feedback * input,
  day2__action__PickAndPlace_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_phase
  if (!rosidl_runtime_c__String__copy(
      &(input->current_phase), &(output->current_phase)))
  {
    return false;
  }
  // completion_percentage
  output->completion_percentage = input->completion_percentage;
  // gripper_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->gripper_position), &(output->gripper_position)))
  {
    return false;
  }
  // object_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->object_position), &(output->object_position)))
  {
    return false;
  }
  // object_detected
  output->object_detected = input->object_detected;
  // object_in_grasp
  output->object_in_grasp = input->object_in_grasp;
  // current_grasp_force
  output->current_grasp_force = input->current_grasp_force;
  // transport_progress
  output->transport_progress = input->transport_progress;
  // force_torque_readings
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->force_torque_readings), &(output->force_torque_readings)))
  {
    return false;
  }
  // collision_warning
  output->collision_warning = input->collision_warning;
  // estimated_time_remaining
  output->estimated_time_remaining = input->estimated_time_remaining;
  // current_velocity
  if (!geometry_msgs__msg__Twist__copy(
      &(input->current_velocity), &(output->current_velocity)))
  {
    return false;
  }
  // current_behavior
  if (!rosidl_runtime_c__String__copy(
      &(input->current_behavior), &(output->current_behavior)))
  {
    return false;
  }
  // is_moving
  output->is_moving = input->is_moving;
  // grasp_stability
  output->grasp_stability = input->grasp_stability;
  // path_deviation
  output->path_deviation = input->path_deviation;
  // phase_start_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->phase_start_time), &(output->phase_start_time)))
  {
    return false;
  }
  return true;
}

day2__action__PickAndPlace_Feedback *
day2__action__PickAndPlace_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_Feedback * msg = (day2__action__PickAndPlace_Feedback *)allocator.allocate(sizeof(day2__action__PickAndPlace_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__PickAndPlace_Feedback));
  bool success = day2__action__PickAndPlace_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__PickAndPlace_Feedback__destroy(day2__action__PickAndPlace_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__PickAndPlace_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__PickAndPlace_Feedback__Sequence__init(day2__action__PickAndPlace_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_Feedback * data = NULL;

  if (size) {
    data = (day2__action__PickAndPlace_Feedback *)allocator.zero_allocate(size, sizeof(day2__action__PickAndPlace_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__PickAndPlace_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__PickAndPlace_Feedback__fini(&data[i - 1]);
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
day2__action__PickAndPlace_Feedback__Sequence__fini(day2__action__PickAndPlace_Feedback__Sequence * array)
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
      day2__action__PickAndPlace_Feedback__fini(&array->data[i]);
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

day2__action__PickAndPlace_Feedback__Sequence *
day2__action__PickAndPlace_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_Feedback__Sequence * array = (day2__action__PickAndPlace_Feedback__Sequence *)allocator.allocate(sizeof(day2__action__PickAndPlace_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__PickAndPlace_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__PickAndPlace_Feedback__Sequence__destroy(day2__action__PickAndPlace_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__PickAndPlace_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__PickAndPlace_Feedback__Sequence__are_equal(const day2__action__PickAndPlace_Feedback__Sequence * lhs, const day2__action__PickAndPlace_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__PickAndPlace_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__PickAndPlace_Feedback__Sequence__copy(
  const day2__action__PickAndPlace_Feedback__Sequence * input,
  day2__action__PickAndPlace_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__PickAndPlace_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__PickAndPlace_Feedback * data =
      (day2__action__PickAndPlace_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__PickAndPlace_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__PickAndPlace_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__PickAndPlace_Feedback__copy(
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
// #include "day2/action/detail/pick_and_place__functions.h"

bool
day2__action__PickAndPlace_SendGoal_Request__init(day2__action__PickAndPlace_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    day2__action__PickAndPlace_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!day2__action__PickAndPlace_Goal__init(&msg->goal)) {
    day2__action__PickAndPlace_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__PickAndPlace_SendGoal_Request__fini(day2__action__PickAndPlace_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  day2__action__PickAndPlace_Goal__fini(&msg->goal);
}

bool
day2__action__PickAndPlace_SendGoal_Request__are_equal(const day2__action__PickAndPlace_SendGoal_Request * lhs, const day2__action__PickAndPlace_SendGoal_Request * rhs)
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
  if (!day2__action__PickAndPlace_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
day2__action__PickAndPlace_SendGoal_Request__copy(
  const day2__action__PickAndPlace_SendGoal_Request * input,
  day2__action__PickAndPlace_SendGoal_Request * output)
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
  if (!day2__action__PickAndPlace_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

day2__action__PickAndPlace_SendGoal_Request *
day2__action__PickAndPlace_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_SendGoal_Request * msg = (day2__action__PickAndPlace_SendGoal_Request *)allocator.allocate(sizeof(day2__action__PickAndPlace_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__PickAndPlace_SendGoal_Request));
  bool success = day2__action__PickAndPlace_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__PickAndPlace_SendGoal_Request__destroy(day2__action__PickAndPlace_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__PickAndPlace_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__PickAndPlace_SendGoal_Request__Sequence__init(day2__action__PickAndPlace_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_SendGoal_Request * data = NULL;

  if (size) {
    data = (day2__action__PickAndPlace_SendGoal_Request *)allocator.zero_allocate(size, sizeof(day2__action__PickAndPlace_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__PickAndPlace_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__PickAndPlace_SendGoal_Request__fini(&data[i - 1]);
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
day2__action__PickAndPlace_SendGoal_Request__Sequence__fini(day2__action__PickAndPlace_SendGoal_Request__Sequence * array)
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
      day2__action__PickAndPlace_SendGoal_Request__fini(&array->data[i]);
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

day2__action__PickAndPlace_SendGoal_Request__Sequence *
day2__action__PickAndPlace_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_SendGoal_Request__Sequence * array = (day2__action__PickAndPlace_SendGoal_Request__Sequence *)allocator.allocate(sizeof(day2__action__PickAndPlace_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__PickAndPlace_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__PickAndPlace_SendGoal_Request__Sequence__destroy(day2__action__PickAndPlace_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__PickAndPlace_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__PickAndPlace_SendGoal_Request__Sequence__are_equal(const day2__action__PickAndPlace_SendGoal_Request__Sequence * lhs, const day2__action__PickAndPlace_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__PickAndPlace_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__PickAndPlace_SendGoal_Request__Sequence__copy(
  const day2__action__PickAndPlace_SendGoal_Request__Sequence * input,
  day2__action__PickAndPlace_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__PickAndPlace_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__PickAndPlace_SendGoal_Request * data =
      (day2__action__PickAndPlace_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__PickAndPlace_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__PickAndPlace_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__PickAndPlace_SendGoal_Request__copy(
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
day2__action__PickAndPlace_SendGoal_Response__init(day2__action__PickAndPlace_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    day2__action__PickAndPlace_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__PickAndPlace_SendGoal_Response__fini(day2__action__PickAndPlace_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
day2__action__PickAndPlace_SendGoal_Response__are_equal(const day2__action__PickAndPlace_SendGoal_Response * lhs, const day2__action__PickAndPlace_SendGoal_Response * rhs)
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
day2__action__PickAndPlace_SendGoal_Response__copy(
  const day2__action__PickAndPlace_SendGoal_Response * input,
  day2__action__PickAndPlace_SendGoal_Response * output)
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

day2__action__PickAndPlace_SendGoal_Response *
day2__action__PickAndPlace_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_SendGoal_Response * msg = (day2__action__PickAndPlace_SendGoal_Response *)allocator.allocate(sizeof(day2__action__PickAndPlace_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__PickAndPlace_SendGoal_Response));
  bool success = day2__action__PickAndPlace_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__PickAndPlace_SendGoal_Response__destroy(day2__action__PickAndPlace_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__PickAndPlace_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__PickAndPlace_SendGoal_Response__Sequence__init(day2__action__PickAndPlace_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_SendGoal_Response * data = NULL;

  if (size) {
    data = (day2__action__PickAndPlace_SendGoal_Response *)allocator.zero_allocate(size, sizeof(day2__action__PickAndPlace_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__PickAndPlace_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__PickAndPlace_SendGoal_Response__fini(&data[i - 1]);
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
day2__action__PickAndPlace_SendGoal_Response__Sequence__fini(day2__action__PickAndPlace_SendGoal_Response__Sequence * array)
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
      day2__action__PickAndPlace_SendGoal_Response__fini(&array->data[i]);
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

day2__action__PickAndPlace_SendGoal_Response__Sequence *
day2__action__PickAndPlace_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_SendGoal_Response__Sequence * array = (day2__action__PickAndPlace_SendGoal_Response__Sequence *)allocator.allocate(sizeof(day2__action__PickAndPlace_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__PickAndPlace_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__PickAndPlace_SendGoal_Response__Sequence__destroy(day2__action__PickAndPlace_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__PickAndPlace_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__PickAndPlace_SendGoal_Response__Sequence__are_equal(const day2__action__PickAndPlace_SendGoal_Response__Sequence * lhs, const day2__action__PickAndPlace_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__PickAndPlace_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__PickAndPlace_SendGoal_Response__Sequence__copy(
  const day2__action__PickAndPlace_SendGoal_Response__Sequence * input,
  day2__action__PickAndPlace_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__PickAndPlace_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__PickAndPlace_SendGoal_Response * data =
      (day2__action__PickAndPlace_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__PickAndPlace_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__PickAndPlace_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__PickAndPlace_SendGoal_Response__copy(
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
// #include "day2/action/detail/pick_and_place__functions.h"

bool
day2__action__PickAndPlace_SendGoal_Event__init(day2__action__PickAndPlace_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    day2__action__PickAndPlace_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!day2__action__PickAndPlace_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    day2__action__PickAndPlace_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!day2__action__PickAndPlace_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    day2__action__PickAndPlace_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__PickAndPlace_SendGoal_Event__fini(day2__action__PickAndPlace_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  day2__action__PickAndPlace_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  day2__action__PickAndPlace_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
day2__action__PickAndPlace_SendGoal_Event__are_equal(const day2__action__PickAndPlace_SendGoal_Event * lhs, const day2__action__PickAndPlace_SendGoal_Event * rhs)
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
  if (!day2__action__PickAndPlace_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!day2__action__PickAndPlace_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
day2__action__PickAndPlace_SendGoal_Event__copy(
  const day2__action__PickAndPlace_SendGoal_Event * input,
  day2__action__PickAndPlace_SendGoal_Event * output)
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
  if (!day2__action__PickAndPlace_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!day2__action__PickAndPlace_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

day2__action__PickAndPlace_SendGoal_Event *
day2__action__PickAndPlace_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_SendGoal_Event * msg = (day2__action__PickAndPlace_SendGoal_Event *)allocator.allocate(sizeof(day2__action__PickAndPlace_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__PickAndPlace_SendGoal_Event));
  bool success = day2__action__PickAndPlace_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__PickAndPlace_SendGoal_Event__destroy(day2__action__PickAndPlace_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__PickAndPlace_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__PickAndPlace_SendGoal_Event__Sequence__init(day2__action__PickAndPlace_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_SendGoal_Event * data = NULL;

  if (size) {
    data = (day2__action__PickAndPlace_SendGoal_Event *)allocator.zero_allocate(size, sizeof(day2__action__PickAndPlace_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__PickAndPlace_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__PickAndPlace_SendGoal_Event__fini(&data[i - 1]);
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
day2__action__PickAndPlace_SendGoal_Event__Sequence__fini(day2__action__PickAndPlace_SendGoal_Event__Sequence * array)
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
      day2__action__PickAndPlace_SendGoal_Event__fini(&array->data[i]);
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

day2__action__PickAndPlace_SendGoal_Event__Sequence *
day2__action__PickAndPlace_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_SendGoal_Event__Sequence * array = (day2__action__PickAndPlace_SendGoal_Event__Sequence *)allocator.allocate(sizeof(day2__action__PickAndPlace_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__PickAndPlace_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__PickAndPlace_SendGoal_Event__Sequence__destroy(day2__action__PickAndPlace_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__PickAndPlace_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__PickAndPlace_SendGoal_Event__Sequence__are_equal(const day2__action__PickAndPlace_SendGoal_Event__Sequence * lhs, const day2__action__PickAndPlace_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__PickAndPlace_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__PickAndPlace_SendGoal_Event__Sequence__copy(
  const day2__action__PickAndPlace_SendGoal_Event__Sequence * input,
  day2__action__PickAndPlace_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__PickAndPlace_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__PickAndPlace_SendGoal_Event * data =
      (day2__action__PickAndPlace_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__PickAndPlace_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__PickAndPlace_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__PickAndPlace_SendGoal_Event__copy(
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
day2__action__PickAndPlace_GetResult_Request__init(day2__action__PickAndPlace_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    day2__action__PickAndPlace_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__PickAndPlace_GetResult_Request__fini(day2__action__PickAndPlace_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
day2__action__PickAndPlace_GetResult_Request__are_equal(const day2__action__PickAndPlace_GetResult_Request * lhs, const day2__action__PickAndPlace_GetResult_Request * rhs)
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
day2__action__PickAndPlace_GetResult_Request__copy(
  const day2__action__PickAndPlace_GetResult_Request * input,
  day2__action__PickAndPlace_GetResult_Request * output)
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

day2__action__PickAndPlace_GetResult_Request *
day2__action__PickAndPlace_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_GetResult_Request * msg = (day2__action__PickAndPlace_GetResult_Request *)allocator.allocate(sizeof(day2__action__PickAndPlace_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__PickAndPlace_GetResult_Request));
  bool success = day2__action__PickAndPlace_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__PickAndPlace_GetResult_Request__destroy(day2__action__PickAndPlace_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__PickAndPlace_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__PickAndPlace_GetResult_Request__Sequence__init(day2__action__PickAndPlace_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_GetResult_Request * data = NULL;

  if (size) {
    data = (day2__action__PickAndPlace_GetResult_Request *)allocator.zero_allocate(size, sizeof(day2__action__PickAndPlace_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__PickAndPlace_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__PickAndPlace_GetResult_Request__fini(&data[i - 1]);
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
day2__action__PickAndPlace_GetResult_Request__Sequence__fini(day2__action__PickAndPlace_GetResult_Request__Sequence * array)
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
      day2__action__PickAndPlace_GetResult_Request__fini(&array->data[i]);
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

day2__action__PickAndPlace_GetResult_Request__Sequence *
day2__action__PickAndPlace_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_GetResult_Request__Sequence * array = (day2__action__PickAndPlace_GetResult_Request__Sequence *)allocator.allocate(sizeof(day2__action__PickAndPlace_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__PickAndPlace_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__PickAndPlace_GetResult_Request__Sequence__destroy(day2__action__PickAndPlace_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__PickAndPlace_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__PickAndPlace_GetResult_Request__Sequence__are_equal(const day2__action__PickAndPlace_GetResult_Request__Sequence * lhs, const day2__action__PickAndPlace_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__PickAndPlace_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__PickAndPlace_GetResult_Request__Sequence__copy(
  const day2__action__PickAndPlace_GetResult_Request__Sequence * input,
  day2__action__PickAndPlace_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__PickAndPlace_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__PickAndPlace_GetResult_Request * data =
      (day2__action__PickAndPlace_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__PickAndPlace_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__PickAndPlace_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__PickAndPlace_GetResult_Request__copy(
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
// #include "day2/action/detail/pick_and_place__functions.h"

bool
day2__action__PickAndPlace_GetResult_Response__init(day2__action__PickAndPlace_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!day2__action__PickAndPlace_Result__init(&msg->result)) {
    day2__action__PickAndPlace_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__PickAndPlace_GetResult_Response__fini(day2__action__PickAndPlace_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  day2__action__PickAndPlace_Result__fini(&msg->result);
}

bool
day2__action__PickAndPlace_GetResult_Response__are_equal(const day2__action__PickAndPlace_GetResult_Response * lhs, const day2__action__PickAndPlace_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!day2__action__PickAndPlace_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
day2__action__PickAndPlace_GetResult_Response__copy(
  const day2__action__PickAndPlace_GetResult_Response * input,
  day2__action__PickAndPlace_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!day2__action__PickAndPlace_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

day2__action__PickAndPlace_GetResult_Response *
day2__action__PickAndPlace_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_GetResult_Response * msg = (day2__action__PickAndPlace_GetResult_Response *)allocator.allocate(sizeof(day2__action__PickAndPlace_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__PickAndPlace_GetResult_Response));
  bool success = day2__action__PickAndPlace_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__PickAndPlace_GetResult_Response__destroy(day2__action__PickAndPlace_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__PickAndPlace_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__PickAndPlace_GetResult_Response__Sequence__init(day2__action__PickAndPlace_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_GetResult_Response * data = NULL;

  if (size) {
    data = (day2__action__PickAndPlace_GetResult_Response *)allocator.zero_allocate(size, sizeof(day2__action__PickAndPlace_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__PickAndPlace_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__PickAndPlace_GetResult_Response__fini(&data[i - 1]);
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
day2__action__PickAndPlace_GetResult_Response__Sequence__fini(day2__action__PickAndPlace_GetResult_Response__Sequence * array)
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
      day2__action__PickAndPlace_GetResult_Response__fini(&array->data[i]);
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

day2__action__PickAndPlace_GetResult_Response__Sequence *
day2__action__PickAndPlace_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_GetResult_Response__Sequence * array = (day2__action__PickAndPlace_GetResult_Response__Sequence *)allocator.allocate(sizeof(day2__action__PickAndPlace_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__PickAndPlace_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__PickAndPlace_GetResult_Response__Sequence__destroy(day2__action__PickAndPlace_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__PickAndPlace_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__PickAndPlace_GetResult_Response__Sequence__are_equal(const day2__action__PickAndPlace_GetResult_Response__Sequence * lhs, const day2__action__PickAndPlace_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__PickAndPlace_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__PickAndPlace_GetResult_Response__Sequence__copy(
  const day2__action__PickAndPlace_GetResult_Response__Sequence * input,
  day2__action__PickAndPlace_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__PickAndPlace_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__PickAndPlace_GetResult_Response * data =
      (day2__action__PickAndPlace_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__PickAndPlace_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__PickAndPlace_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__PickAndPlace_GetResult_Response__copy(
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
// #include "day2/action/detail/pick_and_place__functions.h"

bool
day2__action__PickAndPlace_GetResult_Event__init(day2__action__PickAndPlace_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    day2__action__PickAndPlace_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!day2__action__PickAndPlace_GetResult_Request__Sequence__init(&msg->request, 0)) {
    day2__action__PickAndPlace_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!day2__action__PickAndPlace_GetResult_Response__Sequence__init(&msg->response, 0)) {
    day2__action__PickAndPlace_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__PickAndPlace_GetResult_Event__fini(day2__action__PickAndPlace_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  day2__action__PickAndPlace_GetResult_Request__Sequence__fini(&msg->request);
  // response
  day2__action__PickAndPlace_GetResult_Response__Sequence__fini(&msg->response);
}

bool
day2__action__PickAndPlace_GetResult_Event__are_equal(const day2__action__PickAndPlace_GetResult_Event * lhs, const day2__action__PickAndPlace_GetResult_Event * rhs)
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
  if (!day2__action__PickAndPlace_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!day2__action__PickAndPlace_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
day2__action__PickAndPlace_GetResult_Event__copy(
  const day2__action__PickAndPlace_GetResult_Event * input,
  day2__action__PickAndPlace_GetResult_Event * output)
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
  if (!day2__action__PickAndPlace_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!day2__action__PickAndPlace_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

day2__action__PickAndPlace_GetResult_Event *
day2__action__PickAndPlace_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_GetResult_Event * msg = (day2__action__PickAndPlace_GetResult_Event *)allocator.allocate(sizeof(day2__action__PickAndPlace_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__PickAndPlace_GetResult_Event));
  bool success = day2__action__PickAndPlace_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__PickAndPlace_GetResult_Event__destroy(day2__action__PickAndPlace_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__PickAndPlace_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__PickAndPlace_GetResult_Event__Sequence__init(day2__action__PickAndPlace_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_GetResult_Event * data = NULL;

  if (size) {
    data = (day2__action__PickAndPlace_GetResult_Event *)allocator.zero_allocate(size, sizeof(day2__action__PickAndPlace_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__PickAndPlace_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__PickAndPlace_GetResult_Event__fini(&data[i - 1]);
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
day2__action__PickAndPlace_GetResult_Event__Sequence__fini(day2__action__PickAndPlace_GetResult_Event__Sequence * array)
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
      day2__action__PickAndPlace_GetResult_Event__fini(&array->data[i]);
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

day2__action__PickAndPlace_GetResult_Event__Sequence *
day2__action__PickAndPlace_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_GetResult_Event__Sequence * array = (day2__action__PickAndPlace_GetResult_Event__Sequence *)allocator.allocate(sizeof(day2__action__PickAndPlace_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__PickAndPlace_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__PickAndPlace_GetResult_Event__Sequence__destroy(day2__action__PickAndPlace_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__PickAndPlace_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__PickAndPlace_GetResult_Event__Sequence__are_equal(const day2__action__PickAndPlace_GetResult_Event__Sequence * lhs, const day2__action__PickAndPlace_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__PickAndPlace_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__PickAndPlace_GetResult_Event__Sequence__copy(
  const day2__action__PickAndPlace_GetResult_Event__Sequence * input,
  day2__action__PickAndPlace_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__PickAndPlace_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__PickAndPlace_GetResult_Event * data =
      (day2__action__PickAndPlace_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__PickAndPlace_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__PickAndPlace_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__PickAndPlace_GetResult_Event__copy(
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
// #include "day2/action/detail/pick_and_place__functions.h"

bool
day2__action__PickAndPlace_FeedbackMessage__init(day2__action__PickAndPlace_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    day2__action__PickAndPlace_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!day2__action__PickAndPlace_Feedback__init(&msg->feedback)) {
    day2__action__PickAndPlace_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__PickAndPlace_FeedbackMessage__fini(day2__action__PickAndPlace_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  day2__action__PickAndPlace_Feedback__fini(&msg->feedback);
}

bool
day2__action__PickAndPlace_FeedbackMessage__are_equal(const day2__action__PickAndPlace_FeedbackMessage * lhs, const day2__action__PickAndPlace_FeedbackMessage * rhs)
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
  if (!day2__action__PickAndPlace_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
day2__action__PickAndPlace_FeedbackMessage__copy(
  const day2__action__PickAndPlace_FeedbackMessage * input,
  day2__action__PickAndPlace_FeedbackMessage * output)
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
  if (!day2__action__PickAndPlace_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

day2__action__PickAndPlace_FeedbackMessage *
day2__action__PickAndPlace_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_FeedbackMessage * msg = (day2__action__PickAndPlace_FeedbackMessage *)allocator.allocate(sizeof(day2__action__PickAndPlace_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__PickAndPlace_FeedbackMessage));
  bool success = day2__action__PickAndPlace_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__PickAndPlace_FeedbackMessage__destroy(day2__action__PickAndPlace_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__PickAndPlace_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__PickAndPlace_FeedbackMessage__Sequence__init(day2__action__PickAndPlace_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_FeedbackMessage * data = NULL;

  if (size) {
    data = (day2__action__PickAndPlace_FeedbackMessage *)allocator.zero_allocate(size, sizeof(day2__action__PickAndPlace_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__PickAndPlace_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__PickAndPlace_FeedbackMessage__fini(&data[i - 1]);
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
day2__action__PickAndPlace_FeedbackMessage__Sequence__fini(day2__action__PickAndPlace_FeedbackMessage__Sequence * array)
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
      day2__action__PickAndPlace_FeedbackMessage__fini(&array->data[i]);
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

day2__action__PickAndPlace_FeedbackMessage__Sequence *
day2__action__PickAndPlace_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__PickAndPlace_FeedbackMessage__Sequence * array = (day2__action__PickAndPlace_FeedbackMessage__Sequence *)allocator.allocate(sizeof(day2__action__PickAndPlace_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__PickAndPlace_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__PickAndPlace_FeedbackMessage__Sequence__destroy(day2__action__PickAndPlace_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__PickAndPlace_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__PickAndPlace_FeedbackMessage__Sequence__are_equal(const day2__action__PickAndPlace_FeedbackMessage__Sequence * lhs, const day2__action__PickAndPlace_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__PickAndPlace_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__PickAndPlace_FeedbackMessage__Sequence__copy(
  const day2__action__PickAndPlace_FeedbackMessage__Sequence * input,
  day2__action__PickAndPlace_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__PickAndPlace_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__PickAndPlace_FeedbackMessage * data =
      (day2__action__PickAndPlace_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__PickAndPlace_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__PickAndPlace_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__PickAndPlace_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
