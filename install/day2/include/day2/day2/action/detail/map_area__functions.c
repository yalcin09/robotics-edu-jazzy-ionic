// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from day2:action/MapArea.idl
// generated code does not contain a copyright notice
#include "day2/action/detail/map_area__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `boundary_points`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `mapping_mode`
// Member `exploration_pattern`
// Member `active_sensors`
// Member `slam_algorithm`
#include "rosidl_runtime_c/string_functions.h"

bool
day2__action__MapArea_Goal__init(day2__action__MapArea_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // boundary_points
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->boundary_points, 0)) {
    day2__action__MapArea_Goal__fini(msg);
    return false;
  }
  // resolution
  // mapping_mode
  if (!rosidl_runtime_c__String__init(&msg->mapping_mode)) {
    day2__action__MapArea_Goal__fini(msg);
    return false;
  }
  // coverage_percentage
  // include_3d_data
  // max_exploration_speed
  // sensor_overlap_ratio
  // waypoint_spacing
  // exploration_pattern
  if (!rosidl_runtime_c__String__init(&msg->exploration_pattern)) {
    day2__action__MapArea_Goal__fini(msg);
    return false;
  }
  // active_sensors
  if (!rosidl_runtime_c__String__Sequence__init(&msg->active_sensors, 0)) {
    day2__action__MapArea_Goal__fini(msg);
    return false;
  }
  // sensor_range
  // use_slam
  // slam_algorithm
  if (!rosidl_runtime_c__String__init(&msg->slam_algorithm)) {
    day2__action__MapArea_Goal__fini(msg);
    return false;
  }
  // min_quality_threshold
  // optimize_for_accuracy
  // optimize_for_speed
  // timeout_seconds
  return true;
}

void
day2__action__MapArea_Goal__fini(day2__action__MapArea_Goal * msg)
{
  if (!msg) {
    return;
  }
  // boundary_points
  geometry_msgs__msg__Point__Sequence__fini(&msg->boundary_points);
  // resolution
  // mapping_mode
  rosidl_runtime_c__String__fini(&msg->mapping_mode);
  // coverage_percentage
  // include_3d_data
  // max_exploration_speed
  // sensor_overlap_ratio
  // waypoint_spacing
  // exploration_pattern
  rosidl_runtime_c__String__fini(&msg->exploration_pattern);
  // active_sensors
  rosidl_runtime_c__String__Sequence__fini(&msg->active_sensors);
  // sensor_range
  // use_slam
  // slam_algorithm
  rosidl_runtime_c__String__fini(&msg->slam_algorithm);
  // min_quality_threshold
  // optimize_for_accuracy
  // optimize_for_speed
  // timeout_seconds
}

bool
day2__action__MapArea_Goal__are_equal(const day2__action__MapArea_Goal * lhs, const day2__action__MapArea_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // boundary_points
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->boundary_points), &(rhs->boundary_points)))
  {
    return false;
  }
  // resolution
  if (lhs->resolution != rhs->resolution) {
    return false;
  }
  // mapping_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mapping_mode), &(rhs->mapping_mode)))
  {
    return false;
  }
  // coverage_percentage
  if (lhs->coverage_percentage != rhs->coverage_percentage) {
    return false;
  }
  // include_3d_data
  if (lhs->include_3d_data != rhs->include_3d_data) {
    return false;
  }
  // max_exploration_speed
  if (lhs->max_exploration_speed != rhs->max_exploration_speed) {
    return false;
  }
  // sensor_overlap_ratio
  if (lhs->sensor_overlap_ratio != rhs->sensor_overlap_ratio) {
    return false;
  }
  // waypoint_spacing
  if (lhs->waypoint_spacing != rhs->waypoint_spacing) {
    return false;
  }
  // exploration_pattern
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->exploration_pattern), &(rhs->exploration_pattern)))
  {
    return false;
  }
  // active_sensors
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->active_sensors), &(rhs->active_sensors)))
  {
    return false;
  }
  // sensor_range
  if (lhs->sensor_range != rhs->sensor_range) {
    return false;
  }
  // use_slam
  if (lhs->use_slam != rhs->use_slam) {
    return false;
  }
  // slam_algorithm
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->slam_algorithm), &(rhs->slam_algorithm)))
  {
    return false;
  }
  // min_quality_threshold
  if (lhs->min_quality_threshold != rhs->min_quality_threshold) {
    return false;
  }
  // optimize_for_accuracy
  if (lhs->optimize_for_accuracy != rhs->optimize_for_accuracy) {
    return false;
  }
  // optimize_for_speed
  if (lhs->optimize_for_speed != rhs->optimize_for_speed) {
    return false;
  }
  // timeout_seconds
  if (lhs->timeout_seconds != rhs->timeout_seconds) {
    return false;
  }
  return true;
}

