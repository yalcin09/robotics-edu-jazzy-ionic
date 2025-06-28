// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from day2:srv/EmergencyStop.idl
// generated code does not contain a copyright notice
#include "day2/srv/detail/emergency_stop__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `reason`
// Member `operator_id`
#include "rosidl_runtime_c/string_functions.h"

bool
day2__srv__EmergencyStop_Request__init(day2__srv__EmergencyStop_Request * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    day2__srv__EmergencyStop_Request__fini(msg);
    return false;
  }
  // stop_type
  // disable_motors
  // lock_brakes
  // sound_alarm
  // operator_id
  if (!rosidl_runtime_c__String__init(&msg->operator_id)) {
    day2__srv__EmergencyStop_Request__fini(msg);
    return false;
  }
  // priority_level
  return true;
}

void
day2__srv__EmergencyStop_Request__fini(day2__srv__EmergencyStop_Request * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
  // stop_type
  // disable_motors
  // lock_brakes
  // sound_alarm
  // operator_id
  rosidl_runtime_c__String__fini(&msg->operator_id);
  // priority_level
}

bool
day2__srv__EmergencyStop_Request__are_equal(const day2__srv__EmergencyStop_Request * lhs, const day2__srv__EmergencyStop_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  // stop_type
  if (lhs->stop_type != rhs->stop_type) {
    return false;
  }
  // disable_motors
  if (lhs->disable_motors != rhs->disable_motors) {
    return false;
  }
  // lock_brakes
  if (lhs->lock_brakes != rhs->lock_brakes) {
    return false;
  }
  // sound_alarm
  if (lhs->sound_alarm != rhs->sound_alarm) {
    return false;
  }
  // operator_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->operator_id), &(rhs->operator_id)))
  {
    return false;
  }
  // priority_level
  if (lhs->priority_level != rhs->priority_level) {
    return false;
  }
  return true;
}

bool
day2__srv__EmergencyStop_Request__copy(
  const day2__srv__EmergencyStop_Request * input,
  day2__srv__EmergencyStop_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  output->robot_id = input->robot_id;
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  // stop_type
  output->stop_type = input->stop_type;
  // disable_motors
  output->disable_motors = input->disable_motors;
  // lock_brakes
  output->lock_brakes = input->lock_brakes;
  // sound_alarm
  output->sound_alarm = input->sound_alarm;
  // operator_id
  if (!rosidl_runtime_c__String__copy(
      &(input->operator_id), &(output->operator_id)))
  {
    return false;
  }
  // priority_level
  output->priority_level = input->priority_level;
  return true;
}

