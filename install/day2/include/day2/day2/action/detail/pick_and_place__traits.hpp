// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from day2:action/PickAndPlace.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/action/pick_and_place.hpp"


#ifndef DAY2__ACTION__DETAIL__PICK_AND_PLACE__TRAITS_HPP_
#define DAY2__ACTION__DETAIL__PICK_AND_PLACE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "day2/action/detail/pick_and_place__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pickup_location'
// Member 'place_location'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'object_dimensions'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const PickAndPlace_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << ", ";
  }

  // member: pickup_location
  {
    out << "pickup_location: ";
    to_flow_style_yaml(msg.pickup_location, out);
    out << ", ";
  }

  // member: place_location
  {
    out << "place_location: ";
    to_flow_style_yaml(msg.place_location, out);
    out << ", ";
  }

  // member: object_type
  {
    out << "object_type: ";
    rosidl_generator_traits::value_to_yaml(msg.object_type, out);
    out << ", ";
  }

  // member: object_weight
  {
    out << "object_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.object_weight, out);
    out << ", ";
  }

  // member: object_dimensions
  {
    out << "object_dimensions: ";
    to_flow_style_yaml(msg.object_dimensions, out);
    out << ", ";
  }

  // member: grasp_type
  {
    out << "grasp_type: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_type, out);
    out << ", ";
  }

  // member: grasp_force
  {
    out << "grasp_force: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_force, out);
    out << ", ";
  }

  // member: approach_distance
  {
    out << "approach_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.approach_distance, out);
    out << ", ";
  }

  // member: lift_height
  {
    out << "lift_height: ";
    rosidl_generator_traits::value_to_yaml(msg.lift_height, out);
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

  // member: use_careful_mode
  {
    out << "use_careful_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.use_careful_mode, out);
    out << ", ";
  }

  // member: timeout_seconds
  {
    out << "timeout_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_seconds, out);
    out << ", ";
  }

  // member: collision_threshold
  {
    out << "collision_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_threshold, out);
    out << ", ";
  }

  // member: enable_force_feedback
  {
    out << "enable_force_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_force_feedback, out);
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
  const PickAndPlace_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << "\n";
  }

  // member: pickup_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pickup_location:\n";
    to_block_style_yaml(msg.pickup_location, out, indentation + 2);
  }

  // member: place_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "place_location:\n";
    to_block_style_yaml(msg.place_location, out, indentation + 2);
  }

  // member: object_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_type: ";
    rosidl_generator_traits::value_to_yaml(msg.object_type, out);
    out << "\n";
  }

  // member: object_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.object_weight, out);
    out << "\n";
  }

  // member: object_dimensions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_dimensions:\n";
    to_block_style_yaml(msg.object_dimensions, out, indentation + 2);
  }

  // member: grasp_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grasp_type: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_type, out);
    out << "\n";
  }

  // member: grasp_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grasp_force: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_force, out);
    out << "\n";
  }

  // member: approach_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "approach_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.approach_distance, out);
    out << "\n";
  }

  // member: lift_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lift_height: ";
    rosidl_generator_traits::value_to_yaml(msg.lift_height, out);
    out << "\n";
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

  // member: use_careful_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_careful_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.use_careful_mode, out);
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

  // member: collision_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_threshold, out);
    out << "\n";
  }

  // member: enable_force_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_force_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_force_feedback, out);
    out << "\n";
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
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PickAndPlace_Goal & msg, bool use_flow_style = false)
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
  const day2::action::PickAndPlace_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::PickAndPlace_Goal & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::PickAndPlace_Goal>()
{
  return "day2::action::PickAndPlace_Goal";
}

template<>
inline const char * name<day2::action::PickAndPlace_Goal>()
{
  return "day2/action/PickAndPlace_Goal";
}