bool
day2__action__MapArea_Goal__copy(
  const day2__action__MapArea_Goal * input,
  day2__action__MapArea_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // boundary_points
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->boundary_points), &(output->boundary_points)))
  {
    return false;
  }
  // resolution
  output->resolution = input->resolution;
  // mapping_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mapping_mode), &(output->mapping_mode)))
  {
    return false;
  }
  // coverage_percentage
  output->coverage_percentage = input->coverage_percentage;
  // include_3d_data
  output->include_3d_data = input->include_3d_data;
  // max_exploration_speed
  output->max_exploration_speed = input->max_exploration_speed;
  // sensor_overlap_ratio
  output->sensor_overlap_ratio = input->sensor_overlap_ratio;
  // waypoint_spacing
  output->waypoint_spacing = input->waypoint_spacing;
  // exploration_pattern
  if (!rosidl_runtime_c__String__copy(
      &(input->exploration_pattern), &(output->exploration_pattern)))
  {
    return false;
  }
  // active_sensors
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->active_sensors), &(output->active_sensors)))
  {
    return false;
  }
  // sensor_range
  output->sensor_range = input->sensor_range;
  // use_slam
  output->use_slam = input->use_slam;
  // slam_algorithm
  if (!rosidl_runtime_c__String__copy(
      &(input->slam_algorithm), &(output->slam_algorithm)))
  {
    return false;
  }
  // min_quality_threshold
  output->min_quality_threshold = input->min_quality_threshold;
  // optimize_for_accuracy
  output->optimize_for_accuracy = input->optimize_for_accuracy;
  // optimize_for_speed
  output->optimize_for_speed = input->optimize_for_speed;
  // timeout_seconds
  output->timeout_seconds = input->timeout_seconds;
  return true;
}

