// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from day2:msg/SensorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/msg/sensor_data.h"


#ifndef DAY2__MSG__DETAIL__SENSOR_DATA__FUNCTIONS_H_
#define DAY2__MSG__DETAIL__SENSOR_DATA__FUNCTIONS_H_

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
#include "day2/msg/rosidl_generator_c__visibility_control.h"

#include "day2/msg/detail/sensor_data__struct.h"

/// Initialize msg/SensorData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * day2__msg__SensorData
 * )) before or use
 * day2__msg__SensorData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_day2
bool
day2__msg__SensorData__init(day2__msg__SensorData * msg);

/// Finalize msg/SensorData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_day2
void
day2__msg__SensorData__fini(day2__msg__SensorData * msg);

/// Create msg/SensorData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * day2__msg__SensorData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_day2
day2__msg__SensorData *
day2__msg__SensorData__create(void);

/// Destroy msg/SensorData message.
/**
 * It calls
 * day2__msg__SensorData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_day2
void
day2__msg__SensorData__destroy(day2__msg__SensorData * msg);

/// Check for msg/SensorData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_day2
bool
day2__msg__SensorData__are_equal(const day2__msg__SensorData * lhs, const day2__msg__SensorData * rhs);

/// Copy a msg/SensorData message.
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
ROSIDL_GENERATOR_C_PUBLIC_day2
bool
day2__msg__SensorData__copy(
  const day2__msg__SensorData * input,
  day2__msg__SensorData * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__msg__SensorData__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_runtime_c__type_description__TypeDescription *
day2__msg__SensorData__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_runtime_c__type_description__TypeSource *
day2__msg__SensorData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__msg__SensorData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/SensorData messages.
/**
 * It allocates the memory for the number of elements and calls
 * day2__msg__SensorData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_day2
bool
day2__msg__SensorData__Sequence__init(day2__msg__SensorData__Sequence * array, size_t size);

/// Finalize array of msg/SensorData messages.
/**
 * It calls
 * day2__msg__SensorData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_day2
void
day2__msg__SensorData__Sequence__fini(day2__msg__SensorData__Sequence * array);

/// Create array of msg/SensorData messages.
/**
 * It allocates the memory for the array and calls
 * day2__msg__SensorData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_day2
day2__msg__SensorData__Sequence *
day2__msg__SensorData__Sequence__create(size_t size);

/// Destroy array of msg/SensorData messages.
/**
 * It calls
 * day2__msg__SensorData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_day2
void
day2__msg__SensorData__Sequence__destroy(day2__msg__SensorData__Sequence * array);

/// Check for msg/SensorData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_day2
bool
day2__msg__SensorData__Sequence__are_equal(const day2__msg__SensorData__Sequence * lhs, const day2__msg__SensorData__Sequence * rhs);

/// Copy an array of msg/SensorData messages.
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
ROSIDL_GENERATOR_C_PUBLIC_day2
bool
day2__msg__SensorData__Sequence__copy(
  const day2__msg__SensorData__Sequence * input,
  day2__msg__SensorData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DAY2__MSG__DETAIL__SENSOR_DATA__FUNCTIONS_H_
