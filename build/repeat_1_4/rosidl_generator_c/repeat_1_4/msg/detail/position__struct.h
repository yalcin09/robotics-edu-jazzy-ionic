// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from repeat_1_4:msg/Position.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "repeat_1_4/msg/position.h"


#ifndef REPEAT_1_4__MSG__DETAIL__POSITION__STRUCT_H_
#define REPEAT_1_4__MSG__DETAIL__POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/Position in the package repeat_1_4.
/**
  * Çok basit robot pozisyonu
 */
typedef struct repeat_1_4__msg__Position
{
  /// X koordinatı
  float x;
  /// Y koordinatı
  float y;
  /// Robot durumu ("moving", "stopped", "error")
  rosidl_runtime_c__String status;
  builtin_interfaces__msg__Time timestamp;
} repeat_1_4__msg__Position;

// Struct for a sequence of repeat_1_4__msg__Position.
typedef struct repeat_1_4__msg__Position__Sequence
{
  repeat_1_4__msg__Position * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} repeat_1_4__msg__Position__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // REPEAT_1_4__MSG__DETAIL__POSITION__STRUCT_H_
