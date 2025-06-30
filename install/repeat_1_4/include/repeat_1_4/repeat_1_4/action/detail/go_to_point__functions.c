// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from repeat_1_4:action/GoToPoint.idl
// generated code does not contain a copyright notice
#include "repeat_1_4/action/detail/go_to_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
repeat_1_4__action__GoToPoint_Goal__init(repeat_1_4__action__GoToPoint_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_x
  // target_y
  return true;
}

void
repeat_1_4__action__GoToPoint_Goal__fini(repeat_1_4__action__GoToPoint_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_x
  // target_y
}

bool
repeat_1_4__action__GoToPoint_Goal__are_equal(const repeat_1_4__action__GoToPoint_Goal * lhs, const repeat_1_4__action__GoToPoint_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_x
  if (lhs->target_x != rhs->target_x) {
    return false;
  }
  // target_y
  if (lhs->target_y != rhs->target_y) {
    return false;
  }
  return true;
}

bool
repeat_1_4__action__GoToPoint_Goal__copy(
  const repeat_1_4__action__GoToPoint_Goal * input,
  repeat_1_4__action__GoToPoint_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target_x
  output->target_x = input->target_x;
  // target_y
  output->target_y = input->target_y;
  return true;
}

repeat_1_4__action__GoToPoint_Goal *
repeat_1_4__action__GoToPoint_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_Goal * msg = (repeat_1_4__action__GoToPoint_Goal *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(repeat_1_4__action__GoToPoint_Goal));
  bool success = repeat_1_4__action__GoToPoint_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