day2__srv__EmergencyStop_Request *
day2__srv__EmergencyStop_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__EmergencyStop_Request * msg = (day2__srv__EmergencyStop_Request *)allocator.allocate(sizeof(day2__srv__EmergencyStop_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__srv__EmergencyStop_Request));
  bool success = day2__srv__EmergencyStop_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__srv__EmergencyStop_Request__destroy(day2__srv__EmergencyStop_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__srv__EmergencyStop_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__srv__EmergencyStop_Request__Sequence__init(day2__srv__EmergencyStop_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__EmergencyStop_Request * data = NULL;

  if (size) {
    data = (day2__srv__EmergencyStop_Request *)allocator.zero_allocate(size, sizeof(day2__srv__EmergencyStop_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__srv__EmergencyStop_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__srv__EmergencyStop_Request__fini(&data[i - 1]);
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
day2__srv__EmergencyStop_Request__Sequence__fini(day2__srv__EmergencyStop_Request__Sequence * array)
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
      day2__srv__EmergencyStop_Request__fini(&array->data[i]);
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

day2__srv__EmergencyStop_Request__Sequence *
day2__srv__EmergencyStop_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__EmergencyStop_Request__Sequence * array = (day2__srv__EmergencyStop_Request__Sequence *)allocator.allocate(sizeof(day2__srv__EmergencyStop_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__srv__EmergencyStop_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__srv__EmergencyStop_Request__Sequence__destroy(day2__srv__EmergencyStop_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__srv__EmergencyStop_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__srv__EmergencyStop_Request__Sequence__are_equal(const day2__srv__EmergencyStop_Request__Sequence * lhs, const day2__srv__EmergencyStop_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__srv__EmergencyStop_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__srv__EmergencyStop_Request__Sequence__copy(
  const day2__srv__EmergencyStop_Request__Sequence * input,
  day2__srv__EmergencyStop_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__srv__EmergencyStop_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__srv__EmergencyStop_Request * data =
      (day2__srv__EmergencyStop_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__srv__EmergencyStop_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__srv__EmergencyStop_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__srv__EmergencyStop_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// Member `robot_responses`
// Member `active_alarms`
// Member `required_actions`
// Member `reset_procedures`
// Member `incident_classification`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `stop_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `stopped_robot_ids`
// Member `stop_distances`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
day2__srv__EmergencyStop_Response__init(day2__srv__EmergencyStop_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    day2__srv__EmergencyStop_Response__fini(msg);
    return false;
  }
  // stop_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->stop_timestamp)) {
    day2__srv__EmergencyStop_Response__fini(msg);
    return false;
  }
  // stopped_robot_ids
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->stopped_robot_ids, 0)) {
    day2__srv__EmergencyStop_Response__fini(msg);
    return false;
  }
  // robot_responses
  if (!rosidl_runtime_c__String__Sequence__init(&msg->robot_responses, 0)) {
    day2__srv__EmergencyStop_Response__fini(msg);
    return false;
  }
  // stop_distances
  if (!rosidl_runtime_c__float__Sequence__init(&msg->stop_distances, 0)) {
    day2__srv__EmergencyStop_Response__fini(msg);
    return false;
  }
  // system_safe_state
  // active_alarms
  if (!rosidl_runtime_c__String__Sequence__init(&msg->active_alarms, 0)) {
    day2__srv__EmergencyStop_Response__fini(msg);
    return false;
  }
  // required_actions
  if (!rosidl_runtime_c__String__Sequence__init(&msg->required_actions, 0)) {
    day2__srv__EmergencyStop_Response__fini(msg);
    return false;
  }
  // manual_reset_required
  // reset_procedures
  if (!rosidl_runtime_c__String__Sequence__init(&msg->reset_procedures, 0)) {
    day2__srv__EmergencyStop_Response__fini(msg);
    return false;
  }
  // estimated_recovery_time
  // incident_id
  // incident_classification
  if (!rosidl_runtime_c__String__init(&msg->incident_classification)) {
    day2__srv__EmergencyStop_Response__fini(msg);
    return false;
  }
  // requires_investigation
  // error_code
  return true;
}

void
day2__srv__EmergencyStop_Response__fini(day2__srv__EmergencyStop_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // stop_timestamp
  builtin_interfaces__msg__Time__fini(&msg->stop_timestamp);
  // stopped_robot_ids
  rosidl_runtime_c__uint32__Sequence__fini(&msg->stopped_robot_ids);
  // robot_responses
  rosidl_runtime_c__String__Sequence__fini(&msg->robot_responses);
  // stop_distances
  rosidl_runtime_c__float__Sequence__fini(&msg->stop_distances);
  // system_safe_state
  // active_alarms
  rosidl_runtime_c__String__Sequence__fini(&msg->active_alarms);
  // required_actions
  rosidl_runtime_c__String__Sequence__fini(&msg->required_actions);
  // manual_reset_required
  // reset_procedures
  rosidl_runtime_c__String__Sequence__fini(&msg->reset_procedures);
  // estimated_recovery_time
  // incident_id
  // incident_classification
  rosidl_runtime_c__String__fini(&msg->incident_classification);
  // requires_investigation
  // error_code
}

bool
day2__srv__EmergencyStop_Response__are_equal(const day2__srv__EmergencyStop_Response * lhs, const day2__srv__EmergencyStop_Response * rhs)
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
  // stop_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stop_timestamp), &(rhs->stop_timestamp)))
  {
    return false;
  }
  // stopped_robot_ids
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->stopped_robot_ids), &(rhs->stopped_robot_ids)))
  {
    return false;
  }
  // robot_responses
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->robot_responses), &(rhs->robot_responses)))
  {
    return false;
  }
  // stop_distances
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->stop_distances), &(rhs->stop_distances)))
  {
    return false;
  }
  // system_safe_state
  if (lhs->system_safe_state != rhs->system_safe_state) {
    return false;
  }
  // active_alarms
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->active_alarms), &(rhs->active_alarms)))
  {
    return false;
  }
  // required_actions
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->required_actions), &(rhs->required_actions)))
  {
    return false;
  }
  // manual_reset_required
  if (lhs->manual_reset_required != rhs->manual_reset_required) {
    return false;
  }
  // reset_procedures
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->reset_procedures), &(rhs->reset_procedures)))
  {
    return false;
  }
  // estimated_recovery_time
  if (lhs->estimated_recovery_time != rhs->estimated_recovery_time) {
    return false;
  }
  // incident_id
  if (lhs->incident_id != rhs->incident_id) {
    return false;
  }
  // incident_classification
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->incident_classification), &(rhs->incident_classification)))
  {
    return false;
  }
  // requires_investigation
  if (lhs->requires_investigation != rhs->requires_investigation) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  return true;
}

