// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from day2:srv/GetRobotStatus.idl
// generated code does not contain a copyright notice

#include "day2/srv/detail/get_robot_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__srv__GetRobotStatus__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3b, 0x51, 0x9f, 0x61, 0x01, 0x36, 0xe3, 0x97,
      0xd4, 0xaa, 0xf7, 0x4b, 0x78, 0x31, 0x55, 0x01,
      0x5e, 0x7d, 0xed, 0x10, 0x4d, 0x26, 0xe9, 0xb2,
      0x42, 0x9e, 0x4c, 0xdf, 0x8f, 0xcd, 0x2a, 0x94,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__srv__GetRobotStatus_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa3, 0xda, 0x95, 0x00, 0xac, 0xa4, 0x8a, 0x38,
      0x29, 0x0f, 0x53, 0xc6, 0x00, 0x84, 0x5f, 0xad,
      0xc3, 0xf9, 0x27, 0x86, 0x86, 0xe8, 0x9e, 0x0c,
      0xad, 0xf1, 0xe0, 0x83, 0xdd, 0x9b, 0x14, 0x00,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__srv__GetRobotStatus_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1f, 0xd0, 0xf4, 0xff, 0x56, 0x22, 0x2d, 0x67,
      0x72, 0x05, 0xf3, 0xd4, 0xd6, 0x37, 0x60, 0x29,
      0x7c, 0x9d, 0xbe, 0x71, 0x9e, 0x27, 0x49, 0xcd,
      0xe7, 0x9e, 0x42, 0xd8, 0xff, 0xd6, 0x0d, 0xb4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__srv__GetRobotStatus_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xca, 0x4c, 0x36, 0xe0, 0x69, 0x64, 0x52, 0x0a,
      0x6a, 0x43, 0xb9, 0xbe, 0x71, 0x43, 0x72, 0x70,
      0x1a, 0xd6, 0x2b, 0x1c, 0xcc, 0x7b, 0xd2, 0x03,
      0x96, 0x82, 0x57, 0xd7, 0x8a, 0x0a, 0x79, 0x5b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "day2/msg/detail/sensor_data__functions.h"
#include "day2/msg/detail/robot_status__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/twist__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t day2__msg__RobotStatus__EXPECTED_HASH = {1, {
    0x63, 0x37, 0x04, 0xe9, 0x13, 0x57, 0x67, 0x74,
    0x20, 0xa9, 0x55, 0x31, 0x57, 0xe4, 0xb0, 0x62,
    0xfa, 0x19, 0xbf, 0xc8, 0x33, 0x03, 0x51, 0x4e,
    0x52, 0x4c, 0x76, 0x8f, 0x69, 0xaa, 0x9d, 0x46,
  }};