day2__action__MapArea_Goal *
day2__action__MapArea_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_Goal * msg = (day2__action__MapArea_Goal *)allocator.allocate(sizeof(day2__action__MapArea_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__MapArea_Goal));
  bool success = day2__action__MapArea_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__MapArea_Goal__destroy(day2__action__MapArea_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__MapArea_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__MapArea_Goal__Sequence__init(day2__action__MapArea_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_Goal * data = NULL;

  if (size) {
    data = (day2__action__MapArea_Goal *)allocator.zero_allocate(size, sizeof(day2__action__MapArea_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__MapArea_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__MapArea_Goal__fini(&data[i - 1]);
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
day2__action__MapArea_Goal__Sequence__fini(day2__action__MapArea_Goal__Sequence * array)
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
      day2__action__MapArea_Goal__fini(&array->data[i]);
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

day2__action__MapArea_Goal__Sequence *
day2__action__MapArea_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_Goal__Sequence * array = (day2__action__MapArea_Goal__Sequence *)allocator.allocate(sizeof(day2__action__MapArea_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__MapArea_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__MapArea_Goal__Sequence__destroy(day2__action__MapArea_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__MapArea_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__MapArea_Goal__Sequence__are_equal(const day2__action__MapArea_Goal__Sequence * lhs, const day2__action__MapArea_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__MapArea_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__MapArea_Goal__Sequence__copy(
  const day2__action__MapArea_Goal__Sequence * input,
  day2__action__MapArea_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__MapArea_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__MapArea_Goal * data =
      (day2__action__MapArea_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__MapArea_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__MapArea_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__MapArea_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result_message`
// Member `map_topic`
// Member `map_file_path`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
day2__action__MapArea_Result__init(day2__action__MapArea_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // result_message
  if (!rosidl_runtime_c__String__init(&msg->result_message)) {
    day2__action__MapArea_Result__fini(msg);
    return false;
  }
  // map_topic
  if (!rosidl_runtime_c__String__init(&msg->map_topic)) {
    day2__action__MapArea_Result__fini(msg);
    return false;
  }
  // map_file_path
  if (!rosidl_runtime_c__String__init(&msg->map_file_path)) {
    day2__action__MapArea_Result__fini(msg);
    return false;
  }
  // area_covered
  // coverage_percentage
  // map_accuracy
  // feature_density
  // total_mapping_time
  // total_distance_traveled
  // total_sensor_readings
  // average_mapping_speed
  // map_width_pixels
  // map_height_pixels
  // occupied_cells
  // free_cells
  // unknown_cells
  // error_code
  return true;
}

void
day2__action__MapArea_Result__fini(day2__action__MapArea_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // result_message
  rosidl_runtime_c__String__fini(&msg->result_message);
  // map_topic
  rosidl_runtime_c__String__fini(&msg->map_topic);
  // map_file_path
  rosidl_runtime_c__String__fini(&msg->map_file_path);
  // area_covered
  // coverage_percentage
  // map_accuracy
  // feature_density
  // total_mapping_time
  // total_distance_traveled
  // total_sensor_readings
  // average_mapping_speed
  // map_width_pixels
  // map_height_pixels
  // occupied_cells
  // free_cells
  // unknown_cells
  // error_code
}

bool
day2__action__MapArea_Result__are_equal(const day2__action__MapArea_Result * lhs, const day2__action__MapArea_Result * rhs)
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
  // map_topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_topic), &(rhs->map_topic)))
  {
    return false;
  }
  // map_file_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_file_path), &(rhs->map_file_path)))
  {
    return false;
  }
  // area_covered
  if (lhs->area_covered != rhs->area_covered) {
    return false;
  }
  // coverage_percentage
  if (lhs->coverage_percentage != rhs->coverage_percentage) {
    return false;
  }
  // map_accuracy
  if (lhs->map_accuracy != rhs->map_accuracy) {
    return false;
  }
  // feature_density
  if (lhs->feature_density != rhs->feature_density) {
    return false;
  }
  // total_mapping_time
  if (lhs->total_mapping_time != rhs->total_mapping_time) {
    return false;
  }
  // total_distance_traveled
  if (lhs->total_distance_traveled != rhs->total_distance_traveled) {
    return false;
  }
  // total_sensor_readings
  if (lhs->total_sensor_readings != rhs->total_sensor_readings) {
    return false;
  }
  // average_mapping_speed
  if (lhs->average_mapping_speed != rhs->average_mapping_speed) {
    return false;
  }
  // map_width_pixels
  if (lhs->map_width_pixels != rhs->map_width_pixels) {
    return false;
  }
  // map_height_pixels
  if (lhs->map_height_pixels != rhs->map_height_pixels) {
    return false;
  }
  // occupied_cells
  if (lhs->occupied_cells != rhs->occupied_cells) {
    return false;
  }
  // free_cells
  if (lhs->free_cells != rhs->free_cells) {
    return false;
  }
  // unknown_cells
  if (lhs->unknown_cells != rhs->unknown_cells) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  return true;
}

bool
day2__action__MapArea_Result__copy(
  const day2__action__MapArea_Result * input,
  day2__action__MapArea_Result * output)
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
  // map_topic
  if (!rosidl_runtime_c__String__copy(
      &(input->map_topic), &(output->map_topic)))
  {
    return false;
  }
  // map_file_path
  if (!rosidl_runtime_c__String__copy(
      &(input->map_file_path), &(output->map_file_path)))
  {
    return false;
  }
  // area_covered
  output->area_covered = input->area_covered;
  // coverage_percentage
  output->coverage_percentage = input->coverage_percentage;
  // map_accuracy
  output->map_accuracy = input->map_accuracy;
  // feature_density
  output->feature_density = input->feature_density;
  // total_mapping_time
  output->total_mapping_time = input->total_mapping_time;
  // total_distance_traveled
  output->total_distance_traveled = input->total_distance_traveled;
  // total_sensor_readings
  output->total_sensor_readings = input->total_sensor_readings;
  // average_mapping_speed
  output->average_mapping_speed = input->average_mapping_speed;
  // map_width_pixels
  output->map_width_pixels = input->map_width_pixels;
  // map_height_pixels
  output->map_height_pixels = input->map_height_pixels;
  // occupied_cells
  output->occupied_cells = input->occupied_cells;
  // free_cells
  output->free_cells = input->free_cells;
  // unknown_cells
  output->unknown_cells = input->unknown_cells;
  // error_code
  output->error_code = input->error_code;
  return true;
}

day2__action__MapArea_Result *
day2__action__MapArea_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_Result * msg = (day2__action__MapArea_Result *)allocator.allocate(sizeof(day2__action__MapArea_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__MapArea_Result));
  bool success = day2__action__MapArea_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__MapArea_Result__destroy(day2__action__MapArea_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__MapArea_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__MapArea_Result__Sequence__init(day2__action__MapArea_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_Result * data = NULL;

  if (size) {
    data = (day2__action__MapArea_Result *)allocator.zero_allocate(size, sizeof(day2__action__MapArea_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__MapArea_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__MapArea_Result__fini(&data[i - 1]);
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
day2__action__MapArea_Result__Sequence__fini(day2__action__MapArea_Result__Sequence * array)
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
      day2__action__MapArea_Result__fini(&array->data[i]);
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

day2__action__MapArea_Result__Sequence *
day2__action__MapArea_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_Result__Sequence * array = (day2__action__MapArea_Result__Sequence *)allocator.allocate(sizeof(day2__action__MapArea_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__MapArea_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__MapArea_Result__Sequence__destroy(day2__action__MapArea_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__MapArea_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__MapArea_Result__Sequence__are_equal(const day2__action__MapArea_Result__Sequence * lhs, const day2__action__MapArea_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__MapArea_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__MapArea_Result__Sequence__copy(
  const day2__action__MapArea_Result__Sequence * input,
  day2__action__MapArea_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__MapArea_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__MapArea_Result * data =
      (day2__action__MapArea_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__MapArea_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__MapArea_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__MapArea_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_position`
// Member `next_target`
// already included above
// #include "geometry_msgs/msg/detail/point__functions.h"
// Member `current_phase`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `sensor_active_status`
// Member `sensor_data_quality`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `last_sensor_update`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
day2__action__MapArea_Feedback__init(day2__action__MapArea_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_position
  if (!geometry_msgs__msg__Point__init(&msg->current_position)) {
    day2__action__MapArea_Feedback__fini(msg);
    return false;
  }
  // area_mapped_so_far
  // coverage_percentage
  // estimated_time_remaining
  // current_phase
  if (!rosidl_runtime_c__String__init(&msg->current_phase)) {
    day2__action__MapArea_Feedback__fini(msg);
    return false;
  }
  // next_target
  if (!geometry_msgs__msg__Point__init(&msg->next_target)) {
    day2__action__MapArea_Feedback__fini(msg);
    return false;
  }
  // waypoints_completed
  // total_waypoints
  // current_map_width
  // current_map_height
  // current_resolution
  // new_features_detected
  // sensor_active_status
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->sensor_active_status, 0)) {
    day2__action__MapArea_Feedback__fini(msg);
    return false;
  }
  // sensor_data_quality
  if (!rosidl_runtime_c__float__Sequence__init(&msg->sensor_data_quality, 0)) {
    day2__action__MapArea_Feedback__fini(msg);
    return false;
  }
  // sensor_readings_per_second
  // localization_confidence
  // loop_closures_detected
  // pose_uncertainty
  // cpu_usage
  // memory_usage
  // storage_space_used
  // last_sensor_update
  if (!builtin_interfaces__msg__Time__init(&msg->last_sensor_update)) {
    day2__action__MapArea_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__MapArea_Feedback__fini(day2__action__MapArea_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_position
  geometry_msgs__msg__Point__fini(&msg->current_position);
  // area_mapped_so_far
  // coverage_percentage
  // estimated_time_remaining
  // current_phase
  rosidl_runtime_c__String__fini(&msg->current_phase);
  // next_target
  geometry_msgs__msg__Point__fini(&msg->next_target);
  // waypoints_completed
  // total_waypoints
  // current_map_width
  // current_map_height
  // current_resolution
  // new_features_detected
  // sensor_active_status
  rosidl_runtime_c__boolean__Sequence__fini(&msg->sensor_active_status);
  // sensor_data_quality
  rosidl_runtime_c__float__Sequence__fini(&msg->sensor_data_quality);
  // sensor_readings_per_second
  // localization_confidence
  // loop_closures_detected
  // pose_uncertainty
  // cpu_usage
  // memory_usage
  // storage_space_used
  // last_sensor_update
  builtin_interfaces__msg__Time__fini(&msg->last_sensor_update);
}

bool
day2__action__MapArea_Feedback__are_equal(const day2__action__MapArea_Feedback * lhs, const day2__action__MapArea_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->current_position), &(rhs->current_position)))
  {
    return false;
  }
  // area_mapped_so_far
  if (lhs->area_mapped_so_far != rhs->area_mapped_so_far) {
    return false;
  }
  // coverage_percentage
  if (lhs->coverage_percentage != rhs->coverage_percentage) {
    return false;
  }
  // estimated_time_remaining
  if (lhs->estimated_time_remaining != rhs->estimated_time_remaining) {
    return false;
  }
  // current_phase
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_phase), &(rhs->current_phase)))
  {
    return false;
  }
  // next_target
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->next_target), &(rhs->next_target)))
  {
    return false;
  }
  // waypoints_completed
  if (lhs->waypoints_completed != rhs->waypoints_completed) {
    return false;
  }
  // total_waypoints
  if (lhs->total_waypoints != rhs->total_waypoints) {
    return false;
  }
  // current_map_width
  if (lhs->current_map_width != rhs->current_map_width) {
    return false;
  }
  // current_map_height
  if (lhs->current_map_height != rhs->current_map_height) {
    return false;
  }
  // current_resolution
  if (lhs->current_resolution != rhs->current_resolution) {
    return false;
  }
  // new_features_detected
  if (lhs->new_features_detected != rhs->new_features_detected) {
    return false;
  }
  // sensor_active_status
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->sensor_active_status), &(rhs->sensor_active_status)))
  {
    return false;
  }
  // sensor_data_quality
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->sensor_data_quality), &(rhs->sensor_data_quality)))
  {
    return false;
  }
  // sensor_readings_per_second
  if (lhs->sensor_readings_per_second != rhs->sensor_readings_per_second) {
    return false;
  }
  // localization_confidence
  if (lhs->localization_confidence != rhs->localization_confidence) {
    return false;
  }
  // loop_closures_detected
  if (lhs->loop_closures_detected != rhs->loop_closures_detected) {
    return false;
  }
  // pose_uncertainty
  if (lhs->pose_uncertainty != rhs->pose_uncertainty) {
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
  // storage_space_used
  if (lhs->storage_space_used != rhs->storage_space_used) {
    return false;
  }
  // last_sensor_update
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->last_sensor_update), &(rhs->last_sensor_update)))
  {
    return false;
  }
  return true;
}