bool
day2__srv__EmergencyStop_Response__copy(
  const day2__srv__EmergencyStop_Response * input,
  day2__srv__EmergencyStop_Response * output)
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
  // stop_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stop_timestamp), &(output->stop_timestamp)))
  {
    return false;
  }
  // stopped_robot_ids
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->stopped_robot_ids), &(output->stopped_robot_ids)))
  {
    return false;
  }
  // robot_responses
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->robot_responses), &(output->robot_responses)))
  {
    return false;
  }
  // stop_distances
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->stop_distances), &(output->stop_distances)))
  {
    return false;
  }
  // system_safe_state
  output->system_safe_state = input->system_safe_state;
  // active_alarms
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->active_alarms), &(output->active_alarms)))
  {
    return false;
  }
  // required_actions
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->required_actions), &(output->required_actions)))
  {
    return false;
  }
  // manual_reset_required
  output->manual_reset_required = input->manual_reset_required;
  // reset_procedures
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->reset_procedures), &(output->reset_procedures)))
  {
    return false;
  }
  // estimated_recovery_time
  output->estimated_recovery_time = input->estimated_recovery_time;
  // incident_id
  output->incident_id = input->incident_id;
  // incident_classification
  if (!rosidl_runtime_c__String__copy(
      &(input->incident_classification), &(output->incident_classification)))
  {
    return false;
  }
  // requires_investigation
  output->requires_investigation = input->requires_investigation;
  // error_code
  output->error_code = input->error_code;
  return true;
}

