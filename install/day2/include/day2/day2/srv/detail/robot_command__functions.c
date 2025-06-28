// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from day2:srv/RobotCommand.idl
// generated code does not contain a copyright notice
#include "day2/srv/detail/robot_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `command_type`
// Member `additional_params`
#include "rosidl_runtime_c/string_functions.h"
// Member `target_position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `target_orientation`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `deadline`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
day2__srv__RobotCommand_Request__init(day2__srv__RobotCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command_type
  if (!rosidl_runtime_c__String__init(&msg->command_type)) {
    day2__srv__RobotCommand_Request__fini(msg);
    return false;
  }
  // target_position
  if (!geometry_msgs__msg__Point__init(&msg->target_position)) {
    day2__srv__RobotCommand_Request__fini(msg);
    return false;
  }
  // target_orientation
  if (!geometry_msgs__msg__Vector3__init(&msg->target_orientation)) {
    day2__srv__RobotCommand_Request__fini(msg);
    return false;
  }
  // max_velocity
  // max_acceleration
  // timeout_seconds
  // force_execution
  // additional_params
  if (!rosidl_runtime_c__String__Sequence__init(&msg->additional_params, 0)) {
    day2__srv__RobotCommand_Request__fini(msg);
    return false;
  }
  // deadline
  if (!builtin_interfaces__msg__Time__init(&msg->deadline)) {
    day2__srv__RobotCommand_Request__fini(msg);
    return false;
  }
  return true;
}

void
day2__srv__RobotCommand_Request__fini(day2__srv__RobotCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // command_type
  rosidl_runtime_c__String__fini(&msg->command_type);
  // target_position
  geometry_msgs__msg__Point__fini(&msg->target_position);
  // target_orientation
  geometry_msgs__msg__Vector3__fini(&msg->target_orientation);
  // max_velocity
  // max_acceleration
  // timeout_seconds
  // force_execution
  // additional_params
  rosidl_runtime_c__String__Sequence__fini(&msg->additional_params);
  // deadline
  builtin_interfaces__msg__Time__fini(&msg->deadline);
}

bool
day2__srv__RobotCommand_Request__are_equal(const day2__srv__RobotCommand_Request * lhs, const day2__srv__RobotCommand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command_type), &(rhs->command_type)))
  {
    return false;
  }
  // target_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->target_position), &(rhs->target_position)))
  {
    return false;
  }
  // target_orientation
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->target_orientation), &(rhs->target_orientation)))
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
  // timeout_seconds
  if (lhs->timeout_seconds != rhs->timeout_seconds) {
    return false;
  }
  // force_execution
  if (lhs->force_execution != rhs->force_execution) {
    return false;
  }
  // additional_params
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->additional_params), &(rhs->additional_params)))
  {
    return false;
  }
  // deadline
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->deadline), &(rhs->deadline)))
  {
    return false;
  }
  return true;
}

bool
day2__srv__RobotCommand_Request__copy(
  const day2__srv__RobotCommand_Request * input,
  day2__srv__RobotCommand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // command_type
  if (!rosidl_runtime_c__String__copy(
      &(input->command_type), &(output->command_type)))
  {
    return false;
  }
  // target_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->target_position), &(output->target_position)))
  {
    return false;
  }
  // target_orientation
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->target_orientation), &(output->target_orientation)))
  {
    return false;
  }
  // max_velocity
  output->max_velocity = input->max_velocity;
  // max_acceleration
  output->max_acceleration = input->max_acceleration;
  // timeout_seconds
  output->timeout_seconds = input->timeout_seconds;
  // force_execution
  output->force_execution = input->force_execution;
  // additional_params
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->additional_params), &(output->additional_params)))
  {
    return false;
  }
  // deadline
  if (!builtin_interfaces__msg__Time__copy(
      &(input->deadline), &(output->deadline)))
  {
    return false;
  }
  return true;
}

