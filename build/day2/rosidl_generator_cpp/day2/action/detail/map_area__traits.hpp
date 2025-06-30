// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from day2:action/MapArea.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/action/map_area.hpp"


#ifndef DAY2__ACTION__DETAIL__MAP_AREA__TRAITS_HPP_
#define DAY2__ACTION__DETAIL__MAP_AREA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "day2/action/detail/map_area__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'boundary_points'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const MapArea_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: boundary_points
  {
    if (msg.boundary_points.size() == 0) {
      out << "boundary_points: []";
    } else {
      out << "boundary_points: [";
      size_t pending_items = msg.boundary_points.size();
      for (auto item : msg.boundary_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: resolution
  {
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << ", ";
  }

  // member: mapping_mode
  {
    out << "mapping_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mapping_mode, out);
    out << ", ";
  }

  // member: coverage_percentage
  {
    out << "coverage_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.coverage_percentage, out);
    out << ", ";
  }

  // member: include_3d_data
  {
    out << "include_3d_data: ";
    rosidl_generator_traits::value_to_yaml(msg.include_3d_data, out);
    out << ", ";
  }

  // member: max_exploration_speed
  {
    out << "max_exploration_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_exploration_speed, out);
    out << ", ";
  }

  // member: sensor_overlap_ratio
  {
    out << "sensor_overlap_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_overlap_ratio, out);
    out << ", ";
  }

  // member: waypoint_spacing
  {
    out << "waypoint_spacing: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_spacing, out);
    out << ", ";
  }

  // member: exploration_pattern
  {
    out << "exploration_pattern: ";
    rosidl_generator_traits::value_to_yaml(msg.exploration_pattern, out);
    out << ", ";
  }

  // member: active_sensors
  {
    if (msg.active_sensors.size() == 0) {
      out << "active_sensors: []";
    } else {
      out << "active_sensors: [";
      size_t pending_items = msg.active_sensors.size();
      for (auto item : msg.active_sensors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sensor_range
  {
    out << "sensor_range: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_range, out);
    out << ", ";
  }

  // member: use_slam
  {
    out << "use_slam: ";
    rosidl_generator_traits::value_to_yaml(msg.use_slam, out);
    out << ", ";
  }

  // member: slam_algorithm
  {
    out << "slam_algorithm: ";
    rosidl_generator_traits::value_to_yaml(msg.slam_algorithm, out);
    out << ", ";
  }

  // member: min_quality_threshold
  {
    out << "min_quality_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.min_quality_threshold, out);
    out << ", ";
  }

  // member: optimize_for_accuracy
  {
    out << "optimize_for_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.optimize_for_accuracy, out);
    out << ", ";
  }

  // member: optimize_for_speed
  {
    out << "optimize_for_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.optimize_for_speed, out);
    out << ", ";
  }

  // member: timeout_seconds
  {
    out << "timeout_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_seconds, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapArea_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: boundary_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.boundary_points.size() == 0) {
      out << "boundary_points: []\n";
    } else {
      out << "boundary_points:\n";
      for (auto item : msg.boundary_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << "\n";
  }

  // member: mapping_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mapping_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mapping_mode, out);
    out << "\n";
  }

  // member: coverage_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coverage_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.coverage_percentage, out);
    out << "\n";
  }

  // member: include_3d_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "include_3d_data: ";
    rosidl_generator_traits::value_to_yaml(msg.include_3d_data, out);
    out << "\n";
  }

  // member: max_exploration_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_exploration_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_exploration_speed, out);
    out << "\n";
  }

  // member: sensor_overlap_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_overlap_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_overlap_ratio, out);
    out << "\n";
  }

  // member: waypoint_spacing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_spacing: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_spacing, out);
    out << "\n";
  }

  // member: exploration_pattern
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exploration_pattern: ";
    rosidl_generator_traits::value_to_yaml(msg.exploration_pattern, out);
    out << "\n";
  }

  // member: active_sensors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.active_sensors.size() == 0) {
      out << "active_sensors: []\n";
    } else {
      out << "active_sensors:\n";
      for (auto item : msg.active_sensors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sensor_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_range: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_range, out);
    out << "\n";
  }

  // member: use_slam
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_slam: ";
    rosidl_generator_traits::value_to_yaml(msg.use_slam, out);
    out << "\n";
  }

  // member: slam_algorithm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slam_algorithm: ";
    rosidl_generator_traits::value_to_yaml(msg.slam_algorithm, out);
    out << "\n";
  }

  // member: min_quality_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_quality_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.min_quality_threshold, out);
    out << "\n";
  }

  // member: optimize_for_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optimize_for_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.optimize_for_accuracy, out);
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

  // member: timeout_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_seconds, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapArea_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::MapArea_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::MapArea_Goal & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::MapArea_Goal>()
{
  return "day2::action::MapArea_Goal";
}

