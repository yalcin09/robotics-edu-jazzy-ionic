// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from day2:srv/GetRobotStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/srv/get_robot_status.hpp"


#ifndef DAY2__SRV__DETAIL__GET_ROBOT_STATUS__TRAITS_HPP_
#define DAY2__SRV__DETAIL__GET_ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "day2/srv/detail/get_robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace day2
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetRobotStatus_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: robot_name
  {
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << ", ";
  }

  // member: include_sensors
  {
    out << "include_sensors: ";
    rosidl_generator_traits::value_to_yaml(msg.include_sensors, out);
    out << ", ";
  }

  // member: include_diagnostics
  {
    out << "include_diagnostics: ";
    rosidl_generator_traits::value_to_yaml(msg.include_diagnostics, out);
    out << ", ";
  }

  // member: include_history
  {
    out << "include_history: ";
    rosidl_generator_traits::value_to_yaml(msg.include_history, out);
    out << ", ";
  }

  // member: requested_fields
  {
    if (msg.requested_fields.size() == 0) {
      out << "requested_fields: []";
    } else {
      out << "requested_fields: [";
      size_t pending_items = msg.requested_fields.size();
      for (auto item : msg.requested_fields) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetRobotStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: robot_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << "\n";
  }

  // member: include_sensors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "include_sensors: ";
    rosidl_generator_traits::value_to_yaml(msg.include_sensors, out);
    out << "\n";
  }

  // member: include_diagnostics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "include_diagnostics: ";
    rosidl_generator_traits::value_to_yaml(msg.include_diagnostics, out);
    out << "\n";
  }

  // member: include_history
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "include_history: ";
    rosidl_generator_traits::value_to_yaml(msg.include_history, out);
    out << "\n";
  }

  // member: requested_fields
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.requested_fields.size() == 0) {
      out << "requested_fields: []\n";
    } else {
      out << "requested_fields:\n";
      for (auto item : msg.requested_fields) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetRobotStatus_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::srv::GetRobotStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::srv::to_yaml() instead")]]
inline std::string to_yaml(const day2::srv::GetRobotStatus_Request & msg)
{
  return day2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<day2::srv::GetRobotStatus_Request>()
{
  return "day2::srv::GetRobotStatus_Request";
}

template<>
inline const char * name<day2::srv::GetRobotStatus_Request>()
{
  return "day2/srv/GetRobotStatus_Request";
}

template<>
struct has_fixed_size<day2::srv::GetRobotStatus_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::srv::GetRobotStatus_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::srv::GetRobotStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'current_status'
// Member 'status_history'
#include "day2/msg/detail/robot_status__traits.hpp"
// Member 'sensor_data'
#include "day2/msg/detail/sensor_data__traits.hpp"
// Member 'query_timestamp'
// Member 'last_update_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace day2
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetRobotStatus_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: current_status
  {
    out << "current_status: ";
    to_flow_style_yaml(msg.current_status, out);
    out << ", ";
  }

  // member: sensor_data
  {
    if (msg.sensor_data.size() == 0) {
      out << "sensor_data: []";
    } else {
      out << "sensor_data: [";
      size_t pending_items = msg.sensor_data.size();
      for (auto item : msg.sensor_data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: diagnostic_messages
  {
    if (msg.diagnostic_messages.size() == 0) {
      out << "diagnostic_messages: []";
    } else {
      out << "diagnostic_messages: [";
      size_t pending_items = msg.diagnostic_messages.size();
      for (auto item : msg.diagnostic_messages) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_history
  {
    if (msg.status_history.size() == 0) {
      out << "status_history: []";
    } else {
      out << "status_history: [";
      size_t pending_items = msg.status_history.size();
      for (auto item : msg.status_history) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: uptime_hours
  {
    out << "uptime_hours: ";
    rosidl_generator_traits::value_to_yaml(msg.uptime_hours, out);
    out << ", ";
  }

  // member: total_commands_executed
  {
    out << "total_commands_executed: ";
    rosidl_generator_traits::value_to_yaml(msg.total_commands_executed, out);
    out << ", ";
  }

  // member: total_distance_traveled
  {
    out << "total_distance_traveled: ";
    rosidl_generator_traits::value_to_yaml(msg.total_distance_traveled, out);
    out << ", ";
  }

  // member: error_count_today
  {
    out << "error_count_today: ";
    rosidl_generator_traits::value_to_yaml(msg.error_count_today, out);
    out << ", ";
  }

  // member: average_response_time_ms
  {
    out << "average_response_time_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.average_response_time_ms, out);
    out << ", ";
  }

  // member: cpu_usage_percent
  {
    out << "cpu_usage_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_usage_percent, out);
    out << ", ";
  }

  // member: memory_usage_percent
  {
    out << "memory_usage_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.memory_usage_percent, out);
    out << ", ";
  }

  // member: network_latency_ms
  {
    out << "network_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.network_latency_ms, out);
    out << ", ";
  }

  // member: query_timestamp
  {
    out << "query_timestamp: ";
    to_flow_style_yaml(msg.query_timestamp, out);
    out << ", ";
  }

  // member: last_update_time
  {
    out << "last_update_time: ";
    to_flow_style_yaml(msg.last_update_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetRobotStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: current_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_status:\n";
    to_block_style_yaml(msg.current_status, out, indentation + 2);
  }

  // member: sensor_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensor_data.size() == 0) {
      out << "sensor_data: []\n";
    } else {
      out << "sensor_data:\n";
      for (auto item : msg.sensor_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: diagnostic_messages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.diagnostic_messages.size() == 0) {
      out << "diagnostic_messages: []\n";
    } else {
      out << "diagnostic_messages:\n";
      for (auto item : msg.diagnostic_messages) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_history
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_history.size() == 0) {
      out << "status_history: []\n";
    } else {
      out << "status_history:\n";
      for (auto item : msg.status_history) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: uptime_hours
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uptime_hours: ";
    rosidl_generator_traits::value_to_yaml(msg.uptime_hours, out);
    out << "\n";
  }

  // member: total_commands_executed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_commands_executed: ";
    rosidl_generator_traits::value_to_yaml(msg.total_commands_executed, out);
    out << "\n";
  }

  // member: total_distance_traveled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_distance_traveled: ";
    rosidl_generator_traits::value_to_yaml(msg.total_distance_traveled, out);
    out << "\n";
  }

  // member: error_count_today
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_count_today: ";
    rosidl_generator_traits::value_to_yaml(msg.error_count_today, out);
    out << "\n";
  }

  // member: average_response_time_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_response_time_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.average_response_time_ms, out);
    out << "\n";
  }

  // member: cpu_usage_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_usage_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_usage_percent, out);
    out << "\n";
  }

  // member: memory_usage_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "memory_usage_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.memory_usage_percent, out);
    out << "\n";
  }

  // member: network_latency_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "network_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.network_latency_ms, out);
    out << "\n";
  }

  // member: query_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "query_timestamp:\n";
    to_block_style_yaml(msg.query_timestamp, out, indentation + 2);
  }

  // member: last_update_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_update_time:\n";
    to_block_style_yaml(msg.last_update_time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetRobotStatus_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::srv::GetRobotStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::srv::to_yaml() instead")]]
inline std::string to_yaml(const day2::srv::GetRobotStatus_Response & msg)
{
  return day2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<day2::srv::GetRobotStatus_Response>()
{
  return "day2::srv::GetRobotStatus_Response";
}

template<>
inline const char * name<day2::srv::GetRobotStatus_Response>()
{
  return "day2/srv/GetRobotStatus_Response";
}

template<>
struct has_fixed_size<day2::srv::GetRobotStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::srv::GetRobotStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::srv::GetRobotStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace day2
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetRobotStatus_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetRobotStatus_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetRobotStatus_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::srv::GetRobotStatus_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::srv::to_yaml() instead")]]
inline std::string to_yaml(const day2::srv::GetRobotStatus_Event & msg)
{
  return day2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<day2::srv::GetRobotStatus_Event>()
{
  return "day2::srv::GetRobotStatus_Event";
}

template<>
inline const char * name<day2::srv::GetRobotStatus_Event>()
{
  return "day2/srv/GetRobotStatus_Event";
}

template<>
struct has_fixed_size<day2::srv::GetRobotStatus_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::srv::GetRobotStatus_Event>
  : std::integral_constant<bool, has_bounded_size<day2::srv::GetRobotStatus_Request>::value && has_bounded_size<day2::srv::GetRobotStatus_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<day2::srv::GetRobotStatus_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<day2::srv::GetRobotStatus>()
{
  return "day2::srv::GetRobotStatus";
}

template<>
inline const char * name<day2::srv::GetRobotStatus>()
{
  return "day2/srv/GetRobotStatus";
}

template<>
struct has_fixed_size<day2::srv::GetRobotStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<day2::srv::GetRobotStatus_Request>::value &&
    has_fixed_size<day2::srv::GetRobotStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<day2::srv::GetRobotStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<day2::srv::GetRobotStatus_Request>::value &&
    has_bounded_size<day2::srv::GetRobotStatus_Response>::value
  >
{
};

template<>
struct is_service<day2::srv::GetRobotStatus>
  : std::true_type
{
};

template<>
struct is_service_request<day2::srv::GetRobotStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<day2::srv::GetRobotStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DAY2__SRV__DETAIL__GET_ROBOT_STATUS__TRAITS_HPP_