day2__srv__RobotCommand_Request *
day2__srv__RobotCommand_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__RobotCommand_Request * msg = (day2__srv__RobotCommand_Request *)allocator.allocate(sizeof(day2__srv__RobotCommand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__srv__RobotCommand_Request));
  bool success = day2__srv__RobotCommand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__srv__RobotCommand_Request__destroy(day2__srv__RobotCommand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__srv__RobotCommand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__srv__RobotCommand_Request__Sequence__init(day2__srv__RobotCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__RobotCommand_Request * data = NULL;

  if (size) {
    data = (day2__srv__RobotCommand_Request *)allocator.zero_allocate(size, sizeof(day2__srv__RobotCommand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__srv__RobotCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__srv__RobotCommand_Request__fini(&data[i - 1]);
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
day2__srv__RobotCommand_Request__Sequence__fini(day2__srv__RobotCommand_Request__Sequence * array)
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
      day2__srv__RobotCommand_Request__fini(&array->data[i]);
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

day2__srv__RobotCommand_Request__Sequence *
day2__srv__RobotCommand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__RobotCommand_Request__Sequence * array = (day2__srv__RobotCommand_Request__Sequence *)allocator.allocate(sizeof(day2__srv__RobotCommand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__srv__RobotCommand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__srv__RobotCommand_Request__Sequence__destroy(day2__srv__RobotCommand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__srv__RobotCommand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__srv__RobotCommand_Request__Sequence__are_equal(const day2__srv__RobotCommand_Request__Sequence * lhs, const day2__srv__RobotCommand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__srv__RobotCommand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__srv__RobotCommand_Request__Sequence__copy(
  const day2__srv__RobotCommand_Request__Sequence * input,
  day2__srv__RobotCommand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__srv__RobotCommand_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__srv__RobotCommand_Request * data =
      (day2__srv__RobotCommand_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__srv__RobotCommand_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__srv__RobotCommand_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__srv__RobotCommand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `actual_target`
// already included above
// #include "geometry_msgs/msg/detail/point__functions.h"
// Member `estimated_completion`
// already included above
// #include "builtin_interfaces/msg/detail/time__functions.h"

bool
day2__srv__RobotCommand_Response__init(day2__srv__RobotCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    day2__srv__RobotCommand_Response__fini(msg);
    return false;
  }
  // command_id
  // estimated_duration
  // actual_target
  if (!geometry_msgs__msg__Point__init(&msg->actual_target)) {
    day2__srv__RobotCommand_Response__fini(msg);
    return false;
  }
  // estimated_completion
  if (!builtin_interfaces__msg__Time__init(&msg->estimated_completion)) {
    day2__srv__RobotCommand_Response__fini(msg);
    return false;
  }
  // error_code
  return true;
}

void
day2__srv__RobotCommand_Response__fini(day2__srv__RobotCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // command_id
  // estimated_duration
  // actual_target
  geometry_msgs__msg__Point__fini(&msg->actual_target);
  // estimated_completion
  builtin_interfaces__msg__Time__fini(&msg->estimated_completion);
  // error_code
}

bool
day2__srv__RobotCommand_Response__are_equal(const day2__srv__RobotCommand_Response * lhs, const day2__srv__RobotCommand_Response * rhs)
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
  // command_id
  if (lhs->command_id != rhs->command_id) {
    return false;
  }
  // estimated_duration
  if (lhs->estimated_duration != rhs->estimated_duration) {
    return false;
  }
  // actual_target
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->actual_target), &(rhs->actual_target)))
  {
    return false;
  }
  // estimated_completion
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->estimated_completion), &(rhs->estimated_completion)))
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
day2__srv__RobotCommand_Response__copy(
  const day2__srv__RobotCommand_Response * input,
  day2__srv__RobotCommand_Response * output)
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
  // command_id
  output->command_id = input->command_id;
  // estimated_duration
  output->estimated_duration = input->estimated_duration;
  // actual_target
  if (!geometry_msgs__msg__Point__copy(
      &(input->actual_target), &(output->actual_target)))
  {
    return false;
  }
  // estimated_completion
  if (!builtin_interfaces__msg__Time__copy(
      &(input->estimated_completion), &(output->estimated_completion)))
  {
    return false;
  }
  // error_code
  output->error_code = input->error_code;
  return true;
}

day2__srv__RobotCommand_Response *
day2__srv__RobotCommand_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__RobotCommand_Response * msg = (day2__srv__RobotCommand_Response *)allocator.allocate(sizeof(day2__srv__RobotCommand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__srv__RobotCommand_Response));
  bool success = day2__srv__RobotCommand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__srv__RobotCommand_Response__destroy(day2__srv__RobotCommand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__srv__RobotCommand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__srv__RobotCommand_Response__Sequence__init(day2__srv__RobotCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__RobotCommand_Response * data = NULL;

  if (size) {
    data = (day2__srv__RobotCommand_Response *)allocator.zero_allocate(size, sizeof(day2__srv__RobotCommand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__srv__RobotCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__srv__RobotCommand_Response__fini(&data[i - 1]);
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
day2__srv__RobotCommand_Response__Sequence__fini(day2__srv__RobotCommand_Response__Sequence * array)
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
      day2__srv__RobotCommand_Response__fini(&array->data[i]);
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

day2__srv__RobotCommand_Response__Sequence *
day2__srv__RobotCommand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__RobotCommand_Response__Sequence * array = (day2__srv__RobotCommand_Response__Sequence *)allocator.allocate(sizeof(day2__srv__RobotCommand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__srv__RobotCommand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__srv__RobotCommand_Response__Sequence__destroy(day2__srv__RobotCommand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__srv__RobotCommand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__srv__RobotCommand_Response__Sequence__are_equal(const day2__srv__RobotCommand_Response__Sequence * lhs, const day2__srv__RobotCommand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__srv__RobotCommand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__srv__RobotCommand_Response__Sequence__copy(
  const day2__srv__RobotCommand_Response__Sequence * input,
  day2__srv__RobotCommand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__srv__RobotCommand_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__srv__RobotCommand_Response * data =
      (day2__srv__RobotCommand_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__srv__RobotCommand_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__srv__RobotCommand_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__srv__RobotCommand_Response__copy(
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
// #include "day2/srv/detail/robot_command__functions.h"

bool
day2__srv__RobotCommand_Event__init(day2__srv__RobotCommand_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    day2__srv__RobotCommand_Event__fini(msg);
    return false;
  }
  // request
  if (!day2__srv__RobotCommand_Request__Sequence__init(&msg->request, 0)) {
    day2__srv__RobotCommand_Event__fini(msg);
    return false;
  }
  // response
  if (!day2__srv__RobotCommand_Response__Sequence__init(&msg->response, 0)) {
    day2__srv__RobotCommand_Event__fini(msg);
    return false;
  }
  return true;
}

void
day2__srv__RobotCommand_Event__fini(day2__srv__RobotCommand_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  day2__srv__RobotCommand_Request__Sequence__fini(&msg->request);
  // response
  day2__srv__RobotCommand_Response__Sequence__fini(&msg->response);
}

bool
day2__srv__RobotCommand_Event__are_equal(const day2__srv__RobotCommand_Event * lhs, const day2__srv__RobotCommand_Event * rhs)
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
  if (!day2__srv__RobotCommand_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!day2__srv__RobotCommand_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
day2__srv__RobotCommand_Event__copy(
  const day2__srv__RobotCommand_Event * input,
  day2__srv__RobotCommand_Event * output)
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
  if (!day2__srv__RobotCommand_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!day2__srv__RobotCommand_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

day2__srv__RobotCommand_Event *
day2__srv__RobotCommand_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__RobotCommand_Event * msg = (day2__srv__RobotCommand_Event *)allocator.allocate(sizeof(day2__srv__RobotCommand_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__srv__RobotCommand_Event));
  bool success = day2__srv__RobotCommand_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__srv__RobotCommand_Event__destroy(day2__srv__RobotCommand_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__srv__RobotCommand_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__srv__RobotCommand_Event__Sequence__init(day2__srv__RobotCommand_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__RobotCommand_Event * data = NULL;

  if (size) {
    data = (day2__srv__RobotCommand_Event *)allocator.zero_allocate(size, sizeof(day2__srv__RobotCommand_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__srv__RobotCommand_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__srv__RobotCommand_Event__fini(&data[i - 1]);
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
day2__srv__RobotCommand_Event__Sequence__fini(day2__srv__RobotCommand_Event__Sequence * array)
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
      day2__srv__RobotCommand_Event__fini(&array->data[i]);
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

day2__srv__RobotCommand_Event__Sequence *
day2__srv__RobotCommand_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__RobotCommand_Event__Sequence * array = (day2__srv__RobotCommand_Event__Sequence *)allocator.allocate(sizeof(day2__srv__RobotCommand_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__srv__RobotCommand_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__srv__RobotCommand_Event__Sequence__destroy(day2__srv__RobotCommand_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__srv__RobotCommand_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__srv__RobotCommand_Event__Sequence__are_equal(const day2__srv__RobotCommand_Event__Sequence * lhs, const day2__srv__RobotCommand_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__srv__RobotCommand_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__srv__RobotCommand_Event__Sequence__copy(
  const day2__srv__RobotCommand_Event__Sequence * input,
  day2__srv__RobotCommand_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__srv__RobotCommand_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__srv__RobotCommand_Event * data =
      (day2__srv__RobotCommand_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__srv__RobotCommand_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__srv__RobotCommand_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__srv__RobotCommand_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
