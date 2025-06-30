// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from repeat_1_4:msg/Position.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "repeat_1_4/msg/position.h"


#ifndef REPEAT_1_4__MSG__DETAIL__POSITION__FUNCTIONS_H_
#define REPEAT_1_4__MSG__DETAIL__POSITION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "repeat_1_4/msg/rosidl_generator_c__visibility_control.h"

#include "repeat_1_4/msg/detail/position__struct.h"

/// Initialize msg/Position message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * repeat_1_4__msg__Position
 * )) before or use
 * repeat_1_4__msg__Position__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
bool
repeat_1_4__msg__Position__init(repeat_1_4__msg__Position * msg);

/// Finalize msg/Position message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
void
repeat_1_4__msg__Position__fini(repeat_1_4__msg__Position * msg);

/// Create msg/Position message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * repeat_1_4__msg__Position__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
repeat_1_4__msg__Position *
repeat_1_4__msg__Position__create(void);

/// Destroy msg/Position message.
/**
 * It calls
 * repeat_1_4__msg__Position__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
void
repeat_1_4__msg__Position__destroy(repeat_1_4__msg__Position * msg);

/// Check for msg/Position message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
bool
repeat_1_4__msg__Position__are_equal(const repeat_1_4__msg__Position * lhs, const repeat_1_4__msg__Position * rhs);

/// Copy a msg/Position message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
bool
repeat_1_4__msg__Position__copy(
  const repeat_1_4__msg__Position * input,
  repeat_1_4__msg__Position * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
const rosidl_type_hash_t *
repeat_1_4__msg__Position__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
const rosidl_runtime_c__type_description__TypeDescription *
repeat_1_4__msg__Position__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
const rosidl_runtime_c__type_description__TypeSource *
repeat_1_4__msg__Position__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
const rosidl_runtime_c__type_description__TypeSource__Sequence *
repeat_1_4__msg__Position__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Position messages.
/**
 * It allocates the memory for the number of elements and calls
 * repeat_1_4__msg__Position__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
bool
repeat_1_4__msg__Position__Sequence__init(repeat_1_4__msg__Position__Sequence * array, size_t size);

/// Finalize array of msg/Position messages.
/**
 * It calls
 * repeat_1_4__msg__Position__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
void
repeat_1_4__msg__Position__Sequence__fini(repeat_1_4__msg__Position__Sequence * array);

/// Create array of msg/Position messages.
/**
 * It allocates the memory for the array and calls
 * repeat_1_4__msg__Position__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
repeat_1_4__msg__Position__Sequence *
repeat_1_4__msg__Position__Sequence__create(size_t size);

/// Destroy array of msg/Position messages.
/**
 * It calls
 * repeat_1_4__msg__Position__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
void
repeat_1_4__msg__Position__Sequence__destroy(repeat_1_4__msg__Position__Sequence * array);

/// Check for msg/Position message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
bool
repeat_1_4__msg__Position__Sequence__are_equal(const repeat_1_4__msg__Position__Sequence * lhs, const repeat_1_4__msg__Position__Sequence * rhs);

/// Copy an array of msg/Position messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_repeat_1_4
bool
repeat_1_4__msg__Position__Sequence__copy(
  const repeat_1_4__msg__Position__Sequence * input,
  repeat_1_4__msg__Position__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // REPEAT_1_4__MSG__DETAIL__POSITION__FUNCTIONS_H_