static const rosidl_type_hash_t day2__msg__SensorData__EXPECTED_HASH = {1, {
    0xab, 0xf7, 0xbb, 0xea, 0xcd, 0x94, 0x92, 0x32,
    0x2a, 0xd3, 0xf4, 0x7c, 0xfc, 0x58, 0xf9, 0x30,
    0xcb, 0x25, 0x8f, 0xac, 0xdd, 0x81, 0x82, 0x01,
    0x2b, 0xfb, 0x55, 0xab, 0xa8, 0x8e, 0xcc, 0xbf,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Twist__EXPECTED_HASH = {1, {
    0x9c, 0x45, 0xbf, 0x16, 0xfe, 0x09, 0x83, 0xd8,
    0x0e, 0x3c, 0xfe, 0x75, 0x0d, 0x68, 0x35, 0x84,
    0x3d, 0x26, 0x5a, 0x9a, 0x6c, 0x46, 0xbd, 0x2e,
    0x60, 0x9f, 0xcd, 0xdd, 0xe6, 0xfb, 0x8d, 0x2a,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char day2__srv__GetRobotStatus__TYPE_NAME[] = "day2/srv/GetRobotStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char day2__msg__RobotStatus__TYPE_NAME[] = "day2/msg/RobotStatus";
static char day2__msg__SensorData__TYPE_NAME[] = "day2/msg/SensorData";
static char day2__srv__GetRobotStatus_Event__TYPE_NAME[] = "day2/srv/GetRobotStatus_Event";
static char day2__srv__GetRobotStatus_Request__TYPE_NAME[] = "day2/srv/GetRobotStatus_Request";
static char day2__srv__GetRobotStatus_Response__TYPE_NAME[] = "day2/srv/GetRobotStatus_Response";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Twist__TYPE_NAME[] = "geometry_msgs/msg/Twist";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char day2__srv__GetRobotStatus__FIELD_NAME__request_message[] = "request_message";
static char day2__srv__GetRobotStatus__FIELD_NAME__response_message[] = "response_message";
static char day2__srv__GetRobotStatus__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field day2__srv__GetRobotStatus__FIELDS[] = {
  {
    {day2__srv__GetRobotStatus__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {day2__srv__GetRobotStatus_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {day2__srv__GetRobotStatus_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {day2__srv__GetRobotStatus_Event__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription day2__srv__GetRobotStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotStatus__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {day2__msg__SensorData__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Event__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Twist__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
day2__srv__GetRobotStatus__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__srv__GetRobotStatus__TYPE_NAME, 23, 23},
      {day2__srv__GetRobotStatus__FIELDS, 3, 3},
    },
    {day2__srv__GetRobotStatus__REFERENCED_TYPE_DESCRIPTIONS, 11, 11},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&day2__msg__RobotStatus__EXPECTED_HASH, day2__msg__RobotStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = day2__msg__RobotStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&day2__msg__SensorData__EXPECTED_HASH, day2__msg__SensorData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = day2__msg__SensorData__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = day2__srv__GetRobotStatus_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = day2__srv__GetRobotStatus_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = day2__srv__GetRobotStatus_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Twist__EXPECTED_HASH, geometry_msgs__msg__Twist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = geometry_msgs__msg__Twist__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char day2__srv__GetRobotStatus_Request__FIELD_NAME__robot_id[] = "robot_id";
static char day2__srv__GetRobotStatus_Request__FIELD_NAME__robot_name[] = "robot_name";
static char day2__srv__GetRobotStatus_Request__FIELD_NAME__include_sensors[] = "include_sensors";
static char day2__srv__GetRobotStatus_Request__FIELD_NAME__include_diagnostics[] = "include_diagnostics";
static char day2__srv__GetRobotStatus_Request__FIELD_NAME__include_history[] = "include_history";
static char day2__srv__GetRobotStatus_Request__FIELD_NAME__requested_fields[] = "requested_fields";

static rosidl_runtime_c__type_description__Field day2__srv__GetRobotStatus_Request__FIELDS[] = {
  {
    {day2__srv__GetRobotStatus_Request__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Request__FIELD_NAME__robot_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Request__FIELD_NAME__include_sensors, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Request__FIELD_NAME__include_diagnostics, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Request__FIELD_NAME__include_history, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Request__FIELD_NAME__requested_fields, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
day2__srv__GetRobotStatus_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__srv__GetRobotStatus_Request__TYPE_NAME, 31, 31},
      {day2__srv__GetRobotStatus_Request__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char day2__srv__GetRobotStatus_Response__FIELD_NAME__success[] = "success";
static char day2__srv__GetRobotStatus_Response__FIELD_NAME__message[] = "message";
static char day2__srv__GetRobotStatus_Response__FIELD_NAME__current_status[] = "current_status";
static char day2__srv__GetRobotStatus_Response__FIELD_NAME__sensor_data[] = "sensor_data";
static char day2__srv__GetRobotStatus_Response__FIELD_NAME__diagnostic_messages[] = "diagnostic_messages";
static char day2__srv__GetRobotStatus_Response__FIELD_NAME__status_history[] = "status_history";
static char day2__srv__GetRobotStatus_Response__FIELD_NAME__uptime_hours[] = "uptime_hours";
static char day2__srv__GetRobotStatus_Response__FIELD_NAME__total_commands_executed[] = "total_commands_executed";
static char day2__srv__GetRobotStatus_Response__FIELD_NAME__total_distance_traveled[] = "total_distance_traveled";
static char day2__srv__GetRobotStatus_Response__FIELD_NAME__error_count_today[] = "error_count_today";
static char day2__srv__GetRobotStatus_Response__FIELD_NAME__average_response_time_ms[] = "average_response_time_ms";
static char day2__srv__GetRobotStatus_Response__FIELD_NAME__cpu_usage_percent[] = "cpu_usage_percent";
static char day2__srv__GetRobotStatus_Response__FIELD_NAME__memory_usage_percent[] = "memory_usage_percent";
static char day2__srv__GetRobotStatus_Response__FIELD_NAME__network_latency_ms[] = "network_latency_ms";
static char day2__srv__GetRobotStatus_Response__FIELD_NAME__query_timestamp[] = "query_timestamp";
static char day2__srv__GetRobotStatus_Response__FIELD_NAME__last_update_time[] = "last_update_time";

static rosidl_runtime_c__type_description__Field day2__srv__GetRobotStatus_Response__FIELDS[] = {
  {
    {day2__srv__GetRobotStatus_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Response__FIELD_NAME__current_status, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {day2__msg__RobotStatus__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Response__FIELD_NAME__sensor_data, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {day2__msg__SensorData__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Response__FIELD_NAME__diagnostic_messages, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Response__FIELD_NAME__status_history, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {day2__msg__RobotStatus__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Response__FIELD_NAME__uptime_hours, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Response__FIELD_NAME__total_commands_executed, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Response__FIELD_NAME__total_distance_traveled, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Response__FIELD_NAME__error_count_today, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Response__FIELD_NAME__average_response_time_ms, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Response__FIELD_NAME__cpu_usage_percent, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Response__FIELD_NAME__memory_usage_percent, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Response__FIELD_NAME__network_latency_ms, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Response__FIELD_NAME__query_timestamp, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Response__FIELD_NAME__last_update_time, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription day2__srv__GetRobotStatus_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotStatus__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {day2__msg__SensorData__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Twist__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
day2__srv__GetRobotStatus_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__srv__GetRobotStatus_Response__TYPE_NAME, 32, 32},
      {day2__srv__GetRobotStatus_Response__FIELDS, 16, 16},
    },
    {day2__srv__GetRobotStatus_Response__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&day2__msg__RobotStatus__EXPECTED_HASH, day2__msg__RobotStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = day2__msg__RobotStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&day2__msg__SensorData__EXPECTED_HASH, day2__msg__SensorData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = day2__msg__SensorData__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Twist__EXPECTED_HASH, geometry_msgs__msg__Twist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Twist__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char day2__srv__GetRobotStatus_Event__FIELD_NAME__info[] = "info";
static char day2__srv__GetRobotStatus_Event__FIELD_NAME__request[] = "request";
static char day2__srv__GetRobotStatus_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field day2__srv__GetRobotStatus_Event__FIELDS[] = {
  {
    {day2__srv__GetRobotStatus_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {day2__srv__GetRobotStatus_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {day2__srv__GetRobotStatus_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription day2__srv__GetRobotStatus_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotStatus__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {day2__msg__SensorData__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {day2__srv__GetRobotStatus_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Twist__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
day2__srv__GetRobotStatus_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__srv__GetRobotStatus_Event__TYPE_NAME, 29, 29},
      {day2__srv__GetRobotStatus_Event__FIELDS, 3, 3},
    },
    {day2__srv__GetRobotStatus_Event__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&day2__msg__RobotStatus__EXPECTED_HASH, day2__msg__RobotStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = day2__msg__RobotStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&day2__msg__SensorData__EXPECTED_HASH, day2__msg__SensorData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = day2__msg__SensorData__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = day2__srv__GetRobotStatus_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = day2__srv__GetRobotStatus_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Twist__EXPECTED_HASH, geometry_msgs__msg__Twist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Twist__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# REQUEST KISMI\n"
  "# Hangi robot(lar)\\xc4\\xb1n durumu isteniyor?\n"
  "uint32 robot_id                         # Belirli robot ID (0 = t\\xc3\\xbcm robotlar)\n"
  "string robot_name                       # Robot ad\\xc4\\xb1 (bo\\xc5\\x9f = ID kullan)\n"
  "bool include_sensors                    # Sens\\xc3\\xb6r detaylar\\xc4\\xb1 dahil edilsin mi?\n"
  "bool include_diagnostics                # Diagnostic bilgiler dahil edilsin mi?\n"
  "bool include_history                    # Son 10 durum ge\\xc3\\xa7mi\\xc5\\x9fi dahil edilsin mi?\n"
  "string[] requested_fields               # Sadece belirli alanlar (bo\\xc5\\x9f = hepsi)\n"
  "\n"
  "---\n"
  "\n"
  "# RESPONSE KISMI\n"
  "# Robot durumu bilgileri\n"
  "bool success                                    # Sorgu ba\\xc5\\x9far\\xc4\\xb1l\\xc4\\xb1 m\\xc4\\xb1?\n"
  "string message                                  # A\\xc3\\xa7\\xc4\\xb1klama mesaj\\xc4\\xb1\n"
  "\n"
  "# Ana robot bilgileri\n"
  "RobotStatus current_status                      # Mevcut robot durumu (custom message)\n"
  "\n"
  "# Ek bilgiler (istenirse)\n"
  "SensorData[] sensor_data                        # T\\xc3\\xbcm sens\\xc3\\xb6r verileri\n"
  "string[] diagnostic_messages                    # Diagnostic mesajlar\\xc4\\xb1\n"
  "RobotStatus[] status_history                    # Son durum ge\\xc3\\xa7mi\\xc5\\x9fi\n"
  "\n"
  "# \\xc4\\xb0statistikler\n"
  "float32 uptime_hours                            # Ka\\xc3\\xa7 saattir a\\xc3\\xa7\\xc4\\xb1k\n"
  "uint32 total_commands_executed                  # Toplam komut say\\xc4\\xb1s\\xc4\\xb1\n"
  "float32 total_distance_traveled                 # Kat edilen mesafe\n"
  "uint32 error_count_today                        # Bug\\xc3\\xbcnk\\xc3\\xbc hata say\\xc4\\xb1s\\xc4\\xb1\n"
  "\n"
  "# Performans metrikleri\n"
  "float32 average_response_time_ms                # Ortalama tepki s\\xc3\\xbcresi\n"
  "float32 cpu_usage_percent                       # CPU kullan\\xc4\\xb1m\\xc4\\xb1\n"
  "float32 memory_usage_percent                    # Memory kullan\\xc4\\xb1m\\xc4\\xb1\n"
  "float32 network_latency_ms                      # A\\xc4\\x9f gecikmesi\n"
  "\n"
  "# Timestamps\n"
  "builtin_interfaces/Time query_timestamp         # Sorgu zaman\\xc4\\xb1\n"
  "builtin_interfaces/Time last_update_time        # Son g\\xc3\\xbcncelleme zaman\\xc4\\xb1";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
day2__srv__GetRobotStatus__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__srv__GetRobotStatus__TYPE_NAME, 23, 23},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 1780, 1780},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
day2__srv__GetRobotStatus_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__srv__GetRobotStatus_Request__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
day2__srv__GetRobotStatus_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__srv__GetRobotStatus_Response__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
day2__srv__GetRobotStatus_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__srv__GetRobotStatus_Event__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__srv__GetRobotStatus__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[12];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 12, 12};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__srv__GetRobotStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *day2__msg__RobotStatus__get_individual_type_description_source(NULL);
    sources[3] = *day2__msg__SensorData__get_individual_type_description_source(NULL);
    sources[4] = *day2__srv__GetRobotStatus_Event__get_individual_type_description_source(NULL);
    sources[5] = *day2__srv__GetRobotStatus_Request__get_individual_type_description_source(NULL);
    sources[6] = *day2__srv__GetRobotStatus_Response__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[8] = *geometry_msgs__msg__Twist__get_individual_type_description_source(NULL);
    sources[9] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[10] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[11] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__srv__GetRobotStatus_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__srv__GetRobotStatus_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__srv__GetRobotStatus_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__srv__GetRobotStatus_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *day2__msg__RobotStatus__get_individual_type_description_source(NULL);
    sources[3] = *day2__msg__SensorData__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Twist__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__srv__GetRobotStatus_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__srv__GetRobotStatus_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *day2__msg__RobotStatus__get_individual_type_description_source(NULL);
    sources[3] = *day2__msg__SensorData__get_individual_type_description_source(NULL);
    sources[4] = *day2__srv__GetRobotStatus_Request__get_individual_type_description_source(NULL);
    sources[5] = *day2__srv__GetRobotStatus_Response__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Twist__get_individual_type_description_source(NULL);
    sources[8] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[9] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[10] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
