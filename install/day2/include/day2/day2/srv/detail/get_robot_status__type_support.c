// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from day2:srv/GetRobotStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "day2/srv/detail/get_robot_status__rosidl_typesupport_introspection_c.h"
#include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "day2/srv/detail/get_robot_status__functions.h"
#include "day2/srv/detail/get_robot_status__struct.h"


// Include directives for member types
// Member `robot_name`
// Member `requested_fields`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__srv__GetRobotStatus_Request__init(message_memory);
}

void day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_fini_function(void * message_memory)
{
  day2__srv__GetRobotStatus_Request__fini(message_memory);
}

size_t day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__size_function__GetRobotStatus_Request__requested_fields(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__get_const_function__GetRobotStatus_Request__requested_fields(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__get_function__GetRobotStatus_Request__requested_fields(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__fetch_function__GetRobotStatus_Request__requested_fields(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__get_const_function__GetRobotStatus_Request__requested_fields(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__assign_function__GetRobotStatus_Request__requested_fields(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__get_function__GetRobotStatus_Request__requested_fields(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__resize_function__GetRobotStatus_Request__requested_fields(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_member_array[6] = {
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Request, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Request, robot_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "include_sensors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Request, include_sensors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "include_diagnostics",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Request, include_diagnostics),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "include_history",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Request, include_history),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requested_fields",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Request, requested_fields),  // bytes offset in struct
    NULL,  // default value
    day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__size_function__GetRobotStatus_Request__requested_fields,  // size() function pointer
    day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__get_const_function__GetRobotStatus_Request__requested_fields,  // get_const(index) function pointer
    day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__get_function__GetRobotStatus_Request__requested_fields,  // get(index) function pointer
    day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__fetch_function__GetRobotStatus_Request__requested_fields,  // fetch(index, &value) function pointer
    day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__assign_function__GetRobotStatus_Request__requested_fields,  // assign(index, value) function pointer
    day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__resize_function__GetRobotStatus_Request__requested_fields  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_members = {
  "day2__srv",  // message namespace
  "GetRobotStatus_Request",  // message name
  6,  // number of fields
  sizeof(day2__srv__GetRobotStatus_Request),
  false,  // has_any_key_member_
  day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_member_array,  // message members
  day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_type_support_handle = {
  0,
  &day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_members,
  get_message_typesupport_handle_function,
  &day2__srv__GetRobotStatus_Request__get_type_hash,
  &day2__srv__GetRobotStatus_Request__get_type_description,
  &day2__srv__GetRobotStatus_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, GetRobotStatus_Request)() {
  if (!day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_type_support_handle.typesupport_identifier) {
    day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/srv/detail/get_robot_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/srv/detail/get_robot_status__functions.h"
// already included above
// #include "day2/srv/detail/get_robot_status__struct.h"


// Include directives for member types
// Member `message`
// Member `diagnostic_messages`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `current_status`
// Member `status_history`
#include "day2/msg/robot_status.h"
// Member `current_status`
// Member `status_history`
#include "day2/msg/detail/robot_status__rosidl_typesupport_introspection_c.h"
// Member `sensor_data`
#include "day2/msg/sensor_data.h"
// Member `sensor_data`
#include "day2/msg/detail/sensor_data__rosidl_typesupport_introspection_c.h"
// Member `query_timestamp`
// Member `last_update_time`
#include "builtin_interfaces/msg/time.h"
// Member `query_timestamp`
// Member `last_update_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__srv__GetRobotStatus_Response__init(message_memory);
}

void day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_fini_function(void * message_memory)
{
  day2__srv__GetRobotStatus_Response__fini(message_memory);
}

size_t day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__size_function__GetRobotStatus_Response__sensor_data(
  const void * untyped_member)
{
  const day2__msg__SensorData__Sequence * member =
    (const day2__msg__SensorData__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotStatus_Response__sensor_data(
  const void * untyped_member, size_t index)
{
  const day2__msg__SensorData__Sequence * member =
    (const day2__msg__SensorData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__get_function__GetRobotStatus_Response__sensor_data(
  void * untyped_member, size_t index)
{
  day2__msg__SensorData__Sequence * member =
    (day2__msg__SensorData__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__fetch_function__GetRobotStatus_Response__sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__msg__SensorData * item =
    ((const day2__msg__SensorData *)
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotStatus_Response__sensor_data(untyped_member, index));
  day2__msg__SensorData * value =
    (day2__msg__SensorData *)(untyped_value);
  *value = *item;
}

void day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__assign_function__GetRobotStatus_Response__sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__msg__SensorData * item =
    ((day2__msg__SensorData *)
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__get_function__GetRobotStatus_Response__sensor_data(untyped_member, index));
  const day2__msg__SensorData * value =
    (const day2__msg__SensorData *)(untyped_value);
  *item = *value;
}

bool day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__resize_function__GetRobotStatus_Response__sensor_data(
  void * untyped_member, size_t size)
{
  day2__msg__SensorData__Sequence * member =
    (day2__msg__SensorData__Sequence *)(untyped_member);
  day2__msg__SensorData__Sequence__fini(member);
  return day2__msg__SensorData__Sequence__init(member, size);
}

size_t day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__size_function__GetRobotStatus_Response__diagnostic_messages(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotStatus_Response__diagnostic_messages(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__get_function__GetRobotStatus_Response__diagnostic_messages(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__fetch_function__GetRobotStatus_Response__diagnostic_messages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotStatus_Response__diagnostic_messages(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__assign_function__GetRobotStatus_Response__diagnostic_messages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__get_function__GetRobotStatus_Response__diagnostic_messages(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__resize_function__GetRobotStatus_Response__diagnostic_messages(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__size_function__GetRobotStatus_Response__status_history(
  const void * untyped_member)
{
  const day2__msg__RobotStatus__Sequence * member =
    (const day2__msg__RobotStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotStatus_Response__status_history(
  const void * untyped_member, size_t index)
{
  const day2__msg__RobotStatus__Sequence * member =
    (const day2__msg__RobotStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__get_function__GetRobotStatus_Response__status_history(
  void * untyped_member, size_t index)
{
  day2__msg__RobotStatus__Sequence * member =
    (day2__msg__RobotStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__fetch_function__GetRobotStatus_Response__status_history(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__msg__RobotStatus * item =
    ((const day2__msg__RobotStatus *)
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotStatus_Response__status_history(untyped_member, index));
  day2__msg__RobotStatus * value =
    (day2__msg__RobotStatus *)(untyped_value);
  *value = *item;
}

void day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__assign_function__GetRobotStatus_Response__status_history(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__msg__RobotStatus * item =
    ((day2__msg__RobotStatus *)
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__get_function__GetRobotStatus_Response__status_history(untyped_member, index));
  const day2__msg__RobotStatus * value =
    (const day2__msg__RobotStatus *)(untyped_value);
  *item = *value;
}

bool day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__resize_function__GetRobotStatus_Response__status_history(
  void * untyped_member, size_t size)
{
  day2__msg__RobotStatus__Sequence * member =
    (day2__msg__RobotStatus__Sequence *)(untyped_member);
  day2__msg__RobotStatus__Sequence__fini(member);
  return day2__msg__RobotStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_member_array[16] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Response, success),  // bytes offset in struct
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
    offsetof(day2__srv__GetRobotStatus_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Response, current_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Response, sensor_data),  // bytes offset in struct
    NULL,  // default value
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__size_function__GetRobotStatus_Response__sensor_data,  // size() function pointer
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotStatus_Response__sensor_data,  // get_const(index) function pointer
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__get_function__GetRobotStatus_Response__sensor_data,  // get(index) function pointer
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__fetch_function__GetRobotStatus_Response__sensor_data,  // fetch(index, &value) function pointer
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__assign_function__GetRobotStatus_Response__sensor_data,  // assign(index, value) function pointer
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__resize_function__GetRobotStatus_Response__sensor_data  // resize(index) function pointer
  },
  {
    "diagnostic_messages",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Response, diagnostic_messages),  // bytes offset in struct
    NULL,  // default value
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__size_function__GetRobotStatus_Response__diagnostic_messages,  // size() function pointer
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotStatus_Response__diagnostic_messages,  // get_const(index) function pointer
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__get_function__GetRobotStatus_Response__diagnostic_messages,  // get(index) function pointer
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__fetch_function__GetRobotStatus_Response__diagnostic_messages,  // fetch(index, &value) function pointer
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__assign_function__GetRobotStatus_Response__diagnostic_messages,  // assign(index, value) function pointer
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__resize_function__GetRobotStatus_Response__diagnostic_messages  // resize(index) function pointer
  },
  {
    "status_history",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Response, status_history),  // bytes offset in struct
    NULL,  // default value
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__size_function__GetRobotStatus_Response__status_history,  // size() function pointer
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotStatus_Response__status_history,  // get_const(index) function pointer
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__get_function__GetRobotStatus_Response__status_history,  // get(index) function pointer
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__fetch_function__GetRobotStatus_Response__status_history,  // fetch(index, &value) function pointer
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__assign_function__GetRobotStatus_Response__status_history,  // assign(index, value) function pointer
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__resize_function__GetRobotStatus_Response__status_history  // resize(index) function pointer
  },
  {
    "uptime_hours",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Response, uptime_hours),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_commands_executed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Response, total_commands_executed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_distance_traveled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Response, total_distance_traveled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_count_today",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Response, error_count_today),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "average_response_time_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Response, average_response_time_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cpu_usage_percent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Response, cpu_usage_percent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "memory_usage_percent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Response, memory_usage_percent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "network_latency_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Response, network_latency_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "query_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Response, query_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_update_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Response, last_update_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_members = {
  "day2__srv",  // message namespace
  "GetRobotStatus_Response",  // message name
  16,  // number of fields
  sizeof(day2__srv__GetRobotStatus_Response),
  false,  // has_any_key_member_
  day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_member_array,  // message members
  day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_type_support_handle = {
  0,
  &day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_members,
  get_message_typesupport_handle_function,
  &day2__srv__GetRobotStatus_Response__get_type_hash,
  &day2__srv__GetRobotStatus_Response__get_type_description,
  &day2__srv__GetRobotStatus_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, GetRobotStatus_Response)() {
  day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, msg, RobotStatus)();
  day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, msg, SensorData)();
  day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, msg, RobotStatus)();
  day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_type_support_handle.typesupport_identifier) {
    day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/srv/detail/get_robot_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/srv/detail/get_robot_status__functions.h"
// already included above
// #include "day2/srv/detail/get_robot_status__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "day2/srv/get_robot_status.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/srv/detail/get_robot_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__GetRobotStatus_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__srv__GetRobotStatus_Event__init(message_memory);
}

void day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__GetRobotStatus_Event_fini_function(void * message_memory)
{
  day2__srv__GetRobotStatus_Event__fini(message_memory);
}

size_t day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__size_function__GetRobotStatus_Event__request(
  const void * untyped_member)
{
  const day2__srv__GetRobotStatus_Request__Sequence * member =
    (const day2__srv__GetRobotStatus_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__get_const_function__GetRobotStatus_Event__request(
  const void * untyped_member, size_t index)
{
  const day2__srv__GetRobotStatus_Request__Sequence * member =
    (const day2__srv__GetRobotStatus_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__get_function__GetRobotStatus_Event__request(
  void * untyped_member, size_t index)
{
  day2__srv__GetRobotStatus_Request__Sequence * member =
    (day2__srv__GetRobotStatus_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__fetch_function__GetRobotStatus_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__srv__GetRobotStatus_Request * item =
    ((const day2__srv__GetRobotStatus_Request *)
    day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__get_const_function__GetRobotStatus_Event__request(untyped_member, index));
  day2__srv__GetRobotStatus_Request * value =
    (day2__srv__GetRobotStatus_Request *)(untyped_value);
  *value = *item;
}

void day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__assign_function__GetRobotStatus_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__srv__GetRobotStatus_Request * item =
    ((day2__srv__GetRobotStatus_Request *)
    day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__get_function__GetRobotStatus_Event__request(untyped_member, index));
  const day2__srv__GetRobotStatus_Request * value =
    (const day2__srv__GetRobotStatus_Request *)(untyped_value);
  *item = *value;
}

bool day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__resize_function__GetRobotStatus_Event__request(
  void * untyped_member, size_t size)
{
  day2__srv__GetRobotStatus_Request__Sequence * member =
    (day2__srv__GetRobotStatus_Request__Sequence *)(untyped_member);
  day2__srv__GetRobotStatus_Request__Sequence__fini(member);
  return day2__srv__GetRobotStatus_Request__Sequence__init(member, size);
}

size_t day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__size_function__GetRobotStatus_Event__response(
  const void * untyped_member)
{
  const day2__srv__GetRobotStatus_Response__Sequence * member =
    (const day2__srv__GetRobotStatus_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__get_const_function__GetRobotStatus_Event__response(
  const void * untyped_member, size_t index)
{
  const day2__srv__GetRobotStatus_Response__Sequence * member =
    (const day2__srv__GetRobotStatus_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__get_function__GetRobotStatus_Event__response(
  void * untyped_member, size_t index)
{
  day2__srv__GetRobotStatus_Response__Sequence * member =
    (day2__srv__GetRobotStatus_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__fetch_function__GetRobotStatus_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__srv__GetRobotStatus_Response * item =
    ((const day2__srv__GetRobotStatus_Response *)
    day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__get_const_function__GetRobotStatus_Event__response(untyped_member, index));
  day2__srv__GetRobotStatus_Response * value =
    (day2__srv__GetRobotStatus_Response *)(untyped_value);
  *value = *item;
}

void day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__assign_function__GetRobotStatus_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__srv__GetRobotStatus_Response * item =
    ((day2__srv__GetRobotStatus_Response *)
    day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__get_function__GetRobotStatus_Event__response(untyped_member, index));
  const day2__srv__GetRobotStatus_Response * value =
    (const day2__srv__GetRobotStatus_Response *)(untyped_value);
  *item = *value;
}

bool day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__resize_function__GetRobotStatus_Event__response(
  void * untyped_member, size_t size)
{
  day2__srv__GetRobotStatus_Response__Sequence * member =
    (day2__srv__GetRobotStatus_Response__Sequence *)(untyped_member);
  day2__srv__GetRobotStatus_Response__Sequence__fini(member);
  return day2__srv__GetRobotStatus_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__GetRobotStatus_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__GetRobotStatus_Event, info),  // bytes offset in struct
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
    offsetof(day2__srv__GetRobotStatus_Event, request),  // bytes offset in struct
    NULL,  // default value
    day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__size_function__GetRobotStatus_Event__request,  // size() function pointer
    day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__get_const_function__GetRobotStatus_Event__request,  // get_const(index) function pointer
    day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__get_function__GetRobotStatus_Event__request,  // get(index) function pointer
    day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__fetch_function__GetRobotStatus_Event__request,  // fetch(index, &value) function pointer
    day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__assign_function__GetRobotStatus_Event__request,  // assign(index, value) function pointer
    day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__resize_function__GetRobotStatus_Event__request  // resize(index) function pointer
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
    offsetof(day2__srv__GetRobotStatus_Event, response),  // bytes offset in struct
    NULL,  // default value
    day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__size_function__GetRobotStatus_Event__response,  // size() function pointer
    day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__get_const_function__GetRobotStatus_Event__response,  // get_const(index) function pointer
    day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__get_function__GetRobotStatus_Event__response,  // get(index) function pointer
    day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__fetch_function__GetRobotStatus_Event__response,  // fetch(index, &value) function pointer
    day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__assign_function__GetRobotStatus_Event__response,  // assign(index, value) function pointer
    day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__resize_function__GetRobotStatus_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__GetRobotStatus_Event_message_members = {
  "day2__srv",  // message namespace
  "GetRobotStatus_Event",  // message name
  3,  // number of fields
  sizeof(day2__srv__GetRobotStatus_Event),
  false,  // has_any_key_member_
  day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__GetRobotStatus_Event_message_member_array,  // message members
  day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__GetRobotStatus_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__GetRobotStatus_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__GetRobotStatus_Event_message_type_support_handle = {
  0,
  &day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__GetRobotStatus_Event_message_members,
  get_message_typesupport_handle_function,
  &day2__srv__GetRobotStatus_Event__get_type_hash,
  &day2__srv__GetRobotStatus_Event__get_type_description,
  &day2__srv__GetRobotStatus_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, GetRobotStatus_Event)() {
  day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__GetRobotStatus_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__GetRobotStatus_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, GetRobotStatus_Request)();
  day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__GetRobotStatus_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, GetRobotStatus_Response)();
  if (!day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__GetRobotStatus_Event_message_type_support_handle.typesupport_identifier) {
    day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__GetRobotStatus_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__GetRobotStatus_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "day2/srv/detail/get_robot_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers day2__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_service_members = {
  "day2__srv",  // service namespace
  "GetRobotStatus",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // day2__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_type_support_handle,
  NULL,  // response message
  // day2__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_type_support_handle
  NULL  // event_message
  // day2__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_type_support_handle
};


static rosidl_service_type_support_t day2__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_service_type_support_handle = {
  0,
  &day2__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_service_members,
  get_service_typesupport_handle_function,
  &day2__srv__GetRobotStatus_Request__rosidl_typesupport_introspection_c__GetRobotStatus_Request_message_type_support_handle,
  &day2__srv__GetRobotStatus_Response__rosidl_typesupport_introspection_c__GetRobotStatus_Response_message_type_support_handle,
  &day2__srv__GetRobotStatus_Event__rosidl_typesupport_introspection_c__GetRobotStatus_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    srv,
    GetRobotStatus
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    srv,
    GetRobotStatus
  ),
  &day2__srv__GetRobotStatus__get_type_hash,
  &day2__srv__GetRobotStatus__get_type_description,
  &day2__srv__GetRobotStatus__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, GetRobotStatus_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, GetRobotStatus_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, GetRobotStatus_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, GetRobotStatus)(void) {
  if (!day2__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_service_type_support_handle.typesupport_identifier) {
    day2__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)day2__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, GetRobotStatus_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, GetRobotStatus_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, GetRobotStatus_Event)()->data;
  }

  return &day2__srv__detail__get_robot_status__rosidl_typesupport_introspection_c__GetRobotStatus_service_type_support_handle;
}