template<>
struct has_fixed_size<day2::action::PickAndPlace_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::action::PickAndPlace_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::action::PickAndPlace_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'final_object_location'
// already included above
// #include "geometry_msgs/msg/detail/point__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const PickAndPlace_Result & msg,
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

  // member: final_object_location
  {
    out << "final_object_location: ";
    to_flow_style_yaml(msg.final_object_location, out);
    out << ", ";
  }

  // member: total_task_time
  {
    out << "total_task_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_task_time, out);
    out << ", ";
  }

  // member: pickup_successful
  {
    out << "pickup_successful: ";
    rosidl_generator_traits::value_to_yaml(msg.pickup_successful, out);
    out << ", ";
  }

  // member: transport_successful
  {
    out << "transport_successful: ";
    rosidl_generator_traits::value_to_yaml(msg.transport_successful, out);
    out << ", ";
  }

  // member: place_successful
  {
    out << "place_successful: ";
    rosidl_generator_traits::value_to_yaml(msg.place_successful, out);
    out << ", ";
  }

  // member: pickup_duration
  {
    out << "pickup_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.pickup_duration, out);
    out << ", ";
  }

  // member: transport_duration
  {
    out << "transport_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.transport_duration, out);
    out << ", ";
  }

  // member: place_duration
  {
    out << "place_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.place_duration, out);
    out << ", ";
  }

  // member: accuracy_score
  {
    out << "accuracy_score: ";
    rosidl_generator_traits::value_to_yaml(msg.accuracy_score, out);
    out << ", ";
  }

  // member: max_force_applied
  {
    out << "max_force_applied: ";
    rosidl_generator_traits::value_to_yaml(msg.max_force_applied, out);
    out << ", ";
  }

  // member: grasp_quality
  {
    out << "grasp_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_quality, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: error_details
  {
    out << "error_details: ";
    rosidl_generator_traits::value_to_yaml(msg.error_details, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PickAndPlace_Result & msg,
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

  // member: final_object_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_object_location:\n";
    to_block_style_yaml(msg.final_object_location, out, indentation + 2);
  }

  // member: total_task_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_task_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_task_time, out);
    out << "\n";
  }

  // member: pickup_successful
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pickup_successful: ";
    rosidl_generator_traits::value_to_yaml(msg.pickup_successful, out);
    out << "\n";
  }

  // member: transport_successful
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transport_successful: ";
    rosidl_generator_traits::value_to_yaml(msg.transport_successful, out);
    out << "\n";
  }

  // member: place_successful
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "place_successful: ";
    rosidl_generator_traits::value_to_yaml(msg.place_successful, out);
    out << "\n";
  }

  // member: pickup_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pickup_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.pickup_duration, out);
    out << "\n";
  }

  // member: transport_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transport_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.transport_duration, out);
    out << "\n";
  }

  // member: place_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "place_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.place_duration, out);
    out << "\n";
  }

  // member: accuracy_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accuracy_score: ";
    rosidl_generator_traits::value_to_yaml(msg.accuracy_score, out);
    out << "\n";
  }

  // member: max_force_applied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_force_applied: ";
    rosidl_generator_traits::value_to_yaml(msg.max_force_applied, out);
    out << "\n";
  }

  // member: grasp_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grasp_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_quality, out);
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

  // member: error_details
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_details: ";
    rosidl_generator_traits::value_to_yaml(msg.error_details, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PickAndPlace_Result & msg, bool use_flow_style = false)
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
  const day2::action::PickAndPlace_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::PickAndPlace_Result & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::PickAndPlace_Result>()
{
  return "day2::action::PickAndPlace_Result";
}

template<>
inline const char * name<day2::action::PickAndPlace_Result>()
{
  return "day2/action/PickAndPlace_Result";
}

