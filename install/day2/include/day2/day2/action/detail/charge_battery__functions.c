// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from day2:action/ChargeBattery.idl
// generated code does not contain a copyright notice
#include "day2/action/detail/charge_battery__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `charging_mode`
// Member `docking_approach`
#include "rosidl_runtime_c/string_functions.h"
// Member `charging_station_location`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
day2__action__ChargeBattery_Goal__init(day2__action__ChargeBattery_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_charge_level
  // charging_mode
  if (!rosidl_runtime_c__String__init(&msg->charging_mode)) {
    day2__action__ChargeBattery_Goal__fini(msg);
    return false;
  }
  // return_to_dock
  // charging_station_location
  if (!geometry_msgs__msg__Point__init(&msg->charging_station_location)) {
    day2__action__ChargeBattery_Goal__fini(msg);
    return false;
  }
  // max_charging_time
  // max_charging_current
  // max_charging_voltage
  // enable_temperature_monitoring
  // max_battery_temperature
  // enable_safety_monitoring
  // emergency_stop_voltage
  // emergency_stop_temperature
  // auto_disconnect_when_full
  // navigate_to_charger
  // docking_precision
  // docking_approach
  if (!rosidl_runtime_c__String__init(&msg->docking_approach)) {
    day2__action__ChargeBattery_Goal__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__ChargeBattery_Goal__fini(day2__action__ChargeBattery_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_charge_level
  // charging_mode
  rosidl_runtime_c__String__fini(&msg->charging_mode);
  // return_to_dock
  // charging_station_location
  geometry_msgs__msg__Point__fini(&msg->charging_station_location);
  // max_charging_time
  // max_charging_current
  // max_charging_voltage
  // enable_temperature_monitoring
  // max_battery_temperature
  // enable_safety_monitoring
  // emergency_stop_voltage
  // emergency_stop_temperature
  // auto_disconnect_when_full
  // navigate_to_charger
  // docking_precision
  // docking_approach
  rosidl_runtime_c__String__fini(&msg->docking_approach);
}

bool
day2__action__ChargeBattery_Goal__are_equal(const day2__action__ChargeBattery_Goal * lhs, const day2__action__ChargeBattery_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_charge_level
  if (lhs->target_charge_level != rhs->target_charge_level) {
    return false;
  }
  // charging_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->charging_mode), &(rhs->charging_mode)))
  {
    return false;
  }
  // return_to_dock
  if (lhs->return_to_dock != rhs->return_to_dock) {
    return false;
  }
  // charging_station_location
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->charging_station_location), &(rhs->charging_station_location)))
  {
    return false;
  }
  // max_charging_time
  if (lhs->max_charging_time != rhs->max_charging_time) {
    return false;
  }
  // max_charging_current
  if (lhs->max_charging_current != rhs->max_charging_current) {
    return false;
  }
  // max_charging_voltage
  if (lhs->max_charging_voltage != rhs->max_charging_voltage) {
    return false;
  }
  // enable_temperature_monitoring
  if (lhs->enable_temperature_monitoring != rhs->enable_temperature_monitoring) {
    return false;
  }
  // max_battery_temperature
  if (lhs->max_battery_temperature != rhs->max_battery_temperature) {
    return false;
  }
  // enable_safety_monitoring
  if (lhs->enable_safety_monitoring != rhs->enable_safety_monitoring) {
    return false;
  }
  // emergency_stop_voltage
  if (lhs->emergency_stop_voltage != rhs->emergency_stop_voltage) {
    return false;
  }
  // emergency_stop_temperature
  if (lhs->emergency_stop_temperature != rhs->emergency_stop_temperature) {
    return false;
  }
  // auto_disconnect_when_full
  if (lhs->auto_disconnect_when_full != rhs->auto_disconnect_when_full) {
    return false;
  }
  // navigate_to_charger
  if (lhs->navigate_to_charger != rhs->navigate_to_charger) {
    return false;
  }
  // docking_precision
  if (lhs->docking_precision != rhs->docking_precision) {
    return false;
  }
  // docking_approach
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->docking_approach), &(rhs->docking_approach)))
  {
    return false;
  }
  return true;
}

bool
day2__action__ChargeBattery_Goal__copy(
  const day2__action__ChargeBattery_Goal * input,
  day2__action__ChargeBattery_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target_charge_level
  output->target_charge_level = input->target_charge_level;
  // charging_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->charging_mode), &(output->charging_mode)))
  {
    return false;
  }
  // return_to_dock
  output->return_to_dock = input->return_to_dock;
  // charging_station_location
  if (!geometry_msgs__msg__Point__copy(
      &(input->charging_station_location), &(output->charging_station_location)))
  {
    return false;
  }
  // max_charging_time
  output->max_charging_time = input->max_charging_time;
  // max_charging_current
  output->max_charging_current = input->max_charging_current;
  // max_charging_voltage
  output->max_charging_voltage = input->max_charging_voltage;
  // enable_temperature_monitoring
  output->enable_temperature_monitoring = input->enable_temperature_monitoring;
  // max_battery_temperature
  output->max_battery_temperature = input->max_battery_temperature;
  // enable_safety_monitoring
  output->enable_safety_monitoring = input->enable_safety_monitoring;
  // emergency_stop_voltage
  output->emergency_stop_voltage = input->emergency_stop_voltage;
  // emergency_stop_temperature
  output->emergency_stop_temperature = input->emergency_stop_temperature;
  // auto_disconnect_when_full
  output->auto_disconnect_when_full = input->auto_disconnect_when_full;
  // navigate_to_charger
  output->navigate_to_charger = input->navigate_to_charger;
  // docking_precision
  output->docking_precision = input->docking_precision;
  // docking_approach
  if (!rosidl_runtime_c__String__copy(
      &(input->docking_approach), &(output->docking_approach)))
  {
    return false;
  }
  return true;
}

