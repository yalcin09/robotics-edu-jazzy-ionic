// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from day2:msg/SensorData.idl
// generated code does not contain a copyright notice
#include "day2/msg/detail/sensor_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `sensor_name`
// Member `value_names`
// Member `unit`
#include "rosidl_runtime_c/string_functions.h"
// Member `values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
day2__msg__SensorData__init(day2__msg__SensorData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    day2__msg__SensorData__fini(msg);
    return false;
  }
  // sensor_name
  if (!rosidl_runtime_c__String__init(&msg->sensor_name)) {
    day2__msg__SensorData__fini(msg);
    return false;
  }
  // sensor_id
  // values
  if (!rosidl_runtime_c__double__Sequence__init(&msg->values, 0)) {
    day2__msg__SensorData__fini(msg);
    return false;
  }
  // value_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->value_names, 0)) {
    day2__msg__SensorData__fini(msg);
    return false;
  }
  // unit
  if (!rosidl_runtime_c__String__init(&msg->unit)) {
    day2__msg__SensorData__fini(msg);
    return false;
  }
  // is_active
  // accuracy
  // error_code
  return true;
}

void
day2__msg__SensorData__fini(day2__msg__SensorData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sensor_name
  rosidl_runtime_c__String__fini(&msg->sensor_name);
  // sensor_id
  // values
  rosidl_runtime_c__double__Sequence__fini(&msg->values);
  // value_names
  rosidl_runtime_c__String__Sequence__fini(&msg->value_names);
  // unit
  rosidl_runtime_c__String__fini(&msg->unit);
  // is_active
  // accuracy
  // error_code
}

bool
day2__msg__SensorData__are_equal(const day2__msg__SensorData * lhs, const day2__msg__SensorData * rhs)
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
  // sensor_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sensor_name), &(rhs->sensor_name)))
  {
    return false;
  }
  // sensor_id
  if (lhs->sensor_id != rhs->sensor_id) {
    return false;
  }
  // values
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->values), &(rhs->values)))
  {
    return false;
  }
  // value_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->value_names), &(rhs->value_names)))
  {
    return false;
  }
  // unit
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->unit), &(rhs->unit)))
  {
    return false;
  }
  // is_active
  if (lhs->is_active != rhs->is_active) {
    return false;
  }
  // accuracy
  if (lhs->accuracy != rhs->accuracy) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  return true;
}

bool
day2__msg__SensorData__copy(
  const day2__msg__SensorData * input,
  day2__msg__SensorData * output)
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
  // sensor_name
  if (!rosidl_runtime_c__String__copy(
      &(input->sensor_name), &(output->sensor_name)))
  {
    return false;
  }
  // sensor_id
  output->sensor_id = input->sensor_id;
  // values
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->values), &(output->values)))
  {
    return false;
  }
  // value_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->value_names), &(output->value_names)))
  {
    return false;
  }
  // unit
  if (!rosidl_runtime_c__String__copy(
      &(input->unit), &(output->unit)))
  {
    return false;
  }
  // is_active
  output->is_active = input->is_active;
  // accuracy
  output->accuracy = input->accuracy;
  // error_code
  output->error_code = input->error_code;
  return true;
}

day2__msg__SensorData *
day2__msg__SensorData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__msg__SensorData * msg = (day2__msg__SensorData *)allocator.allocate(sizeof(day2__msg__SensorData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(day2__msg__SensorData));
  bool success = day2__msg__SensorData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
day2__msg__SensorData__destroy(day2__msg__SensorData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    day2__msg__SensorData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
day2__msg__SensorData__Sequence__init(day2__msg__SensorData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__msg__SensorData * data = NULL;

  if (size) {
    data = (day2__msg__SensorData *)allocator.zero_allocate(size, sizeof(day2__msg__SensorData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = day2__msg__SensorData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        day2__msg__SensorData__fini(&data[i - 1]);
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
day2__msg__SensorData__Sequence__fini(day2__msg__SensorData__Sequence * array)
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
      day2__msg__SensorData__fini(&array->data[i]);
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

day2__msg__SensorData__Sequence *
day2__msg__SensorData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  day2__msg__SensorData__Sequence * array = (day2__msg__SensorData__Sequence *)allocator.allocate(sizeof(day2__msg__SensorData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = day2__msg__SensorData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
day2__msg__SensorData__Sequence__destroy(day2__msg__SensorData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    day2__msg__SensorData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
day2__msg__SensorData__Sequence__are_equal(const day2__msg__SensorData__Sequence * lhs, const day2__msg__SensorData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!day2__msg__SensorData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
day2__msg__SensorData__Sequence__copy(
  const day2__msg__SensorData__Sequence * input,
  day2__msg__SensorData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(day2__msg__SensorData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    day2__msg__SensorData * data =
      (day2__msg__SensorData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!day2__msg__SensorData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          day2__msg__SensorData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!day2__msg__SensorData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
