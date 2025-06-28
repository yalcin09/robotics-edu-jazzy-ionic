// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from day2:srv/EmergencyStop.idl
// generated code does not contain a copyright notice

#include "day2/srv/detail/emergency_stop__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__srv__EmergencyStop__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd1, 0x26, 0x16, 0x05, 0x56, 0xfd, 0x25, 0x22,
      0x89, 0x20, 0x1b, 0xdd, 0x53, 0x93, 0x04, 0x7a,
      0xcd, 0x41, 0x3e, 0x5f, 0xdc, 0x09, 0xc6, 0x2f,
      0xfb, 0x00, 0xc8, 0x51, 0x63, 0xe1, 0x3d, 0x00,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__srv__EmergencyStop_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2d, 0x98, 0x74, 0x5f, 0xe9, 0xe1, 0xd5, 0xed,
      0x58, 0x04, 0xe1, 0xbf, 0xd9, 0x26, 0xa9, 0x5d,
      0xdc, 0xce, 0x0e, 0x3c, 0xa1, 0x3c, 0xcd, 0x5d,
      0x06, 0xb7, 0x5c, 0xfc, 0x2e, 0x31, 0xf2, 0x04,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__srv__EmergencyStop_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x41, 0x87, 0x56, 0xcf, 0x8f, 0x6a, 0x58, 0x5c,
      0xd3, 0x69, 0x30, 0x6d, 0x2d, 0xa6, 0xf5, 0x7a,
      0x34, 0x1a, 0xc6, 0x58, 0x45, 0xd8, 0xbf, 0x69,
      0x65, 0x27, 0xa8, 0xfa, 0x97, 0xd2, 0x12, 0xf8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__srv__EmergencyStop_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd2, 0xa4, 0xb5, 0x31, 0xb6, 0xba, 0xb5, 0xc4,
      0xf4, 0xad, 0x28, 0x69, 0x3a, 0xeb, 0x11, 0x95,
      0x8a, 0x03, 0xd0, 0x7f, 0x21, 0xba, 0x77, 0xbf,
      0xa7, 0xdb, 0xc9, 0xd9, 0xde, 0xba, 0x91, 0x46,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char day2__srv__EmergencyStop__TYPE_NAME[] = "day2/srv/EmergencyStop";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char day2__srv__EmergencyStop_Event__TYPE_NAME[] = "day2/srv/EmergencyStop_Event";
