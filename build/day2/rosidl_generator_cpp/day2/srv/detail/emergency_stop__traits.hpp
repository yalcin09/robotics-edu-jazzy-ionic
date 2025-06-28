// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from day2:srv/EmergencyStop.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/srv/emergency_stop.hpp"


#ifndef DAY2__SRV__DETAIL__EMERGENCY_STOP__TRAITS_HPP_
#define DAY2__SRV__DETAIL__EMERGENCY_STOP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "day2/srv/detail/emergency_stop__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace day2
{

namespace srv
{

inline void to_flow_style_yaml(
  const EmergencyStop_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << ", ";
  }

  // member: stop_type
  {
    out << "stop_type: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_type, out);
    out << ", ";
  }

  // member: disable_motors
  {
    out << "disable_motors: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_motors, out);
    out << ", ";
  }

  // member: lock_brakes
  {
    out << "lock_brakes: ";
    rosidl_generator_traits::value_to_yaml(msg.lock_brakes, out);
    out << ", ";
  }

  // member: sound_alarm
  {
    out << "sound_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.sound_alarm, out);
    out << ", ";
  }

  // member: operator_id
  {
    out << "operator_id: ";
    rosidl_generator_traits::value_to_yaml(msg.operator_id, out);
    out << ", ";
  }

  // member: priority_level
  {
    out << "priority_level: ";
    rosidl_generator_traits::value_to_yaml(msg.priority_level, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EmergencyStop_Request & msg,
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

  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << "\n";
  }

  // member: stop_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_type: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_type, out);
    out << "\n";
  }

  // member: disable_motors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_motors: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_motors, out);
    out << "\n";
  }

  // member: lock_brakes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lock_brakes: ";
    rosidl_generator_traits::value_to_yaml(msg.lock_brakes, out);
    out << "\n";
  }

  // member: sound_alarm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sound_alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.sound_alarm, out);
    out << "\n";
  }

  // member: operator_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operator_id: ";
    rosidl_generator_traits::value_to_yaml(msg.operator_id, out);
    out << "\n";
  }

  // member: priority_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority_level: ";
    rosidl_generator_traits::value_to_yaml(msg.priority_level, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EmergencyStop_Request & msg, bool use_flow_style = false)
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
  const day2::srv::EmergencyStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::srv::to_yaml() instead")]]
