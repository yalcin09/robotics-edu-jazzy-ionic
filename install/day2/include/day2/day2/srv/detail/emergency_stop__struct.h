// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from day2:srv/EmergencyStop.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/srv/emergency_stop.h"


#ifndef DAY2__SRV__DETAIL__EMERGENCY_STOP__STRUCT_H_
#define DAY2__SRV__DETAIL__EMERGENCY_STOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SOFT_STOP'.
/**
  * Yumuşak durdurma (yavaşlayarak)
 */
enum
{
  day2__srv__EmergencyStop_Request__SOFT_STOP = 0
};

/// Constant 'IMMEDIATE_STOP'.
/**
  * Anında durdurma
 */
enum
{
  day2__srv__EmergencyStop_Request__IMMEDIATE_STOP = 1
};

/// Constant 'EMERGENCY_STOP'.
/**
  * Acil durdurma (güç kesimi)
 */
enum
{
  day2__srv__EmergencyStop_Request__EMERGENCY_STOP = 2
};

// Include directives for member types
// Member 'reason'
// Member 'operator_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/EmergencyStop in the package day2.
typedef struct day2__srv__EmergencyStop_Request
{
  /// Hedef robot ID (0 = tüm robotlar)
  uint32_t robot_id;
  /// Durdurma sebebi
  rosidl_runtime_c__String reason;
  /// Durdurma türü
  uint8_t stop_type;
  /// Motorları devre dışı bırak
  bool disable_motors;
  /// Frenleri kilitle
  bool lock_brakes;
  /// Alarm çal
  bool sound_alarm;
  /// Komutu veren operatör
  rosidl_runtime_c__String operator_id;
  /// Öncelik seviyesi (1-10)
  uint8_t priority_level;
} day2__srv__EmergencyStop_Request;

// Struct for a sequence of day2__srv__EmergencyStop_Request.
typedef struct day2__srv__EmergencyStop_Request__Sequence
{
  day2__srv__EmergencyStop_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__srv__EmergencyStop_Request__Sequence;

// Constants defined in the message

/// Constant 'ERROR_NONE'.
/**
  * Başarı
 */
enum
{
  day2__srv__EmergencyStop_Response__ERROR_NONE = 0ul
};

/// Constant 'ERROR_ROBOT_NOT_FOUND'.
/**
  * Robot bulunamadı
 */
enum
{
  day2__srv__EmergencyStop_Response__ERROR_ROBOT_NOT_FOUND = 1ul
};

/// Constant 'ERROR_ALREADY_STOPPED'.
/**
  * Zaten durdurulmuş
 */
enum
{
  day2__srv__EmergencyStop_Response__ERROR_ALREADY_STOPPED = 2ul
};

/// Constant 'ERROR_STOP_FAILED'.
/**
  * Durdurma başarısız
 */
enum
{
  day2__srv__EmergencyStop_Response__ERROR_STOP_FAILED = 3ul
};

/// Constant 'ERROR_COMMUNICATION_FAILED'.
/**
  * İletişim hatası
 */
enum
{
  day2__srv__EmergencyStop_Response__ERROR_COMMUNICATION_FAILED = 4ul
};

// Include directives for member types
// Member 'message'
// Member 'robot_responses'
// Member 'active_alarms'
// Member 'required_actions'
// Member 'reset_procedures'
// Member 'incident_classification'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'stop_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'stopped_robot_ids'
// Member 'stop_distances'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/EmergencyStop in the package day2.
typedef struct day2__srv__EmergencyStop_Response
{
  /// RESPONSE KISMI
  /// Durdurma işlemi sonucu
  /// Durdurma başarılı mı?
  bool success;
  /// Detay mesaj
  rosidl_runtime_c__String message;
  /// Durdurma zamanı
  builtin_interfaces__msg__Time stop_timestamp;
  /// Etkilenen robotlar
  /// Durdurulan robot ID'leri
  rosidl_runtime_c__uint32__Sequence stopped_robot_ids;
  /// Her robottan gelen yanıt
  rosidl_runtime_c__String__Sequence robot_responses;
  /// Her robotun durma mesafesi
  rosidl_runtime_c__float__Sequence stop_distances;
  /// Sistem durumu
  /// Sistem güvenli durumda mı?
  bool system_safe_state;
  /// Aktif alarmlar
  rosidl_runtime_c__String__Sequence active_alarms;
  /// Gerekli müdahaleler
  rosidl_runtime_c__String__Sequence required_actions;
  /// Recovery bilgileri
  /// Manuel reset gerekli mi?
  bool manual_reset_required;
  /// Reset prosedürleri
  rosidl_runtime_c__String__Sequence reset_procedures;
  /// Tahmini recovery süresi
  float estimated_recovery_time;
  /// Incident bilgileri
  /// Olay ID'si
  uint32_t incident_id;
  /// Olay sınıflandırması
  rosidl_runtime_c__String incident_classification;
  /// Soruşturma gerekli mi?
  bool requires_investigation;
  /// Hata kodu
  uint32_t error_code;
} day2__srv__EmergencyStop_Response;

// Struct for a sequence of day2__srv__EmergencyStop_Response.
typedef struct day2__srv__EmergencyStop_Response__Sequence
{
  day2__srv__EmergencyStop_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__srv__EmergencyStop_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  day2__srv__EmergencyStop_Event__request__MAX_SIZE = 1
};
// response
enum
{
  day2__srv__EmergencyStop_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/EmergencyStop in the package day2.
typedef struct day2__srv__EmergencyStop_Event
{
  service_msgs__msg__ServiceEventInfo info;
  day2__srv__EmergencyStop_Request__Sequence request;
  day2__srv__EmergencyStop_Response__Sequence response;
} day2__srv__EmergencyStop_Event;

// Struct for a sequence of day2__srv__EmergencyStop_Event.
typedef struct day2__srv__EmergencyStop_Event__Sequence
{
  day2__srv__EmergencyStop_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__srv__EmergencyStop_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAY2__SRV__DETAIL__EMERGENCY_STOP__STRUCT_H_
