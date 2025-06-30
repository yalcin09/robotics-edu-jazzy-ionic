// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from day2:action/ChargeBattery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/action/charge_battery.h"


#ifndef DAY2__ACTION__DETAIL__CHARGE_BATTERY__STRUCT_H_
#define DAY2__ACTION__DETAIL__CHARGE_BATTERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'charging_mode'
// Member 'docking_approach'
#include "rosidl_runtime_c/string.h"
// Member 'charging_station_location'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/ChargeBattery in the package day2.
typedef struct day2__action__ChargeBattery_Goal
{
  /// GOAL - Battery charging görevi parametreleri
  /// Hedef şarj seviyesi (0.0-1.0)
  float target_charge_level;
  /// Şarj modu ("fast", "normal", "slow", "maintenance")
  rosidl_runtime_c__String charging_mode;
  /// Dock'a geri dön
  bool return_to_dock;
  /// Şarj istasyonu konumu
  geometry_msgs__msg__Point charging_station_location;
  /// Maksimum şarj süresi (saniye)
  float max_charging_time;
  /// Charging parameters
  /// Maksimum şarj akımı (A)
  float max_charging_current;
  /// Maksimum şarj voltajı (V)
  float max_charging_voltage;
  /// Sıcaklık izleme aktif
  bool enable_temperature_monitoring;
  /// Maksimum batarya sıcaklığı (°C)
  float max_battery_temperature;
  /// Safety parameters
  /// Güvenlik izleme
  bool enable_safety_monitoring;
  /// Acil durdurma voltajı
  float emergency_stop_voltage;
  /// Acil durdurma sıcaklığı
  float emergency_stop_temperature;
  /// Dolu olunca otomatik ayır
  bool auto_disconnect_when_full;
  /// Navigation to charging station
  /// Şarj cihazına git
  bool navigate_to_charger;
  /// Dock hassasiyeti (m)
  float docking_precision;
  /// Yaklaşma stratejisi
  rosidl_runtime_c__String docking_approach;
} day2__action__ChargeBattery_Goal;