template<>
inline const char * name<day2::action::MapArea_Goal>()
{
  return "day2/action/MapArea_Goal";
}

template<>
struct has_fixed_size<day2::action::MapArea_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::action::MapArea_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::action::MapArea_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const MapArea_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: result_message
  {
    out << "result_message: ";
    rosidl_generator_traits::value_to_yaml(msg.result_message, out);
    out << ", ";
  }

  // member: map_topic
  {
    out << "map_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.map_topic, out);
    out << ", ";
  }

  // member: map_file_path
  {
    out << "map_file_path: ";
    rosidl_generator_traits::value_to_yaml(msg.map_file_path, out);
    out << ", ";
  }

  // member: area_covered
  {
    out << "area_covered: ";
    rosidl_generator_traits::value_to_yaml(msg.area_covered, out);
    out << ", ";
  }

  // member: coverage_percentage
  {
    out << "coverage_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.coverage_percentage, out);
    out << ", ";
  }

  // member: map_accuracy
  {
    out << "map_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.map_accuracy, out);
    out << ", ";
  }

  // member: feature_density
  {
    out << "feature_density: ";
    rosidl_generator_traits::value_to_yaml(msg.feature_density, out);
    out << ", ";
  }

  // member: total_mapping_time
  {
    out << "total_mapping_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_mapping_time, out);
    out << ", ";
  }

  // member: total_distance_traveled
  {
    out << "total_distance_traveled: ";
    rosidl_generator_traits::value_to_yaml(msg.total_distance_traveled, out);
    out << ", ";
  }

  // member: total_sensor_readings
  {
    out << "total_sensor_readings: ";
    rosidl_generator_traits::value_to_yaml(msg.total_sensor_readings, out);
    out << ", ";
  }

  // member: average_mapping_speed
  {
    out << "average_mapping_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.average_mapping_speed, out);
    out << ", ";
  }

  // member: map_width_pixels
  {
    out << "map_width_pixels: ";
    rosidl_generator_traits::value_to_yaml(msg.map_width_pixels, out);
    out << ", ";
  }

  // member: map_height_pixels
  {
    out << "map_height_pixels: ";
    rosidl_generator_traits::value_to_yaml(msg.map_height_pixels, out);
    out << ", ";
  }

  // member: occupied_cells
  {
    out << "occupied_cells: ";
    rosidl_generator_traits::value_to_yaml(msg.occupied_cells, out);
    out << ", ";
  }

  // member: free_cells
  {
    out << "free_cells: ";
    rosidl_generator_traits::value_to_yaml(msg.free_cells, out);
    out << ", ";
  }

  // member: unknown_cells
  {
    out << "unknown_cells: ";
    rosidl_generator_traits::value_to_yaml(msg.unknown_cells, out);
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
  const MapArea_Result & msg,
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

  // member: result_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_message: ";
    rosidl_generator_traits::value_to_yaml(msg.result_message, out);
    out << "\n";
  }

  // member: map_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.map_topic, out);
    out << "\n";
  }

  // member: map_file_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_file_path: ";
    rosidl_generator_traits::value_to_yaml(msg.map_file_path, out);
    out << "\n";
  }

  // member: area_covered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_covered: ";
    rosidl_generator_traits::value_to_yaml(msg.area_covered, out);
    out << "\n";
  }

  // member: coverage_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coverage_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.coverage_percentage, out);
    out << "\n";
  }

  // member: map_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.map_accuracy, out);
    out << "\n";
  }

  // member: feature_density
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feature_density: ";
    rosidl_generator_traits::value_to_yaml(msg.feature_density, out);
    out << "\n";
  }

  // member: total_mapping_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_mapping_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_mapping_time, out);
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

  // member: total_sensor_readings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_sensor_readings: ";
    rosidl_generator_traits::value_to_yaml(msg.total_sensor_readings, out);
    out << "\n";
  }

  // member: average_mapping_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_mapping_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.average_mapping_speed, out);
    out << "\n";
  }

  // member: map_width_pixels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_width_pixels: ";
    rosidl_generator_traits::value_to_yaml(msg.map_width_pixels, out);
    out << "\n";
  }

  // member: map_height_pixels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_height_pixels: ";
    rosidl_generator_traits::value_to_yaml(msg.map_height_pixels, out);
    out << "\n";
  }

  // member: occupied_cells
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "occupied_cells: ";
    rosidl_generator_traits::value_to_yaml(msg.occupied_cells, out);
    out << "\n";
  }

  // member: free_cells
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "free_cells: ";
    rosidl_generator_traits::value_to_yaml(msg.free_cells, out);
    out << "\n";
  }

  // member: unknown_cells
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unknown_cells: ";
    rosidl_generator_traits::value_to_yaml(msg.unknown_cells, out);
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