bool
day2__action__MapArea_Feedback__copy(
  const day2__action__MapArea_Feedback * input,
  day2__action__MapArea_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->current_position), &(output->current_position)))
  {
    return false;
  }
  // area_mapped_so_far
  output->area_mapped_so_far = input->area_mapped_so_far;
  // coverage_percentage
  output->coverage_percentage = input->coverage_percentage;
  // estimated_time_remaining
  output->estimated_time_remaining = input->estimated_time_remaining;
  // current_phase
  if (!rosidl_runtime_c__String__copy(
      &(input->current_phase), &(output->current_phase)))
  {
    return false;
  }
  // next_target
  if (!geometry_msgs__msg__Point__copy(
      &(input->next_target), &(output->next_target)))
  {
    return false;
  }
  // waypoints_completed
  output->waypoints_completed = input->waypoints_completed;
  // total_waypoints
  output->total_waypoints = input->total_waypoints;
  // current_map_width
  output->current_map_width = input->current_map_width;
  // current_map_height
  output->current_map_height = input->current_map_height;
  // current_resolution
  output->current_resolution = input->current_resolution;
  // new_features_detected
  output->new_features_detected = input->new_features_detected;
  // sensor_active_status
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->sensor_active_status), &(output->sensor_active_status)))
  {
    return false;
  }
  // sensor_data_quality
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->sensor_data_quality), &(output->sensor_data_quality)))
  {
    return false;
  }
  // sensor_readings_per_second
  output->sensor_readings_per_second = input->sensor_readings_per_second;
  // localization_confidence
  output->localization_confidence = input->localization_confidence;
  // loop_closures_detected
  output->loop_closures_detected = input->loop_closures_detected;
  // pose_uncertainty
  output->pose_uncertainty = input->pose_uncertainty;
  // cpu_usage
  output->cpu_usage = input->cpu_usage;
  // memory_usage
  output->memory_usage = input->memory_usage;
  // storage_space_used
  output->storage_space_used = input->storage_space_used;
  // last_sensor_update
  if (!builtin_interfaces__msg__Time__copy(
      &(input->last_sensor_update), &(output->last_sensor_update)))
  {
    return false;
  }
  return true;
}

