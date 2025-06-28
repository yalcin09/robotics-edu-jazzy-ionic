// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from day2:srv/RobotCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "day2/srv/detail/robot_command__rosidl_typesupport_introspection_c.h"
#include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "day2/srv/detail/robot_command__functions.h"
#include "day2/srv/detail/robot_command__struct.h"


// Include directives for member types
// Member `command_type`
// Member `additional_params`
#include "rosidl_runtime_c/string_functions.h"
// Member `target_position`
#include "geometry_msgs/msg/point.h"
// Member `target_position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `target_orientation`
#include "geometry_msgs/msg/vector3.h"
// Member `target_orientation`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `deadline`
#include "builtin_interfaces/msg/time.h"
// Member `deadline`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__RobotCommand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__srv__RobotCommand_Request__init(message_memory);
}

void day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__RobotCommand_Request_fini_function(void * message_memory)
{
  day2__srv__RobotCommand_Request__fini(message_memory);
}

size_t day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__size_function__RobotCommand_Request__additional_params(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__get_const_function__RobotCommand_Request__additional_params(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__get_function__RobotCommand_Request__additional_params(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__fetch_function__RobotCommand_Request__additional_params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__get_const_function__RobotCommand_Request__additional_params(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__assign_function__RobotCommand_Request__additional_params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__get_function__RobotCommand_Request__additional_params(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__resize_function__RobotCommand_Request__additional_params(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__RobotCommand_Request_message_member_array[9] = {
  {
    "command_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__RobotCommand_Request, command_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__RobotCommand_Request, target_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__RobotCommand_Request, target_orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__RobotCommand_Request, max_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__RobotCommand_Request, max_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timeout_seconds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__RobotCommand_Request, timeout_seconds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force_execution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__RobotCommand_Request, force_execution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "additional_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__RobotCommand_Request, additional_params),  // bytes offset in struct
    NULL,  // default value
    day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__size_function__RobotCommand_Request__additional_params,  // size() function pointer
    day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__get_const_function__RobotCommand_Request__additional_params,  // get_const(index) function pointer
    day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__get_function__RobotCommand_Request__additional_params,  // get(index) function pointer
    day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__fetch_function__RobotCommand_Request__additional_params,  // fetch(index, &value) function pointer
    day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__assign_function__RobotCommand_Request__additional_params,  // assign(index, value) function pointer
    day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__resize_function__RobotCommand_Request__additional_params  // resize(index) function pointer
  },
  {
    "deadline",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__RobotCommand_Request, deadline),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__RobotCommand_Request_message_members = {
  "day2__srv",  // message namespace
  "RobotCommand_Request",  // message name
  9,  // number of fields
  sizeof(day2__srv__RobotCommand_Request),
  false,  // has_any_key_member_
  day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__RobotCommand_Request_message_member_array,  // message members
  day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__RobotCommand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__RobotCommand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__RobotCommand_Request_message_type_support_handle = {
  0,
  &day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__RobotCommand_Request_message_members,
  get_message_typesupport_handle_function,
  &day2__srv__RobotCommand_Request__get_type_hash,
  &day2__srv__RobotCommand_Request__get_type_description,
  &day2__srv__RobotCommand_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, RobotCommand_Request)() {
  day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__RobotCommand_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__RobotCommand_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__RobotCommand_Request_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__RobotCommand_Request_message_type_support_handle.typesupport_identifier) {
    day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__RobotCommand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__RobotCommand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/srv/detail/robot_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/srv/detail/robot_command__functions.h"
// already included above
// #include "day2/srv/detail/robot_command__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `actual_target`
// already included above
// #include "geometry_msgs/msg/point.h"
// Member `actual_target`
// already included above
// #include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `estimated_completion`
// already included above
// #include "builtin_interfaces/msg/time.h"
// Member `estimated_completion`
// already included above
// #include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__srv__RobotCommand_Response__rosidl_typesupport_introspection_c__RobotCommand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__srv__RobotCommand_Response__init(message_memory);
}

void day2__srv__RobotCommand_Response__rosidl_typesupport_introspection_c__RobotCommand_Response_fini_function(void * message_memory)
{
  day2__srv__RobotCommand_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__srv__RobotCommand_Response__rosidl_typesupport_introspection_c__RobotCommand_Response_message_member_array[7] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__RobotCommand_Response, success),  // bytes offset in struct
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
    offsetof(day2__srv__RobotCommand_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__RobotCommand_Response, command_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estimated_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__RobotCommand_Response, estimated_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actual_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__RobotCommand_Response, actual_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estimated_completion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__RobotCommand_Response, estimated_completion),  // bytes offset in struct
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
    offsetof(day2__srv__RobotCommand_Response, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__srv__RobotCommand_Response__rosidl_typesupport_introspection_c__RobotCommand_Response_message_members = {
  "day2__srv",  // message namespace
  "RobotCommand_Response",  // message name
  7,  // number of fields
  sizeof(day2__srv__RobotCommand_Response),
  false,  // has_any_key_member_
  day2__srv__RobotCommand_Response__rosidl_typesupport_introspection_c__RobotCommand_Response_message_member_array,  // message members
  day2__srv__RobotCommand_Response__rosidl_typesupport_introspection_c__RobotCommand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__srv__RobotCommand_Response__rosidl_typesupport_introspection_c__RobotCommand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__srv__RobotCommand_Response__rosidl_typesupport_introspection_c__RobotCommand_Response_message_type_support_handle = {
  0,
  &day2__srv__RobotCommand_Response__rosidl_typesupport_introspection_c__RobotCommand_Response_message_members,
  get_message_typesupport_handle_function,
  &day2__srv__RobotCommand_Response__get_type_hash,
  &day2__srv__RobotCommand_Response__get_type_description,
  &day2__srv__RobotCommand_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, RobotCommand_Response)() {
  day2__srv__RobotCommand_Response__rosidl_typesupport_introspection_c__RobotCommand_Response_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  day2__srv__RobotCommand_Response__rosidl_typesupport_introspection_c__RobotCommand_Response_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!day2__srv__RobotCommand_Response__rosidl_typesupport_introspection_c__RobotCommand_Response_message_type_support_handle.typesupport_identifier) {
    day2__srv__RobotCommand_Response__rosidl_typesupport_introspection_c__RobotCommand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__srv__RobotCommand_Response__rosidl_typesupport_introspection_c__RobotCommand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/srv/detail/robot_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/srv/detail/robot_command__functions.h"
// already included above
// #include "day2/srv/detail/robot_command__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "day2/srv/robot_command.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/srv/detail/robot_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__RobotCommand_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__srv__RobotCommand_Event__init(message_memory);
}

void day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__RobotCommand_Event_fini_function(void * message_memory)
{
  day2__srv__RobotCommand_Event__fini(message_memory);
}

size_t day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__size_function__RobotCommand_Event__request(
  const void * untyped_member)
{
  const day2__srv__RobotCommand_Request__Sequence * member =
    (const day2__srv__RobotCommand_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__get_const_function__RobotCommand_Event__request(
  const void * untyped_member, size_t index)
{
  const day2__srv__RobotCommand_Request__Sequence * member =
    (const day2__srv__RobotCommand_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__get_function__RobotCommand_Event__request(
  void * untyped_member, size_t index)
{
  day2__srv__RobotCommand_Request__Sequence * member =
    (day2__srv__RobotCommand_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__fetch_function__RobotCommand_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__srv__RobotCommand_Request * item =
    ((const day2__srv__RobotCommand_Request *)
    day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__get_const_function__RobotCommand_Event__request(untyped_member, index));
  day2__srv__RobotCommand_Request * value =
    (day2__srv__RobotCommand_Request *)(untyped_value);
  *value = *item;
}

void day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__assign_function__RobotCommand_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__srv__RobotCommand_Request * item =
    ((day2__srv__RobotCommand_Request *)
    day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__get_function__RobotCommand_Event__request(untyped_member, index));
  const day2__srv__RobotCommand_Request * value =
    (const day2__srv__RobotCommand_Request *)(untyped_value);
  *item = *value;
}

bool day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__resize_function__RobotCommand_Event__request(
  void * untyped_member, size_t size)
{
  day2__srv__RobotCommand_Request__Sequence * member =
    (day2__srv__RobotCommand_Request__Sequence *)(untyped_member);
  day2__srv__RobotCommand_Request__Sequence__fini(member);
  return day2__srv__RobotCommand_Request__Sequence__init(member, size);
}

size_t day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__size_function__RobotCommand_Event__response(
  const void * untyped_member)
{
  const day2__srv__RobotCommand_Response__Sequence * member =
    (const day2__srv__RobotCommand_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__get_const_function__RobotCommand_Event__response(
  const void * untyped_member, size_t index)
{
  const day2__srv__RobotCommand_Response__Sequence * member =
    (const day2__srv__RobotCommand_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__get_function__RobotCommand_Event__response(
  void * untyped_member, size_t index)
{
  day2__srv__RobotCommand_Response__Sequence * member =
    (day2__srv__RobotCommand_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__fetch_function__RobotCommand_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__srv__RobotCommand_Response * item =
    ((const day2__srv__RobotCommand_Response *)
    day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__get_const_function__RobotCommand_Event__response(untyped_member, index));
  day2__srv__RobotCommand_Response * value =
    (day2__srv__RobotCommand_Response *)(untyped_value);
  *value = *item;
}

void day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__assign_function__RobotCommand_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__srv__RobotCommand_Response * item =
    ((day2__srv__RobotCommand_Response *)
    day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__get_function__RobotCommand_Event__response(untyped_member, index));
  const day2__srv__RobotCommand_Response * value =
    (const day2__srv__RobotCommand_Response *)(untyped_value);
  *item = *value;
}

bool day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__resize_function__RobotCommand_Event__response(
  void * untyped_member, size_t size)
{
  day2__srv__RobotCommand_Response__Sequence * member =
    (day2__srv__RobotCommand_Response__Sequence *)(untyped_member);
  day2__srv__RobotCommand_Response__Sequence__fini(member);
  return day2__srv__RobotCommand_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__RobotCommand_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__srv__RobotCommand_Event, info),  // bytes offset in struct
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
    offsetof(day2__srv__RobotCommand_Event, request),  // bytes offset in struct
    NULL,  // default value
    day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__size_function__RobotCommand_Event__request,  // size() function pointer
    day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__get_const_function__RobotCommand_Event__request,  // get_const(index) function pointer
    day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__get_function__RobotCommand_Event__request,  // get(index) function pointer
    day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__fetch_function__RobotCommand_Event__request,  // fetch(index, &value) function pointer
    day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__assign_function__RobotCommand_Event__request,  // assign(index, value) function pointer
    day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__resize_function__RobotCommand_Event__request  // resize(index) function pointer
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
    offsetof(day2__srv__RobotCommand_Event, response),  // bytes offset in struct
    NULL,  // default value
    day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__size_function__RobotCommand_Event__response,  // size() function pointer
    day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__get_const_function__RobotCommand_Event__response,  // get_const(index) function pointer
    day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__get_function__RobotCommand_Event__response,  // get(index) function pointer
    day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__fetch_function__RobotCommand_Event__response,  // fetch(index, &value) function pointer
    day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__assign_function__RobotCommand_Event__response,  // assign(index, value) function pointer
    day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__resize_function__RobotCommand_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__RobotCommand_Event_message_members = {
  "day2__srv",  // message namespace
  "RobotCommand_Event",  // message name
  3,  // number of fields
  sizeof(day2__srv__RobotCommand_Event),
  false,  // has_any_key_member_
  day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__RobotCommand_Event_message_member_array,  // message members
  day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__RobotCommand_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__RobotCommand_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__RobotCommand_Event_message_type_support_handle = {
  0,
  &day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__RobotCommand_Event_message_members,
  get_message_typesupport_handle_function,
  &day2__srv__RobotCommand_Event__get_type_hash,
  &day2__srv__RobotCommand_Event__get_type_description,
  &day2__srv__RobotCommand_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, RobotCommand_Event)() {
  day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__RobotCommand_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__RobotCommand_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, RobotCommand_Request)();
  day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__RobotCommand_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, RobotCommand_Response)();
  if (!day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__RobotCommand_Event_message_type_support_handle.typesupport_identifier) {
    day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__RobotCommand_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__RobotCommand_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "day2/srv/detail/robot_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers day2__srv__detail__robot_command__rosidl_typesupport_introspection_c__RobotCommand_service_members = {
  "day2__srv",  // service namespace
  "RobotCommand",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // day2__srv__detail__robot_command__rosidl_typesupport_introspection_c__RobotCommand_Request_message_type_support_handle,
  NULL,  // response message
  // day2__srv__detail__robot_command__rosidl_typesupport_introspection_c__RobotCommand_Response_message_type_support_handle
  NULL  // event_message
  // day2__srv__detail__robot_command__rosidl_typesupport_introspection_c__RobotCommand_Response_message_type_support_handle
};


static rosidl_service_type_support_t day2__srv__detail__robot_command__rosidl_typesupport_introspection_c__RobotCommand_service_type_support_handle = {
  0,
  &day2__srv__detail__robot_command__rosidl_typesupport_introspection_c__RobotCommand_service_members,
  get_service_typesupport_handle_function,
  &day2__srv__RobotCommand_Request__rosidl_typesupport_introspection_c__RobotCommand_Request_message_type_support_handle,
  &day2__srv__RobotCommand_Response__rosidl_typesupport_introspection_c__RobotCommand_Response_message_type_support_handle,
  &day2__srv__RobotCommand_Event__rosidl_typesupport_introspection_c__RobotCommand_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    srv,
    RobotCommand
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    srv,
    RobotCommand
  ),
  &day2__srv__RobotCommand__get_type_hash,
  &day2__srv__RobotCommand__get_type_description,
  &day2__srv__RobotCommand__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, RobotCommand_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, RobotCommand_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, RobotCommand_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, RobotCommand)(void) {
  if (!day2__srv__detail__robot_command__rosidl_typesupport_introspection_c__RobotCommand_service_type_support_handle.typesupport_identifier) {
    day2__srv__detail__robot_command__rosidl_typesupport_introspection_c__RobotCommand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)day2__srv__detail__robot_command__rosidl_typesupport_introspection_c__RobotCommand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, RobotCommand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, RobotCommand_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, RobotCommand_Event)()->data;
  }

  return &day2__srv__detail__robot_command__rosidl_typesupport_introspection_c__RobotCommand_service_type_support_handle;
}
