// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from day2:srv/CalculatePath.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "day2/srv/detail/calculate_path__struct.h"
#include "day2/srv/detail/calculate_path__type_support.h"
#include "day2/srv/detail/calculate_path__functions.h"
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

typedef struct _CalculatePath_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalculatePath_Request_type_support_ids_t;

static const _CalculatePath_Request_type_support_ids_t _CalculatePath_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CalculatePath_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalculatePath_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalculatePath_Request_type_support_symbol_names_t _CalculatePath_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, srv, CalculatePath_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, CalculatePath_Request)),
  }
};

typedef struct _CalculatePath_Request_type_support_data_t
{
  void * data[2];
} _CalculatePath_Request_type_support_data_t;

static _CalculatePath_Request_type_support_data_t _CalculatePath_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalculatePath_Request_message_typesupport_map = {
  2,
  "day2",
  &_CalculatePath_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CalculatePath_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CalculatePath_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CalculatePath_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalculatePath_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &day2__srv__CalculatePath_Request__get_type_hash,
  &day2__srv__CalculatePath_Request__get_type_description,
  &day2__srv__CalculatePath_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, day2, srv, CalculatePath_Request)() {
  return &::day2::srv::rosidl_typesupport_c::CalculatePath_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/srv/detail/calculate_path__struct.h"
// already included above
// #include "day2/srv/detail/calculate_path__type_support.h"
// already included above
// #include "day2/srv/detail/calculate_path__functions.h"
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

typedef struct _CalculatePath_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalculatePath_Response_type_support_ids_t;

static const _CalculatePath_Response_type_support_ids_t _CalculatePath_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CalculatePath_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalculatePath_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalculatePath_Response_type_support_symbol_names_t _CalculatePath_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, srv, CalculatePath_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, CalculatePath_Response)),
  }
};

typedef struct _CalculatePath_Response_type_support_data_t
{
  void * data[2];
} _CalculatePath_Response_type_support_data_t;

static _CalculatePath_Response_type_support_data_t _CalculatePath_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalculatePath_Response_message_typesupport_map = {
  2,
  "day2",
  &_CalculatePath_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CalculatePath_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CalculatePath_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CalculatePath_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalculatePath_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &day2__srv__CalculatePath_Response__get_type_hash,
  &day2__srv__CalculatePath_Response__get_type_description,
  &day2__srv__CalculatePath_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, day2, srv, CalculatePath_Response)() {
  return &::day2::srv::rosidl_typesupport_c::CalculatePath_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "day2/srv/detail/calculate_path__struct.h"
// already included above
// #include "day2/srv/detail/calculate_path__type_support.h"
// already included above
// #include "day2/srv/detail/calculate_path__functions.h"
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

typedef struct _CalculatePath_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalculatePath_Event_type_support_ids_t;

static const _CalculatePath_Event_type_support_ids_t _CalculatePath_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CalculatePath_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalculatePath_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalculatePath_Event_type_support_symbol_names_t _CalculatePath_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, srv, CalculatePath_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, CalculatePath_Event)),
  }
};

typedef struct _CalculatePath_Event_type_support_data_t
{
  void * data[2];
} _CalculatePath_Event_type_support_data_t;

static _CalculatePath_Event_type_support_data_t _CalculatePath_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalculatePath_Event_message_typesupport_map = {
  2,
  "day2",
  &_CalculatePath_Event_message_typesupport_ids.typesupport_identifier[0],
  &_CalculatePath_Event_message_typesupport_symbol_names.symbol_name[0],
  &_CalculatePath_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CalculatePath_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalculatePath_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &day2__srv__CalculatePath_Event__get_type_hash,
  &day2__srv__CalculatePath_Event__get_type_description,
  &day2__srv__CalculatePath_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, day2, srv, CalculatePath_Event)() {
  return &::day2::srv::rosidl_typesupport_c::CalculatePath_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "day2/srv/detail/calculate_path__type_support.h"
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
typedef struct _CalculatePath_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalculatePath_type_support_ids_t;

static const _CalculatePath_type_support_ids_t _CalculatePath_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CalculatePath_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalculatePath_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalculatePath_type_support_symbol_names_t _CalculatePath_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, srv, CalculatePath)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, srv, CalculatePath)),
  }
};

typedef struct _CalculatePath_type_support_data_t
{
  void * data[2];
} _CalculatePath_type_support_data_t;

static _CalculatePath_type_support_data_t _CalculatePath_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalculatePath_service_typesupport_map = {
  2,
  "day2",
  &_CalculatePath_service_typesupport_ids.typesupport_identifier[0],
  &_CalculatePath_service_typesupport_symbol_names.symbol_name[0],
  &_CalculatePath_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CalculatePath_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalculatePath_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &CalculatePath_Request_message_type_support_handle,
  &CalculatePath_Response_message_type_support_handle,
  &CalculatePath_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    srv,
    CalculatePath
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    srv,
    CalculatePath
  ),
  &day2__srv__CalculatePath__get_type_hash,
  &day2__srv__CalculatePath__get_type_description,
  &day2__srv__CalculatePath__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace day2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, day2, srv, CalculatePath)() {
  return &::day2::srv::rosidl_typesupport_c::CalculatePath_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
