// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from day2:action/Navigate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "day2/action/detail/navigate__rosidl_typesupport_introspection_c.h"
#include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "day2/action/detail/navigate__functions.h"
#include "day2/action/detail/navigate__struct.h"


// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `planning_algorithm`
// Member `behavior_on_failure`
#include "rosidl_runtime_c/string_functions.h"
// Member `waypoints`
#include "geometry_msgs/msg/point.h"
// Member `waypoints`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__Navigate_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__Navigate_Goal__init(message_memory);
}

void day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__Navigate_Goal_fini_function(void * message_memory)
{
  day2__action__Navigate_Goal__fini(message_memory);
}

size_t day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__size_function__Navigate_Goal__waypoints(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__get_const_function__Navigate_Goal__waypoints(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__get_function__Navigate_Goal__waypoints(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__fetch_function__Navigate_Goal__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__get_const_function__Navigate_Goal__waypoints(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__assign_function__Navigate_Goal__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__get_function__Navigate_Goal__waypoints(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__resize_function__Navigate_Goal__waypoints(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__Navigate_Goal_message_member_array[9] = {
  {
    "target_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Goal, target_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Goal, max_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tolerance_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Goal, tolerance_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tolerance_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Goal, tolerance_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_obstacle_avoidance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Goal, use_obstacle_avoidance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_algorithm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Goal, planning_algorithm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Goal, waypoints),  // bytes offset in struct
    NULL,  // default value
    day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__size_function__Navigate_Goal__waypoints,  // size() function pointer
    day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__get_const_function__Navigate_Goal__waypoints,  // get_const(index) function pointer
    day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__get_function__Navigate_Goal__waypoints,  // get(index) function pointer
    day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__fetch_function__Navigate_Goal__waypoints,  // fetch(index, &value) function pointer
    day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__assign_function__Navigate_Goal__waypoints,  // assign(index, value) function pointer
    day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__resize_function__Navigate_Goal__waypoints  // resize(index) function pointer
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
    offsetof(day2__action__Navigate_Goal, timeout_seconds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "behavior_on_failure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Goal, behavior_on_failure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__Navigate_Goal_message_members = {
  "day2__action",  // message namespace
  "Navigate_Goal",  // message name
  9,  // number of fields
  sizeof(day2__action__Navigate_Goal),
  false,  // has_any_key_member_
  day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__Navigate_Goal_message_member_array,  // message members
  day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__Navigate_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__Navigate_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__Navigate_Goal_message_type_support_handle = {
  0,
  &day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__Navigate_Goal_message_members,
  get_message_typesupport_handle_function,
  &day2__action__Navigate_Goal__get_type_hash,
  &day2__action__Navigate_Goal__get_type_description,
  &day2__action__Navigate_Goal__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_Goal)() {
  day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__Navigate_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__Navigate_Goal_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__Navigate_Goal_message_type_support_handle.typesupport_identifier) {
    day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__Navigate_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__Navigate_Goal__rosidl_typesupport_introspection_c__Navigate_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/navigate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/navigate__functions.h"
// already included above
// #include "day2/action/detail/navigate__struct.h"


// Include directives for member types
// Member `result_message`
// Member `warnings`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `final_pose`
// already included above
// #include "geometry_msgs/msg/pose_stamped.h"
// Member `final_pose`
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__Navigate_Result__rosidl_typesupport_introspection_c__Navigate_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__Navigate_Result__init(message_memory);
}

void day2__action__Navigate_Result__rosidl_typesupport_introspection_c__Navigate_Result_fini_function(void * message_memory)
{
  day2__action__Navigate_Result__fini(message_memory);
}

size_t day2__action__Navigate_Result__rosidl_typesupport_introspection_c__size_function__Navigate_Result__warnings(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__Navigate_Result__rosidl_typesupport_introspection_c__get_const_function__Navigate_Result__warnings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__Navigate_Result__rosidl_typesupport_introspection_c__get_function__Navigate_Result__warnings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__Navigate_Result__rosidl_typesupport_introspection_c__fetch_function__Navigate_Result__warnings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    day2__action__Navigate_Result__rosidl_typesupport_introspection_c__get_const_function__Navigate_Result__warnings(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void day2__action__Navigate_Result__rosidl_typesupport_introspection_c__assign_function__Navigate_Result__warnings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    day2__action__Navigate_Result__rosidl_typesupport_introspection_c__get_function__Navigate_Result__warnings(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool day2__action__Navigate_Result__rosidl_typesupport_introspection_c__resize_function__Navigate_Result__warnings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__Navigate_Result__rosidl_typesupport_introspection_c__Navigate_Result_message_member_array[12] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Result, result_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Result, final_pose),  // bytes offset in struct
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
    offsetof(day2__action__Navigate_Result, total_distance_traveled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_time_elapsed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Result, total_time_elapsed),  // bytes offset in struct
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
    offsetof(day2__action__Navigate_Result, average_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obstacle_encounters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Result, obstacle_encounters),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "warnings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Result, warnings),  // bytes offset in struct
    NULL,  // default value
    day2__action__Navigate_Result__rosidl_typesupport_introspection_c__size_function__Navigate_Result__warnings,  // size() function pointer
    day2__action__Navigate_Result__rosidl_typesupport_introspection_c__get_const_function__Navigate_Result__warnings,  // get_const(index) function pointer
    day2__action__Navigate_Result__rosidl_typesupport_introspection_c__get_function__Navigate_Result__warnings,  // get(index) function pointer
    day2__action__Navigate_Result__rosidl_typesupport_introspection_c__fetch_function__Navigate_Result__warnings,  // fetch(index, &value) function pointer
    day2__action__Navigate_Result__rosidl_typesupport_introspection_c__assign_function__Navigate_Result__warnings,  // assign(index, value) function pointer
    day2__action__Navigate_Result__rosidl_typesupport_introspection_c__resize_function__Navigate_Result__warnings  // resize(index) function pointer
  },
  {
    "path_efficiency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Result, path_efficiency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "smoothness_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Result, smoothness_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "replanning_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Result, replanning_count),  // bytes offset in struct
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
    offsetof(day2__action__Navigate_Result, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__Navigate_Result__rosidl_typesupport_introspection_c__Navigate_Result_message_members = {
  "day2__action",  // message namespace
  "Navigate_Result",  // message name
  12,  // number of fields
  sizeof(day2__action__Navigate_Result),
  false,  // has_any_key_member_
  day2__action__Navigate_Result__rosidl_typesupport_introspection_c__Navigate_Result_message_member_array,  // message members
  day2__action__Navigate_Result__rosidl_typesupport_introspection_c__Navigate_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__Navigate_Result__rosidl_typesupport_introspection_c__Navigate_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__Navigate_Result__rosidl_typesupport_introspection_c__Navigate_Result_message_type_support_handle = {
  0,
  &day2__action__Navigate_Result__rosidl_typesupport_introspection_c__Navigate_Result_message_members,
  get_message_typesupport_handle_function,
  &day2__action__Navigate_Result__get_type_hash,
  &day2__action__Navigate_Result__get_type_description,
  &day2__action__Navigate_Result__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_Result)() {
  day2__action__Navigate_Result__rosidl_typesupport_introspection_c__Navigate_Result_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!day2__action__Navigate_Result__rosidl_typesupport_introspection_c__Navigate_Result_message_type_support_handle.typesupport_identifier) {
    day2__action__Navigate_Result__rosidl_typesupport_introspection_c__Navigate_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__Navigate_Result__rosidl_typesupport_introspection_c__Navigate_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/navigate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/navigate__functions.h"
// already included above
// #include "day2/action/detail/navigate__struct.h"


// Include directives for member types
// Member `current_pose`
// already included above
// #include "geometry_msgs/msg/pose_stamped.h"
// Member `current_pose`
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `remaining_path`
// already included above
// #include "geometry_msgs/msg/point.h"
// Member `remaining_path`
// already included above
// #include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `current_behavior`
// Member `current_status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `last_update_time`
#include "builtin_interfaces/msg/time.h"
// Member `last_update_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__Navigate_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__Navigate_Feedback__init(message_memory);
}

void day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__Navigate_Feedback_fini_function(void * message_memory)
{
  day2__action__Navigate_Feedback__fini(message_memory);
}

size_t day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__size_function__Navigate_Feedback__remaining_path(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__get_const_function__Navigate_Feedback__remaining_path(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__get_function__Navigate_Feedback__remaining_path(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__fetch_function__Navigate_Feedback__remaining_path(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__get_const_function__Navigate_Feedback__remaining_path(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__assign_function__Navigate_Feedback__remaining_path(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__get_function__Navigate_Feedback__remaining_path(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__resize_function__Navigate_Feedback__remaining_path(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__Navigate_Feedback_message_member_array[15] = {
  {
    "current_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Feedback, current_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_to_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Feedback, distance_to_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estimated_time_remaining",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Feedback, estimated_time_remaining),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Feedback, current_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "completion_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Feedback, completion_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "remaining_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Feedback, remaining_path),  // bytes offset in struct
    NULL,  // default value
    day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__size_function__Navigate_Feedback__remaining_path,  // size() function pointer
    day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__get_const_function__Navigate_Feedback__remaining_path,  // get_const(index) function pointer
    day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__get_function__Navigate_Feedback__remaining_path,  // get(index) function pointer
    day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__fetch_function__Navigate_Feedback__remaining_path,  // fetch(index, &value) function pointer
    day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__assign_function__Navigate_Feedback__remaining_path,  // assign(index, value) function pointer
    day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__resize_function__Navigate_Feedback__remaining_path  // resize(index) function pointer
  },
  {
    "current_waypoint_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Feedback, current_waypoint_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_behavior",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Feedback, current_behavior),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obstacle_detected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Feedback, obstacle_detected),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Feedback, current_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_deviation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Feedback, path_deviation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_consumption_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Feedback, battery_consumption_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cpu_usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Feedback, cpu_usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "memory_usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_Feedback, memory_usage),  // bytes offset in struct
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
    offsetof(day2__action__Navigate_Feedback, last_update_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__Navigate_Feedback_message_members = {
  "day2__action",  // message namespace
  "Navigate_Feedback",  // message name
  15,  // number of fields
  sizeof(day2__action__Navigate_Feedback),
  false,  // has_any_key_member_
  day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__Navigate_Feedback_message_member_array,  // message members
  day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__Navigate_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__Navigate_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__Navigate_Feedback_message_type_support_handle = {
  0,
  &day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__Navigate_Feedback_message_members,
  get_message_typesupport_handle_function,
  &day2__action__Navigate_Feedback__get_type_hash,
  &day2__action__Navigate_Feedback__get_type_description,
  &day2__action__Navigate_Feedback__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_Feedback)() {
  day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__Navigate_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__Navigate_Feedback_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__Navigate_Feedback_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__Navigate_Feedback_message_type_support_handle.typesupport_identifier) {
    day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__Navigate_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__Navigate_Feedback__rosidl_typesupport_introspection_c__Navigate_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/navigate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/navigate__functions.h"
// already included above
// #include "day2/action/detail/navigate__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "day2/action/navigate.h"
// Member `goal`
// already included above
// #include "day2/action/detail/navigate__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__Navigate_SendGoal_Request__rosidl_typesupport_introspection_c__Navigate_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__Navigate_SendGoal_Request__init(message_memory);
}

void day2__action__Navigate_SendGoal_Request__rosidl_typesupport_introspection_c__Navigate_SendGoal_Request_fini_function(void * message_memory)
{
  day2__action__Navigate_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__Navigate_SendGoal_Request__rosidl_typesupport_introspection_c__Navigate_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__Navigate_SendGoal_Request__rosidl_typesupport_introspection_c__Navigate_SendGoal_Request_message_members = {
  "day2__action",  // message namespace
  "Navigate_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(day2__action__Navigate_SendGoal_Request),
  false,  // has_any_key_member_
  day2__action__Navigate_SendGoal_Request__rosidl_typesupport_introspection_c__Navigate_SendGoal_Request_message_member_array,  // message members
  day2__action__Navigate_SendGoal_Request__rosidl_typesupport_introspection_c__Navigate_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__Navigate_SendGoal_Request__rosidl_typesupport_introspection_c__Navigate_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__Navigate_SendGoal_Request__rosidl_typesupport_introspection_c__Navigate_SendGoal_Request_message_type_support_handle = {
  0,
  &day2__action__Navigate_SendGoal_Request__rosidl_typesupport_introspection_c__Navigate_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &day2__action__Navigate_SendGoal_Request__get_type_hash,
  &day2__action__Navigate_SendGoal_Request__get_type_description,
  &day2__action__Navigate_SendGoal_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_SendGoal_Request)() {
  day2__action__Navigate_SendGoal_Request__rosidl_typesupport_introspection_c__Navigate_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  day2__action__Navigate_SendGoal_Request__rosidl_typesupport_introspection_c__Navigate_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_Goal)();
  if (!day2__action__Navigate_SendGoal_Request__rosidl_typesupport_introspection_c__Navigate_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    day2__action__Navigate_SendGoal_Request__rosidl_typesupport_introspection_c__Navigate_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__Navigate_SendGoal_Request__rosidl_typesupport_introspection_c__Navigate_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/navigate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/navigate__functions.h"
// already included above
// #include "day2/action/detail/navigate__struct.h"


// Include directives for member types
// Member `stamp`
// already included above
// #include "builtin_interfaces/msg/time.h"
// Member `stamp`
// already included above
// #include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__Navigate_SendGoal_Response__rosidl_typesupport_introspection_c__Navigate_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__Navigate_SendGoal_Response__init(message_memory);
}

void day2__action__Navigate_SendGoal_Response__rosidl_typesupport_introspection_c__Navigate_SendGoal_Response_fini_function(void * message_memory)
{
  day2__action__Navigate_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__Navigate_SendGoal_Response__rosidl_typesupport_introspection_c__Navigate_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__Navigate_SendGoal_Response__rosidl_typesupport_introspection_c__Navigate_SendGoal_Response_message_members = {
  "day2__action",  // message namespace
  "Navigate_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(day2__action__Navigate_SendGoal_Response),
  false,  // has_any_key_member_
  day2__action__Navigate_SendGoal_Response__rosidl_typesupport_introspection_c__Navigate_SendGoal_Response_message_member_array,  // message members
  day2__action__Navigate_SendGoal_Response__rosidl_typesupport_introspection_c__Navigate_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__Navigate_SendGoal_Response__rosidl_typesupport_introspection_c__Navigate_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__Navigate_SendGoal_Response__rosidl_typesupport_introspection_c__Navigate_SendGoal_Response_message_type_support_handle = {
  0,
  &day2__action__Navigate_SendGoal_Response__rosidl_typesupport_introspection_c__Navigate_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &day2__action__Navigate_SendGoal_Response__get_type_hash,
  &day2__action__Navigate_SendGoal_Response__get_type_description,
  &day2__action__Navigate_SendGoal_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_SendGoal_Response)() {
  day2__action__Navigate_SendGoal_Response__rosidl_typesupport_introspection_c__Navigate_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!day2__action__Navigate_SendGoal_Response__rosidl_typesupport_introspection_c__Navigate_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    day2__action__Navigate_SendGoal_Response__rosidl_typesupport_introspection_c__Navigate_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__Navigate_SendGoal_Response__rosidl_typesupport_introspection_c__Navigate_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/navigate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/navigate__functions.h"
// already included above
// #include "day2/action/detail/navigate__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/action/navigate.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/action/detail/navigate__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__Navigate_SendGoal_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__Navigate_SendGoal_Event__init(message_memory);
}

void day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__Navigate_SendGoal_Event_fini_function(void * message_memory)
{
  day2__action__Navigate_SendGoal_Event__fini(message_memory);
}

size_t day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Navigate_SendGoal_Event__request(
  const void * untyped_member)
{
  const day2__action__Navigate_SendGoal_Request__Sequence * member =
    (const day2__action__Navigate_SendGoal_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Navigate_SendGoal_Event__request(
  const void * untyped_member, size_t index)
{
  const day2__action__Navigate_SendGoal_Request__Sequence * member =
    (const day2__action__Navigate_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Navigate_SendGoal_Event__request(
  void * untyped_member, size_t index)
{
  day2__action__Navigate_SendGoal_Request__Sequence * member =
    (day2__action__Navigate_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Navigate_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__action__Navigate_SendGoal_Request * item =
    ((const day2__action__Navigate_SendGoal_Request *)
    day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Navigate_SendGoal_Event__request(untyped_member, index));
  day2__action__Navigate_SendGoal_Request * value =
    (day2__action__Navigate_SendGoal_Request *)(untyped_value);
  *value = *item;
}

void day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Navigate_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__action__Navigate_SendGoal_Request * item =
    ((day2__action__Navigate_SendGoal_Request *)
    day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Navigate_SendGoal_Event__request(untyped_member, index));
  const day2__action__Navigate_SendGoal_Request * value =
    (const day2__action__Navigate_SendGoal_Request *)(untyped_value);
  *item = *value;
}

bool day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Navigate_SendGoal_Event__request(
  void * untyped_member, size_t size)
{
  day2__action__Navigate_SendGoal_Request__Sequence * member =
    (day2__action__Navigate_SendGoal_Request__Sequence *)(untyped_member);
  day2__action__Navigate_SendGoal_Request__Sequence__fini(member);
  return day2__action__Navigate_SendGoal_Request__Sequence__init(member, size);
}

size_t day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Navigate_SendGoal_Event__response(
  const void * untyped_member)
{
  const day2__action__Navigate_SendGoal_Response__Sequence * member =
    (const day2__action__Navigate_SendGoal_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Navigate_SendGoal_Event__response(
  const void * untyped_member, size_t index)
{
  const day2__action__Navigate_SendGoal_Response__Sequence * member =
    (const day2__action__Navigate_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Navigate_SendGoal_Event__response(
  void * untyped_member, size_t index)
{
  day2__action__Navigate_SendGoal_Response__Sequence * member =
    (day2__action__Navigate_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Navigate_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__action__Navigate_SendGoal_Response * item =
    ((const day2__action__Navigate_SendGoal_Response *)
    day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Navigate_SendGoal_Event__response(untyped_member, index));
  day2__action__Navigate_SendGoal_Response * value =
    (day2__action__Navigate_SendGoal_Response *)(untyped_value);
  *value = *item;
}

void day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Navigate_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__action__Navigate_SendGoal_Response * item =
    ((day2__action__Navigate_SendGoal_Response *)
    day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Navigate_SendGoal_Event__response(untyped_member, index));
  const day2__action__Navigate_SendGoal_Response * value =
    (const day2__action__Navigate_SendGoal_Response *)(untyped_value);
  *item = *value;
}

bool day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Navigate_SendGoal_Event__response(
  void * untyped_member, size_t size)
{
  day2__action__Navigate_SendGoal_Response__Sequence * member =
    (day2__action__Navigate_SendGoal_Response__Sequence *)(untyped_member);
  day2__action__Navigate_SendGoal_Response__Sequence__fini(member);
  return day2__action__Navigate_SendGoal_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__Navigate_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_SendGoal_Event, info),  // bytes offset in struct
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
    offsetof(day2__action__Navigate_SendGoal_Event, request),  // bytes offset in struct
    NULL,  // default value
    day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Navigate_SendGoal_Event__request,  // size() function pointer
    day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Navigate_SendGoal_Event__request,  // get_const(index) function pointer
    day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Navigate_SendGoal_Event__request,  // get(index) function pointer
    day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Navigate_SendGoal_Event__request,  // fetch(index, &value) function pointer
    day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Navigate_SendGoal_Event__request,  // assign(index, value) function pointer
    day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Navigate_SendGoal_Event__request  // resize(index) function pointer
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
    offsetof(day2__action__Navigate_SendGoal_Event, response),  // bytes offset in struct
    NULL,  // default value
    day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Navigate_SendGoal_Event__response,  // size() function pointer
    day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Navigate_SendGoal_Event__response,  // get_const(index) function pointer
    day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Navigate_SendGoal_Event__response,  // get(index) function pointer
    day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Navigate_SendGoal_Event__response,  // fetch(index, &value) function pointer
    day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Navigate_SendGoal_Event__response,  // assign(index, value) function pointer
    day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Navigate_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__Navigate_SendGoal_Event_message_members = {
  "day2__action",  // message namespace
  "Navigate_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(day2__action__Navigate_SendGoal_Event),
  false,  // has_any_key_member_
  day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__Navigate_SendGoal_Event_message_member_array,  // message members
  day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__Navigate_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__Navigate_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__Navigate_SendGoal_Event_message_type_support_handle = {
  0,
  &day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__Navigate_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &day2__action__Navigate_SendGoal_Event__get_type_hash,
  &day2__action__Navigate_SendGoal_Event__get_type_description,
  &day2__action__Navigate_SendGoal_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_SendGoal_Event)() {
  day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__Navigate_SendGoal_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__Navigate_SendGoal_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_SendGoal_Request)();
  day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__Navigate_SendGoal_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_SendGoal_Response)();
  if (!day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__Navigate_SendGoal_Event_message_type_support_handle.typesupport_identifier) {
    day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__Navigate_SendGoal_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__Navigate_SendGoal_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "day2/action/detail/navigate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_SendGoal_service_members = {
  "day2__action",  // service namespace
  "Navigate_SendGoal",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_SendGoal_Request_message_type_support_handle,
  NULL,  // response message
  // day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_SendGoal_Response_message_type_support_handle
  NULL  // event_message
  // day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_SendGoal_Response_message_type_support_handle
};


static rosidl_service_type_support_t day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_SendGoal_service_type_support_handle = {
  0,
  &day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_SendGoal_service_members,
  get_service_typesupport_handle_function,
  &day2__action__Navigate_SendGoal_Request__rosidl_typesupport_introspection_c__Navigate_SendGoal_Request_message_type_support_handle,
  &day2__action__Navigate_SendGoal_Response__rosidl_typesupport_introspection_c__Navigate_SendGoal_Response_message_type_support_handle,
  &day2__action__Navigate_SendGoal_Event__rosidl_typesupport_introspection_c__Navigate_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    action,
    Navigate_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    action,
    Navigate_SendGoal
  ),
  &day2__action__Navigate_SendGoal__get_type_hash,
  &day2__action__Navigate_SendGoal__get_type_description,
  &day2__action__Navigate_SendGoal__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_SendGoal_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_SendGoal_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_SendGoal_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_SendGoal)(void) {
  if (!day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_SendGoal_service_type_support_handle.typesupport_identifier) {
    day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_SendGoal_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_SendGoal_Event)()->data;
  }

  return &day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/navigate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/navigate__functions.h"
// already included above
// #include "day2/action/detail/navigate__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__Navigate_GetResult_Request__rosidl_typesupport_introspection_c__Navigate_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__Navigate_GetResult_Request__init(message_memory);
}

void day2__action__Navigate_GetResult_Request__rosidl_typesupport_introspection_c__Navigate_GetResult_Request_fini_function(void * message_memory)
{
  day2__action__Navigate_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__Navigate_GetResult_Request__rosidl_typesupport_introspection_c__Navigate_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__Navigate_GetResult_Request__rosidl_typesupport_introspection_c__Navigate_GetResult_Request_message_members = {
  "day2__action",  // message namespace
  "Navigate_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(day2__action__Navigate_GetResult_Request),
  false,  // has_any_key_member_
  day2__action__Navigate_GetResult_Request__rosidl_typesupport_introspection_c__Navigate_GetResult_Request_message_member_array,  // message members
  day2__action__Navigate_GetResult_Request__rosidl_typesupport_introspection_c__Navigate_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__Navigate_GetResult_Request__rosidl_typesupport_introspection_c__Navigate_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__Navigate_GetResult_Request__rosidl_typesupport_introspection_c__Navigate_GetResult_Request_message_type_support_handle = {
  0,
  &day2__action__Navigate_GetResult_Request__rosidl_typesupport_introspection_c__Navigate_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &day2__action__Navigate_GetResult_Request__get_type_hash,
  &day2__action__Navigate_GetResult_Request__get_type_description,
  &day2__action__Navigate_GetResult_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_GetResult_Request)() {
  day2__action__Navigate_GetResult_Request__rosidl_typesupport_introspection_c__Navigate_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!day2__action__Navigate_GetResult_Request__rosidl_typesupport_introspection_c__Navigate_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    day2__action__Navigate_GetResult_Request__rosidl_typesupport_introspection_c__Navigate_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__Navigate_GetResult_Request__rosidl_typesupport_introspection_c__Navigate_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/navigate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/navigate__functions.h"
// already included above
// #include "day2/action/detail/navigate__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "day2/action/navigate.h"
// Member `result`
// already included above
// #include "day2/action/detail/navigate__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__Navigate_GetResult_Response__rosidl_typesupport_introspection_c__Navigate_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__Navigate_GetResult_Response__init(message_memory);
}

void day2__action__Navigate_GetResult_Response__rosidl_typesupport_introspection_c__Navigate_GetResult_Response_fini_function(void * message_memory)
{
  day2__action__Navigate_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__Navigate_GetResult_Response__rosidl_typesupport_introspection_c__Navigate_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__Navigate_GetResult_Response__rosidl_typesupport_introspection_c__Navigate_GetResult_Response_message_members = {
  "day2__action",  // message namespace
  "Navigate_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(day2__action__Navigate_GetResult_Response),
  false,  // has_any_key_member_
  day2__action__Navigate_GetResult_Response__rosidl_typesupport_introspection_c__Navigate_GetResult_Response_message_member_array,  // message members
  day2__action__Navigate_GetResult_Response__rosidl_typesupport_introspection_c__Navigate_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__Navigate_GetResult_Response__rosidl_typesupport_introspection_c__Navigate_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__Navigate_GetResult_Response__rosidl_typesupport_introspection_c__Navigate_GetResult_Response_message_type_support_handle = {
  0,
  &day2__action__Navigate_GetResult_Response__rosidl_typesupport_introspection_c__Navigate_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &day2__action__Navigate_GetResult_Response__get_type_hash,
  &day2__action__Navigate_GetResult_Response__get_type_description,
  &day2__action__Navigate_GetResult_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_GetResult_Response)() {
  day2__action__Navigate_GetResult_Response__rosidl_typesupport_introspection_c__Navigate_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_Result)();
  if (!day2__action__Navigate_GetResult_Response__rosidl_typesupport_introspection_c__Navigate_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    day2__action__Navigate_GetResult_Response__rosidl_typesupport_introspection_c__Navigate_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__Navigate_GetResult_Response__rosidl_typesupport_introspection_c__Navigate_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/navigate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/navigate__functions.h"
// already included above
// #include "day2/action/detail/navigate__struct.h"


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/service_event_info.h"
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/action/navigate.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/action/detail/navigate__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__Navigate_GetResult_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__Navigate_GetResult_Event__init(message_memory);
}

void day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__Navigate_GetResult_Event_fini_function(void * message_memory)
{
  day2__action__Navigate_GetResult_Event__fini(message_memory);
}

size_t day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Navigate_GetResult_Event__request(
  const void * untyped_member)
{
  const day2__action__Navigate_GetResult_Request__Sequence * member =
    (const day2__action__Navigate_GetResult_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Navigate_GetResult_Event__request(
  const void * untyped_member, size_t index)
{
  const day2__action__Navigate_GetResult_Request__Sequence * member =
    (const day2__action__Navigate_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Navigate_GetResult_Event__request(
  void * untyped_member, size_t index)
{
  day2__action__Navigate_GetResult_Request__Sequence * member =
    (day2__action__Navigate_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Navigate_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__action__Navigate_GetResult_Request * item =
    ((const day2__action__Navigate_GetResult_Request *)
    day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Navigate_GetResult_Event__request(untyped_member, index));
  day2__action__Navigate_GetResult_Request * value =
    (day2__action__Navigate_GetResult_Request *)(untyped_value);
  *value = *item;
}

void day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Navigate_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__action__Navigate_GetResult_Request * item =
    ((day2__action__Navigate_GetResult_Request *)
    day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Navigate_GetResult_Event__request(untyped_member, index));
  const day2__action__Navigate_GetResult_Request * value =
    (const day2__action__Navigate_GetResult_Request *)(untyped_value);
  *item = *value;
}

bool day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Navigate_GetResult_Event__request(
  void * untyped_member, size_t size)
{
  day2__action__Navigate_GetResult_Request__Sequence * member =
    (day2__action__Navigate_GetResult_Request__Sequence *)(untyped_member);
  day2__action__Navigate_GetResult_Request__Sequence__fini(member);
  return day2__action__Navigate_GetResult_Request__Sequence__init(member, size);
}

size_t day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Navigate_GetResult_Event__response(
  const void * untyped_member)
{
  const day2__action__Navigate_GetResult_Response__Sequence * member =
    (const day2__action__Navigate_GetResult_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Navigate_GetResult_Event__response(
  const void * untyped_member, size_t index)
{
  const day2__action__Navigate_GetResult_Response__Sequence * member =
    (const day2__action__Navigate_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Navigate_GetResult_Event__response(
  void * untyped_member, size_t index)
{
  day2__action__Navigate_GetResult_Response__Sequence * member =
    (day2__action__Navigate_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Navigate_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__action__Navigate_GetResult_Response * item =
    ((const day2__action__Navigate_GetResult_Response *)
    day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Navigate_GetResult_Event__response(untyped_member, index));
  day2__action__Navigate_GetResult_Response * value =
    (day2__action__Navigate_GetResult_Response *)(untyped_value);
  *value = *item;
}

void day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Navigate_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__action__Navigate_GetResult_Response * item =
    ((day2__action__Navigate_GetResult_Response *)
    day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Navigate_GetResult_Event__response(untyped_member, index));
  const day2__action__Navigate_GetResult_Response * value =
    (const day2__action__Navigate_GetResult_Response *)(untyped_value);
  *item = *value;
}

bool day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Navigate_GetResult_Event__response(
  void * untyped_member, size_t size)
{
  day2__action__Navigate_GetResult_Response__Sequence * member =
    (day2__action__Navigate_GetResult_Response__Sequence *)(untyped_member);
  day2__action__Navigate_GetResult_Response__Sequence__fini(member);
  return day2__action__Navigate_GetResult_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__Navigate_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_GetResult_Event, info),  // bytes offset in struct
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
    offsetof(day2__action__Navigate_GetResult_Event, request),  // bytes offset in struct
    NULL,  // default value
    day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Navigate_GetResult_Event__request,  // size() function pointer
    day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Navigate_GetResult_Event__request,  // get_const(index) function pointer
    day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Navigate_GetResult_Event__request,  // get(index) function pointer
    day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Navigate_GetResult_Event__request,  // fetch(index, &value) function pointer
    day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Navigate_GetResult_Event__request,  // assign(index, value) function pointer
    day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Navigate_GetResult_Event__request  // resize(index) function pointer
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
    offsetof(day2__action__Navigate_GetResult_Event, response),  // bytes offset in struct
    NULL,  // default value
    day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Navigate_GetResult_Event__response,  // size() function pointer
    day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Navigate_GetResult_Event__response,  // get_const(index) function pointer
    day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Navigate_GetResult_Event__response,  // get(index) function pointer
    day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Navigate_GetResult_Event__response,  // fetch(index, &value) function pointer
    day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Navigate_GetResult_Event__response,  // assign(index, value) function pointer
    day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Navigate_GetResult_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__Navigate_GetResult_Event_message_members = {
  "day2__action",  // message namespace
  "Navigate_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(day2__action__Navigate_GetResult_Event),
  false,  // has_any_key_member_
  day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__Navigate_GetResult_Event_message_member_array,  // message members
  day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__Navigate_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__Navigate_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__Navigate_GetResult_Event_message_type_support_handle = {
  0,
  &day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__Navigate_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &day2__action__Navigate_GetResult_Event__get_type_hash,
  &day2__action__Navigate_GetResult_Event__get_type_description,
  &day2__action__Navigate_GetResult_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_GetResult_Event)() {
  day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__Navigate_GetResult_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__Navigate_GetResult_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_GetResult_Request)();
  day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__Navigate_GetResult_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_GetResult_Response)();
  if (!day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__Navigate_GetResult_Event_message_type_support_handle.typesupport_identifier) {
    day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__Navigate_GetResult_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__Navigate_GetResult_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "day2/action/detail/navigate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_GetResult_service_members = {
  "day2__action",  // service namespace
  "Navigate_GetResult",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_GetResult_Request_message_type_support_handle,
  NULL,  // response message
  // day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_GetResult_Response_message_type_support_handle
  NULL  // event_message
  // day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_GetResult_Response_message_type_support_handle
};


static rosidl_service_type_support_t day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_GetResult_service_type_support_handle = {
  0,
  &day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_GetResult_service_members,
  get_service_typesupport_handle_function,
  &day2__action__Navigate_GetResult_Request__rosidl_typesupport_introspection_c__Navigate_GetResult_Request_message_type_support_handle,
  &day2__action__Navigate_GetResult_Response__rosidl_typesupport_introspection_c__Navigate_GetResult_Response_message_type_support_handle,
  &day2__action__Navigate_GetResult_Event__rosidl_typesupport_introspection_c__Navigate_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    action,
    Navigate_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    action,
    Navigate_GetResult
  ),
  &day2__action__Navigate_GetResult__get_type_hash,
  &day2__action__Navigate_GetResult__get_type_description,
  &day2__action__Navigate_GetResult__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_GetResult_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_GetResult_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_GetResult_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_GetResult)(void) {
  if (!day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_GetResult_service_type_support_handle.typesupport_identifier) {
    day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_GetResult_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_GetResult_Event)()->data;
  }

  return &day2__action__detail__navigate__rosidl_typesupport_introspection_c__Navigate_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/navigate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/navigate__functions.h"
// already included above
// #include "day2/action/detail/navigate__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "day2/action/navigate.h"
// Member `feedback`
// already included above
// #include "day2/action/detail/navigate__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__Navigate_FeedbackMessage__rosidl_typesupport_introspection_c__Navigate_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__Navigate_FeedbackMessage__init(message_memory);
}

void day2__action__Navigate_FeedbackMessage__rosidl_typesupport_introspection_c__Navigate_FeedbackMessage_fini_function(void * message_memory)
{
  day2__action__Navigate_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__Navigate_FeedbackMessage__rosidl_typesupport_introspection_c__Navigate_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__Navigate_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__Navigate_FeedbackMessage__rosidl_typesupport_introspection_c__Navigate_FeedbackMessage_message_members = {
  "day2__action",  // message namespace
  "Navigate_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(day2__action__Navigate_FeedbackMessage),
  false,  // has_any_key_member_
  day2__action__Navigate_FeedbackMessage__rosidl_typesupport_introspection_c__Navigate_FeedbackMessage_message_member_array,  // message members
  day2__action__Navigate_FeedbackMessage__rosidl_typesupport_introspection_c__Navigate_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__Navigate_FeedbackMessage__rosidl_typesupport_introspection_c__Navigate_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__Navigate_FeedbackMessage__rosidl_typesupport_introspection_c__Navigate_FeedbackMessage_message_type_support_handle = {
  0,
  &day2__action__Navigate_FeedbackMessage__rosidl_typesupport_introspection_c__Navigate_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &day2__action__Navigate_FeedbackMessage__get_type_hash,
  &day2__action__Navigate_FeedbackMessage__get_type_description,
  &day2__action__Navigate_FeedbackMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_FeedbackMessage)() {
  day2__action__Navigate_FeedbackMessage__rosidl_typesupport_introspection_c__Navigate_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  day2__action__Navigate_FeedbackMessage__rosidl_typesupport_introspection_c__Navigate_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, Navigate_Feedback)();
  if (!day2__action__Navigate_FeedbackMessage__rosidl_typesupport_introspection_c__Navigate_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    day2__action__Navigate_FeedbackMessage__rosidl_typesupport_introspection_c__Navigate_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__Navigate_FeedbackMessage__rosidl_typesupport_introspection_c__Navigate_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