day2__action__MapArea_Feedback *
day2__action__MapArea_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_Feedback * msg = (day2__action__MapArea_Feedback *)allocator.allocate(sizeof(day2__action__MapArea_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__MapArea_Feedback));
  bool success = day2__action__MapArea_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__MapArea_Feedback__destroy(day2__action__MapArea_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__MapArea_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__MapArea_Feedback__Sequence__init(day2__action__MapArea_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_Feedback * data = NULL;

  if (size) {
    data = (day2__action__MapArea_Feedback *)allocator.zero_allocate(size, sizeof(day2__action__MapArea_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__MapArea_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__MapArea_Feedback__fini(&data[i - 1]);
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
day2__action__MapArea_Feedback__Sequence__fini(day2__action__MapArea_Feedback__Sequence * array)
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
      day2__action__MapArea_Feedback__fini(&array->data[i]);
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

day2__action__MapArea_Feedback__Sequence *
day2__action__MapArea_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_Feedback__Sequence * array = (day2__action__MapArea_Feedback__Sequence *)allocator.allocate(sizeof(day2__action__MapArea_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__MapArea_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__MapArea_Feedback__Sequence__destroy(day2__action__MapArea_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__MapArea_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__MapArea_Feedback__Sequence__are_equal(const day2__action__MapArea_Feedback__Sequence * lhs, const day2__action__MapArea_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__MapArea_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__MapArea_Feedback__Sequence__copy(
  const day2__action__MapArea_Feedback__Sequence * input,
  day2__action__MapArea_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__MapArea_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__MapArea_Feedback * data =
      (day2__action__MapArea_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__MapArea_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__MapArea_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__MapArea_Feedback__copy(
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
// #include "day2/action/detail/map_area__functions.h"

bool
day2__action__MapArea_SendGoal_Request__init(day2__action__MapArea_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    day2__action__MapArea_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!day2__action__MapArea_Goal__init(&msg->goal)) {
    day2__action__MapArea_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__MapArea_SendGoal_Request__fini(day2__action__MapArea_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  day2__action__MapArea_Goal__fini(&msg->goal);
}

bool
day2__action__MapArea_SendGoal_Request__are_equal(const day2__action__MapArea_SendGoal_Request * lhs, const day2__action__MapArea_SendGoal_Request * rhs)
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
  if (!day2__action__MapArea_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
day2__action__MapArea_SendGoal_Request__copy(
  const day2__action__MapArea_SendGoal_Request * input,
  day2__action__MapArea_SendGoal_Request * output)
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
  if (!day2__action__MapArea_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

day2__action__MapArea_SendGoal_Request *
day2__action__MapArea_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_SendGoal_Request * msg = (day2__action__MapArea_SendGoal_Request *)allocator.allocate(sizeof(day2__action__MapArea_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__MapArea_SendGoal_Request));
  bool success = day2__action__MapArea_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__MapArea_SendGoal_Request__destroy(day2__action__MapArea_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__MapArea_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__MapArea_SendGoal_Request__Sequence__init(day2__action__MapArea_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_SendGoal_Request * data = NULL;

  if (size) {
    data = (day2__action__MapArea_SendGoal_Request *)allocator.zero_allocate(size, sizeof(day2__action__MapArea_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__MapArea_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__MapArea_SendGoal_Request__fini(&data[i - 1]);
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
day2__action__MapArea_SendGoal_Request__Sequence__fini(day2__action__MapArea_SendGoal_Request__Sequence * array)
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
      day2__action__MapArea_SendGoal_Request__fini(&array->data[i]);
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

day2__action__MapArea_SendGoal_Request__Sequence *
day2__action__MapArea_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_SendGoal_Request__Sequence * array = (day2__action__MapArea_SendGoal_Request__Sequence *)allocator.allocate(sizeof(day2__action__MapArea_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__MapArea_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__MapArea_SendGoal_Request__Sequence__destroy(day2__action__MapArea_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__MapArea_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__MapArea_SendGoal_Request__Sequence__are_equal(const day2__action__MapArea_SendGoal_Request__Sequence * lhs, const day2__action__MapArea_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__MapArea_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__MapArea_SendGoal_Request__Sequence__copy(
  const day2__action__MapArea_SendGoal_Request__Sequence * input,
  day2__action__MapArea_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__MapArea_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__MapArea_SendGoal_Request * data =
      (day2__action__MapArea_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__MapArea_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__MapArea_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__MapArea_SendGoal_Request__copy(
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
day2__action__MapArea_SendGoal_Response__init(day2__action__MapArea_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    day2__action__MapArea_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__MapArea_SendGoal_Response__fini(day2__action__MapArea_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
day2__action__MapArea_SendGoal_Response__are_equal(const day2__action__MapArea_SendGoal_Response * lhs, const day2__action__MapArea_SendGoal_Response * rhs)
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
day2__action__MapArea_SendGoal_Response__copy(
  const day2__action__MapArea_SendGoal_Response * input,
  day2__action__MapArea_SendGoal_Response * output)
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

day2__action__MapArea_SendGoal_Response *
day2__action__MapArea_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_SendGoal_Response * msg = (day2__action__MapArea_SendGoal_Response *)allocator.allocate(sizeof(day2__action__MapArea_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__MapArea_SendGoal_Response));
  bool success = day2__action__MapArea_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__MapArea_SendGoal_Response__destroy(day2__action__MapArea_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__MapArea_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__MapArea_SendGoal_Response__Sequence__init(day2__action__MapArea_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_SendGoal_Response * data = NULL;

  if (size) {
    data = (day2__action__MapArea_SendGoal_Response *)allocator.zero_allocate(size, sizeof(day2__action__MapArea_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__MapArea_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__MapArea_SendGoal_Response__fini(&data[i - 1]);
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
day2__action__MapArea_SendGoal_Response__Sequence__fini(day2__action__MapArea_SendGoal_Response__Sequence * array)
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
      day2__action__MapArea_SendGoal_Response__fini(&array->data[i]);
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

day2__action__MapArea_SendGoal_Response__Sequence *
day2__action__MapArea_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_SendGoal_Response__Sequence * array = (day2__action__MapArea_SendGoal_Response__Sequence *)allocator.allocate(sizeof(day2__action__MapArea_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__MapArea_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__MapArea_SendGoal_Response__Sequence__destroy(day2__action__MapArea_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__MapArea_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__MapArea_SendGoal_Response__Sequence__are_equal(const day2__action__MapArea_SendGoal_Response__Sequence * lhs, const day2__action__MapArea_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__MapArea_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__MapArea_SendGoal_Response__Sequence__copy(
  const day2__action__MapArea_SendGoal_Response__Sequence * input,
  day2__action__MapArea_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__MapArea_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__MapArea_SendGoal_Response * data =
      (day2__action__MapArea_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__MapArea_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__MapArea_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__MapArea_SendGoal_Response__copy(
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
// #include "day2/action/detail/map_area__functions.h"

bool
day2__action__MapArea_SendGoal_Event__init(day2__action__MapArea_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    day2__action__MapArea_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!day2__action__MapArea_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    day2__action__MapArea_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!day2__action__MapArea_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    day2__action__MapArea_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__MapArea_SendGoal_Event__fini(day2__action__MapArea_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  day2__action__MapArea_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  day2__action__MapArea_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
day2__action__MapArea_SendGoal_Event__are_equal(const day2__action__MapArea_SendGoal_Event * lhs, const day2__action__MapArea_SendGoal_Event * rhs)
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
  if (!day2__action__MapArea_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!day2__action__MapArea_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
day2__action__MapArea_SendGoal_Event__copy(
  const day2__action__MapArea_SendGoal_Event * input,
  day2__action__MapArea_SendGoal_Event * output)
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
  if (!day2__action__MapArea_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!day2__action__MapArea_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

day2__action__MapArea_SendGoal_Event *
day2__action__MapArea_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_SendGoal_Event * msg = (day2__action__MapArea_SendGoal_Event *)allocator.allocate(sizeof(day2__action__MapArea_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__MapArea_SendGoal_Event));
  bool success = day2__action__MapArea_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__MapArea_SendGoal_Event__destroy(day2__action__MapArea_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__MapArea_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__MapArea_SendGoal_Event__Sequence__init(day2__action__MapArea_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_SendGoal_Event * data = NULL;

  if (size) {
    data = (day2__action__MapArea_SendGoal_Event *)allocator.zero_allocate(size, sizeof(day2__action__MapArea_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__MapArea_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__MapArea_SendGoal_Event__fini(&data[i - 1]);
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
day2__action__MapArea_SendGoal_Event__Sequence__fini(day2__action__MapArea_SendGoal_Event__Sequence * array)
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
      day2__action__MapArea_SendGoal_Event__fini(&array->data[i]);
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

day2__action__MapArea_SendGoal_Event__Sequence *
day2__action__MapArea_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_SendGoal_Event__Sequence * array = (day2__action__MapArea_SendGoal_Event__Sequence *)allocator.allocate(sizeof(day2__action__MapArea_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__MapArea_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__MapArea_SendGoal_Event__Sequence__destroy(day2__action__MapArea_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__MapArea_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__MapArea_SendGoal_Event__Sequence__are_equal(const day2__action__MapArea_SendGoal_Event__Sequence * lhs, const day2__action__MapArea_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__MapArea_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__MapArea_SendGoal_Event__Sequence__copy(
  const day2__action__MapArea_SendGoal_Event__Sequence * input,
  day2__action__MapArea_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__MapArea_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__MapArea_SendGoal_Event * data =
      (day2__action__MapArea_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__MapArea_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__MapArea_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__MapArea_SendGoal_Event__copy(
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
day2__action__MapArea_GetResult_Request__init(day2__action__MapArea_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    day2__action__MapArea_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__MapArea_GetResult_Request__fini(day2__action__MapArea_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
day2__action__MapArea_GetResult_Request__are_equal(const day2__action__MapArea_GetResult_Request * lhs, const day2__action__MapArea_GetResult_Request * rhs)
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
day2__action__MapArea_GetResult_Request__copy(
  const day2__action__MapArea_GetResult_Request * input,
  day2__action__MapArea_GetResult_Request * output)
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

day2__action__MapArea_GetResult_Request *
day2__action__MapArea_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_GetResult_Request * msg = (day2__action__MapArea_GetResult_Request *)allocator.allocate(sizeof(day2__action__MapArea_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__MapArea_GetResult_Request));
  bool success = day2__action__MapArea_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__MapArea_GetResult_Request__destroy(day2__action__MapArea_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__MapArea_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__MapArea_GetResult_Request__Sequence__init(day2__action__MapArea_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_GetResult_Request * data = NULL;

  if (size) {
    data = (day2__action__MapArea_GetResult_Request *)allocator.zero_allocate(size, sizeof(day2__action__MapArea_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__MapArea_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__MapArea_GetResult_Request__fini(&data[i - 1]);
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
day2__action__MapArea_GetResult_Request__Sequence__fini(day2__action__MapArea_GetResult_Request__Sequence * array)
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
      day2__action__MapArea_GetResult_Request__fini(&array->data[i]);
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

day2__action__MapArea_GetResult_Request__Sequence *
day2__action__MapArea_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_GetResult_Request__Sequence * array = (day2__action__MapArea_GetResult_Request__Sequence *)allocator.allocate(sizeof(day2__action__MapArea_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__MapArea_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__MapArea_GetResult_Request__Sequence__destroy(day2__action__MapArea_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__MapArea_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__MapArea_GetResult_Request__Sequence__are_equal(const day2__action__MapArea_GetResult_Request__Sequence * lhs, const day2__action__MapArea_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__MapArea_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__MapArea_GetResult_Request__Sequence__copy(
  const day2__action__MapArea_GetResult_Request__Sequence * input,
  day2__action__MapArea_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__MapArea_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__MapArea_GetResult_Request * data =
      (day2__action__MapArea_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__MapArea_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__MapArea_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__MapArea_GetResult_Request__copy(
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
// #include "day2/action/detail/map_area__functions.h"

bool
day2__action__MapArea_GetResult_Response__init(day2__action__MapArea_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!day2__action__MapArea_Result__init(&msg->result)) {
    day2__action__MapArea_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__MapArea_GetResult_Response__fini(day2__action__MapArea_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  day2__action__MapArea_Result__fini(&msg->result);
}

bool
day2__action__MapArea_GetResult_Response__are_equal(const day2__action__MapArea_GetResult_Response * lhs, const day2__action__MapArea_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!day2__action__MapArea_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
day2__action__MapArea_GetResult_Response__copy(
  const day2__action__MapArea_GetResult_Response * input,
  day2__action__MapArea_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!day2__action__MapArea_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

day2__action__MapArea_GetResult_Response *
day2__action__MapArea_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_GetResult_Response * msg = (day2__action__MapArea_GetResult_Response *)allocator.allocate(sizeof(day2__action__MapArea_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__MapArea_GetResult_Response));
  bool success = day2__action__MapArea_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__MapArea_GetResult_Response__destroy(day2__action__MapArea_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__MapArea_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__MapArea_GetResult_Response__Sequence__init(day2__action__MapArea_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_GetResult_Response * data = NULL;

  if (size) {
    data = (day2__action__MapArea_GetResult_Response *)allocator.zero_allocate(size, sizeof(day2__action__MapArea_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__MapArea_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__MapArea_GetResult_Response__fini(&data[i - 1]);
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
day2__action__MapArea_GetResult_Response__Sequence__fini(day2__action__MapArea_GetResult_Response__Sequence * array)
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
      day2__action__MapArea_GetResult_Response__fini(&array->data[i]);
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

day2__action__MapArea_GetResult_Response__Sequence *
day2__action__MapArea_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_GetResult_Response__Sequence * array = (day2__action__MapArea_GetResult_Response__Sequence *)allocator.allocate(sizeof(day2__action__MapArea_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__MapArea_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__MapArea_GetResult_Response__Sequence__destroy(day2__action__MapArea_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__MapArea_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__MapArea_GetResult_Response__Sequence__are_equal(const day2__action__MapArea_GetResult_Response__Sequence * lhs, const day2__action__MapArea_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__MapArea_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__MapArea_GetResult_Response__Sequence__copy(
  const day2__action__MapArea_GetResult_Response__Sequence * input,
  day2__action__MapArea_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__MapArea_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__MapArea_GetResult_Response * data =
      (day2__action__MapArea_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__MapArea_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__MapArea_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__MapArea_GetResult_Response__copy(
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
// #include "day2/action/detail/map_area__functions.h"

bool
day2__action__MapArea_GetResult_Event__init(day2__action__MapArea_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    day2__action__MapArea_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!day2__action__MapArea_GetResult_Request__Sequence__init(&msg->request, 0)) {
    day2__action__MapArea_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!day2__action__MapArea_GetResult_Response__Sequence__init(&msg->response, 0)) {
    day2__action__MapArea_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__MapArea_GetResult_Event__fini(day2__action__MapArea_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  day2__action__MapArea_GetResult_Request__Sequence__fini(&msg->request);
  // response
  day2__action__MapArea_GetResult_Response__Sequence__fini(&msg->response);
}

bool
day2__action__MapArea_GetResult_Event__are_equal(const day2__action__MapArea_GetResult_Event * lhs, const day2__action__MapArea_GetResult_Event * rhs)
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
  if (!day2__action__MapArea_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!day2__action__MapArea_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
day2__action__MapArea_GetResult_Event__copy(
  const day2__action__MapArea_GetResult_Event * input,
  day2__action__MapArea_GetResult_Event * output)
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
  if (!day2__action__MapArea_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!day2__action__MapArea_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

day2__action__MapArea_GetResult_Event *
day2__action__MapArea_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_GetResult_Event * msg = (day2__action__MapArea_GetResult_Event *)allocator.allocate(sizeof(day2__action__MapArea_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__MapArea_GetResult_Event));
  bool success = day2__action__MapArea_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__MapArea_GetResult_Event__destroy(day2__action__MapArea_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__MapArea_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__MapArea_GetResult_Event__Sequence__init(day2__action__MapArea_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_GetResult_Event * data = NULL;

  if (size) {
    data = (day2__action__MapArea_GetResult_Event *)allocator.zero_allocate(size, sizeof(day2__action__MapArea_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__MapArea_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__MapArea_GetResult_Event__fini(&data[i - 1]);
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
day2__action__MapArea_GetResult_Event__Sequence__fini(day2__action__MapArea_GetResult_Event__Sequence * array)
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
      day2__action__MapArea_GetResult_Event__fini(&array->data[i]);
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

day2__action__MapArea_GetResult_Event__Sequence *
day2__action__MapArea_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_GetResult_Event__Sequence * array = (day2__action__MapArea_GetResult_Event__Sequence *)allocator.allocate(sizeof(day2__action__MapArea_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__MapArea_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__MapArea_GetResult_Event__Sequence__destroy(day2__action__MapArea_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__MapArea_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__MapArea_GetResult_Event__Sequence__are_equal(const day2__action__MapArea_GetResult_Event__Sequence * lhs, const day2__action__MapArea_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__MapArea_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__MapArea_GetResult_Event__Sequence__copy(
  const day2__action__MapArea_GetResult_Event__Sequence * input,
  day2__action__MapArea_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__MapArea_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__MapArea_GetResult_Event * data =
      (day2__action__MapArea_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__MapArea_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__MapArea_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__MapArea_GetResult_Event__copy(
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
// #include "day2/action/detail/map_area__functions.h"

bool
day2__action__MapArea_FeedbackMessage__init(day2__action__MapArea_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    day2__action__MapArea_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!day2__action__MapArea_Feedback__init(&msg->feedback)) {
    day2__action__MapArea_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__MapArea_FeedbackMessage__fini(day2__action__MapArea_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  day2__action__MapArea_Feedback__fini(&msg->feedback);
}

bool
day2__action__MapArea_FeedbackMessage__are_equal(const day2__action__MapArea_FeedbackMessage * lhs, const day2__action__MapArea_FeedbackMessage * rhs)
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
  if (!day2__action__MapArea_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
day2__action__MapArea_FeedbackMessage__copy(
  const day2__action__MapArea_FeedbackMessage * input,
  day2__action__MapArea_FeedbackMessage * output)
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
  if (!day2__action__MapArea_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

day2__action__MapArea_FeedbackMessage *
day2__action__MapArea_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_FeedbackMessage * msg = (day2__action__MapArea_FeedbackMessage *)allocator.allocate(sizeof(day2__action__MapArea_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__MapArea_FeedbackMessage));
  bool success = day2__action__MapArea_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__MapArea_FeedbackMessage__destroy(day2__action__MapArea_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__MapArea_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__MapArea_FeedbackMessage__Sequence__init(day2__action__MapArea_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_FeedbackMessage * data = NULL;

  if (size) {
    data = (day2__action__MapArea_FeedbackMessage *)allocator.zero_allocate(size, sizeof(day2__action__MapArea_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__MapArea_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__MapArea_FeedbackMessage__fini(&data[i - 1]);
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
day2__action__MapArea_FeedbackMessage__Sequence__fini(day2__action__MapArea_FeedbackMessage__Sequence * array)
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
      day2__action__MapArea_FeedbackMessage__fini(&array->data[i]);
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

day2__action__MapArea_FeedbackMessage__Sequence *
day2__action__MapArea_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__MapArea_FeedbackMessage__Sequence * array = (day2__action__MapArea_FeedbackMessage__Sequence *)allocator.allocate(sizeof(day2__action__MapArea_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__MapArea_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__MapArea_FeedbackMessage__Sequence__destroy(day2__action__MapArea_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__MapArea_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__MapArea_FeedbackMessage__Sequence__are_equal(const day2__action__MapArea_FeedbackMessage__Sequence * lhs, const day2__action__MapArea_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__MapArea_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__MapArea_FeedbackMessage__Sequence__copy(
  const day2__action__MapArea_FeedbackMessage__Sequence * input,
  day2__action__MapArea_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__MapArea_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__MapArea_FeedbackMessage * data =
      (day2__action__MapArea_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__MapArea_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__MapArea_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__MapArea_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
