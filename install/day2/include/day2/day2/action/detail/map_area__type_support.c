// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from day2:action/MapArea.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "day2/action/detail/map_area__rosidl_typesupport_introspection_c.h"
#include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "day2/action/detail/map_area__functions.h"
#include "day2/action/detail/map_area__struct.h"


// Include directives for member types
// Member `boundary_points`
#include "geometry_msgs/msg/point.h"
// Member `boundary_points`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `mapping_mode`
// Member `exploration_pattern`
// Member `active_sensors`
// Member `slam_algorithm`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__MapArea_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__MapArea_Goal__init(message_memory);
}

void day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__MapArea_Goal_fini_function(void * message_memory)
{
  day2__action__MapArea_Goal__fini(message_memory);
}

size_t day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__size_function__MapArea_Goal__boundary_points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__get_const_function__MapArea_Goal__boundary_points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__get_function__MapArea_Goal__boundary_points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__fetch_function__MapArea_Goal__boundary_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__get_const_function__MapArea_Goal__boundary_points(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__assign_function__MapArea_Goal__boundary_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__get_function__MapArea_Goal__boundary_points(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__resize_function__MapArea_Goal__boundary_points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__size_function__MapArea_Goal__active_sensors(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__get_const_function__MapArea_Goal__active_sensors(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__get_function__MapArea_Goal__active_sensors(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__fetch_function__MapArea_Goal__active_sensors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__get_const_function__MapArea_Goal__active_sensors(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__assign_function__MapArea_Goal__active_sensors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__get_function__MapArea_Goal__active_sensors(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__resize_function__MapArea_Goal__active_sensors(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__MapArea_Goal_message_member_array[17] = {
  {
    "boundary_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Goal, boundary_points),  // bytes offset in struct
    NULL,  // default value
    day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__size_function__MapArea_Goal__boundary_points,  // size() function pointer
    day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__get_const_function__MapArea_Goal__boundary_points,  // get_const(index) function pointer
    day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__get_function__MapArea_Goal__boundary_points,  // get(index) function pointer
    day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__fetch_function__MapArea_Goal__boundary_points,  // fetch(index, &value) function pointer
    day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__assign_function__MapArea_Goal__boundary_points,  // assign(index, value) function pointer
    day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__resize_function__MapArea_Goal__boundary_points  // resize(index) function pointer
  },
  {
    "resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Goal, resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mapping_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Goal, mapping_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coverage_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Goal, coverage_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "include_3d_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Goal, include_3d_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_exploration_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Goal, max_exploration_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_overlap_ratio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Goal, sensor_overlap_ratio),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoint_spacing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Goal, waypoint_spacing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "exploration_pattern",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Goal, exploration_pattern),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_sensors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Goal, active_sensors),  // bytes offset in struct
    NULL,  // default value
    day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__size_function__MapArea_Goal__active_sensors,  // size() function pointer
    day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__get_const_function__MapArea_Goal__active_sensors,  // get_const(index) function pointer
    day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__get_function__MapArea_Goal__active_sensors,  // get(index) function pointer
    day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__fetch_function__MapArea_Goal__active_sensors,  // fetch(index, &value) function pointer
    day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__assign_function__MapArea_Goal__active_sensors,  // assign(index, value) function pointer
    day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__resize_function__MapArea_Goal__active_sensors  // resize(index) function pointer
  },
  {
    "sensor_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Goal, sensor_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_slam",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Goal, use_slam),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "slam_algorithm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Goal, slam_algorithm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_quality_threshold",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Goal, min_quality_threshold),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "optimize_for_accuracy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Goal, optimize_for_accuracy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "optimize_for_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Goal, optimize_for_speed),  // bytes offset in struct
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
    offsetof(day2__action__MapArea_Goal, timeout_seconds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__MapArea_Goal_message_members = {
  "day2__action",  // message namespace
  "MapArea_Goal",  // message name
  17,  // number of fields
  sizeof(day2__action__MapArea_Goal),
  false,  // has_any_key_member_
  day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__MapArea_Goal_message_member_array,  // message members
  day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__MapArea_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__MapArea_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__MapArea_Goal_message_type_support_handle = {
  0,
  &day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__MapArea_Goal_message_members,
  get_message_typesupport_handle_function,
  &day2__action__MapArea_Goal__get_type_hash,
  &day2__action__MapArea_Goal__get_type_description,
  &day2__action__MapArea_Goal__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_Goal)() {
  day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__MapArea_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__MapArea_Goal_message_type_support_handle.typesupport_identifier) {
    day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__MapArea_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__MapArea_Goal__rosidl_typesupport_introspection_c__MapArea_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/map_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/map_area__functions.h"
// already included above
// #include "day2/action/detail/map_area__struct.h"


// Include directives for member types
// Member `result_message`
// Member `map_topic`
// Member `map_file_path`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__MapArea_Result__rosidl_typesupport_introspection_c__MapArea_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__MapArea_Result__init(message_memory);
}

void day2__action__MapArea_Result__rosidl_typesupport_introspection_c__MapArea_Result_fini_function(void * message_memory)
{
  day2__action__MapArea_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__MapArea_Result__rosidl_typesupport_introspection_c__MapArea_Result_message_member_array[18] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Result, success),  // bytes offset in struct
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
    offsetof(day2__action__MapArea_Result, result_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Result, map_topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_file_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Result, map_file_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "area_covered",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Result, area_covered),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coverage_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Result, coverage_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_accuracy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Result, map_accuracy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feature_density",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Result, feature_density),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_mapping_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Result, total_mapping_time),  // bytes offset in struct
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
    offsetof(day2__action__MapArea_Result, total_distance_traveled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_sensor_readings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Result, total_sensor_readings),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "average_mapping_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Result, average_mapping_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_width_pixels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Result, map_width_pixels),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_height_pixels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Result, map_height_pixels),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "occupied_cells",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Result, occupied_cells),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "free_cells",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Result, free_cells),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unknown_cells",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Result, unknown_cells),  // bytes offset in struct
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
    offsetof(day2__action__MapArea_Result, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__MapArea_Result__rosidl_typesupport_introspection_c__MapArea_Result_message_members = {
  "day2__action",  // message namespace
  "MapArea_Result",  // message name
  18,  // number of fields
  sizeof(day2__action__MapArea_Result),
  false,  // has_any_key_member_
  day2__action__MapArea_Result__rosidl_typesupport_introspection_c__MapArea_Result_message_member_array,  // message members
  day2__action__MapArea_Result__rosidl_typesupport_introspection_c__MapArea_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__MapArea_Result__rosidl_typesupport_introspection_c__MapArea_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__MapArea_Result__rosidl_typesupport_introspection_c__MapArea_Result_message_type_support_handle = {
  0,
  &day2__action__MapArea_Result__rosidl_typesupport_introspection_c__MapArea_Result_message_members,
  get_message_typesupport_handle_function,
  &day2__action__MapArea_Result__get_type_hash,
  &day2__action__MapArea_Result__get_type_description,
  &day2__action__MapArea_Result__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_Result)() {
  if (!day2__action__MapArea_Result__rosidl_typesupport_introspection_c__MapArea_Result_message_type_support_handle.typesupport_identifier) {
    day2__action__MapArea_Result__rosidl_typesupport_introspection_c__MapArea_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__MapArea_Result__rosidl_typesupport_introspection_c__MapArea_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/map_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/map_area__functions.h"
// already included above
// #include "day2/action/detail/map_area__struct.h"


// Include directives for member types
// Member `current_position`
// Member `next_target`
// already included above
// #include "geometry_msgs/msg/point.h"
// Member `current_position`
// Member `next_target`
// already included above
// #include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `current_phase`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `sensor_active_status`
// Member `sensor_data_quality`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `last_sensor_update`
#include "builtin_interfaces/msg/time.h"
// Member `last_sensor_update`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__MapArea_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__MapArea_Feedback__init(message_memory);
}

void day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__MapArea_Feedback_fini_function(void * message_memory)
{
  day2__action__MapArea_Feedback__fini(message_memory);
}

size_t day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__size_function__MapArea_Feedback__sensor_active_status(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__get_const_function__MapArea_Feedback__sensor_active_status(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__get_function__MapArea_Feedback__sensor_active_status(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__fetch_function__MapArea_Feedback__sensor_active_status(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__get_const_function__MapArea_Feedback__sensor_active_status(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__assign_function__MapArea_Feedback__sensor_active_status(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__get_function__MapArea_Feedback__sensor_active_status(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__resize_function__MapArea_Feedback__sensor_active_status(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__size_function__MapArea_Feedback__sensor_data_quality(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__get_const_function__MapArea_Feedback__sensor_data_quality(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__get_function__MapArea_Feedback__sensor_data_quality(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__fetch_function__MapArea_Feedback__sensor_data_quality(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__get_const_function__MapArea_Feedback__sensor_data_quality(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__assign_function__MapArea_Feedback__sensor_data_quality(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__get_function__MapArea_Feedback__sensor_data_quality(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__resize_function__MapArea_Feedback__sensor_data_quality(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__MapArea_Feedback_message_member_array[22] = {
  {
    "current_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, current_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "area_mapped_so_far",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, area_mapped_so_far),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coverage_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, coverage_percentage),  // bytes offset in struct
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
    offsetof(day2__action__MapArea_Feedback, estimated_time_remaining),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_phase",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, current_phase),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "next_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, next_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoints_completed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, waypoints_completed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, total_waypoints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_map_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, current_map_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_map_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, current_map_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, current_resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "new_features_detected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, new_features_detected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_active_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, sensor_active_status),  // bytes offset in struct
    NULL,  // default value
    day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__size_function__MapArea_Feedback__sensor_active_status,  // size() function pointer
    day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__get_const_function__MapArea_Feedback__sensor_active_status,  // get_const(index) function pointer
    day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__get_function__MapArea_Feedback__sensor_active_status,  // get(index) function pointer
    day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__fetch_function__MapArea_Feedback__sensor_active_status,  // fetch(index, &value) function pointer
    day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__assign_function__MapArea_Feedback__sensor_active_status,  // assign(index, value) function pointer
    day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__resize_function__MapArea_Feedback__sensor_active_status  // resize(index) function pointer
  },
  {
    "sensor_data_quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, sensor_data_quality),  // bytes offset in struct
    NULL,  // default value
    day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__size_function__MapArea_Feedback__sensor_data_quality,  // size() function pointer
    day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__get_const_function__MapArea_Feedback__sensor_data_quality,  // get_const(index) function pointer
    day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__get_function__MapArea_Feedback__sensor_data_quality,  // get(index) function pointer
    day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__fetch_function__MapArea_Feedback__sensor_data_quality,  // fetch(index, &value) function pointer
    day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__assign_function__MapArea_Feedback__sensor_data_quality,  // assign(index, value) function pointer
    day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__resize_function__MapArea_Feedback__sensor_data_quality  // resize(index) function pointer
  },
  {
    "sensor_readings_per_second",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, sensor_readings_per_second),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "localization_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, localization_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loop_closures_detected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, loop_closures_detected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_uncertainty",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, pose_uncertainty),  // bytes offset in struct
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
    offsetof(day2__action__MapArea_Feedback, cpu_usage),  // bytes offset in struct
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
    offsetof(day2__action__MapArea_Feedback, memory_usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "storage_space_used",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, storage_space_used),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_sensor_update",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_Feedback, last_sensor_update),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__MapArea_Feedback_message_members = {
  "day2__action",  // message namespace
  "MapArea_Feedback",  // message name
  22,  // number of fields
  sizeof(day2__action__MapArea_Feedback),
  false,  // has_any_key_member_
  day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__MapArea_Feedback_message_member_array,  // message members
  day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__MapArea_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__MapArea_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__MapArea_Feedback_message_type_support_handle = {
  0,
  &day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__MapArea_Feedback_message_members,
  get_message_typesupport_handle_function,
  &day2__action__MapArea_Feedback__get_type_hash,
  &day2__action__MapArea_Feedback__get_type_description,
  &day2__action__MapArea_Feedback__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_Feedback)() {
  day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__MapArea_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__MapArea_Feedback_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__MapArea_Feedback_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__MapArea_Feedback_message_type_support_handle.typesupport_identifier) {
    day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__MapArea_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__MapArea_Feedback__rosidl_typesupport_introspection_c__MapArea_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/map_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/map_area__functions.h"
// already included above
// #include "day2/action/detail/map_area__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "day2/action/map_area.h"
// Member `goal`
// already included above
// #include "day2/action/detail/map_area__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__MapArea_SendGoal_Request__rosidl_typesupport_introspection_c__MapArea_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__MapArea_SendGoal_Request__init(message_memory);
}

void day2__action__MapArea_SendGoal_Request__rosidl_typesupport_introspection_c__MapArea_SendGoal_Request_fini_function(void * message_memory)
{
  day2__action__MapArea_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__MapArea_SendGoal_Request__rosidl_typesupport_introspection_c__MapArea_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(day2__action__MapArea_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__MapArea_SendGoal_Request__rosidl_typesupport_introspection_c__MapArea_SendGoal_Request_message_members = {
  "day2__action",  // message namespace
  "MapArea_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(day2__action__MapArea_SendGoal_Request),
  false,  // has_any_key_member_
  day2__action__MapArea_SendGoal_Request__rosidl_typesupport_introspection_c__MapArea_SendGoal_Request_message_member_array,  // message members
  day2__action__MapArea_SendGoal_Request__rosidl_typesupport_introspection_c__MapArea_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__MapArea_SendGoal_Request__rosidl_typesupport_introspection_c__MapArea_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__MapArea_SendGoal_Request__rosidl_typesupport_introspection_c__MapArea_SendGoal_Request_message_type_support_handle = {
  0,
  &day2__action__MapArea_SendGoal_Request__rosidl_typesupport_introspection_c__MapArea_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &day2__action__MapArea_SendGoal_Request__get_type_hash,
  &day2__action__MapArea_SendGoal_Request__get_type_description,
  &day2__action__MapArea_SendGoal_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_SendGoal_Request)() {
  day2__action__MapArea_SendGoal_Request__rosidl_typesupport_introspection_c__MapArea_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  day2__action__MapArea_SendGoal_Request__rosidl_typesupport_introspection_c__MapArea_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_Goal)();
  if (!day2__action__MapArea_SendGoal_Request__rosidl_typesupport_introspection_c__MapArea_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    day2__action__MapArea_SendGoal_Request__rosidl_typesupport_introspection_c__MapArea_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__MapArea_SendGoal_Request__rosidl_typesupport_introspection_c__MapArea_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/map_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/map_area__functions.h"
// already included above
// #include "day2/action/detail/map_area__struct.h"


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

void day2__action__MapArea_SendGoal_Response__rosidl_typesupport_introspection_c__MapArea_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__MapArea_SendGoal_Response__init(message_memory);
}

void day2__action__MapArea_SendGoal_Response__rosidl_typesupport_introspection_c__MapArea_SendGoal_Response_fini_function(void * message_memory)
{
  day2__action__MapArea_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__MapArea_SendGoal_Response__rosidl_typesupport_introspection_c__MapArea_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(day2__action__MapArea_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__MapArea_SendGoal_Response__rosidl_typesupport_introspection_c__MapArea_SendGoal_Response_message_members = {
  "day2__action",  // message namespace
  "MapArea_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(day2__action__MapArea_SendGoal_Response),
  false,  // has_any_key_member_
  day2__action__MapArea_SendGoal_Response__rosidl_typesupport_introspection_c__MapArea_SendGoal_Response_message_member_array,  // message members
  day2__action__MapArea_SendGoal_Response__rosidl_typesupport_introspection_c__MapArea_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__MapArea_SendGoal_Response__rosidl_typesupport_introspection_c__MapArea_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__MapArea_SendGoal_Response__rosidl_typesupport_introspection_c__MapArea_SendGoal_Response_message_type_support_handle = {
  0,
  &day2__action__MapArea_SendGoal_Response__rosidl_typesupport_introspection_c__MapArea_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &day2__action__MapArea_SendGoal_Response__get_type_hash,
  &day2__action__MapArea_SendGoal_Response__get_type_description,
  &day2__action__MapArea_SendGoal_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_SendGoal_Response)() {
  day2__action__MapArea_SendGoal_Response__rosidl_typesupport_introspection_c__MapArea_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!day2__action__MapArea_SendGoal_Response__rosidl_typesupport_introspection_c__MapArea_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    day2__action__MapArea_SendGoal_Response__rosidl_typesupport_introspection_c__MapArea_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__MapArea_SendGoal_Response__rosidl_typesupport_introspection_c__MapArea_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/map_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/map_area__functions.h"
// already included above
// #include "day2/action/detail/map_area__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/action/map_area.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/action/detail/map_area__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__MapArea_SendGoal_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__MapArea_SendGoal_Event__init(message_memory);
}

void day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__MapArea_SendGoal_Event_fini_function(void * message_memory)
{
  day2__action__MapArea_SendGoal_Event__fini(message_memory);
}

size_t day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__MapArea_SendGoal_Event__request(
  const void * untyped_member)
{
  const day2__action__MapArea_SendGoal_Request__Sequence * member =
    (const day2__action__MapArea_SendGoal_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__MapArea_SendGoal_Event__request(
  const void * untyped_member, size_t index)
{
  const day2__action__MapArea_SendGoal_Request__Sequence * member =
    (const day2__action__MapArea_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__MapArea_SendGoal_Event__request(
  void * untyped_member, size_t index)
{
  day2__action__MapArea_SendGoal_Request__Sequence * member =
    (day2__action__MapArea_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__MapArea_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__action__MapArea_SendGoal_Request * item =
    ((const day2__action__MapArea_SendGoal_Request *)
    day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__MapArea_SendGoal_Event__request(untyped_member, index));
  day2__action__MapArea_SendGoal_Request * value =
    (day2__action__MapArea_SendGoal_Request *)(untyped_value);
  *value = *item;
}

void day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__MapArea_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__action__MapArea_SendGoal_Request * item =
    ((day2__action__MapArea_SendGoal_Request *)
    day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__MapArea_SendGoal_Event__request(untyped_member, index));
  const day2__action__MapArea_SendGoal_Request * value =
    (const day2__action__MapArea_SendGoal_Request *)(untyped_value);
  *item = *value;
}

bool day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__MapArea_SendGoal_Event__request(
  void * untyped_member, size_t size)
{
  day2__action__MapArea_SendGoal_Request__Sequence * member =
    (day2__action__MapArea_SendGoal_Request__Sequence *)(untyped_member);
  day2__action__MapArea_SendGoal_Request__Sequence__fini(member);
  return day2__action__MapArea_SendGoal_Request__Sequence__init(member, size);
}

size_t day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__MapArea_SendGoal_Event__response(
  const void * untyped_member)
{
  const day2__action__MapArea_SendGoal_Response__Sequence * member =
    (const day2__action__MapArea_SendGoal_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__MapArea_SendGoal_Event__response(
  const void * untyped_member, size_t index)
{
  const day2__action__MapArea_SendGoal_Response__Sequence * member =
    (const day2__action__MapArea_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__MapArea_SendGoal_Event__response(
  void * untyped_member, size_t index)
{
  day2__action__MapArea_SendGoal_Response__Sequence * member =
    (day2__action__MapArea_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__MapArea_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__action__MapArea_SendGoal_Response * item =
    ((const day2__action__MapArea_SendGoal_Response *)
    day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__MapArea_SendGoal_Event__response(untyped_member, index));
  day2__action__MapArea_SendGoal_Response * value =
    (day2__action__MapArea_SendGoal_Response *)(untyped_value);
  *value = *item;
}

void day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__MapArea_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__action__MapArea_SendGoal_Response * item =
    ((day2__action__MapArea_SendGoal_Response *)
    day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__MapArea_SendGoal_Event__response(untyped_member, index));
  const day2__action__MapArea_SendGoal_Response * value =
    (const day2__action__MapArea_SendGoal_Response *)(untyped_value);
  *item = *value;
}

bool day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__MapArea_SendGoal_Event__response(
  void * untyped_member, size_t size)
{
  day2__action__MapArea_SendGoal_Response__Sequence * member =
    (day2__action__MapArea_SendGoal_Response__Sequence *)(untyped_member);
  day2__action__MapArea_SendGoal_Response__Sequence__fini(member);
  return day2__action__MapArea_SendGoal_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__MapArea_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_SendGoal_Event, info),  // bytes offset in struct
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
    offsetof(day2__action__MapArea_SendGoal_Event, request),  // bytes offset in struct
    NULL,  // default value
    day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__MapArea_SendGoal_Event__request,  // size() function pointer
    day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__MapArea_SendGoal_Event__request,  // get_const(index) function pointer
    day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__MapArea_SendGoal_Event__request,  // get(index) function pointer
    day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__MapArea_SendGoal_Event__request,  // fetch(index, &value) function pointer
    day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__MapArea_SendGoal_Event__request,  // assign(index, value) function pointer
    day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__MapArea_SendGoal_Event__request  // resize(index) function pointer
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
    offsetof(day2__action__MapArea_SendGoal_Event, response),  // bytes offset in struct
    NULL,  // default value
    day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__MapArea_SendGoal_Event__response,  // size() function pointer
    day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__MapArea_SendGoal_Event__response,  // get_const(index) function pointer
    day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__MapArea_SendGoal_Event__response,  // get(index) function pointer
    day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__MapArea_SendGoal_Event__response,  // fetch(index, &value) function pointer
    day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__MapArea_SendGoal_Event__response,  // assign(index, value) function pointer
    day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__MapArea_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__MapArea_SendGoal_Event_message_members = {
  "day2__action",  // message namespace
  "MapArea_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(day2__action__MapArea_SendGoal_Event),
  false,  // has_any_key_member_
  day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__MapArea_SendGoal_Event_message_member_array,  // message members
  day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__MapArea_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__MapArea_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__MapArea_SendGoal_Event_message_type_support_handle = {
  0,
  &day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__MapArea_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &day2__action__MapArea_SendGoal_Event__get_type_hash,
  &day2__action__MapArea_SendGoal_Event__get_type_description,
  &day2__action__MapArea_SendGoal_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_SendGoal_Event)() {
  day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__MapArea_SendGoal_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__MapArea_SendGoal_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_SendGoal_Request)();
  day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__MapArea_SendGoal_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_SendGoal_Response)();
  if (!day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__MapArea_SendGoal_Event_message_type_support_handle.typesupport_identifier) {
    day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__MapArea_SendGoal_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__MapArea_SendGoal_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "day2/action/detail/map_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_SendGoal_service_members = {
  "day2__action",  // service namespace
  "MapArea_SendGoal",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_SendGoal_Request_message_type_support_handle,
  NULL,  // response message
  // day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_SendGoal_Response_message_type_support_handle
  NULL  // event_message
  // day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_SendGoal_Response_message_type_support_handle
};


static rosidl_service_type_support_t day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_SendGoal_service_type_support_handle = {
  0,
  &day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_SendGoal_service_members,
  get_service_typesupport_handle_function,
  &day2__action__MapArea_SendGoal_Request__rosidl_typesupport_introspection_c__MapArea_SendGoal_Request_message_type_support_handle,
  &day2__action__MapArea_SendGoal_Response__rosidl_typesupport_introspection_c__MapArea_SendGoal_Response_message_type_support_handle,
  &day2__action__MapArea_SendGoal_Event__rosidl_typesupport_introspection_c__MapArea_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    action,
    MapArea_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    action,
    MapArea_SendGoal
  ),
  &day2__action__MapArea_SendGoal__get_type_hash,
  &day2__action__MapArea_SendGoal__get_type_description,
  &day2__action__MapArea_SendGoal__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_SendGoal_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_SendGoal_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_SendGoal_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_SendGoal)(void) {
  if (!day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_SendGoal_service_type_support_handle.typesupport_identifier) {
    day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_SendGoal_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_SendGoal_Event)()->data;
  }

  return &day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/map_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/map_area__functions.h"
// already included above
// #include "day2/action/detail/map_area__struct.h"


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

void day2__action__MapArea_GetResult_Request__rosidl_typesupport_introspection_c__MapArea_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__MapArea_GetResult_Request__init(message_memory);
}

void day2__action__MapArea_GetResult_Request__rosidl_typesupport_introspection_c__MapArea_GetResult_Request_fini_function(void * message_memory)
{
  day2__action__MapArea_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__MapArea_GetResult_Request__rosidl_typesupport_introspection_c__MapArea_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__MapArea_GetResult_Request__rosidl_typesupport_introspection_c__MapArea_GetResult_Request_message_members = {
  "day2__action",  // message namespace
  "MapArea_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(day2__action__MapArea_GetResult_Request),
  false,  // has_any_key_member_
  day2__action__MapArea_GetResult_Request__rosidl_typesupport_introspection_c__MapArea_GetResult_Request_message_member_array,  // message members
  day2__action__MapArea_GetResult_Request__rosidl_typesupport_introspection_c__MapArea_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__MapArea_GetResult_Request__rosidl_typesupport_introspection_c__MapArea_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__MapArea_GetResult_Request__rosidl_typesupport_introspection_c__MapArea_GetResult_Request_message_type_support_handle = {
  0,
  &day2__action__MapArea_GetResult_Request__rosidl_typesupport_introspection_c__MapArea_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &day2__action__MapArea_GetResult_Request__get_type_hash,
  &day2__action__MapArea_GetResult_Request__get_type_description,
  &day2__action__MapArea_GetResult_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_GetResult_Request)() {
  day2__action__MapArea_GetResult_Request__rosidl_typesupport_introspection_c__MapArea_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!day2__action__MapArea_GetResult_Request__rosidl_typesupport_introspection_c__MapArea_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    day2__action__MapArea_GetResult_Request__rosidl_typesupport_introspection_c__MapArea_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__MapArea_GetResult_Request__rosidl_typesupport_introspection_c__MapArea_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/map_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/map_area__functions.h"
// already included above
// #include "day2/action/detail/map_area__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "day2/action/map_area.h"
// Member `result`
// already included above
// #include "day2/action/detail/map_area__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__MapArea_GetResult_Response__rosidl_typesupport_introspection_c__MapArea_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__MapArea_GetResult_Response__init(message_memory);
}

void day2__action__MapArea_GetResult_Response__rosidl_typesupport_introspection_c__MapArea_GetResult_Response_fini_function(void * message_memory)
{
  day2__action__MapArea_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__MapArea_GetResult_Response__rosidl_typesupport_introspection_c__MapArea_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(day2__action__MapArea_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__MapArea_GetResult_Response__rosidl_typesupport_introspection_c__MapArea_GetResult_Response_message_members = {
  "day2__action",  // message namespace
  "MapArea_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(day2__action__MapArea_GetResult_Response),
  false,  // has_any_key_member_
  day2__action__MapArea_GetResult_Response__rosidl_typesupport_introspection_c__MapArea_GetResult_Response_message_member_array,  // message members
  day2__action__MapArea_GetResult_Response__rosidl_typesupport_introspection_c__MapArea_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__MapArea_GetResult_Response__rosidl_typesupport_introspection_c__MapArea_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__MapArea_GetResult_Response__rosidl_typesupport_introspection_c__MapArea_GetResult_Response_message_type_support_handle = {
  0,
  &day2__action__MapArea_GetResult_Response__rosidl_typesupport_introspection_c__MapArea_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &day2__action__MapArea_GetResult_Response__get_type_hash,
  &day2__action__MapArea_GetResult_Response__get_type_description,
  &day2__action__MapArea_GetResult_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_GetResult_Response)() {
  day2__action__MapArea_GetResult_Response__rosidl_typesupport_introspection_c__MapArea_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_Result)();
  if (!day2__action__MapArea_GetResult_Response__rosidl_typesupport_introspection_c__MapArea_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    day2__action__MapArea_GetResult_Response__rosidl_typesupport_introspection_c__MapArea_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__MapArea_GetResult_Response__rosidl_typesupport_introspection_c__MapArea_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/map_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/map_area__functions.h"
// already included above
// #include "day2/action/detail/map_area__struct.h"


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
// #include "day2/action/map_area.h"
// Member `request`
// Member `response`
// already included above
// #include "day2/action/detail/map_area__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__MapArea_GetResult_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__MapArea_GetResult_Event__init(message_memory);
}

void day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__MapArea_GetResult_Event_fini_function(void * message_memory)
{
  day2__action__MapArea_GetResult_Event__fini(message_memory);
}

size_t day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__size_function__MapArea_GetResult_Event__request(
  const void * untyped_member)
{
  const day2__action__MapArea_GetResult_Request__Sequence * member =
    (const day2__action__MapArea_GetResult_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__MapArea_GetResult_Event__request(
  const void * untyped_member, size_t index)
{
  const day2__action__MapArea_GetResult_Request__Sequence * member =
    (const day2__action__MapArea_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__get_function__MapArea_GetResult_Event__request(
  void * untyped_member, size_t index)
{
  day2__action__MapArea_GetResult_Request__Sequence * member =
    (day2__action__MapArea_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__MapArea_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__action__MapArea_GetResult_Request * item =
    ((const day2__action__MapArea_GetResult_Request *)
    day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__MapArea_GetResult_Event__request(untyped_member, index));
  day2__action__MapArea_GetResult_Request * value =
    (day2__action__MapArea_GetResult_Request *)(untyped_value);
  *value = *item;
}

void day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__MapArea_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__action__MapArea_GetResult_Request * item =
    ((day2__action__MapArea_GetResult_Request *)
    day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__get_function__MapArea_GetResult_Event__request(untyped_member, index));
  const day2__action__MapArea_GetResult_Request * value =
    (const day2__action__MapArea_GetResult_Request *)(untyped_value);
  *item = *value;
}

bool day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__MapArea_GetResult_Event__request(
  void * untyped_member, size_t size)
{
  day2__action__MapArea_GetResult_Request__Sequence * member =
    (day2__action__MapArea_GetResult_Request__Sequence *)(untyped_member);
  day2__action__MapArea_GetResult_Request__Sequence__fini(member);
  return day2__action__MapArea_GetResult_Request__Sequence__init(member, size);
}

size_t day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__size_function__MapArea_GetResult_Event__response(
  const void * untyped_member)
{
  const day2__action__MapArea_GetResult_Response__Sequence * member =
    (const day2__action__MapArea_GetResult_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__MapArea_GetResult_Event__response(
  const void * untyped_member, size_t index)
{
  const day2__action__MapArea_GetResult_Response__Sequence * member =
    (const day2__action__MapArea_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__get_function__MapArea_GetResult_Event__response(
  void * untyped_member, size_t index)
{
  day2__action__MapArea_GetResult_Response__Sequence * member =
    (day2__action__MapArea_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__MapArea_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const day2__action__MapArea_GetResult_Response * item =
    ((const day2__action__MapArea_GetResult_Response *)
    day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__MapArea_GetResult_Event__response(untyped_member, index));
  day2__action__MapArea_GetResult_Response * value =
    (day2__action__MapArea_GetResult_Response *)(untyped_value);
  *value = *item;
}

void day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__MapArea_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  day2__action__MapArea_GetResult_Response * item =
    ((day2__action__MapArea_GetResult_Response *)
    day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__get_function__MapArea_GetResult_Event__response(untyped_member, index));
  const day2__action__MapArea_GetResult_Response * value =
    (const day2__action__MapArea_GetResult_Response *)(untyped_value);
  *item = *value;
}

bool day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__MapArea_GetResult_Event__response(
  void * untyped_member, size_t size)
{
  day2__action__MapArea_GetResult_Response__Sequence * member =
    (day2__action__MapArea_GetResult_Response__Sequence *)(untyped_member);
  day2__action__MapArea_GetResult_Response__Sequence__fini(member);
  return day2__action__MapArea_GetResult_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__MapArea_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_GetResult_Event, info),  // bytes offset in struct
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
    offsetof(day2__action__MapArea_GetResult_Event, request),  // bytes offset in struct
    NULL,  // default value
    day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__size_function__MapArea_GetResult_Event__request,  // size() function pointer
    day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__MapArea_GetResult_Event__request,  // get_const(index) function pointer
    day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__get_function__MapArea_GetResult_Event__request,  // get(index) function pointer
    day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__MapArea_GetResult_Event__request,  // fetch(index, &value) function pointer
    day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__MapArea_GetResult_Event__request,  // assign(index, value) function pointer
    day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__MapArea_GetResult_Event__request  // resize(index) function pointer
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
    offsetof(day2__action__MapArea_GetResult_Event, response),  // bytes offset in struct
    NULL,  // default value
    day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__size_function__MapArea_GetResult_Event__response,  // size() function pointer
    day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__MapArea_GetResult_Event__response,  // get_const(index) function pointer
    day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__get_function__MapArea_GetResult_Event__response,  // get(index) function pointer
    day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__MapArea_GetResult_Event__response,  // fetch(index, &value) function pointer
    day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__MapArea_GetResult_Event__response,  // assign(index, value) function pointer
    day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__MapArea_GetResult_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__MapArea_GetResult_Event_message_members = {
  "day2__action",  // message namespace
  "MapArea_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(day2__action__MapArea_GetResult_Event),
  false,  // has_any_key_member_
  day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__MapArea_GetResult_Event_message_member_array,  // message members
  day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__MapArea_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__MapArea_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__MapArea_GetResult_Event_message_type_support_handle = {
  0,
  &day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__MapArea_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &day2__action__MapArea_GetResult_Event__get_type_hash,
  &day2__action__MapArea_GetResult_Event__get_type_description,
  &day2__action__MapArea_GetResult_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_GetResult_Event)() {
  day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__MapArea_GetResult_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__MapArea_GetResult_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_GetResult_Request)();
  day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__MapArea_GetResult_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_GetResult_Response)();
  if (!day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__MapArea_GetResult_Event_message_type_support_handle.typesupport_identifier) {
    day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__MapArea_GetResult_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__MapArea_GetResult_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "day2/action/detail/map_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_GetResult_service_members = {
  "day2__action",  // service namespace
  "MapArea_GetResult",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_GetResult_Request_message_type_support_handle,
  NULL,  // response message
  // day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_GetResult_Response_message_type_support_handle
  NULL  // event_message
  // day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_GetResult_Response_message_type_support_handle
};


static rosidl_service_type_support_t day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_GetResult_service_type_support_handle = {
  0,
  &day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_GetResult_service_members,
  get_service_typesupport_handle_function,
  &day2__action__MapArea_GetResult_Request__rosidl_typesupport_introspection_c__MapArea_GetResult_Request_message_type_support_handle,
  &day2__action__MapArea_GetResult_Response__rosidl_typesupport_introspection_c__MapArea_GetResult_Response_message_type_support_handle,
  &day2__action__MapArea_GetResult_Event__rosidl_typesupport_introspection_c__MapArea_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    action,
    MapArea_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    action,
    MapArea_GetResult
  ),
  &day2__action__MapArea_GetResult__get_type_hash,
  &day2__action__MapArea_GetResult__get_type_description,
  &day2__action__MapArea_GetResult__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_GetResult_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_GetResult_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_GetResult_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_GetResult)(void) {
  if (!day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_GetResult_service_type_support_handle.typesupport_identifier) {
    day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_GetResult_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_GetResult_Event)()->data;
  }

  return &day2__action__detail__map_area__rosidl_typesupport_introspection_c__MapArea_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "day2/action/detail/map_area__rosidl_typesupport_introspection_c.h"
// already included above
// #include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "day2/action/detail/map_area__functions.h"
// already included above
// #include "day2/action/detail/map_area__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "day2/action/map_area.h"
// Member `feedback`
// already included above
// #include "day2/action/detail/map_area__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__action__MapArea_FeedbackMessage__rosidl_typesupport_introspection_c__MapArea_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__action__MapArea_FeedbackMessage__init(message_memory);
}

void day2__action__MapArea_FeedbackMessage__rosidl_typesupport_introspection_c__MapArea_FeedbackMessage_fini_function(void * message_memory)
{
  day2__action__MapArea_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember day2__action__MapArea_FeedbackMessage__rosidl_typesupport_introspection_c__MapArea_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__action__MapArea_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(day2__action__MapArea_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__action__MapArea_FeedbackMessage__rosidl_typesupport_introspection_c__MapArea_FeedbackMessage_message_members = {
  "day2__action",  // message namespace
  "MapArea_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(day2__action__MapArea_FeedbackMessage),
  false,  // has_any_key_member_
  day2__action__MapArea_FeedbackMessage__rosidl_typesupport_introspection_c__MapArea_FeedbackMessage_message_member_array,  // message members
  day2__action__MapArea_FeedbackMessage__rosidl_typesupport_introspection_c__MapArea_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__action__MapArea_FeedbackMessage__rosidl_typesupport_introspection_c__MapArea_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__action__MapArea_FeedbackMessage__rosidl_typesupport_introspection_c__MapArea_FeedbackMessage_message_type_support_handle = {
  0,
  &day2__action__MapArea_FeedbackMessage__rosidl_typesupport_introspection_c__MapArea_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &day2__action__MapArea_FeedbackMessage__get_type_hash,
  &day2__action__MapArea_FeedbackMessage__get_type_description,
  &day2__action__MapArea_FeedbackMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_FeedbackMessage)() {
  day2__action__MapArea_FeedbackMessage__rosidl_typesupport_introspection_c__MapArea_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  day2__action__MapArea_FeedbackMessage__rosidl_typesupport_introspection_c__MapArea_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, action, MapArea_Feedback)();
  if (!day2__action__MapArea_FeedbackMessage__rosidl_typesupport_introspection_c__MapArea_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    day2__action__MapArea_FeedbackMessage__rosidl_typesupport_introspection_c__MapArea_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__action__MapArea_FeedbackMessage__rosidl_typesupport_introspection_c__MapArea_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