// Struct for a sequence of day2__action__ChargeBattery_Goal.
typedef struct day2__action__ChargeBattery_Goal__Sequence
{
  day2__action__ChargeBattery_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__ChargeBattery_Goal__Sequence;

// Constants defined in the message

/// Constant 'ERROR_NONE'.
enum
{
  day2__action__ChargeBattery_Result__ERROR_NONE = 0ul
};

/// Constant 'ERROR_CHARGING_STATION_NOT_FOUND'.
enum
{
  day2__action__ChargeBattery_Result__ERROR_CHARGING_STATION_NOT_FOUND = 1ul
};

/// Constant 'ERROR_DOCKING_FAILED'.
enum
{
  day2__action__ChargeBattery_Result__ERROR_DOCKING_FAILED = 2ul
};

/// Constant 'ERROR_CHARGER_CONNECTION_FAILED'.
enum
{
  day2__action__ChargeBattery_Result__ERROR_CHARGER_CONNECTION_FAILED = 3ul
};

/// Constant 'ERROR_OVERVOLTAGE'.
enum
{
  day2__action__ChargeBattery_Result__ERROR_OVERVOLTAGE = 4ul
};

/// Constant 'ERROR_OVERCURRENT'.
enum
{
  day2__action__ChargeBattery_Result__ERROR_OVERCURRENT = 5ul
};

/// Constant 'ERROR_OVERTEMPERATURE'.
enum
{
  day2__action__ChargeBattery_Result__ERROR_OVERTEMPERATURE = 6ul
};

/// Constant 'ERROR_CHARGING_TIMEOUT'.
enum
{
  day2__action__ChargeBattery_Result__ERROR_CHARGING_TIMEOUT = 7ul
};

/// Constant 'ERROR_BATTERY_FAULT'.
enum
{
  day2__action__ChargeBattery_Result__ERROR_BATTERY_FAULT = 8ul
};

// Include directives for member types
// Member 'result_message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'final_docked_position'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/ChargeBattery in the package day2.
typedef struct day2__action__ChargeBattery_Result
{
  /// RESULT - Charging tamamlandığında sonuç
  /// Şarj başarılı mı?
  bool success;
  /// Sonuç mesajı
  rosidl_runtime_c__String result_message;
  /// Son şarj seviyesi
  float final_charge_level;
  /// Toplam şarj süresi
  float total_charging_time;
  /// Charging statistics
  /// Transfer edilen enerji (Wh)
  float energy_transferred;
  /// Ortalama şarj gücü (W)
  float average_charging_power;
  /// Şarj verimliliği (%)
  float charging_efficiency;
  /// Ulaşılan maksimum sıcaklık
  float max_temperature_reached;
  /// Battery health information
  /// Batarya sağlık skoru (0.0-1.0)
  float battery_health_score;
  /// Şarj döngüsü sayısı
  uint32_t charging_cycles_count;
  /// Tahmini batarya ömrü (hours)
  float estimated_battery_lifespan;
  /// Navigation results (if applicable)
  /// Dock etme başarılı mı?
  bool docking_successful;
  /// Dock etme süresi
  float docking_time;
  /// Navigasyon süresi
  float navigation_time;
  /// Son dock pozisyonu
  geometry_msgs__msg__Point final_docked_position;
  /// Error information
  uint32_t error_code;
} day2__action__ChargeBattery_Result;

// Struct for a sequence of day2__action__ChargeBattery_Result.
typedef struct day2__action__ChargeBattery_Result__Sequence
{
  day2__action__ChargeBattery_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__ChargeBattery_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'current_phase'
// Member 'charging_state'
// Member 'active_warnings'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'current_position'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.h"
// Member 'charging_start_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ChargeBattery in the package day2.
typedef struct day2__action__ChargeBattery_Feedback
{
  /// FEEDBACK - Charging sırasında sürekli feedback
  /// Şu anki faz ("navigating", "docking", "charging", "completing")
  rosidl_runtime_c__String current_phase;
  /// Şu anki şarj seviyesi (0.0-1.0)
  float current_charge_level;
  /// Şarj ilerleme yüzdesi
  float charging_progress_percentage;
  /// Tahmini tamamlanma süresi
  float estimated_time_to_completion;
  /// Real-time charging data
  /// Şu anki voltaj (V)
  float current_voltage;
  /// Şu anki akım (A)
  float current_amperage;
  /// Şu anki güç (W)
  float current_power;
  /// Şu anki sıcaklık (°C)
  float current_temperature;
  /// Charging curve information
  /// Şarj oranı (%/hour)
  float charging_rate;
  /// Şarj durumu ("CC", "CV", "float", "maintenance")
  rosidl_runtime_c__String charging_state;
  /// Geçen süre
  float time_elapsed;
  /// Navigation feedback (if navigating)
  /// Şu anki pozisyon
  geometry_msgs__msg__Point current_position;
  /// Şarj cihazına mesafe
  float distance_to_charger;
  /// Şarj cihazı görüş alanında mı?
  bool charger_in_sight;
  /// Docking feedback (if docking)
  /// Dock etme başladı mı?
  bool docking_initiated;
  /// Dock hizalama hatası (m)
  float docking_alignment_error;
  /// Bağlantı kuruldu mu?
  bool connection_established;
  /// Safety monitoring
  /// Sıcaklık uyarısı
  bool temperature_warning;
  /// Voltaj uyarısı
  bool voltage_warning;
  /// Akım uyarısı
  bool current_warning;
  /// Aktif uyarılar
  rosidl_runtime_c__String__Sequence active_warnings;
  /// System status
  /// Şarj cihazı verimliliği
  float charger_efficiency;
  /// Şarj cihazı bağlı mı?
  bool charger_connected;
  /// Şarj başlangıç zamanı
  builtin_interfaces__msg__Time charging_start_time;
} day2__action__ChargeBattery_Feedback;

// Struct for a sequence of day2__action__ChargeBattery_Feedback.
typedef struct day2__action__ChargeBattery_Feedback__Sequence
{
  day2__action__ChargeBattery_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__ChargeBattery_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "day2/action/detail/charge_battery__struct.h"

/// Struct defined in action/ChargeBattery in the package day2.
typedef struct day2__action__ChargeBattery_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  day2__action__ChargeBattery_Goal goal;
} day2__action__ChargeBattery_SendGoal_Request;

// Struct for a sequence of day2__action__ChargeBattery_SendGoal_Request.
typedef struct day2__action__ChargeBattery_SendGoal_Request__Sequence
{
  day2__action__ChargeBattery_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__ChargeBattery_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ChargeBattery in the package day2.
typedef struct day2__action__ChargeBattery_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} day2__action__ChargeBattery_SendGoal_Response;

// Struct for a sequence of day2__action__ChargeBattery_SendGoal_Response.
typedef struct day2__action__ChargeBattery_SendGoal_Response__Sequence
{
  day2__action__ChargeBattery_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__ChargeBattery_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  day2__action__ChargeBattery_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  day2__action__ChargeBattery_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ChargeBattery in the package day2.
typedef struct day2__action__ChargeBattery_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  day2__action__ChargeBattery_SendGoal_Request__Sequence request;
  day2__action__ChargeBattery_SendGoal_Response__Sequence response;
} day2__action__ChargeBattery_SendGoal_Event;

// Struct for a sequence of day2__action__ChargeBattery_SendGoal_Event.
typedef struct day2__action__ChargeBattery_SendGoal_Event__Sequence
{
  day2__action__ChargeBattery_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__ChargeBattery_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ChargeBattery in the package day2.
typedef struct day2__action__ChargeBattery_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} day2__action__ChargeBattery_GetResult_Request;

// Struct for a sequence of day2__action__ChargeBattery_GetResult_Request.
typedef struct day2__action__ChargeBattery_GetResult_Request__Sequence
{
  day2__action__ChargeBattery_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__ChargeBattery_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "day2/action/detail/charge_battery__struct.h"

/// Struct defined in action/ChargeBattery in the package day2.
typedef struct day2__action__ChargeBattery_GetResult_Response
{
  int8_t status;
  day2__action__ChargeBattery_Result result;
} day2__action__ChargeBattery_GetResult_Response;

// Struct for a sequence of day2__action__ChargeBattery_GetResult_Response.
typedef struct day2__action__ChargeBattery_GetResult_Response__Sequence
{
  day2__action__ChargeBattery_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__ChargeBattery_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  day2__action__ChargeBattery_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  day2__action__ChargeBattery_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ChargeBattery in the package day2.
typedef struct day2__action__ChargeBattery_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  day2__action__ChargeBattery_GetResult_Request__Sequence request;
  day2__action__ChargeBattery_GetResult_Response__Sequence response;
} day2__action__ChargeBattery_GetResult_Event;

// Struct for a sequence of day2__action__ChargeBattery_GetResult_Event.
typedef struct day2__action__ChargeBattery_GetResult_Event__Sequence
{
  day2__action__ChargeBattery_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__ChargeBattery_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "day2/action/detail/charge_battery__struct.h"

/// Struct defined in action/ChargeBattery in the package day2.
typedef struct day2__action__ChargeBattery_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  day2__action__ChargeBattery_Feedback feedback;
} day2__action__ChargeBattery_FeedbackMessage;

// Struct for a sequence of day2__action__ChargeBattery_FeedbackMessage.
typedef struct day2__action__ChargeBattery_FeedbackMessage__Sequence
{
  day2__action__ChargeBattery_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__action__ChargeBattery_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAY2__ACTION__DETAIL__CHARGE_BATTERY__STRUCT_H_