repeat_1_4__action__GoToPoint_Goal__destroy(repeat_1_4__action__GoToPoint_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    repeat_1_4__action__GoToPoint_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
repeat_1_4__action__GoToPoint_Goal__Sequence__init(repeat_1_4__action__GoToPoint_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_Goal * data = NULL;

  if (size) {
    data = (repeat_1_4__action__GoToPoint_Goal *)allocator.zero_allocate(size, sizeof(repeat_1_4__action__GoToPoint_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = repeat_1_4__action__GoToPoint_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        repeat_1_4__action__GoToPoint_Goal__fini(&data[i - 1]);
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
repeat_1_4__action__GoToPoint_Goal__Sequence__fini(repeat_1_4__action__GoToPoint_Goal__Sequence * array)
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
      repeat_1_4__action__GoToPoint_Goal__fini(&array->data[i]);
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

repeat_1_4__action__GoToPoint_Goal__Sequence *
repeat_1_4__action__GoToPoint_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_Goal__Sequence * array = (repeat_1_4__action__GoToPoint_Goal__Sequence *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = repeat_1_4__action__GoToPoint_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
repeat_1_4__action__GoToPoint_Goal__Sequence__destroy(repeat_1_4__action__GoToPoint_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    repeat_1_4__action__GoToPoint_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
repeat_1_4__action__GoToPoint_Goal__Sequence__are_equal(const repeat_1_4__action__GoToPoint_Goal__Sequence * lhs, const repeat_1_4__action__GoToPoint_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
repeat_1_4__action__GoToPoint_Goal__Sequence__copy(
  const repeat_1_4__action__GoToPoint_Goal__Sequence * input,
  repeat_1_4__action__GoToPoint_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(repeat_1_4__action__GoToPoint_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    repeat_1_4__action__GoToPoint_Goal * data =
      (repeat_1_4__action__GoToPoint_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!repeat_1_4__action__GoToPoint_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          repeat_1_4__action__GoToPoint_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
repeat_1_4__action__GoToPoint_Result__init(repeat_1_4__action__GoToPoint_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    repeat_1_4__action__GoToPoint_Result__fini(msg);
    return false;
  }
  // final_x
  // final_y
  return true;
}

void
repeat_1_4__action__GoToPoint_Result__fini(repeat_1_4__action__GoToPoint_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // final_x
  // final_y
}

bool
repeat_1_4__action__GoToPoint_Result__are_equal(const repeat_1_4__action__GoToPoint_Result * lhs, const repeat_1_4__action__GoToPoint_Result * rhs)
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
  // final_x
  if (lhs->final_x != rhs->final_x) {
    return false;
  }
  // final_y
  if (lhs->final_y != rhs->final_y) {
    return false;
  }
  return true;
}

bool
repeat_1_4__action__GoToPoint_Result__copy(
  const repeat_1_4__action__GoToPoint_Result * input,
  repeat_1_4__action__GoToPoint_Result * output)
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
  // final_x
  output->final_x = input->final_x;
  // final_y
  output->final_y = input->final_y;
  return true;
}

repeat_1_4__action__GoToPoint_Result *
repeat_1_4__action__GoToPoint_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_Result * msg = (repeat_1_4__action__GoToPoint_Result *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(repeat_1_4__action__GoToPoint_Result));
  bool success = repeat_1_4__action__GoToPoint_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
repeat_1_4__action__GoToPoint_Result__destroy(repeat_1_4__action__GoToPoint_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    repeat_1_4__action__GoToPoint_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
repeat_1_4__action__GoToPoint_Result__Sequence__init(repeat_1_4__action__GoToPoint_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_Result * data = NULL;

  if (size) {
    data = (repeat_1_4__action__GoToPoint_Result *)allocator.zero_allocate(size, sizeof(repeat_1_4__action__GoToPoint_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = repeat_1_4__action__GoToPoint_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        repeat_1_4__action__GoToPoint_Result__fini(&data[i - 1]);
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
repeat_1_4__action__GoToPoint_Result__Sequence__fini(repeat_1_4__action__GoToPoint_Result__Sequence * array)
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
      repeat_1_4__action__GoToPoint_Result__fini(&array->data[i]);
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

repeat_1_4__action__GoToPoint_Result__Sequence *
repeat_1_4__action__GoToPoint_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_Result__Sequence * array = (repeat_1_4__action__GoToPoint_Result__Sequence *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = repeat_1_4__action__GoToPoint_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
repeat_1_4__action__GoToPoint_Result__Sequence__destroy(repeat_1_4__action__GoToPoint_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    repeat_1_4__action__GoToPoint_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
repeat_1_4__action__GoToPoint_Result__Sequence__are_equal(const repeat_1_4__action__GoToPoint_Result__Sequence * lhs, const repeat_1_4__action__GoToPoint_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
repeat_1_4__action__GoToPoint_Result__Sequence__copy(
  const repeat_1_4__action__GoToPoint_Result__Sequence * input,
  repeat_1_4__action__GoToPoint_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(repeat_1_4__action__GoToPoint_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    repeat_1_4__action__GoToPoint_Result * data =
      (repeat_1_4__action__GoToPoint_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!repeat_1_4__action__GoToPoint_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          repeat_1_4__action__GoToPoint_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
repeat_1_4__action__GoToPoint_Feedback__init(repeat_1_4__action__GoToPoint_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_x
  // current_y
  // progress
  return true;
}

void
repeat_1_4__action__GoToPoint_Feedback__fini(repeat_1_4__action__GoToPoint_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_x
  // current_y
  // progress
}

bool
repeat_1_4__action__GoToPoint_Feedback__are_equal(const repeat_1_4__action__GoToPoint_Feedback * lhs, const repeat_1_4__action__GoToPoint_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_x
  if (lhs->current_x != rhs->current_x) {
    return false;
  }
  // current_y
  if (lhs->current_y != rhs->current_y) {
    return false;
  }
  // progress
  if (lhs->progress != rhs->progress) {
    return false;
  }
  return true;
}

bool
repeat_1_4__action__GoToPoint_Feedback__copy(
  const repeat_1_4__action__GoToPoint_Feedback * input,
  repeat_1_4__action__GoToPoint_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_x
  output->current_x = input->current_x;
  // current_y
  output->current_y = input->current_y;
  // progress
  output->progress = input->progress;
  return true;
}

repeat_1_4__action__GoToPoint_Feedback *
repeat_1_4__action__GoToPoint_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_Feedback * msg = (repeat_1_4__action__GoToPoint_Feedback *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(repeat_1_4__action__GoToPoint_Feedback));
  bool success = repeat_1_4__action__GoToPoint_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
repeat_1_4__action__GoToPoint_Feedback__destroy(repeat_1_4__action__GoToPoint_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    repeat_1_4__action__GoToPoint_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
repeat_1_4__action__GoToPoint_Feedback__Sequence__init(repeat_1_4__action__GoToPoint_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_Feedback * data = NULL;

  if (size) {
    data = (repeat_1_4__action__GoToPoint_Feedback *)allocator.zero_allocate(size, sizeof(repeat_1_4__action__GoToPoint_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = repeat_1_4__action__GoToPoint_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        repeat_1_4__action__GoToPoint_Feedback__fini(&data[i - 1]);
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
repeat_1_4__action__GoToPoint_Feedback__Sequence__fini(repeat_1_4__action__GoToPoint_Feedback__Sequence * array)
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
      repeat_1_4__action__GoToPoint_Feedback__fini(&array->data[i]);
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

repeat_1_4__action__GoToPoint_Feedback__Sequence *
repeat_1_4__action__GoToPoint_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_Feedback__Sequence * array = (repeat_1_4__action__GoToPoint_Feedback__Sequence *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = repeat_1_4__action__GoToPoint_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
repeat_1_4__action__GoToPoint_Feedback__Sequence__destroy(repeat_1_4__action__GoToPoint_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    repeat_1_4__action__GoToPoint_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
repeat_1_4__action__GoToPoint_Feedback__Sequence__are_equal(const repeat_1_4__action__GoToPoint_Feedback__Sequence * lhs, const repeat_1_4__action__GoToPoint_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
repeat_1_4__action__GoToPoint_Feedback__Sequence__copy(
  const repeat_1_4__action__GoToPoint_Feedback__Sequence * input,
  repeat_1_4__action__GoToPoint_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(repeat_1_4__action__GoToPoint_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    repeat_1_4__action__GoToPoint_Feedback * data =
      (repeat_1_4__action__GoToPoint_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!repeat_1_4__action__GoToPoint_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          repeat_1_4__action__GoToPoint_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_Feedback__copy(
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
// #include "repeat_1_4/action/detail/go_to_point__functions.h"

bool
repeat_1_4__action__GoToPoint_SendGoal_Request__init(repeat_1_4__action__GoToPoint_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    repeat_1_4__action__GoToPoint_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!repeat_1_4__action__GoToPoint_Goal__init(&msg->goal)) {
    repeat_1_4__action__GoToPoint_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
repeat_1_4__action__GoToPoint_SendGoal_Request__fini(repeat_1_4__action__GoToPoint_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  repeat_1_4__action__GoToPoint_Goal__fini(&msg->goal);
}

bool
repeat_1_4__action__GoToPoint_SendGoal_Request__are_equal(const repeat_1_4__action__GoToPoint_SendGoal_Request * lhs, const repeat_1_4__action__GoToPoint_SendGoal_Request * rhs)
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
  if (!repeat_1_4__action__GoToPoint_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
repeat_1_4__action__GoToPoint_SendGoal_Request__copy(
  const repeat_1_4__action__GoToPoint_SendGoal_Request * input,
  repeat_1_4__action__GoToPoint_SendGoal_Request * output)
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
  if (!repeat_1_4__action__GoToPoint_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

repeat_1_4__action__GoToPoint_SendGoal_Request *
repeat_1_4__action__GoToPoint_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_SendGoal_Request * msg = (repeat_1_4__action__GoToPoint_SendGoal_Request *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(repeat_1_4__action__GoToPoint_SendGoal_Request));
  bool success = repeat_1_4__action__GoToPoint_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
repeat_1_4__action__GoToPoint_SendGoal_Request__destroy(repeat_1_4__action__GoToPoint_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    repeat_1_4__action__GoToPoint_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence__init(repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_SendGoal_Request * data = NULL;

  if (size) {
    data = (repeat_1_4__action__GoToPoint_SendGoal_Request *)allocator.zero_allocate(size, sizeof(repeat_1_4__action__GoToPoint_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = repeat_1_4__action__GoToPoint_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        repeat_1_4__action__GoToPoint_SendGoal_Request__fini(&data[i - 1]);
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
repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence__fini(repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence * array)
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
      repeat_1_4__action__GoToPoint_SendGoal_Request__fini(&array->data[i]);
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

repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence *
repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence * array = (repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence__destroy(repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence__are_equal(const repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence * lhs, const repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence__copy(
  const repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence * input,
  repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(repeat_1_4__action__GoToPoint_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    repeat_1_4__action__GoToPoint_SendGoal_Request * data =
      (repeat_1_4__action__GoToPoint_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!repeat_1_4__action__GoToPoint_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          repeat_1_4__action__GoToPoint_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
repeat_1_4__action__GoToPoint_SendGoal_Response__init(repeat_1_4__action__GoToPoint_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    repeat_1_4__action__GoToPoint_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
repeat_1_4__action__GoToPoint_SendGoal_Response__fini(repeat_1_4__action__GoToPoint_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
repeat_1_4__action__GoToPoint_SendGoal_Response__are_equal(const repeat_1_4__action__GoToPoint_SendGoal_Response * lhs, const repeat_1_4__action__GoToPoint_SendGoal_Response * rhs)
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
repeat_1_4__action__GoToPoint_SendGoal_Response__copy(
  const repeat_1_4__action__GoToPoint_SendGoal_Response * input,
  repeat_1_4__action__GoToPoint_SendGoal_Response * output)
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

repeat_1_4__action__GoToPoint_SendGoal_Response *
repeat_1_4__action__GoToPoint_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_SendGoal_Response * msg = (repeat_1_4__action__GoToPoint_SendGoal_Response *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(repeat_1_4__action__GoToPoint_SendGoal_Response));
  bool success = repeat_1_4__action__GoToPoint_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
repeat_1_4__action__GoToPoint_SendGoal_Response__destroy(repeat_1_4__action__GoToPoint_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    repeat_1_4__action__GoToPoint_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence__init(repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_SendGoal_Response * data = NULL;

  if (size) {
    data = (repeat_1_4__action__GoToPoint_SendGoal_Response *)allocator.zero_allocate(size, sizeof(repeat_1_4__action__GoToPoint_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = repeat_1_4__action__GoToPoint_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        repeat_1_4__action__GoToPoint_SendGoal_Response__fini(&data[i - 1]);
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
repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence__fini(repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence * array)
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
      repeat_1_4__action__GoToPoint_SendGoal_Response__fini(&array->data[i]);
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

repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence *
repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence * array = (repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence__destroy(repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence__are_equal(const repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence * lhs, const repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence__copy(
  const repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence * input,
  repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(repeat_1_4__action__GoToPoint_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    repeat_1_4__action__GoToPoint_SendGoal_Response * data =
      (repeat_1_4__action__GoToPoint_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!repeat_1_4__action__GoToPoint_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          repeat_1_4__action__GoToPoint_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_SendGoal_Response__copy(
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
// #include "repeat_1_4/action/detail/go_to_point__functions.h"

bool
repeat_1_4__action__GoToPoint_SendGoal_Event__init(repeat_1_4__action__GoToPoint_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    repeat_1_4__action__GoToPoint_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    repeat_1_4__action__GoToPoint_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    repeat_1_4__action__GoToPoint_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
repeat_1_4__action__GoToPoint_SendGoal_Event__fini(repeat_1_4__action__GoToPoint_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
repeat_1_4__action__GoToPoint_SendGoal_Event__are_equal(const repeat_1_4__action__GoToPoint_SendGoal_Event * lhs, const repeat_1_4__action__GoToPoint_SendGoal_Event * rhs)
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
  if (!repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
repeat_1_4__action__GoToPoint_SendGoal_Event__copy(
  const repeat_1_4__action__GoToPoint_SendGoal_Event * input,
  repeat_1_4__action__GoToPoint_SendGoal_Event * output)
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
  if (!repeat_1_4__action__GoToPoint_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!repeat_1_4__action__GoToPoint_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

repeat_1_4__action__GoToPoint_SendGoal_Event *
repeat_1_4__action__GoToPoint_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_SendGoal_Event * msg = (repeat_1_4__action__GoToPoint_SendGoal_Event *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(repeat_1_4__action__GoToPoint_SendGoal_Event));
  bool success = repeat_1_4__action__GoToPoint_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
repeat_1_4__action__GoToPoint_SendGoal_Event__destroy(repeat_1_4__action__GoToPoint_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    repeat_1_4__action__GoToPoint_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence__init(repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_SendGoal_Event * data = NULL;

  if (size) {
    data = (repeat_1_4__action__GoToPoint_SendGoal_Event *)allocator.zero_allocate(size, sizeof(repeat_1_4__action__GoToPoint_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = repeat_1_4__action__GoToPoint_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        repeat_1_4__action__GoToPoint_SendGoal_Event__fini(&data[i - 1]);
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
repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence__fini(repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence * array)
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
      repeat_1_4__action__GoToPoint_SendGoal_Event__fini(&array->data[i]);
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

repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence *
repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence * array = (repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence__destroy(repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence__are_equal(const repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence * lhs, const repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence__copy(
  const repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence * input,
  repeat_1_4__action__GoToPoint_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(repeat_1_4__action__GoToPoint_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    repeat_1_4__action__GoToPoint_SendGoal_Event * data =
      (repeat_1_4__action__GoToPoint_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!repeat_1_4__action__GoToPoint_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          repeat_1_4__action__GoToPoint_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_SendGoal_Event__copy(
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
repeat_1_4__action__GoToPoint_GetResult_Request__init(repeat_1_4__action__GoToPoint_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    repeat_1_4__action__GoToPoint_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
repeat_1_4__action__GoToPoint_GetResult_Request__fini(repeat_1_4__action__GoToPoint_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
repeat_1_4__action__GoToPoint_GetResult_Request__are_equal(const repeat_1_4__action__GoToPoint_GetResult_Request * lhs, const repeat_1_4__action__GoToPoint_GetResult_Request * rhs)
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
repeat_1_4__action__GoToPoint_GetResult_Request__copy(
  const repeat_1_4__action__GoToPoint_GetResult_Request * input,
  repeat_1_4__action__GoToPoint_GetResult_Request * output)
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

repeat_1_4__action__GoToPoint_GetResult_Request *
repeat_1_4__action__GoToPoint_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_GetResult_Request * msg = (repeat_1_4__action__GoToPoint_GetResult_Request *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(repeat_1_4__action__GoToPoint_GetResult_Request));
  bool success = repeat_1_4__action__GoToPoint_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
repeat_1_4__action__GoToPoint_GetResult_Request__destroy(repeat_1_4__action__GoToPoint_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    repeat_1_4__action__GoToPoint_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
repeat_1_4__action__GoToPoint_GetResult_Request__Sequence__init(repeat_1_4__action__GoToPoint_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_GetResult_Request * data = NULL;

  if (size) {
    data = (repeat_1_4__action__GoToPoint_GetResult_Request *)allocator.zero_allocate(size, sizeof(repeat_1_4__action__GoToPoint_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = repeat_1_4__action__GoToPoint_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        repeat_1_4__action__GoToPoint_GetResult_Request__fini(&data[i - 1]);
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
repeat_1_4__action__GoToPoint_GetResult_Request__Sequence__fini(repeat_1_4__action__GoToPoint_GetResult_Request__Sequence * array)
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
      repeat_1_4__action__GoToPoint_GetResult_Request__fini(&array->data[i]);
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

repeat_1_4__action__GoToPoint_GetResult_Request__Sequence *
repeat_1_4__action__GoToPoint_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_GetResult_Request__Sequence * array = (repeat_1_4__action__GoToPoint_GetResult_Request__Sequence *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = repeat_1_4__action__GoToPoint_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
repeat_1_4__action__GoToPoint_GetResult_Request__Sequence__destroy(repeat_1_4__action__GoToPoint_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    repeat_1_4__action__GoToPoint_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
repeat_1_4__action__GoToPoint_GetResult_Request__Sequence__are_equal(const repeat_1_4__action__GoToPoint_GetResult_Request__Sequence * lhs, const repeat_1_4__action__GoToPoint_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
repeat_1_4__action__GoToPoint_GetResult_Request__Sequence__copy(
  const repeat_1_4__action__GoToPoint_GetResult_Request__Sequence * input,
  repeat_1_4__action__GoToPoint_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(repeat_1_4__action__GoToPoint_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    repeat_1_4__action__GoToPoint_GetResult_Request * data =
      (repeat_1_4__action__GoToPoint_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!repeat_1_4__action__GoToPoint_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          repeat_1_4__action__GoToPoint_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_GetResult_Request__copy(
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
// #include "repeat_1_4/action/detail/go_to_point__functions.h"

bool
repeat_1_4__action__GoToPoint_GetResult_Response__init(repeat_1_4__action__GoToPoint_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!repeat_1_4__action__GoToPoint_Result__init(&msg->result)) {
    repeat_1_4__action__GoToPoint_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
repeat_1_4__action__GoToPoint_GetResult_Response__fini(repeat_1_4__action__GoToPoint_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  repeat_1_4__action__GoToPoint_Result__fini(&msg->result);
}

bool
repeat_1_4__action__GoToPoint_GetResult_Response__are_equal(const repeat_1_4__action__GoToPoint_GetResult_Response * lhs, const repeat_1_4__action__GoToPoint_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!repeat_1_4__action__GoToPoint_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
repeat_1_4__action__GoToPoint_GetResult_Response__copy(
  const repeat_1_4__action__GoToPoint_GetResult_Response * input,
  repeat_1_4__action__GoToPoint_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!repeat_1_4__action__GoToPoint_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

repeat_1_4__action__GoToPoint_GetResult_Response *
repeat_1_4__action__GoToPoint_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_GetResult_Response * msg = (repeat_1_4__action__GoToPoint_GetResult_Response *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(repeat_1_4__action__GoToPoint_GetResult_Response));
  bool success = repeat_1_4__action__GoToPoint_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
repeat_1_4__action__GoToPoint_GetResult_Response__destroy(repeat_1_4__action__GoToPoint_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    repeat_1_4__action__GoToPoint_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
repeat_1_4__action__GoToPoint_GetResult_Response__Sequence__init(repeat_1_4__action__GoToPoint_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_GetResult_Response * data = NULL;

  if (size) {
    data = (repeat_1_4__action__GoToPoint_GetResult_Response *)allocator.zero_allocate(size, sizeof(repeat_1_4__action__GoToPoint_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = repeat_1_4__action__GoToPoint_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        repeat_1_4__action__GoToPoint_GetResult_Response__fini(&data[i - 1]);
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
repeat_1_4__action__GoToPoint_GetResult_Response__Sequence__fini(repeat_1_4__action__GoToPoint_GetResult_Response__Sequence * array)
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
      repeat_1_4__action__GoToPoint_GetResult_Response__fini(&array->data[i]);
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

repeat_1_4__action__GoToPoint_GetResult_Response__Sequence *
repeat_1_4__action__GoToPoint_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_GetResult_Response__Sequence * array = (repeat_1_4__action__GoToPoint_GetResult_Response__Sequence *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = repeat_1_4__action__GoToPoint_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
repeat_1_4__action__GoToPoint_GetResult_Response__Sequence__destroy(repeat_1_4__action__GoToPoint_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    repeat_1_4__action__GoToPoint_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
repeat_1_4__action__GoToPoint_GetResult_Response__Sequence__are_equal(const repeat_1_4__action__GoToPoint_GetResult_Response__Sequence * lhs, const repeat_1_4__action__GoToPoint_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
repeat_1_4__action__GoToPoint_GetResult_Response__Sequence__copy(
  const repeat_1_4__action__GoToPoint_GetResult_Response__Sequence * input,
  repeat_1_4__action__GoToPoint_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(repeat_1_4__action__GoToPoint_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    repeat_1_4__action__GoToPoint_GetResult_Response * data =
      (repeat_1_4__action__GoToPoint_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!repeat_1_4__action__GoToPoint_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          repeat_1_4__action__GoToPoint_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_GetResult_Response__copy(
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
// #include "repeat_1_4/action/detail/go_to_point__functions.h"

bool
repeat_1_4__action__GoToPoint_GetResult_Event__init(repeat_1_4__action__GoToPoint_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    repeat_1_4__action__GoToPoint_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!repeat_1_4__action__GoToPoint_GetResult_Request__Sequence__init(&msg->request, 0)) {
    repeat_1_4__action__GoToPoint_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!repeat_1_4__action__GoToPoint_GetResult_Response__Sequence__init(&msg->response, 0)) {
    repeat_1_4__action__GoToPoint_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
repeat_1_4__action__GoToPoint_GetResult_Event__fini(repeat_1_4__action__GoToPoint_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  repeat_1_4__action__GoToPoint_GetResult_Request__Sequence__fini(&msg->request);
  // response
  repeat_1_4__action__GoToPoint_GetResult_Response__Sequence__fini(&msg->response);
}

bool
repeat_1_4__action__GoToPoint_GetResult_Event__are_equal(const repeat_1_4__action__GoToPoint_GetResult_Event * lhs, const repeat_1_4__action__GoToPoint_GetResult_Event * rhs)
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
  if (!repeat_1_4__action__GoToPoint_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!repeat_1_4__action__GoToPoint_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
repeat_1_4__action__GoToPoint_GetResult_Event__copy(
  const repeat_1_4__action__GoToPoint_GetResult_Event * input,
  repeat_1_4__action__GoToPoint_GetResult_Event * output)
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
  if (!repeat_1_4__action__GoToPoint_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!repeat_1_4__action__GoToPoint_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

repeat_1_4__action__GoToPoint_GetResult_Event *
repeat_1_4__action__GoToPoint_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_GetResult_Event * msg = (repeat_1_4__action__GoToPoint_GetResult_Event *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(repeat_1_4__action__GoToPoint_GetResult_Event));
  bool success = repeat_1_4__action__GoToPoint_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
repeat_1_4__action__GoToPoint_GetResult_Event__destroy(repeat_1_4__action__GoToPoint_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    repeat_1_4__action__GoToPoint_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
repeat_1_4__action__GoToPoint_GetResult_Event__Sequence__init(repeat_1_4__action__GoToPoint_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_GetResult_Event * data = NULL;

  if (size) {
    data = (repeat_1_4__action__GoToPoint_GetResult_Event *)allocator.zero_allocate(size, sizeof(repeat_1_4__action__GoToPoint_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = repeat_1_4__action__GoToPoint_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        repeat_1_4__action__GoToPoint_GetResult_Event__fini(&data[i - 1]);
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
repeat_1_4__action__GoToPoint_GetResult_Event__Sequence__fini(repeat_1_4__action__GoToPoint_GetResult_Event__Sequence * array)
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
      repeat_1_4__action__GoToPoint_GetResult_Event__fini(&array->data[i]);
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

repeat_1_4__action__GoToPoint_GetResult_Event__Sequence *
repeat_1_4__action__GoToPoint_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_GetResult_Event__Sequence * array = (repeat_1_4__action__GoToPoint_GetResult_Event__Sequence *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = repeat_1_4__action__GoToPoint_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
repeat_1_4__action__GoToPoint_GetResult_Event__Sequence__destroy(repeat_1_4__action__GoToPoint_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    repeat_1_4__action__GoToPoint_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
repeat_1_4__action__GoToPoint_GetResult_Event__Sequence__are_equal(const repeat_1_4__action__GoToPoint_GetResult_Event__Sequence * lhs, const repeat_1_4__action__GoToPoint_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
repeat_1_4__action__GoToPoint_GetResult_Event__Sequence__copy(
  const repeat_1_4__action__GoToPoint_GetResult_Event__Sequence * input,
  repeat_1_4__action__GoToPoint_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(repeat_1_4__action__GoToPoint_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    repeat_1_4__action__GoToPoint_GetResult_Event * data =
      (repeat_1_4__action__GoToPoint_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!repeat_1_4__action__GoToPoint_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          repeat_1_4__action__GoToPoint_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_GetResult_Event__copy(
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
// #include "repeat_1_4/action/detail/go_to_point__functions.h"

bool
repeat_1_4__action__GoToPoint_FeedbackMessage__init(repeat_1_4__action__GoToPoint_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    repeat_1_4__action__GoToPoint_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!repeat_1_4__action__GoToPoint_Feedback__init(&msg->feedback)) {
    repeat_1_4__action__GoToPoint_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
repeat_1_4__action__GoToPoint_FeedbackMessage__fini(repeat_1_4__action__GoToPoint_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  repeat_1_4__action__GoToPoint_Feedback__fini(&msg->feedback);
}

bool
repeat_1_4__action__GoToPoint_FeedbackMessage__are_equal(const repeat_1_4__action__GoToPoint_FeedbackMessage * lhs, const repeat_1_4__action__GoToPoint_FeedbackMessage * rhs)
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
  if (!repeat_1_4__action__GoToPoint_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
repeat_1_4__action__GoToPoint_FeedbackMessage__copy(
  const repeat_1_4__action__GoToPoint_FeedbackMessage * input,
  repeat_1_4__action__GoToPoint_FeedbackMessage * output)
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
  if (!repeat_1_4__action__GoToPoint_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

repeat_1_4__action__GoToPoint_FeedbackMessage *
repeat_1_4__action__GoToPoint_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_FeedbackMessage * msg = (repeat_1_4__action__GoToPoint_FeedbackMessage *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(repeat_1_4__action__GoToPoint_FeedbackMessage));
  bool success = repeat_1_4__action__GoToPoint_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
repeat_1_4__action__GoToPoint_FeedbackMessage__destroy(repeat_1_4__action__GoToPoint_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    repeat_1_4__action__GoToPoint_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence__init(repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_FeedbackMessage * data = NULL;

  if (size) {
    data = (repeat_1_4__action__GoToPoint_FeedbackMessage *)allocator.zero_allocate(size, sizeof(repeat_1_4__action__GoToPoint_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = repeat_1_4__action__GoToPoint_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        repeat_1_4__action__GoToPoint_FeedbackMessage__fini(&data[i - 1]);
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
repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence__fini(repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence * array)
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
      repeat_1_4__action__GoToPoint_FeedbackMessage__fini(&array->data[i]);
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

repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence *
repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence * array = (repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence *)allocator.allocate(sizeof(repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence__destroy(repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence__are_equal(const repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence * lhs, const repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence__copy(
  const repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence * input,
  repeat_1_4__action__GoToPoint_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(repeat_1_4__action__GoToPoint_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    repeat_1_4__action__GoToPoint_FeedbackMessage * data =
      (repeat_1_4__action__GoToPoint_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!repeat_1_4__action__GoToPoint_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          repeat_1_4__action__GoToPoint_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!repeat_1_4__action__GoToPoint_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
