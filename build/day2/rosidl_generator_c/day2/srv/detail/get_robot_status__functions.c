// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from day2:srv/GetRobotStatus.idl
// generated code does not contain a copyright notice
#include "day2/srv/detail/get_robot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `robot_name`
// Member `requested_fields`
#include "rosidl_runtime_c/string_functions.h"

bool
day2__srv__GetRobotStatus_Request__init(day2__srv__GetRobotStatus_Request * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    day2__srv__GetRobotStatus_Request__fini(msg);
    return false;
  }
  // include_sensors
  // include_diagnostics
  // include_history
  // requested_fields
  if (!rosidl_runtime_c__String__Sequence__init(&msg->requested_fields, 0)) {
    day2__srv__GetRobotStatus_Request__fini(msg);
    return false;
  }
  return true;
}

void
day2__srv__GetRobotStatus_Request__fini(day2__srv__GetRobotStatus_Request * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // include_sensors
  // include_diagnostics
  // include_history
  // requested_fields
  rosidl_runtime_c__String__Sequence__fini(&msg->requested_fields);
}

bool
day2__srv__GetRobotStatus_Request__are_equal(const day2__srv__GetRobotStatus_Request * lhs, const day2__srv__GetRobotStatus_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_name), &(rhs->robot_name)))
  {
    return false;
  }
  // include_sensors
  if (lhs->include_sensors != rhs->include_sensors) {
    return false;
  }
  // include_diagnostics
  if (lhs->include_diagnostics != rhs->include_diagnostics) {
    return false;
  }
  // include_history
  if (lhs->include_history != rhs->include_history) {
    return false;
  }
  // requested_fields
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->requested_fields), &(rhs->requested_fields)))
  {
    return false;
  }
  return true;
}

bool
day2__srv__GetRobotStatus_Request__copy(
  const day2__srv__GetRobotStatus_Request * input,
  day2__srv__GetRobotStatus_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  output->robot_id = input->robot_id;
  // robot_name
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_name), &(output->robot_name)))
  {
    return false;
  }
  // include_sensors
  output->include_sensors = input->include_sensors;
  // include_diagnostics
  output->include_diagnostics = input->include_diagnostics;
  // include_history
  output->include_history = input->include_history;
  // requested_fields
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->requested_fields), &(output->requested_fields)))
  {
    return false;
  }
  return true;
}