template<>
struct has_fixed_size<day2::action::PickAndPlace_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::action::PickAndPlace_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::action::PickAndPlace_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'gripper_position'
// Member 'object_position'
// already included above
// #include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'current_velocity'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'phase_start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const PickAndPlace_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_phase
  {
    out << "current_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.current_phase, out);
    out << ", ";
  }

  // member: completion_percentage
  {
    out << "completion_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.completion_percentage, out);
    out << ", ";
  }

  // member: gripper_position
  {
    out << "gripper_position: ";
    to_flow_style_yaml(msg.gripper_position, out);
    out << ", ";
  }

  // member: object_position
  {
    out << "object_position: ";
    to_flow_style_yaml(msg.object_position, out);
    out << ", ";
  }

  // member: object_detected
  {
    out << "object_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.object_detected, out);
    out << ", ";
  }

  // member: object_in_grasp
  {
    out << "object_in_grasp: ";
    rosidl_generator_traits::value_to_yaml(msg.object_in_grasp, out);
    out << ", ";
  }

  // member: current_grasp_force
  {
    out << "current_grasp_force: ";
    rosidl_generator_traits::value_to_yaml(msg.current_grasp_force, out);
    out << ", ";
  }

  // member: transport_progress
  {
    out << "transport_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.transport_progress, out);
    out << ", ";
  }

  // member: force_torque_readings
  {
    if (msg.force_torque_readings.size() == 0) {
      out << "force_torque_readings: []";
    } else {
      out << "force_torque_readings: [";
      size_t pending_items = msg.force_torque_readings.size();
      for (auto item : msg.force_torque_readings) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: collision_warning
  {
    out << "collision_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_warning, out);
    out << ", ";
  }

  // member: estimated_time_remaining
  {
    out << "estimated_time_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_time_remaining, out);
    out << ", ";
  }

  // member: current_velocity
  {
    out << "current_velocity: ";
    to_flow_style_yaml(msg.current_velocity, out);
    out << ", ";
  }

  // member: current_behavior
  {
    out << "current_behavior: ";
    rosidl_generator_traits::value_to_yaml(msg.current_behavior, out);
    out << ", ";
  }

  // member: is_moving
  {
    out << "is_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.is_moving, out);
    out << ", ";
  }

  // member: grasp_stability
  {
    out << "grasp_stability: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_stability, out);
    out << ", ";
  }

  // member: path_deviation
  {
    out << "path_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.path_deviation, out);
    out << ", ";
  }

  // member: phase_start_time
  {
    out << "phase_start_time: ";
    to_flow_style_yaml(msg.phase_start_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PickAndPlace_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.current_phase, out);
    out << "\n";
  }

  // member: completion_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "completion_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.completion_percentage, out);
    out << "\n";
  }

  // member: gripper_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_position:\n";
    to_block_style_yaml(msg.gripper_position, out, indentation + 2);
  }

  // member: object_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_position:\n";
    to_block_style_yaml(msg.object_position, out, indentation + 2);
  }

  // member: object_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.object_detected, out);
    out << "\n";
  }

  // member: object_in_grasp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_in_grasp: ";
    rosidl_generator_traits::value_to_yaml(msg.object_in_grasp, out);
    out << "\n";
  }

  // member: current_grasp_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_grasp_force: ";
    rosidl_generator_traits::value_to_yaml(msg.current_grasp_force, out);
    out << "\n";
  }

  // member: transport_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transport_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.transport_progress, out);
    out << "\n";
  }

  // member: force_torque_readings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.force_torque_readings.size() == 0) {
      out << "force_torque_readings: []\n";
    } else {
      out << "force_torque_readings:\n";
      for (auto item : msg.force_torque_readings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: collision_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_warning, out);
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

  // member: current_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_velocity:\n";
    to_block_style_yaml(msg.current_velocity, out, indentation + 2);
  }

  // member: current_behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_behavior: ";
    rosidl_generator_traits::value_to_yaml(msg.current_behavior, out);
    out << "\n";
  }

  // member: is_moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.is_moving, out);
    out << "\n";
  }

  // member: grasp_stability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grasp_stability: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_stability, out);
    out << "\n";
  }

  // member: path_deviation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.path_deviation, out);
    out << "\n";
  }

  // member: phase_start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phase_start_time:\n";
    to_block_style_yaml(msg.phase_start_time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PickAndPlace_Feedback & msg, bool use_flow_style = false)
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
  const day2::action::PickAndPlace_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::PickAndPlace_Feedback & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::PickAndPlace_Feedback>()
{
  return "day2::action::PickAndPlace_Feedback";
}

template<>
inline const char * name<day2::action::PickAndPlace_Feedback>()
{
  return "day2/action/PickAndPlace_Feedback";
}