day2__action__ChargeBattery_Goal *
day2__action__ChargeBattery_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_Goal * msg = (day2__action__ChargeBattery_Goal *)allocator.allocate(sizeof(day2__action__ChargeBattery_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__ChargeBattery_Goal));
  bool success = day2__action__ChargeBattery_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__ChargeBattery_Goal__destroy(day2__action__ChargeBattery_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__ChargeBattery_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__ChargeBattery_Goal__Sequence__init(day2__action__ChargeBattery_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_Goal * data = NULL;

  if (size) {
    data = (day2__action__ChargeBattery_Goal *)allocator.zero_allocate(size, sizeof(day2__action__ChargeBattery_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__ChargeBattery_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__ChargeBattery_Goal__fini(&data[i - 1]);
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
day2__action__ChargeBattery_Goal__Sequence__fini(day2__action__ChargeBattery_Goal__Sequence * array)
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
      day2__action__ChargeBattery_Goal__fini(&array->data[i]);
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

day2__action__ChargeBattery_Goal__Sequence *
day2__action__ChargeBattery_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_Goal__Sequence * array = (day2__action__ChargeBattery_Goal__Sequence *)allocator.allocate(sizeof(day2__action__ChargeBattery_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__ChargeBattery_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__ChargeBattery_Goal__Sequence__destroy(day2__action__ChargeBattery_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__ChargeBattery_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__ChargeBattery_Goal__Sequence__are_equal(const day2__action__ChargeBattery_Goal__Sequence * lhs, const day2__action__ChargeBattery_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__ChargeBattery_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__ChargeBattery_Goal__Sequence__copy(
  const day2__action__ChargeBattery_Goal__Sequence * input,
  day2__action__ChargeBattery_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__ChargeBattery_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__ChargeBattery_Goal * data =
      (day2__action__ChargeBattery_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__ChargeBattery_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__ChargeBattery_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__ChargeBattery_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `final_docked_position`
// already included above
// #include "geometry_msgs/msg/detail/point__functions.h"

bool
day2__action__ChargeBattery_Result__init(day2__action__ChargeBattery_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // result_message
  if (!rosidl_runtime_c__String__init(&msg->result_message)) {
    day2__action__ChargeBattery_Result__fini(msg);
    return false;
  }
  // final_charge_level
  // total_charging_time
  // energy_transferred
  // average_charging_power
  // charging_efficiency
  // max_temperature_reached
  // battery_health_score
  // charging_cycles_count
  // estimated_battery_lifespan
  // docking_successful
  // docking_time
  // navigation_time
  // final_docked_position
  if (!geometry_msgs__msg__Point__init(&msg->final_docked_position)) {
    day2__action__ChargeBattery_Result__fini(msg);
    return false;
  }
  // error_code
  return true;
}

void
day2__action__ChargeBattery_Result__fini(day2__action__ChargeBattery_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // result_message
  rosidl_runtime_c__String__fini(&msg->result_message);
  // final_charge_level
  // total_charging_time
  // energy_transferred
  // average_charging_power
  // charging_efficiency
  // max_temperature_reached
  // battery_health_score
  // charging_cycles_count
  // estimated_battery_lifespan
  // docking_successful
  // docking_time
  // navigation_time
  // final_docked_position
  geometry_msgs__msg__Point__fini(&msg->final_docked_position);
  // error_code
}

bool
day2__action__ChargeBattery_Result__are_equal(const day2__action__ChargeBattery_Result * lhs, const day2__action__ChargeBattery_Result * rhs)
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
  // final_charge_level
  if (lhs->final_charge_level != rhs->final_charge_level) {
    return false;
  }
  // total_charging_time
  if (lhs->total_charging_time != rhs->total_charging_time) {
    return false;
  }
  // energy_transferred
  if (lhs->energy_transferred != rhs->energy_transferred) {
    return false;
  }
  // average_charging_power
  if (lhs->average_charging_power != rhs->average_charging_power) {
    return false;
  }
  // charging_efficiency
  if (lhs->charging_efficiency != rhs->charging_efficiency) {
    return false;
  }
  // max_temperature_reached
  if (lhs->max_temperature_reached != rhs->max_temperature_reached) {
    return false;
  }
  // battery_health_score
  if (lhs->battery_health_score != rhs->battery_health_score) {
    return false;
  }
  // charging_cycles_count
  if (lhs->charging_cycles_count != rhs->charging_cycles_count) {
    return false;
  }
  // estimated_battery_lifespan
  if (lhs->estimated_battery_lifespan != rhs->estimated_battery_lifespan) {
    return false;
  }
  // docking_successful
  if (lhs->docking_successful != rhs->docking_successful) {
    return false;
  }
  // docking_time
  if (lhs->docking_time != rhs->docking_time) {
    return false;
  }
  // navigation_time
  if (lhs->navigation_time != rhs->navigation_time) {
    return false;
  }
  // final_docked_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->final_docked_position), &(rhs->final_docked_position)))
  {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  return true;
}

bool
day2__action__ChargeBattery_Result__copy(
  const day2__action__ChargeBattery_Result * input,
  day2__action__ChargeBattery_Result * output)
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
  // final_charge_level
  output->final_charge_level = input->final_charge_level;
  // total_charging_time
  output->total_charging_time = input->total_charging_time;
  // energy_transferred
  output->energy_transferred = input->energy_transferred;
  // average_charging_power
  output->average_charging_power = input->average_charging_power;
  // charging_efficiency
  output->charging_efficiency = input->charging_efficiency;
  // max_temperature_reached
  output->max_temperature_reached = input->max_temperature_reached;
  // battery_health_score
  output->battery_health_score = input->battery_health_score;
  // charging_cycles_count
  output->charging_cycles_count = input->charging_cycles_count;
  // estimated_battery_lifespan
  output->estimated_battery_lifespan = input->estimated_battery_lifespan;
  // docking_successful
  output->docking_successful = input->docking_successful;
  // docking_time
  output->docking_time = input->docking_time;
  // navigation_time
  output->navigation_time = input->navigation_time;
  // final_docked_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->final_docked_position), &(output->final_docked_position)))
  {
    return false;
  }
  // error_code
  output->error_code = input->error_code;
  return true;
}

day2__action__ChargeBattery_Result *
day2__action__ChargeBattery_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_Result * msg = (day2__action__ChargeBattery_Result *)allocator.allocate(sizeof(day2__action__ChargeBattery_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__ChargeBattery_Result));
  bool success = day2__action__ChargeBattery_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__ChargeBattery_Result__destroy(day2__action__ChargeBattery_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__ChargeBattery_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__ChargeBattery_Result__Sequence__init(day2__action__ChargeBattery_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_Result * data = NULL;

  if (size) {
    data = (day2__action__ChargeBattery_Result *)allocator.zero_allocate(size, sizeof(day2__action__ChargeBattery_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__ChargeBattery_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__ChargeBattery_Result__fini(&data[i - 1]);
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
day2__action__ChargeBattery_Result__Sequence__fini(day2__action__ChargeBattery_Result__Sequence * array)
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
      day2__action__ChargeBattery_Result__fini(&array->data[i]);
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

day2__action__ChargeBattery_Result__Sequence *
day2__action__ChargeBattery_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_Result__Sequence * array = (day2__action__ChargeBattery_Result__Sequence *)allocator.allocate(sizeof(day2__action__ChargeBattery_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__ChargeBattery_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__ChargeBattery_Result__Sequence__destroy(day2__action__ChargeBattery_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__ChargeBattery_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__ChargeBattery_Result__Sequence__are_equal(const day2__action__ChargeBattery_Result__Sequence * lhs, const day2__action__ChargeBattery_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__ChargeBattery_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__ChargeBattery_Result__Sequence__copy(
  const day2__action__ChargeBattery_Result__Sequence * input,
  day2__action__ChargeBattery_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__ChargeBattery_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__ChargeBattery_Result * data =
      (day2__action__ChargeBattery_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__ChargeBattery_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__ChargeBattery_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__ChargeBattery_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_phase`
// Member `charging_state`
// Member `active_warnings`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `current_position`
// already included above
// #include "geometry_msgs/msg/detail/point__functions.h"
// Member `charging_start_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
day2__action__ChargeBattery_Feedback__init(day2__action__ChargeBattery_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_phase
  if (!rosidl_runtime_c__String__init(&msg->current_phase)) {
    day2__action__ChargeBattery_Feedback__fini(msg);
    return false;
  }
  // current_charge_level
  // charging_progress_percentage
  // estimated_time_to_completion
  // current_voltage
  // current_amperage
  // current_power
  // current_temperature
  // charging_rate
  // charging_state
  if (!rosidl_runtime_c__String__init(&msg->charging_state)) {
    day2__action__ChargeBattery_Feedback__fini(msg);
    return false;
  }
  // time_elapsed
  // current_position
  if (!geometry_msgs__msg__Point__init(&msg->current_position)) {
    day2__action__ChargeBattery_Feedback__fini(msg);
    return false;
  }
  // distance_to_charger
  // charger_in_sight
  // docking_initiated
  // docking_alignment_error
  // connection_established
  // temperature_warning
  // voltage_warning
  // current_warning
  // active_warnings
  if (!rosidl_runtime_c__String__Sequence__init(&msg->active_warnings, 0)) {
    day2__action__ChargeBattery_Feedback__fini(msg);
    return false;
  }
  // charger_efficiency
  // charger_connected
  // charging_start_time
  if (!builtin_interfaces__msg__Time__init(&msg->charging_start_time)) {
    day2__action__ChargeBattery_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__ChargeBattery_Feedback__fini(day2__action__ChargeBattery_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_phase
  rosidl_runtime_c__String__fini(&msg->current_phase);
  // current_charge_level
  // charging_progress_percentage
  // estimated_time_to_completion
  // current_voltage
  // current_amperage
  // current_power
  // current_temperature
  // charging_rate
  // charging_state
  rosidl_runtime_c__String__fini(&msg->charging_state);
  // time_elapsed
  // current_position
  geometry_msgs__msg__Point__fini(&msg->current_position);
  // distance_to_charger
  // charger_in_sight
  // docking_initiated
  // docking_alignment_error
  // connection_established
  // temperature_warning
  // voltage_warning
  // current_warning
  // active_warnings
  rosidl_runtime_c__String__Sequence__fini(&msg->active_warnings);
  // charger_efficiency
  // charger_connected
  // charging_start_time
  builtin_interfaces__msg__Time__fini(&msg->charging_start_time);
}

bool
day2__action__ChargeBattery_Feedback__are_equal(const day2__action__ChargeBattery_Feedback * lhs, const day2__action__ChargeBattery_Feedback * rhs)
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
  // current_charge_level
  if (lhs->current_charge_level != rhs->current_charge_level) {
    return false;
  }
  // charging_progress_percentage
  if (lhs->charging_progress_percentage != rhs->charging_progress_percentage) {
    return false;
  }
  // estimated_time_to_completion
  if (lhs->estimated_time_to_completion != rhs->estimated_time_to_completion) {
    return false;
  }
  // current_voltage
  if (lhs->current_voltage != rhs->current_voltage) {
    return false;
  }
  // current_amperage
  if (lhs->current_amperage != rhs->current_amperage) {
    return false;
  }
  // current_power
  if (lhs->current_power != rhs->current_power) {
    return false;
  }
  // current_temperature
  if (lhs->current_temperature != rhs->current_temperature) {
    return false;
  }
  // charging_rate
  if (lhs->charging_rate != rhs->charging_rate) {
    return false;
  }
  // charging_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->charging_state), &(rhs->charging_state)))
  {
    return false;
  }
  // time_elapsed
  if (lhs->time_elapsed != rhs->time_elapsed) {
    return false;
  }
  // current_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->current_position), &(rhs->current_position)))
  {
    return false;
  }
  // distance_to_charger
  if (lhs->distance_to_charger != rhs->distance_to_charger) {
    return false;
  }
  // charger_in_sight
  if (lhs->charger_in_sight != rhs->charger_in_sight) {
    return false;
  }
  // docking_initiated
  if (lhs->docking_initiated != rhs->docking_initiated) {
    return false;
  }
  // docking_alignment_error
  if (lhs->docking_alignment_error != rhs->docking_alignment_error) {
    return false;
  }
  // connection_established
  if (lhs->connection_established != rhs->connection_established) {
    return false;
  }
  // temperature_warning
  if (lhs->temperature_warning != rhs->temperature_warning) {
    return false;
  }
  // voltage_warning
  if (lhs->voltage_warning != rhs->voltage_warning) {
    return false;
  }
  // current_warning
  if (lhs->current_warning != rhs->current_warning) {
    return false;
  }
  // active_warnings
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->active_warnings), &(rhs->active_warnings)))
  {
    return false;
  }
  // charger_efficiency
  if (lhs->charger_efficiency != rhs->charger_efficiency) {
    return false;
  }
  // charger_connected
  if (lhs->charger_connected != rhs->charger_connected) {
    return false;
  }
  // charging_start_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->charging_start_time), &(rhs->charging_start_time)))
  {
    return false;
  }
  return true;
}

bool
day2__action__ChargeBattery_Feedback__copy(
  const day2__action__ChargeBattery_Feedback * input,
  day2__action__ChargeBattery_Feedback * output)
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
  // current_charge_level
  output->current_charge_level = input->current_charge_level;
  // charging_progress_percentage
  output->charging_progress_percentage = input->charging_progress_percentage;
  // estimated_time_to_completion
  output->estimated_time_to_completion = input->estimated_time_to_completion;
  // current_voltage
  output->current_voltage = input->current_voltage;
  // current_amperage
  output->current_amperage = input->current_amperage;
  // current_power
  output->current_power = input->current_power;
  // current_temperature
  output->current_temperature = input->current_temperature;
  // charging_rate
  output->charging_rate = input->charging_rate;
  // charging_state
  if (!rosidl_runtime_c__String__copy(
      &(input->charging_state), &(output->charging_state)))
  {
    return false;
  }
  // time_elapsed
  output->time_elapsed = input->time_elapsed;
  // current_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->current_position), &(output->current_position)))
  {
    return false;
  }
  // distance_to_charger
  output->distance_to_charger = input->distance_to_charger;
  // charger_in_sight
  output->charger_in_sight = input->charger_in_sight;
  // docking_initiated
  output->docking_initiated = input->docking_initiated;
  // docking_alignment_error
  output->docking_alignment_error = input->docking_alignment_error;
  // connection_established
  output->connection_established = input->connection_established;
  // temperature_warning
  output->temperature_warning = input->temperature_warning;
  // voltage_warning
  output->voltage_warning = input->voltage_warning;
  // current_warning
  output->current_warning = input->current_warning;
  // active_warnings
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->active_warnings), &(output->active_warnings)))
  {
    return false;
  }
  // charger_efficiency
  output->charger_efficiency = input->charger_efficiency;
  // charger_connected
  output->charger_connected = input->charger_connected;
  // charging_start_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->charging_start_time), &(output->charging_start_time)))
  {
    return false;
  }
  return true;
}

day2__action__ChargeBattery_Feedback *
day2__action__ChargeBattery_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_Feedback * msg = (day2__action__ChargeBattery_Feedback *)allocator.allocate(sizeof(day2__action__ChargeBattery_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__ChargeBattery_Feedback));
  bool success = day2__action__ChargeBattery_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__ChargeBattery_Feedback__destroy(day2__action__ChargeBattery_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__ChargeBattery_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__ChargeBattery_Feedback__Sequence__init(day2__action__ChargeBattery_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_Feedback * data = NULL;

  if (size) {
    data = (day2__action__ChargeBattery_Feedback *)allocator.zero_allocate(size, sizeof(day2__action__ChargeBattery_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__ChargeBattery_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__ChargeBattery_Feedback__fini(&data[i - 1]);
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
day2__action__ChargeBattery_Feedback__Sequence__fini(day2__action__ChargeBattery_Feedback__Sequence * array)
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
      day2__action__ChargeBattery_Feedback__fini(&array->data[i]);
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

day2__action__ChargeBattery_Feedback__Sequence *
day2__action__ChargeBattery_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_Feedback__Sequence * array = (day2__action__ChargeBattery_Feedback__Sequence *)allocator.allocate(sizeof(day2__action__ChargeBattery_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__ChargeBattery_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__ChargeBattery_Feedback__Sequence__destroy(day2__action__ChargeBattery_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__ChargeBattery_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__ChargeBattery_Feedback__Sequence__are_equal(const day2__action__ChargeBattery_Feedback__Sequence * lhs, const day2__action__ChargeBattery_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__ChargeBattery_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__ChargeBattery_Feedback__Sequence__copy(
  const day2__action__ChargeBattery_Feedback__Sequence * input,
  day2__action__ChargeBattery_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__ChargeBattery_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__ChargeBattery_Feedback * data =
      (day2__action__ChargeBattery_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__ChargeBattery_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__ChargeBattery_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__ChargeBattery_Feedback__copy(
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
// #include "day2/action/detail/charge_battery__functions.h"

bool
day2__action__ChargeBattery_SendGoal_Request__init(day2__action__ChargeBattery_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    day2__action__ChargeBattery_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!day2__action__ChargeBattery_Goal__init(&msg->goal)) {
    day2__action__ChargeBattery_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__ChargeBattery_SendGoal_Request__fini(day2__action__ChargeBattery_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  day2__action__ChargeBattery_Goal__fini(&msg->goal);
}

bool
day2__action__ChargeBattery_SendGoal_Request__are_equal(const day2__action__ChargeBattery_SendGoal_Request * lhs, const day2__action__ChargeBattery_SendGoal_Request * rhs)
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
  if (!day2__action__ChargeBattery_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
day2__action__ChargeBattery_SendGoal_Request__copy(
  const day2__action__ChargeBattery_SendGoal_Request * input,
  day2__action__ChargeBattery_SendGoal_Request * output)
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
  if (!day2__action__ChargeBattery_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

day2__action__ChargeBattery_SendGoal_Request *
day2__action__ChargeBattery_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_SendGoal_Request * msg = (day2__action__ChargeBattery_SendGoal_Request *)allocator.allocate(sizeof(day2__action__ChargeBattery_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__ChargeBattery_SendGoal_Request));
  bool success = day2__action__ChargeBattery_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__ChargeBattery_SendGoal_Request__destroy(day2__action__ChargeBattery_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__ChargeBattery_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__ChargeBattery_SendGoal_Request__Sequence__init(day2__action__ChargeBattery_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_SendGoal_Request * data = NULL;

  if (size) {
    data = (day2__action__ChargeBattery_SendGoal_Request *)allocator.zero_allocate(size, sizeof(day2__action__ChargeBattery_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__ChargeBattery_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__ChargeBattery_SendGoal_Request__fini(&data[i - 1]);
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
day2__action__ChargeBattery_SendGoal_Request__Sequence__fini(day2__action__ChargeBattery_SendGoal_Request__Sequence * array)
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
      day2__action__ChargeBattery_SendGoal_Request__fini(&array->data[i]);
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

day2__action__ChargeBattery_SendGoal_Request__Sequence *
day2__action__ChargeBattery_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_SendGoal_Request__Sequence * array = (day2__action__ChargeBattery_SendGoal_Request__Sequence *)allocator.allocate(sizeof(day2__action__ChargeBattery_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__ChargeBattery_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__ChargeBattery_SendGoal_Request__Sequence__destroy(day2__action__ChargeBattery_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__ChargeBattery_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__ChargeBattery_SendGoal_Request__Sequence__are_equal(const day2__action__ChargeBattery_SendGoal_Request__Sequence * lhs, const day2__action__ChargeBattery_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__ChargeBattery_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__ChargeBattery_SendGoal_Request__Sequence__copy(
  const day2__action__ChargeBattery_SendGoal_Request__Sequence * input,
  day2__action__ChargeBattery_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__ChargeBattery_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__ChargeBattery_SendGoal_Request * data =
      (day2__action__ChargeBattery_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__ChargeBattery_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__ChargeBattery_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__ChargeBattery_SendGoal_Request__copy(
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
day2__action__ChargeBattery_SendGoal_Response__init(day2__action__ChargeBattery_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    day2__action__ChargeBattery_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__ChargeBattery_SendGoal_Response__fini(day2__action__ChargeBattery_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
day2__action__ChargeBattery_SendGoal_Response__are_equal(const day2__action__ChargeBattery_SendGoal_Response * lhs, const day2__action__ChargeBattery_SendGoal_Response * rhs)
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
day2__action__ChargeBattery_SendGoal_Response__copy(
  const day2__action__ChargeBattery_SendGoal_Response * input,
  day2__action__ChargeBattery_SendGoal_Response * output)
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

day2__action__ChargeBattery_SendGoal_Response *
day2__action__ChargeBattery_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_SendGoal_Response * msg = (day2__action__ChargeBattery_SendGoal_Response *)allocator.allocate(sizeof(day2__action__ChargeBattery_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__ChargeBattery_SendGoal_Response));
  bool success = day2__action__ChargeBattery_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__ChargeBattery_SendGoal_Response__destroy(day2__action__ChargeBattery_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__ChargeBattery_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__ChargeBattery_SendGoal_Response__Sequence__init(day2__action__ChargeBattery_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_SendGoal_Response * data = NULL;

  if (size) {
    data = (day2__action__ChargeBattery_SendGoal_Response *)allocator.zero_allocate(size, sizeof(day2__action__ChargeBattery_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__ChargeBattery_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__ChargeBattery_SendGoal_Response__fini(&data[i - 1]);
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
day2__action__ChargeBattery_SendGoal_Response__Sequence__fini(day2__action__ChargeBattery_SendGoal_Response__Sequence * array)
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
      day2__action__ChargeBattery_SendGoal_Response__fini(&array->data[i]);
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

day2__action__ChargeBattery_SendGoal_Response__Sequence *
day2__action__ChargeBattery_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_SendGoal_Response__Sequence * array = (day2__action__ChargeBattery_SendGoal_Response__Sequence *)allocator.allocate(sizeof(day2__action__ChargeBattery_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__ChargeBattery_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__ChargeBattery_SendGoal_Response__Sequence__destroy(day2__action__ChargeBattery_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__ChargeBattery_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__ChargeBattery_SendGoal_Response__Sequence__are_equal(const day2__action__ChargeBattery_SendGoal_Response__Sequence * lhs, const day2__action__ChargeBattery_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__ChargeBattery_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__ChargeBattery_SendGoal_Response__Sequence__copy(
  const day2__action__ChargeBattery_SendGoal_Response__Sequence * input,
  day2__action__ChargeBattery_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__ChargeBattery_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__ChargeBattery_SendGoal_Response * data =
      (day2__action__ChargeBattery_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__ChargeBattery_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__ChargeBattery_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__ChargeBattery_SendGoal_Response__copy(
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
// #include "day2/action/detail/charge_battery__functions.h"

bool
day2__action__ChargeBattery_SendGoal_Event__init(day2__action__ChargeBattery_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    day2__action__ChargeBattery_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!day2__action__ChargeBattery_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    day2__action__ChargeBattery_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!day2__action__ChargeBattery_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    day2__action__ChargeBattery_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__ChargeBattery_SendGoal_Event__fini(day2__action__ChargeBattery_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  day2__action__ChargeBattery_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  day2__action__ChargeBattery_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
day2__action__ChargeBattery_SendGoal_Event__are_equal(const day2__action__ChargeBattery_SendGoal_Event * lhs, const day2__action__ChargeBattery_SendGoal_Event * rhs)
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
  if (!day2__action__ChargeBattery_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!day2__action__ChargeBattery_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
day2__action__ChargeBattery_SendGoal_Event__copy(
  const day2__action__ChargeBattery_SendGoal_Event * input,
  day2__action__ChargeBattery_SendGoal_Event * output)
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
  if (!day2__action__ChargeBattery_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!day2__action__ChargeBattery_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

day2__action__ChargeBattery_SendGoal_Event *
day2__action__ChargeBattery_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_SendGoal_Event * msg = (day2__action__ChargeBattery_SendGoal_Event *)allocator.allocate(sizeof(day2__action__ChargeBattery_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__ChargeBattery_SendGoal_Event));
  bool success = day2__action__ChargeBattery_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__ChargeBattery_SendGoal_Event__destroy(day2__action__ChargeBattery_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__ChargeBattery_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__ChargeBattery_SendGoal_Event__Sequence__init(day2__action__ChargeBattery_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_SendGoal_Event * data = NULL;

  if (size) {
    data = (day2__action__ChargeBattery_SendGoal_Event *)allocator.zero_allocate(size, sizeof(day2__action__ChargeBattery_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__ChargeBattery_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__ChargeBattery_SendGoal_Event__fini(&data[i - 1]);
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
day2__action__ChargeBattery_SendGoal_Event__Sequence__fini(day2__action__ChargeBattery_SendGoal_Event__Sequence * array)
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
      day2__action__ChargeBattery_SendGoal_Event__fini(&array->data[i]);
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

day2__action__ChargeBattery_SendGoal_Event__Sequence *
day2__action__ChargeBattery_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_SendGoal_Event__Sequence * array = (day2__action__ChargeBattery_SendGoal_Event__Sequence *)allocator.allocate(sizeof(day2__action__ChargeBattery_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__ChargeBattery_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__ChargeBattery_SendGoal_Event__Sequence__destroy(day2__action__ChargeBattery_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__ChargeBattery_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__ChargeBattery_SendGoal_Event__Sequence__are_equal(const day2__action__ChargeBattery_SendGoal_Event__Sequence * lhs, const day2__action__ChargeBattery_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__ChargeBattery_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__ChargeBattery_SendGoal_Event__Sequence__copy(
  const day2__action__ChargeBattery_SendGoal_Event__Sequence * input,
  day2__action__ChargeBattery_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__ChargeBattery_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__ChargeBattery_SendGoal_Event * data =
      (day2__action__ChargeBattery_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__ChargeBattery_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__ChargeBattery_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__ChargeBattery_SendGoal_Event__copy(
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
day2__action__ChargeBattery_GetResult_Request__init(day2__action__ChargeBattery_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    day2__action__ChargeBattery_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__ChargeBattery_GetResult_Request__fini(day2__action__ChargeBattery_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
day2__action__ChargeBattery_GetResult_Request__are_equal(const day2__action__ChargeBattery_GetResult_Request * lhs, const day2__action__ChargeBattery_GetResult_Request * rhs)
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
day2__action__ChargeBattery_GetResult_Request__copy(
  const day2__action__ChargeBattery_GetResult_Request * input,
  day2__action__ChargeBattery_GetResult_Request * output)
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

day2__action__ChargeBattery_GetResult_Request *
day2__action__ChargeBattery_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_GetResult_Request * msg = (day2__action__ChargeBattery_GetResult_Request *)allocator.allocate(sizeof(day2__action__ChargeBattery_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__ChargeBattery_GetResult_Request));
  bool success = day2__action__ChargeBattery_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__ChargeBattery_GetResult_Request__destroy(day2__action__ChargeBattery_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__ChargeBattery_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__ChargeBattery_GetResult_Request__Sequence__init(day2__action__ChargeBattery_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_GetResult_Request * data = NULL;

  if (size) {
    data = (day2__action__ChargeBattery_GetResult_Request *)allocator.zero_allocate(size, sizeof(day2__action__ChargeBattery_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__ChargeBattery_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__ChargeBattery_GetResult_Request__fini(&data[i - 1]);
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
day2__action__ChargeBattery_GetResult_Request__Sequence__fini(day2__action__ChargeBattery_GetResult_Request__Sequence * array)
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
      day2__action__ChargeBattery_GetResult_Request__fini(&array->data[i]);
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

day2__action__ChargeBattery_GetResult_Request__Sequence *
day2__action__ChargeBattery_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_GetResult_Request__Sequence * array = (day2__action__ChargeBattery_GetResult_Request__Sequence *)allocator.allocate(sizeof(day2__action__ChargeBattery_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__ChargeBattery_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__ChargeBattery_GetResult_Request__Sequence__destroy(day2__action__ChargeBattery_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__ChargeBattery_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__ChargeBattery_GetResult_Request__Sequence__are_equal(const day2__action__ChargeBattery_GetResult_Request__Sequence * lhs, const day2__action__ChargeBattery_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__ChargeBattery_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__ChargeBattery_GetResult_Request__Sequence__copy(
  const day2__action__ChargeBattery_GetResult_Request__Sequence * input,
  day2__action__ChargeBattery_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__ChargeBattery_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__ChargeBattery_GetResult_Request * data =
      (day2__action__ChargeBattery_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__ChargeBattery_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__ChargeBattery_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__ChargeBattery_GetResult_Request__copy(
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
// #include "day2/action/detail/charge_battery__functions.h"

bool
day2__action__ChargeBattery_GetResult_Response__init(day2__action__ChargeBattery_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!day2__action__ChargeBattery_Result__init(&msg->result)) {
    day2__action__ChargeBattery_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__ChargeBattery_GetResult_Response__fini(day2__action__ChargeBattery_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  day2__action__ChargeBattery_Result__fini(&msg->result);
}

bool
day2__action__ChargeBattery_GetResult_Response__are_equal(const day2__action__ChargeBattery_GetResult_Response * lhs, const day2__action__ChargeBattery_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!day2__action__ChargeBattery_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
day2__action__ChargeBattery_GetResult_Response__copy(
  const day2__action__ChargeBattery_GetResult_Response * input,
  day2__action__ChargeBattery_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!day2__action__ChargeBattery_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

day2__action__ChargeBattery_GetResult_Response *
day2__action__ChargeBattery_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_GetResult_Response * msg = (day2__action__ChargeBattery_GetResult_Response *)allocator.allocate(sizeof(day2__action__ChargeBattery_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__ChargeBattery_GetResult_Response));
  bool success = day2__action__ChargeBattery_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__ChargeBattery_GetResult_Response__destroy(day2__action__ChargeBattery_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__ChargeBattery_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__ChargeBattery_GetResult_Response__Sequence__init(day2__action__ChargeBattery_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_GetResult_Response * data = NULL;

  if (size) {
    data = (day2__action__ChargeBattery_GetResult_Response *)allocator.zero_allocate(size, sizeof(day2__action__ChargeBattery_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__ChargeBattery_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__ChargeBattery_GetResult_Response__fini(&data[i - 1]);
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
day2__action__ChargeBattery_GetResult_Response__Sequence__fini(day2__action__ChargeBattery_GetResult_Response__Sequence * array)
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
      day2__action__ChargeBattery_GetResult_Response__fini(&array->data[i]);
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

day2__action__ChargeBattery_GetResult_Response__Sequence *
day2__action__ChargeBattery_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_GetResult_Response__Sequence * array = (day2__action__ChargeBattery_GetResult_Response__Sequence *)allocator.allocate(sizeof(day2__action__ChargeBattery_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__ChargeBattery_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__ChargeBattery_GetResult_Response__Sequence__destroy(day2__action__ChargeBattery_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__ChargeBattery_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__ChargeBattery_GetResult_Response__Sequence__are_equal(const day2__action__ChargeBattery_GetResult_Response__Sequence * lhs, const day2__action__ChargeBattery_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__ChargeBattery_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__ChargeBattery_GetResult_Response__Sequence__copy(
  const day2__action__ChargeBattery_GetResult_Response__Sequence * input,
  day2__action__ChargeBattery_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__ChargeBattery_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__ChargeBattery_GetResult_Response * data =
      (day2__action__ChargeBattery_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__ChargeBattery_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__ChargeBattery_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__ChargeBattery_GetResult_Response__copy(
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
// #include "day2/action/detail/charge_battery__functions.h"

bool
day2__action__ChargeBattery_GetResult_Event__init(day2__action__ChargeBattery_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    day2__action__ChargeBattery_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!day2__action__ChargeBattery_GetResult_Request__Sequence__init(&msg->request, 0)) {
    day2__action__ChargeBattery_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!day2__action__ChargeBattery_GetResult_Response__Sequence__init(&msg->response, 0)) {
    day2__action__ChargeBattery_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__ChargeBattery_GetResult_Event__fini(day2__action__ChargeBattery_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  day2__action__ChargeBattery_GetResult_Request__Sequence__fini(&msg->request);
  // response
  day2__action__ChargeBattery_GetResult_Response__Sequence__fini(&msg->response);
}

bool
day2__action__ChargeBattery_GetResult_Event__are_equal(const day2__action__ChargeBattery_GetResult_Event * lhs, const day2__action__ChargeBattery_GetResult_Event * rhs)
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
  if (!day2__action__ChargeBattery_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!day2__action__ChargeBattery_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
day2__action__ChargeBattery_GetResult_Event__copy(
  const day2__action__ChargeBattery_GetResult_Event * input,
  day2__action__ChargeBattery_GetResult_Event * output)
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
  if (!day2__action__ChargeBattery_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!day2__action__ChargeBattery_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

day2__action__ChargeBattery_GetResult_Event *
day2__action__ChargeBattery_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_GetResult_Event * msg = (day2__action__ChargeBattery_GetResult_Event *)allocator.allocate(sizeof(day2__action__ChargeBattery_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__ChargeBattery_GetResult_Event));
  bool success = day2__action__ChargeBattery_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__ChargeBattery_GetResult_Event__destroy(day2__action__ChargeBattery_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__ChargeBattery_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__ChargeBattery_GetResult_Event__Sequence__init(day2__action__ChargeBattery_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_GetResult_Event * data = NULL;

  if (size) {
    data = (day2__action__ChargeBattery_GetResult_Event *)allocator.zero_allocate(size, sizeof(day2__action__ChargeBattery_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__ChargeBattery_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__ChargeBattery_GetResult_Event__fini(&data[i - 1]);
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
day2__action__ChargeBattery_GetResult_Event__Sequence__fini(day2__action__ChargeBattery_GetResult_Event__Sequence * array)
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
      day2__action__ChargeBattery_GetResult_Event__fini(&array->data[i]);
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

day2__action__ChargeBattery_GetResult_Event__Sequence *
day2__action__ChargeBattery_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_GetResult_Event__Sequence * array = (day2__action__ChargeBattery_GetResult_Event__Sequence *)allocator.allocate(sizeof(day2__action__ChargeBattery_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__ChargeBattery_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__ChargeBattery_GetResult_Event__Sequence__destroy(day2__action__ChargeBattery_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__ChargeBattery_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__ChargeBattery_GetResult_Event__Sequence__are_equal(const day2__action__ChargeBattery_GetResult_Event__Sequence * lhs, const day2__action__ChargeBattery_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__ChargeBattery_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__ChargeBattery_GetResult_Event__Sequence__copy(
  const day2__action__ChargeBattery_GetResult_Event__Sequence * input,
  day2__action__ChargeBattery_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__ChargeBattery_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__ChargeBattery_GetResult_Event * data =
      (day2__action__ChargeBattery_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__ChargeBattery_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__ChargeBattery_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__ChargeBattery_GetResult_Event__copy(
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
// #include "day2/action/detail/charge_battery__functions.h"

bool
day2__action__ChargeBattery_FeedbackMessage__init(day2__action__ChargeBattery_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    day2__action__ChargeBattery_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!day2__action__ChargeBattery_Feedback__init(&msg->feedback)) {
    day2__action__ChargeBattery_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
day2__action__ChargeBattery_FeedbackMessage__fini(day2__action__ChargeBattery_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  day2__action__ChargeBattery_Feedback__fini(&msg->feedback);
}

bool
day2__action__ChargeBattery_FeedbackMessage__are_equal(const day2__action__ChargeBattery_FeedbackMessage * lhs, const day2__action__ChargeBattery_FeedbackMessage * rhs)
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
  if (!day2__action__ChargeBattery_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
day2__action__ChargeBattery_FeedbackMessage__copy(
  const day2__action__ChargeBattery_FeedbackMessage * input,
  day2__action__ChargeBattery_FeedbackMessage * output)
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
  if (!day2__action__ChargeBattery_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

day2__action__ChargeBattery_FeedbackMessage *
day2__action__ChargeBattery_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_FeedbackMessage * msg = (day2__action__ChargeBattery_FeedbackMessage *)allocator.allocate(sizeof(day2__action__ChargeBattery_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__action__ChargeBattery_FeedbackMessage));
  bool success = day2__action__ChargeBattery_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__action__ChargeBattery_FeedbackMessage__destroy(day2__action__ChargeBattery_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__action__ChargeBattery_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__action__ChargeBattery_FeedbackMessage__Sequence__init(day2__action__ChargeBattery_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_FeedbackMessage * data = NULL;

  if (size) {
    data = (day2__action__ChargeBattery_FeedbackMessage *)allocator.zero_allocate(size, sizeof(day2__action__ChargeBattery_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__action__ChargeBattery_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__action__ChargeBattery_FeedbackMessage__fini(&data[i - 1]);
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
day2__action__ChargeBattery_FeedbackMessage__Sequence__fini(day2__action__ChargeBattery_FeedbackMessage__Sequence * array)
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
      day2__action__ChargeBattery_FeedbackMessage__fini(&array->data[i]);
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

day2__action__ChargeBattery_FeedbackMessage__Sequence *
day2__action__ChargeBattery_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__action__ChargeBattery_FeedbackMessage__Sequence * array = (day2__action__ChargeBattery_FeedbackMessage__Sequence *)allocator.allocate(sizeof(day2__action__ChargeBattery_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__action__ChargeBattery_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__action__ChargeBattery_FeedbackMessage__Sequence__destroy(day2__action__ChargeBattery_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__action__ChargeBattery_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__action__ChargeBattery_FeedbackMessage__Sequence__are_equal(const day2__action__ChargeBattery_FeedbackMessage__Sequence * lhs, const day2__action__ChargeBattery_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__action__ChargeBattery_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__action__ChargeBattery_FeedbackMessage__Sequence__copy(
  const day2__action__ChargeBattery_FeedbackMessage__Sequence * input,
  day2__action__ChargeBattery_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__action__ChargeBattery_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__action__ChargeBattery_FeedbackMessage * data =
      (day2__action__ChargeBattery_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__action__ChargeBattery_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__action__ChargeBattery_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__action__ChargeBattery_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