day2__srv__EmergencyStop_Response *
day2__srv__EmergencyStop_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__EmergencyStop_Response * msg = (day2__srv__EmergencyStop_Response *)allocator.allocate(sizeof(day2__srv__EmergencyStop_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__srv__EmergencyStop_Response));
  bool success = day2__srv__EmergencyStop_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__srv__EmergencyStop_Response__destroy(day2__srv__EmergencyStop_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__srv__EmergencyStop_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__srv__EmergencyStop_Response__Sequence__init(day2__srv__EmergencyStop_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__EmergencyStop_Response * data = NULL;

  if (size) {
    data = (day2__srv__EmergencyStop_Response *)allocator.zero_allocate(size, sizeof(day2__srv__EmergencyStop_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__srv__EmergencyStop_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__srv__EmergencyStop_Response__fini(&data[i - 1]);
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
day2__srv__EmergencyStop_Response__Sequence__fini(day2__srv__EmergencyStop_Response__Sequence * array)
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
      day2__srv__EmergencyStop_Response__fini(&array->data[i]);
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

day2__srv__EmergencyStop_Response__Sequence *
day2__srv__EmergencyStop_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__EmergencyStop_Response__Sequence * array = (day2__srv__EmergencyStop_Response__Sequence *)allocator.allocate(sizeof(day2__srv__EmergencyStop_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__srv__EmergencyStop_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__srv__EmergencyStop_Response__Sequence__destroy(day2__srv__EmergencyStop_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__srv__EmergencyStop_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__srv__EmergencyStop_Response__Sequence__are_equal(const day2__srv__EmergencyStop_Response__Sequence * lhs, const day2__srv__EmergencyStop_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__srv__EmergencyStop_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__srv__EmergencyStop_Response__Sequence__copy(
  const day2__srv__EmergencyStop_Response__Sequence * input,
  day2__srv__EmergencyStop_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__srv__EmergencyStop_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__srv__EmergencyStop_Response * data =
      (day2__srv__EmergencyStop_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__srv__EmergencyStop_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__srv__EmergencyStop_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__srv__EmergencyStop_Response__copy(
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
// #include "day2/srv/detail/emergency_stop__functions.h"

bool
day2__srv__EmergencyStop_Event__init(day2__srv__EmergencyStop_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    day2__srv__EmergencyStop_Event__fini(msg);
    return false;
  }
  // request
  if (!day2__srv__EmergencyStop_Request__Sequence__init(&msg->request, 0)) {
    day2__srv__EmergencyStop_Event__fini(msg);
    return false;
  }
  // response
  if (!day2__srv__EmergencyStop_Response__Sequence__init(&msg->response, 0)) {
    day2__srv__EmergencyStop_Event__fini(msg);
    return false;
  }
  return true;
}

void
day2__srv__EmergencyStop_Event__fini(day2__srv__EmergencyStop_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  day2__srv__EmergencyStop_Request__Sequence__fini(&msg->request);
  // response
  day2__srv__EmergencyStop_Response__Sequence__fini(&msg->response);
}

bool
day2__srv__EmergencyStop_Event__are_equal(const day2__srv__EmergencyStop_Event * lhs, const day2__srv__EmergencyStop_Event * rhs)
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
  if (!day2__srv__EmergencyStop_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!day2__srv__EmergencyStop_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
day2__srv__EmergencyStop_Event__copy(
  const day2__srv__EmergencyStop_Event * input,
  day2__srv__EmergencyStop_Event * output)
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
  if (!day2__srv__EmergencyStop_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!day2__srv__EmergencyStop_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

day2__srv__EmergencyStop_Event *
day2__srv__EmergencyStop_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__EmergencyStop_Event * msg = (day2__srv__EmergencyStop_Event *)allocator.allocate(sizeof(day2__srv__EmergencyStop_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__srv__EmergencyStop_Event));
  bool success = day2__srv__EmergencyStop_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__srv__EmergencyStop_Event__destroy(day2__srv__EmergencyStop_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__srv__EmergencyStop_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__srv__EmergencyStop_Event__Sequence__init(day2__srv__EmergencyStop_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__EmergencyStop_Event * data = NULL;

  if (size) {
    data = (day2__srv__EmergencyStop_Event *)allocator.zero_allocate(size, sizeof(day2__srv__EmergencyStop_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__srv__EmergencyStop_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__srv__EmergencyStop_Event__fini(&data[i - 1]);
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
day2__srv__EmergencyStop_Event__Sequence__fini(day2__srv__EmergencyStop_Event__Sequence * array)
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
      day2__srv__EmergencyStop_Event__fini(&array->data[i]);
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

day2__srv__EmergencyStop_Event__Sequence *
day2__srv__EmergencyStop_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__srv__EmergencyStop_Event__Sequence * array = (day2__srv__EmergencyStop_Event__Sequence *)allocator.allocate(sizeof(day2__srv__EmergencyStop_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__srv__EmergencyStop_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__srv__EmergencyStop_Event__Sequence__destroy(day2__srv__EmergencyStop_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__srv__EmergencyStop_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__srv__EmergencyStop_Event__Sequence__are_equal(const day2__srv__EmergencyStop_Event__Sequence * lhs, const day2__srv__EmergencyStop_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__srv__EmergencyStop_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__srv__EmergencyStop_Event__Sequence__copy(
  const day2__srv__EmergencyStop_Event__Sequence * input,
  day2__srv__EmergencyStop_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__srv__EmergencyStop_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__srv__EmergencyStop_Event * data =
      (day2__srv__EmergencyStop_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__srv__EmergencyStop_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__srv__EmergencyStop_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__srv__EmergencyStop_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
