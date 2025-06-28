// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from day2:srv/EmergencyStop.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "day2/srv/detail/emergency_stop__rosidl_typesupport_introspection_c.h"
#include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "day2/srv/detail/emergency_stop__functions.h"
#include "day2/srv/detail/emergency_stop__struct.h"


// Include directives for member types
// Member `reason`
// Member `operator_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__srv__EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__srv__EmergencyStop_Request__init(message_memory);
}

void day2__srv__EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_fini_function(void * message_memory)
{
  day2__srv__EmergencyStop_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__srv__EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_member_array[8] = {
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Request, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Request, reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Request, stop_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disable_motors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Request, disable_motors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lock_brakes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Request, lock_brakes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sound_alarm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Request, sound_alarm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "operator_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Request, operator_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "priority_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Request, priority_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__srv__EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_members = {
  "day2__srv",  // message namespace
  "EmergencyStop_Request",  // message name
  8,  // number of fields
  sizeof(day2__srv__EmergencyStop_Request),
  false,  // has_any_key_member_
  day2__srv__EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_member_array,  // message members
  day2__srv__EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__srv__EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__srv__EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_type_support_handle = {
  0,
  &day2__srv__EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_members,
  get_message_typesupport_handle_function,
  &day2__srv__EmergencyStop_Request__get_type_hash,
  &day2__srv__EmergencyStop_Request__get_type_description,
  &day2__srv__EmergencyStop_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, EmergencyStop_Request)() {
  if (!day2__srv__EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_type_support_handle.typesupport_identifier) {
    day2__srv__EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__srv__EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/srv/detail/emergency_stop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/srv/detail/emergency_stop__functions.h"
// already included above
// #include "day2/srv/detail/emergency_stop__struct.h"


// Include directives for member types
// Member `message`
// Member `robot_responses`
// Member `active_alarms`
// Member `required_actions`
// Member `reset_procedures`
// Member `incident_classification`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `stop_timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `stop_timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `stopped_robot_ids`
// Member `stop_distances`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__srv__EmergencyStop_Response__init(message_memory);
}

void day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_fini_function(void * message_memory)
{
  day2__srv__EmergencyStop_Response__fini(message_memory);
}

size_t day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__size_function__EmergencyStop_Response__stopped_robot_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Response__stopped_robot_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Response__stopped_robot_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__fetch_function__EmergencyStop_Response__stopped_robot_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Response__stopped_robot_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__assign_function__EmergencyStop_Response__stopped_robot_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Response__stopped_robot_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__resize_function__EmergencyStop_Response__stopped_robot_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__size_function__EmergencyStop_Response__robot_responses(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Response__robot_responses(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Response__robot_responses(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__fetch_function__EmergencyStop_Response__robot_responses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Response__robot_responses(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__assign_function__EmergencyStop_Response__robot_responses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Response__robot_responses(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__resize_function__EmergencyStop_Response__robot_responses(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__size_function__EmergencyStop_Response__stop_distances(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Response__stop_distances(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Response__stop_distances(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__fetch_function__EmergencyStop_Response__stop_distances(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Response__stop_distances(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__assign_function__EmergencyStop_Response__stop_distances(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Response__stop_distances(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__resize_function__EmergencyStop_Response__stop_distances(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__size_function__EmergencyStop_Response__active_alarms(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Response__active_alarms(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Response__active_alarms(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__fetch_function__EmergencyStop_Response__active_alarms(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Response__active_alarms(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__assign_function__EmergencyStop_Response__active_alarms(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Response__active_alarms(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__resize_function__EmergencyStop_Response__active_alarms(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__size_function__EmergencyStop_Response__required_actions(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Response__required_actions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Response__required_actions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__fetch_function__EmergencyStop_Response__required_actions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Response__required_actions(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__assign_function__EmergencyStop_Response__required_actions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Response__required_actions(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__resize_function__EmergencyStop_Response__required_actions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__size_function__EmergencyStop_Response__reset_procedures(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Response__reset_procedures(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Response__reset_procedures(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__fetch_function__EmergencyStop_Response__reset_procedures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Response__reset_procedures(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__assign_function__EmergencyStop_Response__reset_procedures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Response__reset_procedures(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__resize_function__EmergencyStop_Response__reset_procedures(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_member_array[16] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Response, stop_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stopped_robot_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Response, stopped_robot_ids),  // bytes offset in struct
    NULL,  // default value
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__size_function__EmergencyStop_Response__stopped_robot_ids,  // size() function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Response__stopped_robot_ids,  // get_const(index) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Response__stopped_robot_ids,  // get(index) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__fetch_function__EmergencyStop_Response__stopped_robot_ids,  // fetch(index, &value) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__assign_function__EmergencyStop_Response__stopped_robot_ids,  // assign(index, value) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__resize_function__EmergencyStop_Response__stopped_robot_ids  // resize(index) function pointer
  },
  {
    "robot_responses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Response, robot_responses),  // bytes offset in struct
    NULL,  // default value
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__size_function__EmergencyStop_Response__robot_responses,  // size() function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Response__robot_responses,  // get_const(index) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Response__robot_responses,  // get(index) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__fetch_function__EmergencyStop_Response__robot_responses,  // fetch(index, &value) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__assign_function__EmergencyStop_Response__robot_responses,  // assign(index, value) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__resize_function__EmergencyStop_Response__robot_responses  // resize(index) function pointer
  },
  {
    "stop_distances",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Response, stop_distances),  // bytes offset in struct
    NULL,  // default value
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__size_function__EmergencyStop_Response__stop_distances,  // size() function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Response__stop_distances,  // get_const(index) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Response__stop_distances,  // get(index) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__fetch_function__EmergencyStop_Response__stop_distances,  // fetch(index, &value) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__assign_function__EmergencyStop_Response__stop_distances,  // assign(index, value) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__resize_function__EmergencyStop_Response__stop_distances  // resize(index) function pointer
  },
  {
    "system_safe_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Response, system_safe_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_alarms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Response, active_alarms),  // bytes offset in struct
    NULL,  // default value
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__size_function__EmergencyStop_Response__active_alarms,  // size() function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Response__active_alarms,  // get_const(index) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Response__active_alarms,  // get(index) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__fetch_function__EmergencyStop_Response__active_alarms,  // fetch(index, &value) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__assign_function__EmergencyStop_Response__active_alarms,  // assign(index, value) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__resize_function__EmergencyStop_Response__active_alarms  // resize(index) function pointer
  },
  {
    "required_actions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Response, required_actions),  // bytes offset in struct
    NULL,  // default value
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__size_function__EmergencyStop_Response__required_actions,  // size() function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Response__required_actions,  // get_const(index) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Response__required_actions,  // get(index) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__fetch_function__EmergencyStop_Response__required_actions,  // fetch(index, &value) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__assign_function__EmergencyStop_Response__required_actions,  // assign(index, value) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__resize_function__EmergencyStop_Response__required_actions  // resize(index) function pointer
  },
  {
    "manual_reset_required",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Response, manual_reset_required),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reset_procedures",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Response, reset_procedures),  // bytes offset in struct
    NULL,  // default value
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__size_function__EmergencyStop_Response__reset_procedures,  // size() function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Response__reset_procedures,  // get_const(index) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Response__reset_procedures,  // get(index) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__fetch_function__EmergencyStop_Response__reset_procedures,  // fetch(index, &value) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__assign_function__EmergencyStop_Response__reset_procedures,  // assign(index, value) function pointer
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__resize_function__EmergencyStop_Response__reset_procedures  // resize(index) function pointer
  },
  {
    "estimated_recovery_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Response, estimated_recovery_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "incident_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Response, incident_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "incident_classification",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Response, incident_classification),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requires_investigation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Response, requires_investigation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Response, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_members = {
  "day2__srv",  // message namespace
  "EmergencyStop_Response",  // message name
  16,  // number of fields
  sizeof(day2__srv__EmergencyStop_Response),
  false,  // has_any_key_member_
  day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_member_array,  // message members
  day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_type_support_handle = {
  0,
  &day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_members,
  get_message_typesupport_handle_function,
  &day2__srv__EmergencyStop_Response__get_type_hash,
  &day2__srv__EmergencyStop_Response__get_type_description,
  &day2__srv__EmergencyStop_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, EmergencyStop_Response)() {
  day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_type_support_handle.typesupport_identifier) {
    day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/srv/detail/emergency_stop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/srv/detail/emergency_stop__functions.h"
// already included above
// #include "day2/srv/detail/emergency_stop__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "day2/srv/emergency_stop.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/srv/detail/emergency_stop__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__EmergencyStop_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__srv__EmergencyStop_Event__init(message_memory);
}

void day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__EmergencyStop_Event_fini_function(void * message_memory)
{
  day2__srv__EmergencyStop_Event__fini(message_memory);
}

size_t day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__size_function__EmergencyStop_Event__request(
  const void * untyped_member)
{
  const day2__srv__EmergencyStop_Request__Sequence * member =
    (const day2__srv__EmergencyStop_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Event__request(
  const void * untyped_member, size_t index)
{
  const day2__srv__EmergencyStop_Request__Sequence * member =
    (const day2__srv__EmergencyStop_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Event__request(
  void * untyped_member, size_t index)
{
  day2__srv__EmergencyStop_Request__Sequence * member =
    (day2__srv__EmergencyStop_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__fetch_function__EmergencyStop_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__srv__EmergencyStop_Request * item =
    ((const day2__srv__EmergencyStop_Request *)
    day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Event__request(untyped_member, index));
  day2__srv__EmergencyStop_Request * value =
    (day2__srv__EmergencyStop_Request *)(untyped_value);
  *value = *item;
}

void day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__assign_function__EmergencyStop_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__srv__EmergencyStop_Request * item =
    ((day2__srv__EmergencyStop_Request *)
    day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Event__request(untyped_member, index));
  const day2__srv__EmergencyStop_Request * value =
    (const day2__srv__EmergencyStop_Request *)(untyped_value);
  *item = *value;
}

bool day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__resize_function__EmergencyStop_Event__request(
  void * untyped_member, size_t size)
{
  day2__srv__EmergencyStop_Request__Sequence * member =
    (day2__srv__EmergencyStop_Request__Sequence *)(untyped_member);
  day2__srv__EmergencyStop_Request__Sequence__fini(member);
  return day2__srv__EmergencyStop_Request__Sequence__init(member, size);
}

size_t day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__size_function__EmergencyStop_Event__response(
  const void * untyped_member)
{
  const day2__srv__EmergencyStop_Response__Sequence * member =
    (const day2__srv__EmergencyStop_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Event__response(
  const void * untyped_member, size_t index)
{
  const day2__srv__EmergencyStop_Response__Sequence * member =
    (const day2__srv__EmergencyStop_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Event__response(
  void * untyped_member, size_t index)
{
  day2__srv__EmergencyStop_Response__Sequence * member =
    (day2__srv__EmergencyStop_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__fetch_function__EmergencyStop_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__srv__EmergencyStop_Response * item =
    ((const day2__srv__EmergencyStop_Response *)
    day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Event__response(untyped_member, index));
  day2__srv__EmergencyStop_Response * value =
    (day2__srv__EmergencyStop_Response *)(untyped_value);
  *value = *item;
}

void day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__assign_function__EmergencyStop_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__srv__EmergencyStop_Response * item =
    ((day2__srv__EmergencyStop_Response *)
    day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Event__response(untyped_member, index));
  const day2__srv__EmergencyStop_Response * value =
    (const day2__srv__EmergencyStop_Response *)(untyped_value);
  *item = *value;
}

bool day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__resize_function__EmergencyStop_Event__response(
  void * untyped_member, size_t size)
{
  day2__srv__EmergencyStop_Response__Sequence * member =
    (day2__srv__EmergencyStop_Response__Sequence *)(untyped_member);
  day2__srv__EmergencyStop_Response__Sequence__fini(member);
  return day2__srv__EmergencyStop_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__EmergencyStop_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Event, request),  // bytes offset in struct
    NULL,  // default value
    day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__size_function__EmergencyStop_Event__request,  // size() function pointer
    day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Event__request,  // get_const(index) function pointer
    day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Event__request,  // get(index) function pointer
    day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__fetch_function__EmergencyStop_Event__request,  // fetch(index, &value) function pointer
    day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__assign_function__EmergencyStop_Event__request,  // assign(index, value) function pointer
    day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__resize_function__EmergencyStop_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(day2__srv__EmergencyStop_Event, response),  // bytes offset in struct
    NULL,  // default value
    day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__size_function__EmergencyStop_Event__response,  // size() function pointer
    day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__get_const_function__EmergencyStop_Event__response,  // get_const(index) function pointer
    day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__get_function__EmergencyStop_Event__response,  // get(index) function pointer
    day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__fetch_function__EmergencyStop_Event__response,  // fetch(index, &value) function pointer
    day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__assign_function__EmergencyStop_Event__response,  // assign(index, value) function pointer
    day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__resize_function__EmergencyStop_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__EmergencyStop_Event_message_members = {
  "day2__srv",  // message namespace
  "EmergencyStop_Event",  // message name
  3,  // number of fields
  sizeof(day2__srv__EmergencyStop_Event),
  false,  // has_any_key_member_
  day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__EmergencyStop_Event_message_member_array,  // message members
  day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__EmergencyStop_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__EmergencyStop_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__EmergencyStop_Event_message_type_support_handle = {
  0,
  &day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__EmergencyStop_Event_message_members,
  get_message_typesupport_handle_function,
  &day2__srv__EmergencyStop_Event__get_type_hash,
  &day2__srv__EmergencyStop_Event__get_type_description,
  &day2__srv__EmergencyStop_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, EmergencyStop_Event)() {
  day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__EmergencyStop_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__EmergencyStop_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, EmergencyStop_Request)();
  day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__EmergencyStop_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, EmergencyStop_Response)();
  if (!day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__EmergencyStop_Event_message_type_support_handle.typesupport_identifier) {
    day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__EmergencyStop_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__EmergencyStop_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "day2/srv/detail/emergency_stop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers day2__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_service_members = {
  "day2__srv",  // service namespace
  "EmergencyStop",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // day2__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_type_support_handle,
  NULL,  // response message
  // day2__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_type_support_handle
  NULL  // event_message
  // day2__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_type_support_handle
};


static rosidl_service_type_support_t day2__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_service_type_support_handle = {
  0,
  &day2__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_service_members,
  get_service_typesupport_handle_function,
  &day2__srv__EmergencyStop_Request__rosidl_typesupport_introspection_c__EmergencyStop_Request_message_type_support_handle,
  &day2__srv__EmergencyStop_Response__rosidl_typesupport_introspection_c__EmergencyStop_Response_message_type_support_handle,
  &day2__srv__EmergencyStop_Event__rosidl_typesupport_introspection_c__EmergencyStop_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    srv,
    EmergencyStop
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    srv,
    EmergencyStop
  ),
  &day2__srv__EmergencyStop__get_type_hash,
  &day2__srv__EmergencyStop__get_type_description,
  &day2__srv__EmergencyStop__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, EmergencyStop_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, EmergencyStop_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, EmergencyStop_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, EmergencyStop)(void) {
  if (!day2__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_service_type_support_handle.typesupport_identifier) {
    day2__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)day2__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, EmergencyStop_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, EmergencyStop_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, EmergencyStop_Event)()->data;
  }

  return &day2__srv__detail__emergency_stop__rosidl_typesupport_introspection_c__EmergencyStop_service_type_support_handle;
}