template<>
struct has_fixed_size<day2::action::PickAndPlace_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::action::PickAndPlace_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::action::PickAndPlace_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "day2/action/detail/pick_and_place__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const PickAndPlace_SendGoal_Request & msg,
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
  const PickAndPlace_SendGoal_Request & msg,
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

inline std::string to_yaml(const PickAndPlace_SendGoal_Request & msg, bool use_flow_style = false)
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
  const day2::action::PickAndPlace_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::PickAndPlace_SendGoal_Request & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::PickAndPlace_SendGoal_Request>()
{
  return "day2::action::PickAndPlace_SendGoal_Request";
}

template<>
inline const char * name<day2::action::PickAndPlace_SendGoal_Request>()
{
  return "day2/action/PickAndPlace_SendGoal_Request";
}

template<>
struct has_fixed_size<day2::action::PickAndPlace_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<day2::action::PickAndPlace_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<day2::action::PickAndPlace_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<day2::action::PickAndPlace_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<day2::action::PickAndPlace_SendGoal_Request>
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
  const PickAndPlace_SendGoal_Response & msg,
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
  const PickAndPlace_SendGoal_Response & msg,
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

inline std::string to_yaml(const PickAndPlace_SendGoal_Response & msg, bool use_flow_style = false)
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
  const day2::action::PickAndPlace_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::PickAndPlace_SendGoal_Response & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::PickAndPlace_SendGoal_Response>()
{
  return "day2::action::PickAndPlace_SendGoal_Response";
}

template<>
inline const char * name<day2::action::PickAndPlace_SendGoal_Response>()
{
  return "day2/action/PickAndPlace_SendGoal_Response";
}

template<>
struct has_fixed_size<day2::action::PickAndPlace_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<day2::action::PickAndPlace_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<day2::action::PickAndPlace_SendGoal_Response>
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
  const PickAndPlace_SendGoal_Event & msg,
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
  const PickAndPlace_SendGoal_Event & msg,
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

inline std::string to_yaml(const PickAndPlace_SendGoal_Event & msg, bool use_flow_style = false)
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
  const day2::action::PickAndPlace_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::PickAndPlace_SendGoal_Event & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::PickAndPlace_SendGoal_Event>()
{
  return "day2::action::PickAndPlace_SendGoal_Event";
}

template<>
inline const char * name<day2::action::PickAndPlace_SendGoal_Event>()
{
  return "day2/action/PickAndPlace_SendGoal_Event";
}

template<>
struct has_fixed_size<day2::action::PickAndPlace_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::action::PickAndPlace_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<day2::action::PickAndPlace_SendGoal_Request>::value && has_bounded_size<day2::action::PickAndPlace_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<day2::action::PickAndPlace_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<day2::action::PickAndPlace_SendGoal>()
{
  return "day2::action::PickAndPlace_SendGoal";
}

template<>
inline const char * name<day2::action::PickAndPlace_SendGoal>()
{
  return "day2/action/PickAndPlace_SendGoal";
}

template<>
struct has_fixed_size<day2::action::PickAndPlace_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<day2::action::PickAndPlace_SendGoal_Request>::value &&
    has_fixed_size<day2::action::PickAndPlace_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<day2::action::PickAndPlace_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<day2::action::PickAndPlace_SendGoal_Request>::value &&
    has_bounded_size<day2::action::PickAndPlace_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<day2::action::PickAndPlace_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<day2::action::PickAndPlace_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<day2::action::PickAndPlace_SendGoal_Response>
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
  const PickAndPlace_GetResult_Request & msg,
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
  const PickAndPlace_GetResult_Request & msg,
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

inline std::string to_yaml(const PickAndPlace_GetResult_Request & msg, bool use_flow_style = false)
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
  const day2::action::PickAndPlace_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::PickAndPlace_GetResult_Request & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::PickAndPlace_GetResult_Request>()
{
  return "day2::action::PickAndPlace_GetResult_Request";
}

template<>
inline const char * name<day2::action::PickAndPlace_GetResult_Request>()
{
  return "day2/action/PickAndPlace_GetResult_Request";
}

template<>
struct has_fixed_size<day2::action::PickAndPlace_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<day2::action::PickAndPlace_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<day2::action::PickAndPlace_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "day2/action/detail/pick_and_place__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const PickAndPlace_GetResult_Response & msg,
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
  const PickAndPlace_GetResult_Response & msg,
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