day2__srv__GetRobotStatus_Request *
day2__srv__GetRobotStatus_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__GetRobotStatus_Request * msg = (day2__srv__GetRobotStatus_Request *)allocator.allocate(sizeof(day2__srv__GetRobotStatus_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__srv__GetRobotStatus_Request));
  bool success = day2__srv__GetRobotStatus_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__srv__GetRobotStatus_Request__destroy(day2__srv__GetRobotStatus_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__srv__GetRobotStatus_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__srv__GetRobotStatus_Request__Sequence__init(day2__srv__GetRobotStatus_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__GetRobotStatus_Request * data = NULL;

  if (size) {
    data = (day2__srv__GetRobotStatus_Request *)allocator.zero_allocate(size, sizeof(day2__srv__GetRobotStatus_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__srv__GetRobotStatus_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__srv__GetRobotStatus_Request__fini(&data[i - 1]);
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
day2__srv__GetRobotStatus_Request__Sequence__fini(day2__srv__GetRobotStatus_Request__Sequence * array)
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
      day2__srv__GetRobotStatus_Request__fini(&array->data[i]);
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

day2__srv__GetRobotStatus_Request__Sequence *
day2__srv__GetRobotStatus_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__GetRobotStatus_Request__Sequence * array = (day2__srv__GetRobotStatus_Request__Sequence *)allocator.allocate(sizeof(day2__srv__GetRobotStatus_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__srv__GetRobotStatus_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__srv__GetRobotStatus_Request__Sequence__destroy(day2__srv__GetRobotStatus_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__srv__GetRobotStatus_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__srv__GetRobotStatus_Request__Sequence__are_equal(const day2__srv__GetRobotStatus_Request__Sequence * lhs, const day2__srv__GetRobotStatus_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__srv__GetRobotStatus_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__srv__GetRobotStatus_Request__Sequence__copy(
  const day2__srv__GetRobotStatus_Request__Sequence * input,
  day2__srv__GetRobotStatus_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__srv__GetRobotStatus_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__srv__GetRobotStatus_Request * data =
      (day2__srv__GetRobotStatus_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__srv__GetRobotStatus_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__srv__GetRobotStatus_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__srv__GetRobotStatus_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// Member `diagnostic_messages`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `current_status`
// Member `status_history`
#include "day2/msg/detail/robot_status__functions.h"
// Member `sensor_data`
#include "day2/msg/detail/sensor_data__functions.h"
// Member `query_timestamp`
// Member `last_update_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
day2__srv__GetRobotStatus_Response__init(day2__srv__GetRobotStatus_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    day2__srv__GetRobotStatus_Response__fini(msg);
    return false;
  }
  // current_status
  if (!day2__msg__RobotStatus__init(&msg->current_status)) {
    day2__srv__GetRobotStatus_Response__fini(msg);
    return false;
  }
  // sensor_data
  if (!day2__msg__SensorData__Sequence__init(&msg->sensor_data, 0)) {
    day2__srv__GetRobotStatus_Response__fini(msg);
    return false;
  }
  // diagnostic_messages
  if (!rosidl_runtime_c__String__Sequence__init(&msg->diagnostic_messages, 0)) {
    day2__srv__GetRobotStatus_Response__fini(msg);
    return false;
  }
  // status_history
  if (!day2__msg__RobotStatus__Sequence__init(&msg->status_history, 0)) {
    day2__srv__GetRobotStatus_Response__fini(msg);
    return false;
  }
  // uptime_hours
  // total_commands_executed
  // total_distance_traveled
  // error_count_today
  // average_response_time_ms
  // cpu_usage_percent
  // memory_usage_percent
  // network_latency_ms
  // query_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->query_timestamp)) {
    day2__srv__GetRobotStatus_Response__fini(msg);
    return false;
  }
  // last_update_time
  if (!builtin_interfaces__msg__Time__init(&msg->last_update_time)) {
    day2__srv__GetRobotStatus_Response__fini(msg);
    return false;
  }
  return true;
}

void
day2__srv__GetRobotStatus_Response__fini(day2__srv__GetRobotStatus_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // current_status
  day2__msg__RobotStatus__fini(&msg->current_status);
  // sensor_data
  day2__msg__SensorData__Sequence__fini(&msg->sensor_data);
  // diagnostic_messages
  rosidl_runtime_c__String__Sequence__fini(&msg->diagnostic_messages);
  // status_history
  day2__msg__RobotStatus__Sequence__fini(&msg->status_history);
  // uptime_hours
  // total_commands_executed
  // total_distance_traveled
  // error_count_today
  // average_response_time_ms
  // cpu_usage_percent
  // memory_usage_percent
  // network_latency_ms
  // query_timestamp
  builtin_interfaces__msg__Time__fini(&msg->query_timestamp);
  // last_update_time
  builtin_interfaces__msg__Time__fini(&msg->last_update_time);
}

bool
day2__srv__GetRobotStatus_Response__are_equal(const day2__srv__GetRobotStatus_Response * lhs, const day2__srv__GetRobotStatus_Response * rhs)
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
  // current_status
  if (!day2__msg__RobotStatus__are_equal(
      &(lhs->current_status), &(rhs->current_status)))
  {
    return false;
  }
  // sensor_data
  if (!day2__msg__SensorData__Sequence__are_equal(
      &(lhs->sensor_data), &(rhs->sensor_data)))
  {
    return false;
  }
  // diagnostic_messages
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->diagnostic_messages), &(rhs->diagnostic_messages)))
  {
    return false;
  }
  // status_history
  if (!day2__msg__RobotStatus__Sequence__are_equal(
      &(lhs->status_history), &(rhs->status_history)))
  {
    return false;
  }
  // uptime_hours
  if (lhs->uptime_hours != rhs->uptime_hours) {
    return false;
  }
  // total_commands_executed
  if (lhs->total_commands_executed != rhs->total_commands_executed) {
    return false;
  }
  // total_distance_traveled
  if (lhs->total_distance_traveled != rhs->total_distance_traveled) {
    return false;
  }
  // error_count_today
  if (lhs->error_count_today != rhs->error_count_today) {
    return false;
  }
  // average_response_time_ms
  if (lhs->average_response_time_ms != rhs->average_response_time_ms) {
    return false;
  }
  // cpu_usage_percent
  if (lhs->cpu_usage_percent != rhs->cpu_usage_percent) {
    return false;
  }
  // memory_usage_percent
  if (lhs->memory_usage_percent != rhs->memory_usage_percent) {
    return false;
  }
  // network_latency_ms
  if (lhs->network_latency_ms != rhs->network_latency_ms) {
    return false;
  }
  // query_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->query_timestamp), &(rhs->query_timestamp)))
  {
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
day2__srv__GetRobotStatus_Response__copy(
  const day2__srv__GetRobotStatus_Response * input,
  day2__srv__GetRobotStatus_Response * output)
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
  // current_status
  if (!day2__msg__RobotStatus__copy(
      &(input->current_status), &(output->current_status)))
  {
    return false;
  }
  // sensor_data
  if (!day2__msg__SensorData__Sequence__copy(
      &(input->sensor_data), &(output->sensor_data)))
  {
    return false;
  }
  // diagnostic_messages
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->diagnostic_messages), &(output->diagnostic_messages)))
  {
    return false;
  }
  // status_history
  if (!day2__msg__RobotStatus__Sequence__copy(
      &(input->status_history), &(output->status_history)))
  {
    return false;
  }
  // uptime_hours
  output->uptime_hours = input->uptime_hours;
  // total_commands_executed
  output->total_commands_executed = input->total_commands_executed;
  // total_distance_traveled
  output->total_distance_traveled = input->total_distance_traveled;
  // error_count_today
  output->error_count_today = input->error_count_today;
  // average_response_time_ms
  output->average_response_time_ms = input->average_response_time_ms;
  // cpu_usage_percent
  output->cpu_usage_percent = input->cpu_usage_percent;
  // memory_usage_percent
  output->memory_usage_percent = input->memory_usage_percent;
  // network_latency_ms
  output->network_latency_ms = input->network_latency_ms;
  // query_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->query_timestamp), &(output->query_timestamp)))
  {
    return false;
  }
  // last_update_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->last_update_time), &(output->last_update_time)))
  {
    return false;
  }
  return true;
}

day2__srv__GetRobotStatus_Response *
day2__srv__GetRobotStatus_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__GetRobotStatus_Response * msg = (day2__srv__GetRobotStatus_Response *)allocator.allocate(sizeof(day2__srv__GetRobotStatus_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__srv__GetRobotStatus_Response));
  bool success = day2__srv__GetRobotStatus_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__srv__GetRobotStatus_Response__destroy(day2__srv__GetRobotStatus_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__srv__GetRobotStatus_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__srv__GetRobotStatus_Response__Sequence__init(day2__srv__GetRobotStatus_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__GetRobotStatus_Response * data = NULL;

  if (size) {
    data = (day2__srv__GetRobotStatus_Response *)allocator.zero_allocate(size, sizeof(day2__srv__GetRobotStatus_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__srv__GetRobotStatus_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__srv__GetRobotStatus_Response__fini(&data[i - 1]);
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
day2__srv__GetRobotStatus_Response__Sequence__fini(day2__srv__GetRobotStatus_Response__Sequence * array)
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
      day2__srv__GetRobotStatus_Response__fini(&array->data[i]);
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

day2__srv__GetRobotStatus_Response__Sequence *
day2__srv__GetRobotStatus_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__GetRobotStatus_Response__Sequence * array = (day2__srv__GetRobotStatus_Response__Sequence *)allocator.allocate(sizeof(day2__srv__GetRobotStatus_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__srv__GetRobotStatus_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__srv__GetRobotStatus_Response__Sequence__destroy(day2__srv__GetRobotStatus_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__srv__GetRobotStatus_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__srv__GetRobotStatus_Response__Sequence__are_equal(const day2__srv__GetRobotStatus_Response__Sequence * lhs, const day2__srv__GetRobotStatus_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__srv__GetRobotStatus_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__srv__GetRobotStatus_Response__Sequence__copy(
  const day2__srv__GetRobotStatus_Response__Sequence * input,
  day2__srv__GetRobotStatus_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__srv__GetRobotStatus_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__srv__GetRobotStatus_Response * data =
      (day2__srv__GetRobotStatus_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__srv__GetRobotStatus_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__srv__GetRobotStatus_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__srv__GetRobotStatus_Response__copy(
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
// #include "day2/srv/detail/get_robot_status__functions.h"

bool
day2__srv__GetRobotStatus_Event__init(day2__srv__GetRobotStatus_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    day2__srv__GetRobotStatus_Event__fini(msg);
    return false;
  }
  // request
  if (!day2__srv__GetRobotStatus_Request__Sequence__init(&msg->request, 0)) {
    day2__srv__GetRobotStatus_Event__fini(msg);
    return false;
  }
  // response
  if (!day2__srv__GetRobotStatus_Response__Sequence__init(&msg->response, 0)) {
    day2__srv__GetRobotStatus_Event__fini(msg);
    return false;
  }
  return true;
}

void
day2__srv__GetRobotStatus_Event__fini(day2__srv__GetRobotStatus_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  day2__srv__GetRobotStatus_Request__Sequence__fini(&msg->request);
  // response
  day2__srv__GetRobotStatus_Response__Sequence__fini(&msg->response);
}

bool
day2__srv__GetRobotStatus_Event__are_equal(const day2__srv__GetRobotStatus_Event * lhs, const day2__srv__GetRobotStatus_Event * rhs)
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
  if (!day2__srv__GetRobotStatus_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!day2__srv__GetRobotStatus_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
day2__srv__GetRobotStatus_Event__copy(
  const day2__srv__GetRobotStatus_Event * input,
  day2__srv__GetRobotStatus_Event * output)
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
  if (!day2__srv__GetRobotStatus_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!day2__srv__GetRobotStatus_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

day2__srv__GetRobotStatus_Event *
day2__srv__GetRobotStatus_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__GetRobotStatus_Event * msg = (day2__srv__GetRobotStatus_Event *)allocator.allocate(sizeof(day2__srv__GetRobotStatus_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__srv__GetRobotStatus_Event));
  bool success = day2__srv__GetRobotStatus_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__srv__GetRobotStatus_Event__destroy(day2__srv__GetRobotStatus_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__srv__GetRobotStatus_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__srv__GetRobotStatus_Event__Sequence__init(day2__srv__GetRobotStatus_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__GetRobotStatus_Event * data = NULL;

  if (size) {
    data = (day2__srv__GetRobotStatus_Event *)allocator.zero_allocate(size, sizeof(day2__srv__GetRobotStatus_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__srv__GetRobotStatus_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__srv__GetRobotStatus_Event__fini(&data[i - 1]);
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
day2__srv__GetRobotStatus_Event__Sequence__fini(day2__srv__GetRobotStatus_Event__Sequence * array)
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
      day2__srv__GetRobotStatus_Event__fini(&array->data[i]);
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

day2__srv__GetRobotStatus_Event__Sequence *
day2__srv__GetRobotStatus_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__GetRobotStatus_Event__Sequence * array = (day2__srv__GetRobotStatus_Event__Sequence *)allocator.allocate(sizeof(day2__srv__GetRobotStatus_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__srv__GetRobotStatus_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__srv__GetRobotStatus_Event__Sequence__destroy(day2__srv__GetRobotStatus_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__srv__GetRobotStatus_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__srv__GetRobotStatus_Event__Sequence__are_equal(const day2__srv__GetRobotStatus_Event__Sequence * lhs, const day2__srv__GetRobotStatus_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__srv__GetRobotStatus_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__srv__GetRobotStatus_Event__Sequence__copy(
  const day2__srv__GetRobotStatus_Event__Sequence * input,
  day2__srv__GetRobotStatus_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__srv__GetRobotStatus_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__srv__GetRobotStatus_Event * data =
      (day2__srv__GetRobotStatus_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__srv__GetRobotStatus_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__srv__GetRobotStatus_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__srv__GetRobotStatus_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