static char day2__srv__EmergencyStop_Request__TYPE_NAME[] = "day2/srv/EmergencyStop_Request";
static char day2__srv__EmergencyStop_Response__TYPE_NAME[] = "day2/srv/EmergencyStop_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char day2__srv__EmergencyStop__FIELD_NAME__request_message[] = "request_message";
static char day2__srv__EmergencyStop__FIELD_NAME__response_message[] = "response_message";
static char day2__srv__EmergencyStop__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field day2__srv__EmergencyStop__FIELDS[] = {
  {
    {day2__srv__EmergencyStop__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {day2__srv__EmergencyStop_Request__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {day2__srv__EmergencyStop_Response__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {day2__srv__EmergencyStop_Event__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription day2__srv__EmergencyStop__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Event__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Request__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Response__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
day2__srv__EmergencyStop__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__srv__EmergencyStop__TYPE_NAME, 22, 22},
      {day2__srv__EmergencyStop__FIELDS, 3, 3},
    },
    {day2__srv__EmergencyStop__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = day2__srv__EmergencyStop_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = day2__srv__EmergencyStop_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = day2__srv__EmergencyStop_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char day2__srv__EmergencyStop_Request__FIELD_NAME__robot_id[] = "robot_id";
static char day2__srv__EmergencyStop_Request__FIELD_NAME__reason[] = "reason";
static char day2__srv__EmergencyStop_Request__FIELD_NAME__stop_type[] = "stop_type";
static char day2__srv__EmergencyStop_Request__FIELD_NAME__disable_motors[] = "disable_motors";
static char day2__srv__EmergencyStop_Request__FIELD_NAME__lock_brakes[] = "lock_brakes";
static char day2__srv__EmergencyStop_Request__FIELD_NAME__sound_alarm[] = "sound_alarm";
static char day2__srv__EmergencyStop_Request__FIELD_NAME__operator_id[] = "operator_id";
static char day2__srv__EmergencyStop_Request__FIELD_NAME__priority_level[] = "priority_level";

static rosidl_runtime_c__type_description__Field day2__srv__EmergencyStop_Request__FIELDS[] = {
  {
    {day2__srv__EmergencyStop_Request__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Request__FIELD_NAME__reason, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Request__FIELD_NAME__stop_type, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Request__FIELD_NAME__disable_motors, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Request__FIELD_NAME__lock_brakes, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Request__FIELD_NAME__sound_alarm, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Request__FIELD_NAME__operator_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Request__FIELD_NAME__priority_level, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
day2__srv__EmergencyStop_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__srv__EmergencyStop_Request__TYPE_NAME, 30, 30},
      {day2__srv__EmergencyStop_Request__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char day2__srv__EmergencyStop_Response__FIELD_NAME__success[] = "success";
static char day2__srv__EmergencyStop_Response__FIELD_NAME__message[] = "message";
static char day2__srv__EmergencyStop_Response__FIELD_NAME__stop_timestamp[] = "stop_timestamp";
static char day2__srv__EmergencyStop_Response__FIELD_NAME__stopped_robot_ids[] = "stopped_robot_ids";
static char day2__srv__EmergencyStop_Response__FIELD_NAME__robot_responses[] = "robot_responses";
static char day2__srv__EmergencyStop_Response__FIELD_NAME__stop_distances[] = "stop_distances";
static char day2__srv__EmergencyStop_Response__FIELD_NAME__system_safe_state[] = "system_safe_state";
static char day2__srv__EmergencyStop_Response__FIELD_NAME__active_alarms[] = "active_alarms";
static char day2__srv__EmergencyStop_Response__FIELD_NAME__required_actions[] = "required_actions";
static char day2__srv__EmergencyStop_Response__FIELD_NAME__manual_reset_required[] = "manual_reset_required";
static char day2__srv__EmergencyStop_Response__FIELD_NAME__reset_procedures[] = "reset_procedures";
static char day2__srv__EmergencyStop_Response__FIELD_NAME__estimated_recovery_time[] = "estimated_recovery_time";
static char day2__srv__EmergencyStop_Response__FIELD_NAME__incident_id[] = "incident_id";
static char day2__srv__EmergencyStop_Response__FIELD_NAME__incident_classification[] = "incident_classification";
static char day2__srv__EmergencyStop_Response__FIELD_NAME__requires_investigation[] = "requires_investigation";
static char day2__srv__EmergencyStop_Response__FIELD_NAME__error_code[] = "error_code";

static rosidl_runtime_c__type_description__Field day2__srv__EmergencyStop_Response__FIELDS[] = {
  {
    {day2__srv__EmergencyStop_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Response__FIELD_NAME__stop_timestamp, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Response__FIELD_NAME__stopped_robot_ids, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Response__FIELD_NAME__robot_responses, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Response__FIELD_NAME__stop_distances, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Response__FIELD_NAME__system_safe_state, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Response__FIELD_NAME__active_alarms, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Response__FIELD_NAME__required_actions, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Response__FIELD_NAME__manual_reset_required, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Response__FIELD_NAME__reset_procedures, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Response__FIELD_NAME__estimated_recovery_time, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Response__FIELD_NAME__incident_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Response__FIELD_NAME__incident_classification, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Response__FIELD_NAME__requires_investigation, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Response__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription day2__srv__EmergencyStop_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
day2__srv__EmergencyStop_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__srv__EmergencyStop_Response__TYPE_NAME, 31, 31},
      {day2__srv__EmergencyStop_Response__FIELDS, 16, 16},
    },
    {day2__srv__EmergencyStop_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char day2__srv__EmergencyStop_Event__FIELD_NAME__info[] = "info";
static char day2__srv__EmergencyStop_Event__FIELD_NAME__request[] = "request";
static char day2__srv__EmergencyStop_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field day2__srv__EmergencyStop_Event__FIELDS[] = {
  {
    {day2__srv__EmergencyStop_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {day2__srv__EmergencyStop_Request__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {day2__srv__EmergencyStop_Response__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription day2__srv__EmergencyStop_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Request__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {day2__srv__EmergencyStop_Response__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
day2__srv__EmergencyStop_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__srv__EmergencyStop_Event__TYPE_NAME, 28, 28},
      {day2__srv__EmergencyStop_Event__FIELDS, 3, 3},
    },
    {day2__srv__EmergencyStop_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = day2__srv__EmergencyStop_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = day2__srv__EmergencyStop_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# REQUEST KISMI\n"
  "# Acil durdurma komut parametreleri\n"
  "uint32 robot_id                         # Hedef robot ID (0 = t\\xc3\\xbcm robotlar)\n"
  "string reason                           # Durdurma sebebi\n"
  "uint8 stop_type                         # Durdurma t\\xc3\\xbcr\\xc3\\xbc\n"
  "uint8 SOFT_STOP=0                       # Yumu\\xc5\\x9fak durdurma (yava\\xc5\\x9flayarak)\n"
  "uint8 IMMEDIATE_STOP=1                  # An\\xc4\\xb1nda durdurma\n"
  "uint8 EMERGENCY_STOP=2                  # Acil durdurma (g\\xc3\\xbc\\xc3\\xa7 kesimi)\n"
  "\n"
  "bool disable_motors                     # Motorlar\\xc4\\xb1 devre d\\xc4\\xb1\\xc5\\x9f\\xc4\\xb1 b\\xc4\\xb1rak\n"
  "bool lock_brakes                        # Frenleri kilitle\n"
  "bool sound_alarm                        # Alarm \\xc3\\xa7al\n"
  "string operator_id                      # Komutu veren operat\\xc3\\xb6r\n"
  "uint8 priority_level                    # \\xc3\\x96ncelik seviyesi (1-10)\n"
  "\n"
  "---\n"
  "\n"
  "# RESPONSE KISMI\n"
  "# Durdurma i\\xc5\\x9flemi sonucu\n"
  "bool success                            # Durdurma ba\\xc5\\x9far\\xc4\\xb1l\\xc4\\xb1 m\\xc4\\xb1?\n"
  "string message                          # Detay mesaj\n"
  "builtin_interfaces/Time stop_timestamp  # Durdurma zaman\\xc4\\xb1\n"
  "\n"
  "# Etkilenen robotlar\n"
  "uint32[] stopped_robot_ids              # Durdurulan robot ID'leri\n"
  "string[] robot_responses                # Her robottan gelen yan\\xc4\\xb1t\n"
  "float32[] stop_distances                # Her robotun durma mesafesi\n"
  "\n"
  "# Sistem durumu\n"
  "bool system_safe_state                  # Sistem g\\xc3\\xbcvenli durumda m\\xc4\\xb1?\n"
  "string[] active_alarms                  # Aktif alarmlar\n"
  "string[] required_actions               # Gerekli m\\xc3\\xbcdahaleler\n"
  "\n"
  "# Recovery bilgileri\n"
  "bool manual_reset_required              # Manuel reset gerekli mi?\n"
  "string[] reset_procedures               # Reset prosed\\xc3\\xbcrleri\n"
  "float32 estimated_recovery_time         # Tahmini recovery s\\xc3\\xbcresi\n"
  "\n"
  "# Incident bilgileri\n"
  "uint32 incident_id                      # Olay ID'si\n"
  "string incident_classification          # Olay s\\xc4\\xb1n\\xc4\\xb1fland\\xc4\\xb1rmas\\xc4\\xb1\n"
  "bool requires_investigation             # Soru\\xc5\\x9fturma gerekli mi?\n"
  "\n"
  "uint32 error_code                       # Hata kodu\n"
  "uint32 ERROR_NONE=0                     # Ba\\xc5\\x9far\\xc4\\xb1\n"
  "uint32 ERROR_ROBOT_NOT_FOUND=1          # Robot bulunamad\\xc4\\xb1\n"
  "uint32 ERROR_ALREADY_STOPPED=2          # Zaten durdurulmu\\xc5\\x9f\n"
  "uint32 ERROR_STOP_FAILED=3              # Durdurma ba\\xc5\\x9far\\xc4\\xb1s\\xc4\\xb1z\n"
  "uint32 ERROR_COMMUNICATION_FAILED=4     # \\xc4\\xb0leti\\xc5\\x9fim hatas\\xc4\\xb1";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
day2__srv__EmergencyStop__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__srv__EmergencyStop__TYPE_NAME, 22, 22},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 2166, 2166},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
day2__srv__EmergencyStop_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__srv__EmergencyStop_Request__TYPE_NAME, 30, 30},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
day2__srv__EmergencyStop_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__srv__EmergencyStop_Response__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
day2__srv__EmergencyStop_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__srv__EmergencyStop_Event__TYPE_NAME, 28, 28},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__srv__EmergencyStop__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__srv__EmergencyStop__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *day2__srv__EmergencyStop_Event__get_individual_type_description_source(NULL);
    sources[3] = *day2__srv__EmergencyStop_Request__get_individual_type_description_source(NULL);
    sources[4] = *day2__srv__EmergencyStop_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__srv__EmergencyStop_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__srv__EmergencyStop_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__srv__EmergencyStop_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__srv__EmergencyStop_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__srv__EmergencyStop_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__srv__EmergencyStop_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *day2__srv__EmergencyStop_Request__get_individual_type_description_source(NULL);
    sources[3] = *day2__srv__EmergencyStop_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