inline std::string to_yaml(const MapArea_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::MapArea_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::MapArea_Result & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::MapArea_Result>()
{
  return "day2::action::MapArea_Result";
}

template<>
inline const char * name<day2::action::MapArea_Result>()
{
  return "day2/action/MapArea_Result";
}

template<>
struct has_fixed_size<day2::action::MapArea_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::action::MapArea_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::action::MapArea_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'current_position'
// Member 'next_target'
// already included above
// #include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'last_sensor_update'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const MapArea_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_position
  {
    out << "current_position: ";
    to_flow_style_yaml(msg.current_position, out);
    out << ", ";
  }

  // member: area_mapped_so_far
  {
    out << "area_mapped_so_far: ";
    rosidl_generator_traits::value_to_yaml(msg.area_mapped_so_far, out);
    out << ", ";
  }

  // member: coverage_percentage
  {
    out << "coverage_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.coverage_percentage, out);
    out << ", ";
  }

  // member: estimated_time_remaining
  {
    out << "estimated_time_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_time_remaining, out);
    out << ", ";
  }

  // member: current_phase
  {
    out << "current_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.current_phase, out);
    out << ", ";
  }

  // member: next_target
  {
    out << "next_target: ";
    to_flow_style_yaml(msg.next_target, out);
    out << ", ";
  }

  // member: waypoints_completed
  {
    out << "waypoints_completed: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoints_completed, out);
    out << ", ";
  }

  // member: total_waypoints
  {
    out << "total_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.total_waypoints, out);
    out << ", ";
  }

  // member: current_map_width
  {
    out << "current_map_width: ";
    rosidl_generator_traits::value_to_yaml(msg.current_map_width, out);
    out << ", ";
  }

  // member: current_map_height
  {
    out << "current_map_height: ";
    rosidl_generator_traits::value_to_yaml(msg.current_map_height, out);
    out << ", ";
  }

  // member: current_resolution
  {
    out << "current_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.current_resolution, out);
    out << ", ";
  }

  // member: new_features_detected
  {
    out << "new_features_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.new_features_detected, out);
    out << ", ";
  }

  // member: sensor_active_status
  {
    if (msg.sensor_active_status.size() == 0) {
      out << "sensor_active_status: []";
    } else {
      out << "sensor_active_status: [";
      size_t pending_items = msg.sensor_active_status.size();
      for (auto item : msg.sensor_active_status) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sensor_data_quality
  {
    if (msg.sensor_data_quality.size() == 0) {
      out << "sensor_data_quality: []";
    } else {
      out << "sensor_data_quality: [";
      size_t pending_items = msg.sensor_data_quality.size();
      for (auto item : msg.sensor_data_quality) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sensor_readings_per_second
  {
    out << "sensor_readings_per_second: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_readings_per_second, out);
    out << ", ";
  }

  // member: localization_confidence
  {
    out << "localization_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.localization_confidence, out);
    out << ", ";
  }

  // member: loop_closures_detected
  {
    out << "loop_closures_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_closures_detected, out);
    out << ", ";
  }

  // member: pose_uncertainty
  {
    out << "pose_uncertainty: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_uncertainty, out);
    out << ", ";
  }

  // member: cpu_usage
  {
    out << "cpu_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_usage, out);
    out << ", ";
  }

  // member: memory_usage
  {
    out << "memory_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.memory_usage, out);
    out << ", ";
  }

  // member: storage_space_used
  {
    out << "storage_space_used: ";
    rosidl_generator_traits::value_to_yaml(msg.storage_space_used, out);
    out << ", ";
  }

  // member: last_sensor_update
  {
    out << "last_sensor_update: ";
    to_flow_style_yaml(msg.last_sensor_update, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapArea_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_position:\n";
    to_block_style_yaml(msg.current_position, out, indentation + 2);
  }

  // member: area_mapped_so_far
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_mapped_so_far: ";
    rosidl_generator_traits::value_to_yaml(msg.area_mapped_so_far, out);
    out << "\n";
  }

  // member: coverage_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coverage_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.coverage_percentage, out);
    out << "\n";
  }

  // member: estimated_time_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_time_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_time_remaining, out);
    out << "\n";
  }

  // member: current_phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.current_phase, out);
    out << "\n";
  }

  // member: next_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "next_target:\n";
    to_block_style_yaml(msg.next_target, out, indentation + 2);
  }

  // member: waypoints_completed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoints_completed: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoints_completed, out);
    out << "\n";
  }

  // member: total_waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.total_waypoints, out);
    out << "\n";
  }

  // member: current_map_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_map_width: ";
    rosidl_generator_traits::value_to_yaml(msg.current_map_width, out);
    out << "\n";
  }

  // member: current_map_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_map_height: ";
    rosidl_generator_traits::value_to_yaml(msg.current_map_height, out);
    out << "\n";
  }

  // member: current_resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.current_resolution, out);
    out << "\n";
  }

  // member: new_features_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_features_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.new_features_detected, out);
    out << "\n";
  }

  // member: sensor_active_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensor_active_status.size() == 0) {
      out << "sensor_active_status: []\n";
    } else {
      out << "sensor_active_status:\n";
      for (auto item : msg.sensor_active_status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sensor_data_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensor_data_quality.size() == 0) {
      out << "sensor_data_quality: []\n";
    } else {
      out << "sensor_data_quality:\n";
      for (auto item : msg.sensor_data_quality) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sensor_readings_per_second
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_readings_per_second: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_readings_per_second, out);
    out << "\n";
  }

  // member: localization_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "localization_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.localization_confidence, out);
    out << "\n";
  }

  // member: loop_closures_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_closures_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_closures_detected, out);
    out << "\n";
  }

  // member: pose_uncertainty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_uncertainty: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_uncertainty, out);
    out << "\n";
  }

  // member: cpu_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_usage, out);
    out << "\n";
  }

  // member: memory_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "memory_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.memory_usage, out);
    out << "\n";
  }

  // member: storage_space_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "storage_space_used: ";
    rosidl_generator_traits::value_to_yaml(msg.storage_space_used, out);
    out << "\n";
  }

  // member: last_sensor_update
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_sensor_update:\n";
    to_block_style_yaml(msg.last_sensor_update, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapArea_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::MapArea_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::MapArea_Feedback & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::MapArea_Feedback>()
{
  return "day2::action::MapArea_Feedback";
}

template<>
inline const char * name<day2::action::MapArea_Feedback>()
{
  return "day2/action/MapArea_Feedback";
}

template<>
struct has_fixed_size<day2::action::MapArea_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::action::MapArea_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::action::MapArea_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "day2/action/detail/map_area__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const MapArea_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapArea_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapArea_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::MapArea_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::MapArea_SendGoal_Request & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::MapArea_SendGoal_Request>()
{
  return "day2::action::MapArea_SendGoal_Request";
}

template<>
inline const char * name<day2::action::MapArea_SendGoal_Request>()
{
  return "day2/action/MapArea_SendGoal_Request";
}

template<>
struct has_fixed_size<day2::action::MapArea_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<day2::action::MapArea_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<day2::action::MapArea_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<day2::action::MapArea_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<day2::action::MapArea_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const MapArea_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapArea_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapArea_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::MapArea_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::MapArea_SendGoal_Response & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::MapArea_SendGoal_Response>()
{
  return "day2::action::MapArea_SendGoal_Response";
}

template<>
inline const char * name<day2::action::MapArea_SendGoal_Response>()
{
  return "day2/action/MapArea_SendGoal_Response";
}

template<>
struct has_fixed_size<day2::action::MapArea_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<day2::action::MapArea_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<day2::action::MapArea_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const MapArea_SendGoal_Event & msg,
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
  const MapArea_SendGoal_Event & msg,
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

inline std::string to_yaml(const MapArea_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::MapArea_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::MapArea_SendGoal_Event & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::MapArea_SendGoal_Event>()
{
  return "day2::action::MapArea_SendGoal_Event";
}

template<>
inline const char * name<day2::action::MapArea_SendGoal_Event>()
{
  return "day2/action/MapArea_SendGoal_Event";
}

template<>
struct has_fixed_size<day2::action::MapArea_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::action::MapArea_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<day2::action::MapArea_SendGoal_Request>::value && has_bounded_size<day2::action::MapArea_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<day2::action::MapArea_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<day2::action::MapArea_SendGoal>()
{
  return "day2::action::MapArea_SendGoal";
}

template<>
inline const char * name<day2::action::MapArea_SendGoal>()
{
  return "day2/action/MapArea_SendGoal";
}

template<>
struct has_fixed_size<day2::action::MapArea_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<day2::action::MapArea_SendGoal_Request>::value &&
    has_fixed_size<day2::action::MapArea_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<day2::action::MapArea_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<day2::action::MapArea_SendGoal_Request>::value &&
    has_bounded_size<day2::action::MapArea_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<day2::action::MapArea_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<day2::action::MapArea_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<day2::action::MapArea_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const MapArea_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapArea_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapArea_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::MapArea_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::MapArea_GetResult_Request & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::MapArea_GetResult_Request>()
{
  return "day2::action::MapArea_GetResult_Request";
}

template<>
inline const char * name<day2::action::MapArea_GetResult_Request>()
{
  return "day2/action/MapArea_GetResult_Request";
}

template<>
struct has_fixed_size<day2::action::MapArea_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<day2::action::MapArea_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<day2::action::MapArea_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "day2/action/detail/map_area__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const MapArea_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapArea_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapArea_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::MapArea_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::MapArea_GetResult_Response & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::MapArea_GetResult_Response>()
{
  return "day2::action::MapArea_GetResult_Response";
}

template<>
inline const char * name<day2::action::MapArea_GetResult_Response>()
{
  return "day2/action/MapArea_GetResult_Response";
}

template<>
struct has_fixed_size<day2::action::MapArea_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<day2::action::MapArea_Result>::value> {};

template<>
struct has_bounded_size<day2::action::MapArea_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<day2::action::MapArea_Result>::value> {};

template<>
struct is_message<day2::action::MapArea_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const MapArea_GetResult_Event & msg,
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
  const MapArea_GetResult_Event & msg,
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

inline std::string to_yaml(const MapArea_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::MapArea_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::MapArea_GetResult_Event & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::MapArea_GetResult_Event>()
{
  return "day2::action::MapArea_GetResult_Event";
}

template<>
inline const char * name<day2::action::MapArea_GetResult_Event>()
{
  return "day2/action/MapArea_GetResult_Event";
}

template<>
struct has_fixed_size<day2::action::MapArea_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::action::MapArea_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<day2::action::MapArea_GetResult_Request>::value && has_bounded_size<day2::action::MapArea_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<day2::action::MapArea_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<day2::action::MapArea_GetResult>()
{
  return "day2::action::MapArea_GetResult";
}

template<>
inline const char * name<day2::action::MapArea_GetResult>()
{
  return "day2/action/MapArea_GetResult";
}

template<>
struct has_fixed_size<day2::action::MapArea_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<day2::action::MapArea_GetResult_Request>::value &&
    has_fixed_size<day2::action::MapArea_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<day2::action::MapArea_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<day2::action::MapArea_GetResult_Request>::value &&
    has_bounded_size<day2::action::MapArea_GetResult_Response>::value
  >
{
};

template<>
struct is_service<day2::action::MapArea_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<day2::action::MapArea_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<day2::action::MapArea_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "day2/action/detail/map_area__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const MapArea_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapArea_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapArea_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::action::MapArea_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::MapArea_FeedbackMessage & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::MapArea_FeedbackMessage>()
{
  return "day2::action::MapArea_FeedbackMessage";
}

template<>
inline const char * name<day2::action::MapArea_FeedbackMessage>()
{
  return "day2/action/MapArea_FeedbackMessage";
}

template<>
struct has_fixed_size<day2::action::MapArea_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<day2::action::MapArea_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<day2::action::MapArea_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<day2::action::MapArea_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<day2::action::MapArea_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<day2::action::MapArea>
  : std::true_type
{
};

template<>
struct is_action_goal<day2::action::MapArea_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<day2::action::MapArea_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<day2::action::MapArea_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // DAY2__ACTION__DETAIL__MAP_AREA__TRAITS_HPP_
