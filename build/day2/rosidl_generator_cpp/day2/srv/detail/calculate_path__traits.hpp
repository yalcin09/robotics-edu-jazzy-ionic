// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from day2:srv/CalculatePath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/srv/calculate_path.hpp"


#ifndef DAY2__SRV__DETAIL__CALCULATE_PATH__TRAITS_HPP_
#define DAY2__SRV__DETAIL__CALCULATE_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "day2/srv/detail/calculate_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start_position'
// Member 'goal_position'
// Member 'waypoints'
// Member 'forbidden_zones'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'start_orientation'
// Member 'goal_orientation'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace day2
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalculatePath_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_position
  {
    out << "start_position: ";
    to_flow_style_yaml(msg.start_position, out);
    out << ", ";
  }

  // member: goal_position
  {
    out << "goal_position: ";
    to_flow_style_yaml(msg.goal_position, out);
    out << ", ";
  }

  // member: start_orientation
  {
    out << "start_orientation: ";
    to_flow_style_yaml(msg.start_orientation, out);
    out << ", ";
  }

  // member: goal_orientation
  {
    out << "goal_orientation: ";
    to_flow_style_yaml(msg.goal_orientation, out);
    out << ", ";
  }

  // member: max_velocity
  {
    out << "max_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity, out);
    out << ", ";
  }

  // member: max_acceleration
  {
    out << "max_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration, out);
    out << ", ";
  }

  // member: turning_radius
  {
    out << "turning_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.turning_radius, out);
    out << ", ";
  }

  // member: safety_margin
  {
    out << "safety_margin: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_margin, out);
    out << ", ";
  }

  // member: planning_algorithm
  {
    out << "planning_algorithm: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_algorithm, out);
    out << ", ";
  }

  // member: planning_timeout
  {
    out << "planning_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_timeout, out);
    out << ", ";
  }

  // member: optimize_for_speed
  {
    out << "optimize_for_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.optimize_for_speed, out);
    out << ", ";
  }

  // member: optimize_for_smoothness
  {
    out << "optimize_for_smoothness: ";
    rosidl_generator_traits::value_to_yaml(msg.optimize_for_smoothness, out);
    out << ", ";
  }

  // member: avoid_dynamic_obstacles
  {
    out << "avoid_dynamic_obstacles: ";
    rosidl_generator_traits::value_to_yaml(msg.avoid_dynamic_obstacles, out);
    out << ", ";
  }

  // member: waypoints
  {
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []";
    } else {
      out << "waypoints: [";
      size_t pending_items = msg.waypoints.size();
      for (auto item : msg.waypoints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: forbidden_zones
  {
    if (msg.forbidden_zones.size() == 0) {
      out << "forbidden_zones: []";
    } else {
      out << "forbidden_zones: [";
      size_t pending_items = msg.forbidden_zones.size();
      for (auto item : msg.forbidden_zones) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: special_constraints
  {
    if (msg.special_constraints.size() == 0) {
      out << "special_constraints: []";
    } else {
      out << "special_constraints: [";
      size_t pending_items = msg.special_constraints.size();
      for (auto item : msg.special_constraints) {
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
  const CalculatePath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_position:\n";
    to_block_style_yaml(msg.start_position, out, indentation + 2);
  }

  // member: goal_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_position:\n";
    to_block_style_yaml(msg.goal_position, out, indentation + 2);
  }

  // member: start_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_orientation:\n";
    to_block_style_yaml(msg.start_orientation, out, indentation + 2);
  }

  // member: goal_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_orientation:\n";
    to_block_style_yaml(msg.goal_orientation, out, indentation + 2);
  }

  // member: max_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity, out);
    out << "\n";
  }

  // member: max_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration, out);
    out << "\n";
  }

  // member: turning_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turning_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.turning_radius, out);
    out << "\n";
  }

  // member: safety_margin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_margin: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_margin, out);
    out << "\n";
  }

  // member: planning_algorithm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_algorithm: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_algorithm, out);
    out << "\n";
  }

  // member: planning_timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_timeout, out);
    out << "\n";
  }

  // member: optimize_for_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optimize_for_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.optimize_for_speed, out);
    out << "\n";
  }

  // member: optimize_for_smoothness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optimize_for_smoothness: ";
    rosidl_generator_traits::value_to_yaml(msg.optimize_for_smoothness, out);
    out << "\n";
  }

  // member: avoid_dynamic_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avoid_dynamic_obstacles: ";
    rosidl_generator_traits::value_to_yaml(msg.avoid_dynamic_obstacles, out);
    out << "\n";
  }

  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: forbidden_zones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.forbidden_zones.size() == 0) {
      out << "forbidden_zones: []\n";
    } else {
      out << "forbidden_zones:\n";
      for (auto item : msg.forbidden_zones) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: special_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.special_constraints.size() == 0) {
      out << "special_constraints: []\n";
    } else {
      out << "special_constraints:\n";
      for (auto item : msg.special_constraints) {
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

inline std::string to_yaml(const CalculatePath_Request & msg, bool use_flow_style = false)
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
  const day2::srv::CalculatePath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::srv::to_yaml() instead")]]
inline std::string to_yaml(const day2::srv::CalculatePath_Request & msg)
{
  return day2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<day2::srv::CalculatePath_Request>()
{
  return "day2::srv::CalculatePath_Request";
}

template<>
inline const char * name<day2::srv::CalculatePath_Request>()
{
  return "day2/srv/CalculatePath_Request";
}

template<>
struct has_fixed_size<day2::srv::CalculatePath_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::srv::CalculatePath_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::srv::CalculatePath_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'path_points'
// Member 'alternative_paths'
// already included above
// #include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'path_orientations'
// already included above
// #include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace day2
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalculatePath_Response & msg,
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

  // member: path_points
  {
    if (msg.path_points.size() == 0) {
      out << "path_points: []";
    } else {
      out << "path_points: [";
      size_t pending_items = msg.path_points.size();
      for (auto item : msg.path_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: path_orientations
  {
    if (msg.path_orientations.size() == 0) {
      out << "path_orientations: []";
    } else {
      out << "path_orientations: [";
      size_t pending_items = msg.path_orientations.size();
      for (auto item : msg.path_orientations) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: path_velocities
  {
    if (msg.path_velocities.size() == 0) {
      out << "path_velocities: []";
    } else {
      out << "path_velocities: [";
      size_t pending_items = msg.path_velocities.size();
      for (auto item : msg.path_velocities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: path_timestamps
  {
    if (msg.path_timestamps.size() == 0) {
      out << "path_timestamps: []";
    } else {
      out << "path_timestamps: [";
      size_t pending_items = msg.path_timestamps.size();
      for (auto item : msg.path_timestamps) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: total_distance
  {
    out << "total_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.total_distance, out);
    out << ", ";
  }

  // member: total_time
  {
    out << "total_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_time, out);
    out << ", ";
  }

  // member: path_smoothness
  {
    out << "path_smoothness: ";
    rosidl_generator_traits::value_to_yaml(msg.path_smoothness, out);
    out << ", ";
  }

  // member: safety_score
  {
    out << "safety_score: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_score, out);
    out << ", ";
  }

  // member: num_waypoints
  {
    out << "num_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.num_waypoints, out);
    out << ", ";
  }

  // member: alternative_paths
  {
    if (msg.alternative_paths.size() == 0) {
      out << "alternative_paths: []";
    } else {
      out << "alternative_paths: [";
      size_t pending_items = msg.alternative_paths.size();
      for (auto item : msg.alternative_paths) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: alternative_scores
  {
    if (msg.alternative_scores.size() == 0) {
      out << "alternative_scores: []";
    } else {
      out << "alternative_scores: [";
      size_t pending_items = msg.alternative_scores.size();
      for (auto item : msg.alternative_scores) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: planning_time_ms
  {
    out << "planning_time_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_time_ms, out);
    out << ", ";
  }

  // member: algorithm_used
  {
    out << "algorithm_used: ";
    rosidl_generator_traits::value_to_yaml(msg.algorithm_used, out);
    out << ", ";
  }

  // member: nodes_explored
  {
    out << "nodes_explored: ";
    rosidl_generator_traits::value_to_yaml(msg.nodes_explored, out);
    out << ", ";
  }

  // member: iterations_count
  {
    out << "iterations_count: ";
    rosidl_generator_traits::value_to_yaml(msg.iterations_count, out);
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
  const CalculatePath_Response & msg,
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

  // member: path_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path_points.size() == 0) {
      out << "path_points: []\n";
    } else {
      out << "path_points:\n";
      for (auto item : msg.path_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: path_orientations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path_orientations.size() == 0) {
      out << "path_orientations: []\n";
    } else {
      out << "path_orientations:\n";
      for (auto item : msg.path_orientations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: path_velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path_velocities.size() == 0) {
      out << "path_velocities: []\n";
    } else {
      out << "path_velocities:\n";
      for (auto item : msg.path_velocities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: path_timestamps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path_timestamps.size() == 0) {
      out << "path_timestamps: []\n";
    } else {
      out << "path_timestamps:\n";
      for (auto item : msg.path_timestamps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: total_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.total_distance, out);
    out << "\n";
  }

  // member: total_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_time, out);
    out << "\n";
  }

  // member: path_smoothness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_smoothness: ";
    rosidl_generator_traits::value_to_yaml(msg.path_smoothness, out);
    out << "\n";
  }

  // member: safety_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_score: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_score, out);
    out << "\n";
  }

  // member: num_waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.num_waypoints, out);
    out << "\n";
  }

  // member: alternative_paths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.alternative_paths.size() == 0) {
      out << "alternative_paths: []\n";
    } else {
      out << "alternative_paths:\n";
      for (auto item : msg.alternative_paths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: alternative_scores
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.alternative_scores.size() == 0) {
      out << "alternative_scores: []\n";
    } else {
      out << "alternative_scores:\n";
      for (auto item : msg.alternative_scores) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: planning_time_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_time_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_time_ms, out);
    out << "\n";
  }

  // member: algorithm_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "algorithm_used: ";
    rosidl_generator_traits::value_to_yaml(msg.algorithm_used, out);
    out << "\n";
  }

  // member: nodes_explored
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodes_explored: ";
    rosidl_generator_traits::value_to_yaml(msg.nodes_explored, out);
    out << "\n";
  }

  // member: iterations_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iterations_count: ";
    rosidl_generator_traits::value_to_yaml(msg.iterations_count, out);
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

inline std::string to_yaml(const CalculatePath_Response & msg, bool use_flow_style = false)
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
  const day2::srv::CalculatePath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::srv::to_yaml() instead")]]
inline std::string to_yaml(const day2::srv::CalculatePath_Response & msg)
{
  return day2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<day2::srv::CalculatePath_Response>()
{
  return "day2::srv::CalculatePath_Response";
}

template<>
inline const char * name<day2::srv::CalculatePath_Response>()
{
  return "day2/srv/CalculatePath_Response";
}

template<>
struct has_fixed_size<day2::srv::CalculatePath_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::srv::CalculatePath_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::srv::CalculatePath_Response>
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
  const CalculatePath_Event & msg,
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
  const CalculatePath_Event & msg,
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

inline std::string to_yaml(const CalculatePath_Event & msg, bool use_flow_style = false)
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
  const day2::srv::CalculatePath_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::srv::to_yaml() instead")]]
inline std::string to_yaml(const day2::srv::CalculatePath_Event & msg)
{
  return day2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<day2::srv::CalculatePath_Event>()
{
  return "day2::srv::CalculatePath_Event";
}

template<>
inline const char * name<day2::srv::CalculatePath_Event>()
{
  return "day2/srv/CalculatePath_Event";
}

template<>
struct has_fixed_size<day2::srv::CalculatePath_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::srv::CalculatePath_Event>
  : std::integral_constant<bool, has_bounded_size<day2::srv::CalculatePath_Request>::value && has_bounded_size<day2::srv::CalculatePath_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<day2::srv::CalculatePath_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<day2::srv::CalculatePath>()
{
  return "day2::srv::CalculatePath";
}

template<>
inline const char * name<day2::srv::CalculatePath>()
{
  return "day2/srv/CalculatePath";
}

template<>
struct has_fixed_size<day2::srv::CalculatePath>
  : std::integral_constant<
    bool,
    has_fixed_size<day2::srv::CalculatePath_Request>::value &&
    has_fixed_size<day2::srv::CalculatePath_Response>::value
  >
{
};

template<>
struct has_bounded_size<day2::srv::CalculatePath>
  : std::integral_constant<
    bool,
    has_bounded_size<day2::srv::CalculatePath_Request>::value &&
    has_bounded_size<day2::srv::CalculatePath_Response>::value
  >
{
};

template<>
struct is_service<day2::srv::CalculatePath>
  : std::true_type
{
};

template<>
struct is_service_request<day2::srv::CalculatePath_Request>
  : std::true_type
{
};

template<>
struct is_service_response<day2::srv::CalculatePath_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DAY2__SRV__DETAIL__CALCULATE_PATH__TRAITS_HPP_
