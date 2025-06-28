// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from day2:msg/RobotArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "day2/msg/detail/robot_array__rosidl_typesupport_introspection_c.h"
#include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "day2/msg/detail/robot_array__functions.h"
#include "day2/msg/detail/robot_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `fleet_name`
// Member `coordinator_node`
// Member `workspace_name`
// Member `emergency_reason`
// Member `critical_warnings`
// Member `system_messages`
#include "rosidl_runtime_c/string_functions.h"
// Member `robots`
#include "day2/msg/robot_status.h"
// Member `robots`
#include "day2/msg/detail/robot_status__rosidl_typesupport_introspection_c.h"
// Member `workspace_min`
// Member `workspace_max`
#include "geometry_msgs/msg/point.h"
// Member `workspace_min`
// Member `workspace_max`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `emergency_timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `emergency_timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__msg__RobotArray__init(message_memory);
}

void day2__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_fini_function(void * message_memory)
{
  day2__msg__RobotArray__fini(message_memory);
}

size_t day2__msg__RobotArray__rosidl_typesupport_introspection_c__size_function__RobotArray__robots(
  const void * untyped_member)
{
  const day2__msg__RobotStatus__Sequence * member =
    (const day2__msg__RobotStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__msg__RobotArray__rosidl_typesupport_introspection_c__get_const_function__RobotArray__robots(
  const void * untyped_member, size_t index)
{
  const day2__msg__RobotStatus__Sequence * member =
    (const day2__msg__RobotStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__msg__RobotArray__rosidl_typesupport_introspection_c__get_function__RobotArray__robots(
  void * untyped_member, size_t index)
{
  day2__msg__RobotStatus__Sequence * member =
    (day2__msg__RobotStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__msg__RobotArray__rosidl_typesupport_introspection_c__fetch_function__RobotArray__robots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__msg__RobotStatus * item =
    ((const day2__msg__RobotStatus *)
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__get_const_function__RobotArray__robots(untyped_member, index));
  day2__msg__RobotStatus * value =
    (day2__msg__RobotStatus *)(untyped_value);
  *value = *item;
}

void day2__msg__RobotArray__rosidl_typesupport_introspection_c__assign_function__RobotArray__robots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__msg__RobotStatus * item =
    ((day2__msg__RobotStatus *)
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__get_function__RobotArray__robots(untyped_member, index));
  const day2__msg__RobotStatus * value =
    (const day2__msg__RobotStatus *)(untyped_value);
  *item = *value;
}

bool day2__msg__RobotArray__rosidl_typesupport_introspection_c__resize_function__RobotArray__robots(
  void * untyped_member, size_t size)
{
  day2__msg__RobotStatus__Sequence * member =
    (day2__msg__RobotStatus__Sequence *)(untyped_member);
  day2__msg__RobotStatus__Sequence__fini(member);
  return day2__msg__RobotStatus__Sequence__init(member, size);
}

size_t day2__msg__RobotArray__rosidl_typesupport_introspection_c__size_function__RobotArray__critical_warnings(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__msg__RobotArray__rosidl_typesupport_introspection_c__get_const_function__RobotArray__critical_warnings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__msg__RobotArray__rosidl_typesupport_introspection_c__get_function__RobotArray__critical_warnings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__msg__RobotArray__rosidl_typesupport_introspection_c__fetch_function__RobotArray__critical_warnings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__get_const_function__RobotArray__critical_warnings(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void day2__msg__RobotArray__rosidl_typesupport_introspection_c__assign_function__RobotArray__critical_warnings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__get_function__RobotArray__critical_warnings(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool day2__msg__RobotArray__rosidl_typesupport_introspection_c__resize_function__RobotArray__critical_warnings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t day2__msg__RobotArray__rosidl_typesupport_introspection_c__size_function__RobotArray__system_messages(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__msg__RobotArray__rosidl_typesupport_introspection_c__get_const_function__RobotArray__system_messages(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__msg__RobotArray__rosidl_typesupport_introspection_c__get_function__RobotArray__system_messages(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__msg__RobotArray__rosidl_typesupport_introspection_c__fetch_function__RobotArray__system_messages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__get_const_function__RobotArray__system_messages(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void day2__msg__RobotArray__rosidl_typesupport_introspection_c__assign_function__RobotArray__system_messages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__get_function__RobotArray__system_messages(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool day2__msg__RobotArray__rosidl_typesupport_introspection_c__resize_function__RobotArray__system_messages(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_member_array[26] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fleet_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, fleet_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fleet_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, fleet_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coordinator_node",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, coordinator_node),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, robots),  // bytes offset in struct
    NULL,  // default value
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__size_function__RobotArray__robots,  // size() function pointer
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__get_const_function__RobotArray__robots,  // get_const(index) function pointer
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__get_function__RobotArray__robots,  // get(index) function pointer
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__fetch_function__RobotArray__robots,  // fetch(index, &value) function pointer
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__assign_function__RobotArray__robots,  // assign(index, value) function pointer
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__resize_function__RobotArray__robots  // resize(index) function pointer
  },
  {
    "total_robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, total_robots),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, active_robots),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "idle_robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, idle_robots),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "charging_robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, charging_robots),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, error_robots),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fleet_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, fleet_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "average_battery_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, average_battery_level),  // bytes offset in struct
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
    offsetof(day2__msg__RobotArray, total_distance_traveled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "average_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, average_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "completed_tasks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, completed_tasks),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pending_tasks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, pending_tasks),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "workspace_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, workspace_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "workspace_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, workspace_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "workspace_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, workspace_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, emergency_stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, emergency_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, emergency_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "system_health_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, system_health_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "critical_warnings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, critical_warnings),  // bytes offset in struct
    NULL,  // default value
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__size_function__RobotArray__critical_warnings,  // size() function pointer
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__get_const_function__RobotArray__critical_warnings,  // get_const(index) function pointer
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__get_function__RobotArray__critical_warnings,  // get(index) function pointer
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__fetch_function__RobotArray__critical_warnings,  // fetch(index, &value) function pointer
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__assign_function__RobotArray__critical_warnings,  // assign(index, value) function pointer
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__resize_function__RobotArray__critical_warnings  // resize(index) function pointer
  },
  {
    "system_messages",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, system_messages),  // bytes offset in struct
    NULL,  // default value
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__size_function__RobotArray__system_messages,  // size() function pointer
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__get_const_function__RobotArray__system_messages,  // get_const(index) function pointer
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__get_function__RobotArray__system_messages,  // get(index) function pointer
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__fetch_function__RobotArray__system_messages,  // fetch(index, &value) function pointer
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__assign_function__RobotArray__system_messages,  // assign(index, value) function pointer
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__resize_function__RobotArray__system_messages  // resize(index) function pointer
  },
  {
    "update_frequency_hz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__RobotArray, update_frequency_hz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_members = {
  "day2__msg",  // message namespace
  "RobotArray",  // message name
  26,  // number of fields
  sizeof(day2__msg__RobotArray),
  false,  // has_any_key_member_
  day2__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_member_array,  // message members
  day2__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_type_support_handle = {
  0,
  &day2__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_members,
  get_message_typesupport_handle_function,
  &day2__msg__RobotArray__get_type_hash,
  &day2__msg__RobotArray__get_type_description,
  &day2__msg__RobotArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, msg, RobotArray)() {
  day2__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  day2__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, msg, RobotStatus)();
  day2__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  day2__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  day2__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!day2__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_type_support_handle.typesupport_identifier) {
    day2__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
