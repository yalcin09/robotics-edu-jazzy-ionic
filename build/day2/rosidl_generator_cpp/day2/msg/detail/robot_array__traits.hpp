// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from day2:msg/RobotArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/msg/robot_array.hpp"


#ifndef DAY2__MSG__DETAIL__ROBOT_ARRAY__TRAITS_HPP_
#define DAY2__MSG__DETAIL__ROBOT_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "day2/msg/detail/robot_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'robots'
#include "day2/msg/detail/robot_status__traits.hpp"
// Member 'workspace_min'
// Member 'workspace_max'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'emergency_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace day2
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: fleet_name
  {
    out << "fleet_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_name, out);
    out << ", ";
  }

  // member: fleet_id
  {
    out << "fleet_id: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_id, out);
    out << ", ";
  }

  // member: coordinator_node
  {
    out << "coordinator_node: ";
    rosidl_generator_traits::value_to_yaml(msg.coordinator_node, out);
    out << ", ";
  }

  // member: robots
  {
    if (msg.robots.size() == 0) {
      out << "robots: []";
    } else {
      out << "robots: [";
      size_t pending_items = msg.robots.size();
      for (auto item : msg.robots) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: total_robots
  {
    out << "total_robots: ";
    rosidl_generator_traits::value_to_yaml(msg.total_robots, out);
    out << ", ";
  }

  // member: active_robots
  {
    out << "active_robots: ";
    rosidl_generator_traits::value_to_yaml(msg.active_robots, out);
    out << ", ";
  }

  // member: idle_robots
  {
    out << "idle_robots: ";
    rosidl_generator_traits::value_to_yaml(msg.idle_robots, out);
    out << ", ";
  }

  // member: charging_robots
  {
    out << "charging_robots: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_robots, out);
    out << ", ";
  }

  // member: error_robots
  {
    out << "error_robots: ";
    rosidl_generator_traits::value_to_yaml(msg.error_robots, out);
    out << ", ";
  }

  // member: fleet_status
  {
    out << "fleet_status: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_status, out);
    out << ", ";
  }

  // member: average_battery_level
  {
    out << "average_battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.average_battery_level, out);
    out << ", ";
  }

  // member: total_distance_traveled
  {
    out << "total_distance_traveled: ";
    rosidl_generator_traits::value_to_yaml(msg.total_distance_traveled, out);
    out << ", ";
  }

  // member: average_speed
  {
    out << "average_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.average_speed, out);
    out << ", ";
  }

  // member: completed_tasks
  {
    out << "completed_tasks: ";
    rosidl_generator_traits::value_to_yaml(msg.completed_tasks, out);
    out << ", ";
  }

  // member: pending_tasks
  {
    out << "pending_tasks: ";
    rosidl_generator_traits::value_to_yaml(msg.pending_tasks, out);
    out << ", ";
  }

  // member: workspace_min
  {
    out << "workspace_min: ";
    to_flow_style_yaml(msg.workspace_min, out);
    out << ", ";
  }

  // member: workspace_max
  {
    out << "workspace_max: ";
    to_flow_style_yaml(msg.workspace_max, out);
    out << ", ";
  }

  // member: workspace_name
  {
    out << "workspace_name: ";
    rosidl_generator_traits::value_to_yaml(msg.workspace_name, out);
    out << ", ";
  }

  // member: emergency_stop
  {
    out << "emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop, out);
    out << ", ";
  }

  // member: emergency_reason
  {
    out << "emergency_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_reason, out);
    out << ", ";
  }

  // member: emergency_timestamp
  {
    out << "emergency_timestamp: ";
    to_flow_style_yaml(msg.emergency_timestamp, out);
    out << ", ";
  }

  // member: system_health_score
  {
    out << "system_health_score: ";
    rosidl_generator_traits::value_to_yaml(msg.system_health_score, out);
    out << ", ";
  }

  // member: critical_warnings
  {
    if (msg.critical_warnings.size() == 0) {
      out << "critical_warnings: []";
    } else {
      out << "critical_warnings: [";
      size_t pending_items = msg.critical_warnings.size();
      for (auto item : msg.critical_warnings) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: system_messages
  {
    if (msg.system_messages.size() == 0) {
      out << "system_messages: []";
    } else {
      out << "system_messages: [";
      size_t pending_items = msg.system_messages.size();
      for (auto item : msg.system_messages) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: update_frequency_hz
  {
    out << "update_frequency_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.update_frequency_hz, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: fleet_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fleet_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_name, out);
    out << "\n";
  }

  // member: fleet_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fleet_id: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_id, out);
    out << "\n";
  }

  // member: coordinator_node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coordinator_node: ";
    rosidl_generator_traits::value_to_yaml(msg.coordinator_node, out);
    out << "\n";
  }

  // member: robots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robots.size() == 0) {
      out << "robots: []\n";
    } else {
      out << "robots:\n";
      for (auto item : msg.robots) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: total_robots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_robots: ";
    rosidl_generator_traits::value_to_yaml(msg.total_robots, out);
    out << "\n";
  }

  // member: active_robots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_robots: ";
    rosidl_generator_traits::value_to_yaml(msg.active_robots, out);
    out << "\n";
  }

  // member: idle_robots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idle_robots: ";
    rosidl_generator_traits::value_to_yaml(msg.idle_robots, out);
    out << "\n";
  }

  // member: charging_robots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_robots: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_robots, out);
    out << "\n";
  }

  // member: error_robots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_robots: ";
    rosidl_generator_traits::value_to_yaml(msg.error_robots, out);
    out << "\n";
  }

  // member: fleet_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fleet_status: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_status, out);
    out << "\n";
  }

  // member: average_battery_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.average_battery_level, out);
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

  // member: average_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.average_speed, out);
    out << "\n";
  }

  // member: completed_tasks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "completed_tasks: ";
    rosidl_generator_traits::value_to_yaml(msg.completed_tasks, out);
    out << "\n";
  }

  // member: pending_tasks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pending_tasks: ";
    rosidl_generator_traits::value_to_yaml(msg.pending_tasks, out);
    out << "\n";
  }

  // member: workspace_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "workspace_min:\n";
    to_block_style_yaml(msg.workspace_min, out, indentation + 2);
  }

  // member: workspace_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "workspace_max:\n";
    to_block_style_yaml(msg.workspace_max, out, indentation + 2);
  }

  // member: workspace_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "workspace_name: ";
    rosidl_generator_traits::value_to_yaml(msg.workspace_name, out);
    out << "\n";
  }

  // member: emergency_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop, out);
    out << "\n";
  }

  // member: emergency_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_reason, out);
    out << "\n";
  }

  // member: emergency_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_timestamp:\n";
    to_block_style_yaml(msg.emergency_timestamp, out, indentation + 2);
  }

  // member: system_health_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_health_score: ";
    rosidl_generator_traits::value_to_yaml(msg.system_health_score, out);
    out << "\n";
  }

  // member: critical_warnings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.critical_warnings.size() == 0) {
      out << "critical_warnings: []\n";
    } else {
      out << "critical_warnings:\n";
      for (auto item : msg.critical_warnings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: system_messages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.system_messages.size() == 0) {
      out << "system_messages: []\n";
    } else {
      out << "system_messages:\n";
      for (auto item : msg.system_messages) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: update_frequency_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "update_frequency_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.update_frequency_hz, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotArray & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::msg::RobotArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::msg::to_yaml() instead")]]
inline std::string to_yaml(const day2::msg::RobotArray & msg)
{
  return day2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<day2::msg::RobotArray>()
{
  return "day2::msg::RobotArray";
}

template<>
inline const char * name<day2::msg::RobotArray>()
{
  return "day2/msg/RobotArray";
}

template<>
struct has_fixed_size<day2::msg::RobotArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::msg::RobotArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::msg::RobotArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DAY2__MSG__DETAIL__ROBOT_ARRAY__TRAITS_HPP_
