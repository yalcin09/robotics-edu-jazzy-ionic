// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from day2:srv/GetRobotStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/srv/get_robot_status.h"


#ifndef DAY2__SRV__DETAIL__GET_ROBOT_STATUS__STRUCT_H_
#define DAY2__SRV__DETAIL__GET_ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_name'
// Member 'requested_fields'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetRobotStatus in the package day2.
typedef struct day2__srv__GetRobotStatus_Request
{
  /// Belirli robot ID (0 = tüm robotlar)
  uint32_t robot_id;
  /// Robot adı (boş = ID kullan)
  rosidl_runtime_c__String robot_name;
  /// Sensör detayları dahil edilsin mi?
  bool include_sensors;
  /// Diagnostic bilgiler dahil edilsin mi?
  bool include_diagnostics;
  /// Son 10 durum geçmişi dahil edilsin mi?
  bool include_history;
  /// Sadece belirli alanlar (boş = hepsi)
  rosidl_runtime_c__String__Sequence requested_fields;
} day2__srv__GetRobotStatus_Request;

// Struct for a sequence of day2__srv__GetRobotStatus_Request.
typedef struct day2__srv__GetRobotStatus_Request__Sequence
{
  day2__srv__GetRobotStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__srv__GetRobotStatus_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'diagnostic_messages'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'current_status'
// Member 'status_history'
#include "day2/msg/detail/robot_status__struct.h"
// Member 'sensor_data'
#include "day2/msg/detail/sensor_data__struct.h"
// Member 'query_timestamp'
// Member 'last_update_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in srv/GetRobotStatus in the package day2.
typedef struct day2__srv__GetRobotStatus_Response
{
  /// RESPONSE KISMI
  /// Robot durumu bilgileri
  /// Sorgu başarılı mı?
  bool success;
  /// Açıklama mesajı
  rosidl_runtime_c__String message;
  /// Ana robot bilgileri
  /// Mevcut robot durumu (custom message)
  day2__msg__RobotStatus current_status;
  /// Ek bilgiler (istenirse)
  /// Tüm sensör verileri
  day2__msg__SensorData__Sequence sensor_data;
  /// Diagnostic mesajları
  rosidl_runtime_c__String__Sequence diagnostic_messages;
  /// Son durum geçmişi
  day2__msg__RobotStatus__Sequence status_history;
  /// İstatistikler
  /// Kaç saattir açık
  float uptime_hours;
  /// Toplam komut sayısı
  uint32_t total_commands_executed;
  /// Kat edilen mesafe
  float total_distance_traveled;
  /// Bugünkü hata sayısı
  uint32_t error_count_today;
  /// Performans metrikleri
  /// Ortalama tepki süresi
  float average_response_time_ms;
  /// CPU kullanımı
  float cpu_usage_percent;
  /// Memory kullanımı
  float memory_usage_percent;
  /// Ağ gecikmesi
  float network_latency_ms;
  /// Timestamps
  /// Sorgu zamanı
  builtin_interfaces__msg__Time query_timestamp;
  /// Son güncelleme zamanı
  builtin_interfaces__msg__Time last_update_time;
} day2__srv__GetRobotStatus_Response;

// Struct for a sequence of day2__srv__GetRobotStatus_Response.
typedef struct day2__srv__GetRobotStatus_Response__Sequence
{
  day2__srv__GetRobotStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__srv__GetRobotStatus_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  day2__srv__GetRobotStatus_Event__request__MAX_SIZE = 1
};
// response
enum
{
  day2__srv__GetRobotStatus_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetRobotStatus in the package day2.
typedef struct day2__srv__GetRobotStatus_Event
{
  service_msgs__msg__ServiceEventInfo info;
  day2__srv__GetRobotStatus_Request__Sequence request;
  day2__srv__GetRobotStatus_Response__Sequence response;
} day2__srv__GetRobotStatus_Event;

// Struct for a sequence of day2__srv__GetRobotStatus_Event.
typedef struct day2__srv__GetRobotStatus_Event__Sequence
{
  day2__srv__GetRobotStatus_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__srv__GetRobotStatus_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAY2__SRV__DETAIL__GET_ROBOT_STATUS__STRUCT_H_
