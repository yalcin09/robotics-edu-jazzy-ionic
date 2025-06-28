// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from day2:msg/SensorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/msg/sensor_data.h"


#ifndef DAY2__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
#define DAY2__MSG__DETAIL__SENSOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'sensor_name'
// Member 'value_names'
// Member 'unit'
#include "rosidl_runtime_c/string.h"
// Member 'values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SensorData in the package day2.
/**
  * Header bilgisi - standart ROS2 header
 */
typedef struct day2__msg__SensorData
{
  /// Timestamp ve frame_id içerir
  std_msgs__msg__Header header;
  /// Sensör kimlik bilgileri
  /// Sensörün adı
  rosidl_runtime_c__String sensor_name;
  /// Sensörün ID'si
  uint32_t sensor_id;
  /// Sensör değerleri - farklı sensör türleri için
  /// Sensör değerleri array'i
  rosidl_runtime_c__double__Sequence values;
  /// Her değerin ne anlama geldiği
  rosidl_runtime_c__String__Sequence value_names;
  /// Ölçü birimi (örn: "meters", "degrees", "volts")
  rosidl_runtime_c__String unit;
  /// Sensör durumu
  /// Sensör aktif mi?
  bool is_active;
  /// Doğruluk oranı (0.0-1.0)
  float accuracy;
  /// Hata kodu (0 = hata yok)
  uint32_t error_code;
} day2__msg__SensorData;

// Struct for a sequence of day2__msg__SensorData.
typedef struct day2__msg__SensorData__Sequence
{
  day2__msg__SensorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__msg__SensorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAY2__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