inline std::string to_yaml(const PickAndPlace_GetResult_Response & msg, bool use_flow_style = false)
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
  const day2::action::PickAndPlace_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::PickAndPlace_GetResult_Response & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::PickAndPlace_GetResult_Response>()
{
  return "day2::action::PickAndPlace_GetResult_Response";
}

template<>
inline const char * name<day2::action::PickAndPlace_GetResult_Response>()
{
  return "day2/action/PickAndPlace_GetResult_Response";
}

template<>
struct has_fixed_size<day2::action::PickAndPlace_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<day2::action::PickAndPlace_Result>::value> {};

template<>
struct has_bounded_size<day2::action::PickAndPlace_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<day2::action::PickAndPlace_Result>::value> {};

template<>
struct is_message<day2::action::PickAndPlace_GetResult_Response>
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
  const PickAndPlace_GetResult_Event & msg,
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
  const PickAndPlace_GetResult_Event & msg,
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

inline std::string to_yaml(const PickAndPlace_GetResult_Event & msg, bool use_flow_style = false)
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
  const day2::action::PickAndPlace_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::PickAndPlace_GetResult_Event & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::PickAndPlace_GetResult_Event>()
{
  return "day2::action::PickAndPlace_GetResult_Event";
}

template<>
inline const char * name<day2::action::PickAndPlace_GetResult_Event>()
{
  return "day2/action/PickAndPlace_GetResult_Event";
}

template<>
struct has_fixed_size<day2::action::PickAndPlace_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::action::PickAndPlace_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<day2::action::PickAndPlace_GetResult_Request>::value && has_bounded_size<day2::action::PickAndPlace_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<day2::action::PickAndPlace_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<day2::action::PickAndPlace_GetResult>()
{
  return "day2::action::PickAndPlace_GetResult";
}

template<>
inline const char * name<day2::action::PickAndPlace_GetResult>()
{
  return "day2/action/PickAndPlace_GetResult";
}

template<>
struct has_fixed_size<day2::action::PickAndPlace_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<day2::action::PickAndPlace_GetResult_Request>::value &&
    has_fixed_size<day2::action::PickAndPlace_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<day2::action::PickAndPlace_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<day2::action::PickAndPlace_GetResult_Request>::value &&
    has_bounded_size<day2::action::PickAndPlace_GetResult_Response>::value
  >
{
};

template<>
struct is_service<day2::action::PickAndPlace_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<day2::action::PickAndPlace_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<day2::action::PickAndPlace_GetResult_Response>
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
// #include "day2/action/detail/pick_and_place__traits.hpp"

namespace day2
{

namespace action
{

inline void to_flow_style_yaml(
  const PickAndPlace_FeedbackMessage & msg,
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
  const PickAndPlace_FeedbackMessage & msg,
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

inline std::string to_yaml(const PickAndPlace_FeedbackMessage & msg, bool use_flow_style = false)
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
  const day2::action::PickAndPlace_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::action::to_yaml() instead")]]
inline std::string to_yaml(const day2::action::PickAndPlace_FeedbackMessage & msg)
{
  return day2::action::to_yaml(msg);
}

template<>
inline const char * data_type<day2::action::PickAndPlace_FeedbackMessage>()
{
  return "day2::action::PickAndPlace_FeedbackMessage";
}

template<>
inline const char * name<day2::action::PickAndPlace_FeedbackMessage>()
{
  return "day2/action/PickAndPlace_FeedbackMessage";
}

template<>
struct has_fixed_size<day2::action::PickAndPlace_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<day2::action::PickAndPlace_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<day2::action::PickAndPlace_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<day2::action::PickAndPlace_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<day2::action::PickAndPlace_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<day2::action::PickAndPlace>
  : std::true_type
{
};

template<>
struct is_action_goal<day2::action::PickAndPlace_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<day2::action::PickAndPlace_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<day2::action::PickAndPlace_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // DAY2__ACTION__DETAIL__PICK_AND_PLACE__TRAITS_HPP_
