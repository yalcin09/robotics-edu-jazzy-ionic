// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from repeat_1_4:msg/Position.idl
// generated code does not contain a copyright notice
#include "repeat_1_4/msg/detail/position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
repeat_1_4__msg__Position__init(repeat_1_4__msg__Position * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    repeat_1_4__msg__Position__fini(msg);
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    repeat_1_4__msg__Position__fini(msg);
    return false;
  }
  return true;
}

void
repeat_1_4__msg__Position__fini(repeat_1_4__msg__Position * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
}

bool
repeat_1_4__msg__Position__are_equal(const repeat_1_4__msg__Position * lhs, const repeat_1_4__msg__Position * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  return true;
}

bool
repeat_1_4__msg__Position__copy(
  const repeat_1_4__msg__Position * input,
  repeat_1_4__msg__Position * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  return true;
}

repeat_1_4__msg__Position *
repeat_1_4__msg__Position__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__msg__Position * msg = (repeat_1_4__msg__Position *)allocator.allocate(sizeof(repeat_1_4__msg__Position), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(repeat_1_4__msg__Position));
  bool success = repeat_1_4__msg__Position__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
repeat_1_4__msg__Position__destroy(repeat_1_4__msg__Position * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    repeat_1_4__msg__Position__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
repeat_1_4__msg__Position__Sequence__init(repeat_1_4__msg__Position__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__msg__Position * data = NULL;

  if (size) {
    data = (repeat_1_4__msg__Position *)allocator.zero_allocate(size, sizeof(repeat_1_4__msg__Position), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = repeat_1_4__msg__Position__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        repeat_1_4__msg__Position__fini(&data[i - 1]);
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
repeat_1_4__msg__Position__Sequence__fini(repeat_1_4__msg__Position__Sequence * array)
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
      repeat_1_4__msg__Position__fini(&array->data[i]);
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

repeat_1_4__msg__Position__Sequence *
repeat_1_4__msg__Position__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__msg__Position__Sequence * array = (repeat_1_4__msg__Position__Sequence *)allocator.allocate(sizeof(repeat_1_4__msg__Position__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = repeat_1_4__msg__Position__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
repeat_1_4__msg__Position__Sequence__destroy(repeat_1_4__msg__Position__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    repeat_1_4__msg__Position__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
repeat_1_4__msg__Position__Sequence__are_equal(const repeat_1_4__msg__Position__Sequence * lhs, const repeat_1_4__msg__Position__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!repeat_1_4__msg__Position__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
repeat_1_4__msg__Position__Sequence__copy(
  const repeat_1_4__msg__Position__Sequence * input,
  repeat_1_4__msg__Position__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(repeat_1_4__msg__Position);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    repeat_1_4__msg__Position * data =
      (repeat_1_4__msg__Position *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!repeat_1_4__msg__Position__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          repeat_1_4__msg__Position__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!repeat_1_4__msg__Position__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