inline std::string to_yaml(const day2::srv::EmergencyStop_Request & msg)
{
  return day2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<day2::srv::EmergencyStop_Request>()
{
  return "day2::srv::EmergencyStop_Request";
}

template<>
inline const char * name<day2::srv::EmergencyStop_Request>()
{
  return "day2/srv/EmergencyStop_Request";
}

template<>
struct has_fixed_size<day2::srv::EmergencyStop_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::srv::EmergencyStop_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::srv::EmergencyStop_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stop_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace day2
{

namespace srv
{

inline void to_flow_style_yaml(
  const EmergencyStop_Response & msg,
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

  // member: stop_timestamp
  {
    out << "stop_timestamp: ";
    to_flow_style_yaml(msg.stop_timestamp, out);
    out << ", ";
  }

  // member: stopped_robot_ids
  {
    if (msg.stopped_robot_ids.size() == 0) {
      out << "stopped_robot_ids: []";
    } else {
      out << "stopped_robot_ids: [";
      size_t pending_items = msg.stopped_robot_ids.size();
      for (auto item : msg.stopped_robot_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: robot_responses
  {
    if (msg.robot_responses.size() == 0) {
      out << "robot_responses: []";
    } else {
      out << "robot_responses: [";
      size_t pending_items = msg.robot_responses.size();
      for (auto item : msg.robot_responses) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: stop_distances
  {
    if (msg.stop_distances.size() == 0) {
      out << "stop_distances: []";
    } else {
      out << "stop_distances: [";
      size_t pending_items = msg.stop_distances.size();
      for (auto item : msg.stop_distances) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: system_safe_state
  {
    out << "system_safe_state: ";
    rosidl_generator_traits::value_to_yaml(msg.system_safe_state, out);
    out << ", ";
  }

  // member: active_alarms
  {
    if (msg.active_alarms.size() == 0) {
      out << "active_alarms: []";
    } else {
      out << "active_alarms: [";
      size_t pending_items = msg.active_alarms.size();
      for (auto item : msg.active_alarms) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: required_actions
  {
    if (msg.required_actions.size() == 0) {
      out << "required_actions: []";
    } else {
      out << "required_actions: [";
      size_t pending_items = msg.required_actions.size();
      for (auto item : msg.required_actions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: manual_reset_required
  {
    out << "manual_reset_required: ";
    rosidl_generator_traits::value_to_yaml(msg.manual_reset_required, out);
    out << ", ";
  }

  // member: reset_procedures
  {
    if (msg.reset_procedures.size() == 0) {
      out << "reset_procedures: []";
    } else {
      out << "reset_procedures: [";
      size_t pending_items = msg.reset_procedures.size();
      for (auto item : msg.reset_procedures) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: estimated_recovery_time
  {
    out << "estimated_recovery_time: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_recovery_time, out);
    out << ", ";
  }

  // member: incident_id
  {
    out << "incident_id: ";
    rosidl_generator_traits::value_to_yaml(msg.incident_id, out);
    out << ", ";
  }

  // member: incident_classification
  {
    out << "incident_classification: ";
    rosidl_generator_traits::value_to_yaml(msg.incident_classification, out);
    out << ", ";
  }

  // member: requires_investigation
  {
    out << "requires_investigation: ";
    rosidl_generator_traits::value_to_yaml(msg.requires_investigation, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EmergencyStop_Response & msg,
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

  // member: stop_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_timestamp:\n";
    to_block_style_yaml(msg.stop_timestamp, out, indentation + 2);
  }

  // member: stopped_robot_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stopped_robot_ids.size() == 0) {
      out << "stopped_robot_ids: []\n";
    } else {
      out << "stopped_robot_ids:\n";
      for (auto item : msg.stopped_robot_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: robot_responses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robot_responses.size() == 0) {
      out << "robot_responses: []\n";
    } else {
      out << "robot_responses:\n";
      for (auto item : msg.robot_responses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: stop_distances
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stop_distances.size() == 0) {
      out << "stop_distances: []\n";
    } else {
      out << "stop_distances:\n";
      for (auto item : msg.stop_distances) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: system_safe_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_safe_state: ";
    rosidl_generator_traits::value_to_yaml(msg.system_safe_state, out);
    out << "\n";
  }

  // member: active_alarms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.active_alarms.size() == 0) {
      out << "active_alarms: []\n";
    } else {
      out << "active_alarms:\n";
      for (auto item : msg.active_alarms) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: required_actions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.required_actions.size() == 0) {
      out << "required_actions: []\n";
    } else {
      out << "required_actions:\n";
      for (auto item : msg.required_actions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: manual_reset_required
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manual_reset_required: ";
    rosidl_generator_traits::value_to_yaml(msg.manual_reset_required, out);
    out << "\n";
  }

  // member: reset_procedures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reset_procedures.size() == 0) {
      out << "reset_procedures: []\n";
    } else {
      out << "reset_procedures:\n";
      for (auto item : msg.reset_procedures) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: estimated_recovery_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_recovery_time: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_recovery_time, out);
    out << "\n";
  }

  // member: incident_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "incident_id: ";
    rosidl_generator_traits::value_to_yaml(msg.incident_id, out);
    out << "\n";
  }

  // member: incident_classification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "incident_classification: ";
    rosidl_generator_traits::value_to_yaml(msg.incident_classification, out);
    out << "\n";
  }

  // member: requires_investigation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requires_investigation: ";
    rosidl_generator_traits::value_to_yaml(msg.requires_investigation, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EmergencyStop_Response & msg, bool use_flow_style = false)
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
  const day2::srv::EmergencyStop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::srv::to_yaml() instead")]]
inline std::string to_yaml(const day2::srv::EmergencyStop_Response & msg)
{
  return day2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<day2::srv::EmergencyStop_Response>()
{
  return "day2::srv::EmergencyStop_Response";
}

template<>
inline const char * name<day2::srv::EmergencyStop_Response>()
{
  return "day2/srv/EmergencyStop_Response";
}

template<>
struct has_fixed_size<day2::srv::EmergencyStop_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::srv::EmergencyStop_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::srv::EmergencyStop_Response>
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
  const EmergencyStop_Event & msg,
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
  const EmergencyStop_Event & msg,
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

inline std::string to_yaml(const EmergencyStop_Event & msg, bool use_flow_style = false)
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
  const day2::srv::EmergencyStop_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::srv::to_yaml() instead")]]
inline std::string to_yaml(const day2::srv::EmergencyStop_Event & msg)
{
  return day2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<day2::srv::EmergencyStop_Event>()
{
  return "day2::srv::EmergencyStop_Event";
}

template<>
inline const char * name<day2::srv::EmergencyStop_Event>()
{
  return "day2/srv/EmergencyStop_Event";
}

template<>
struct has_fixed_size<day2::srv::EmergencyStop_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::srv::EmergencyStop_Event>
  : std::integral_constant<bool, has_bounded_size<day2::srv::EmergencyStop_Request>::value && has_bounded_size<day2::srv::EmergencyStop_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<day2::srv::EmergencyStop_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<day2::srv::EmergencyStop>()
{
  return "day2::srv::EmergencyStop";
}

template<>
inline const char * name<day2::srv::EmergencyStop>()
{
  return "day2/srv/EmergencyStop";
}

template<>
struct has_fixed_size<day2::srv::EmergencyStop>
  : std::integral_constant<
    bool,
    has_fixed_size<day2::srv::EmergencyStop_Request>::value &&
    has_fixed_size<day2::srv::EmergencyStop_Response>::value
  >
{
};

template<>
struct has_bounded_size<day2::srv::EmergencyStop>
  : std::integral_constant<
    bool,
    has_bounded_size<day2::srv::EmergencyStop_Request>::value &&
    has_bounded_size<day2::srv::EmergencyStop_Response>::value
  >
{
};

template<>
struct is_service<day2::srv::EmergencyStop>
  : std::true_type
{
};

template<>
struct is_service_request<day2::srv::EmergencyStop_Request>
  : std::true_type
{
};

template<>
struct is_service_response<day2::srv::EmergencyStop_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DAY2__SRV__DETAIL__EMERGENCY_STOP__TRAITS_HPP_
