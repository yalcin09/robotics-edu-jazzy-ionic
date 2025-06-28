// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from day2:srv/GetRobotStatus.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "day2/srv/detail/get_robot_status__struct.h"
#include "day2/srv/detail/get_robot_status__type_support.h"
#include "day2/srv/detail/get_robot_status__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetRobotStatus_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotStatus_Request_type_support_ids_t;

static const _GetRobotStatus_Request_type_support_ids_t _GetRobotStatus_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetRobotStatus_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetRobotStatus_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetRobotStatus_Request_type_support_symbol_names_t _GetRobotStatus_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, srv, GetRobotStatus_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, GetRobotStatus_Request)),
  }
};

typedef struct _GetRobotStatus_Request_type_support_data_t
{
  void * data[2];
} _GetRobotStatus_Request_type_support_data_t;

static _GetRobotStatus_Request_type_support_data_t _GetRobotStatus_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetRobotStatus_Request_message_typesupport_map = {
  2,
  "day2",
  &_GetRobotStatus_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetRobotStatus_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetRobotStatus_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetRobotStatus_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotStatus_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &day2__srv__GetRobotStatus_Request__get_type_hash,
  &day2__srv__GetRobotStatus_Request__get_type_description,
  &day2__srv__GetRobotStatus_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, day2, srv, GetRobotStatus_Request)() {
  return &::day2::srv::rosidl_typesupport_c::GetRobotStatus_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/srv/detail/get_robot_status__struct.h"
// already included above
// #include "day2/srv/detail/get_robot_status__type_support.h"
// already included above
// #include "day2/srv/detail/get_robot_status__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetRobotStatus_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotStatus_Response_type_support_ids_t;

static const _GetRobotStatus_Response_type_support_ids_t _GetRobotStatus_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetRobotStatus_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetRobotStatus_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetRobotStatus_Response_type_support_symbol_names_t _GetRobotStatus_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, srv, GetRobotStatus_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, GetRobotStatus_Response)),
  }
};

typedef struct _GetRobotStatus_Response_type_support_data_t
{
  void * data[2];
} _GetRobotStatus_Response_type_support_data_t;

static _GetRobotStatus_Response_type_support_data_t _GetRobotStatus_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetRobotStatus_Response_message_typesupport_map = {
  2,
  "day2",
  &_GetRobotStatus_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetRobotStatus_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetRobotStatus_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetRobotStatus_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotStatus_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &day2__srv__GetRobotStatus_Response__get_type_hash,
  &day2__srv__GetRobotStatus_Response__get_type_description,
  &day2__srv__GetRobotStatus_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, day2, srv, GetRobotStatus_Response)() {
  return &::day2::srv::rosidl_typesupport_c::GetRobotStatus_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/srv/detail/get_robot_status__struct.h"
// already included above
// #include "day2/srv/detail/get_robot_status__type_support.h"
// already included above
// #include "day2/srv/detail/get_robot_status__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace day2
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetRobotStatus_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotStatus_Event_type_support_ids_t;

static const _GetRobotStatus_Event_type_support_ids_t _GetRobotStatus_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetRobotStatus_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetRobotStatus_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetRobotStatus_Event_type_support_symbol_names_t _GetRobotStatus_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, srv, GetRobotStatus_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, GetRobotStatus_Event)),
  }
};

typedef struct _GetRobotStatus_Event_type_support_data_t
{
  void * data[2];
} _GetRobotStatus_Event_type_support_data_t;

static _GetRobotStatus_Event_type_support_data_t _GetRobotStatus_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetRobotStatus_Event_message_typesupport_map = {
  2,
  "day2",
  &_GetRobotStatus_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetRobotStatus_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetRobotStatus_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetRobotStatus_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotStatus_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &day2__srv__GetRobotStatus_Event__get_type_hash,
  &day2__srv__GetRobotStatus_Event__get_type_description,
  &day2__srv__GetRobotStatus_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, day2, srv, GetRobotStatus_Event)() {
  return &::day2::srv::rosidl_typesupport_c::GetRobotStatus_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "day2/srv/detail/get_robot_status__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace day2
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetRobotStatus_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotStatus_type_support_ids_t;

static const _GetRobotStatus_type_support_ids_t _GetRobotStatus_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetRobotStatus_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetRobotStatus_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetRobotStatus_type_support_symbol_names_t _GetRobotStatus_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, srv, GetRobotStatus)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, GetRobotStatus)),
  }
};

typedef struct _GetRobotStatus_type_support_data_t
{
  void * data[2];
} _GetRobotStatus_type_support_data_t;

static _GetRobotStatus_type_support_data_t _GetRobotStatus_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetRobotStatus_service_typesupport_map = {
  2,
  "day2",
  &_GetRobotStatus_service_typesupport_ids.typesupport_identifier[0],
  &_GetRobotStatus_service_typesupport_symbol_names.symbol_name[0],
  &_GetRobotStatus_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetRobotStatus_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotStatus_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetRobotStatus_Request_message_type_support_handle,
  &GetRobotStatus_Response_message_type_support_handle,
  &GetRobotStatus_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, day2, srv, GetRobotStatus)() {
  return &::day2::srv::rosidl_typesupport_c::GetRobotStatus_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
