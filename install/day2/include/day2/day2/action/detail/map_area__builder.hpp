// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from day2:action/MapArea.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/action/map_area.hpp"


#ifndef DAY2__ACTION__DETAIL__MAP_AREA__BUILDER_HPP_
#define DAY2__ACTION__DETAIL__MAP_AREA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "day2/action/detail/map_area__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace day2
{

namespace action
{

namespace builder
{

class Init_MapArea_Goal_timeout_seconds
{
public:
  explicit Init_MapArea_Goal_timeout_seconds(::day2::action::MapArea_Goal & msg)
  : msg_(msg)
  {}
  ::day2::action::MapArea_Goal timeout_seconds(::day2::action::MapArea_Goal::_timeout_seconds_type arg)
  {
    msg_.timeout_seconds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::MapArea_Goal msg_;
};

class Init_MapArea_Goal_optimize_for_speed
{
public:
  explicit Init_MapArea_Goal_optimize_for_speed(::day2::action::MapArea_Goal & msg)
  : msg_(msg)
  {}
  Init_MapArea_Goal_timeout_seconds optimize_for_speed(::day2::action::MapArea_Goal::_optimize_for_speed_type arg)
  {
    msg_.optimize_for_speed = std::move(arg);
    return Init_MapArea_Goal_timeout_seconds(msg_);
  }

private:
  ::day2::action::MapArea_Goal msg_;
};

class Init_MapArea_Goal_optimize_for_accuracy
{
public:
  explicit Init_MapArea_Goal_optimize_for_accuracy(::day2::action::MapArea_Goal & msg)
  : msg_(msg)
  {}
  Init_MapArea_Goal_optimize_for_speed optimize_for_accuracy(::day2::action::MapArea_Goal::_optimize_for_accuracy_type arg)
  {
    msg_.optimize_for_accuracy = std::move(arg);
    return Init_MapArea_Goal_optimize_for_speed(msg_);
  }

private:
  ::day2::action::MapArea_Goal msg_;
};

class Init_MapArea_Goal_min_quality_threshold
{
public:
  explicit Init_MapArea_Goal_min_quality_threshold(::day2::action::MapArea_Goal & msg)
  : msg_(msg)
  {}
  Init_MapArea_Goal_optimize_for_accuracy min_quality_threshold(::day2::action::MapArea_Goal::_min_quality_threshold_type arg)
  {
    msg_.min_quality_threshold = std::move(arg);
    return Init_MapArea_Goal_optimize_for_accuracy(msg_);
  }

private:
  ::day2::action::MapArea_Goal msg_;
};

class Init_MapArea_Goal_slam_algorithm
{
public:
  explicit Init_MapArea_Goal_slam_algorithm(::day2::action::MapArea_Goal & msg)
  : msg_(msg)
  {}
  Init_MapArea_Goal_min_quality_threshold slam_algorithm(::day2::action::MapArea_Goal::_slam_algorithm_type arg)
  {
    msg_.slam_algorithm = std::move(arg);
    return Init_MapArea_Goal_min_quality_threshold(msg_);
  }

private:
  ::day2::action::MapArea_Goal msg_;
};

class Init_MapArea_Goal_use_slam
{
public:
  explicit Init_MapArea_Goal_use_slam(::day2::action::MapArea_Goal & msg)
  : msg_(msg)
  {}
  Init_MapArea_Goal_slam_algorithm use_slam(::day2::action::MapArea_Goal::_use_slam_type arg)
  {
    msg_.use_slam = std::move(arg);
    return Init_MapArea_Goal_slam_algorithm(msg_);
  }

private:
  ::day2::action::MapArea_Goal msg_;
};

class Init_MapArea_Goal_sensor_range
{
public:
  explicit Init_MapArea_Goal_sensor_range(::day2::action::MapArea_Goal & msg)
  : msg_(msg)
  {}
  Init_MapArea_Goal_use_slam sensor_range(::day2::action::MapArea_Goal::_sensor_range_type arg)
  {
    msg_.sensor_range = std::move(arg);
    return Init_MapArea_Goal_use_slam(msg_);
  }

private:
  ::day2::action::MapArea_Goal msg_;
};

class Init_MapArea_Goal_active_sensors
{
public:
  explicit Init_MapArea_Goal_active_sensors(::day2::action::MapArea_Goal & msg)
  : msg_(msg)
  {}
  Init_MapArea_Goal_sensor_range active_sensors(::day2::action::MapArea_Goal::_active_sensors_type arg)
  {
    msg_.active_sensors = std::move(arg);
    return Init_MapArea_Goal_sensor_range(msg_);
  }

private:
  ::day2::action::MapArea_Goal msg_;
};

class Init_MapArea_Goal_exploration_pattern
{
public:
  explicit Init_MapArea_Goal_exploration_pattern(::day2::action::MapArea_Goal & msg)
  : msg_(msg)
  {}
  Init_MapArea_Goal_active_sensors exploration_pattern(::day2::action::MapArea_Goal::_exploration_pattern_type arg)
  {
    msg_.exploration_pattern = std::move(arg);
    return Init_MapArea_Goal_active_sensors(msg_);
  }

private:
  ::day2::action::MapArea_Goal msg_;
};

class Init_MapArea_Goal_waypoint_spacing
{
public:
  explicit Init_MapArea_Goal_waypoint_spacing(::day2::action::MapArea_Goal & msg)
  : msg_(msg)
  {}
  Init_MapArea_Goal_exploration_pattern waypoint_spacing(::day2::action::MapArea_Goal::_waypoint_spacing_type arg)
  {
    msg_.waypoint_spacing = std::move(arg);
    return Init_MapArea_Goal_exploration_pattern(msg_);
  }

private:
  ::day2::action::MapArea_Goal msg_;
};

class Init_MapArea_Goal_sensor_overlap_ratio
{
public:
  explicit Init_MapArea_Goal_sensor_overlap_ratio(::day2::action::MapArea_Goal & msg)
  : msg_(msg)
  {}
  Init_MapArea_Goal_waypoint_spacing sensor_overlap_ratio(::day2::action::MapArea_Goal::_sensor_overlap_ratio_type arg)
  {
    msg_.sensor_overlap_ratio = std::move(arg);
    return Init_MapArea_Goal_waypoint_spacing(msg_);
  }

private:
  ::day2::action::MapArea_Goal msg_;
};

class Init_MapArea_Goal_max_exploration_speed
{
public:
  explicit Init_MapArea_Goal_max_exploration_speed(::day2::action::MapArea_Goal & msg)
  : msg_(msg)
  {}
  Init_MapArea_Goal_sensor_overlap_ratio max_exploration_speed(::day2::action::MapArea_Goal::_max_exploration_speed_type arg)
  {
    msg_.max_exploration_speed = std::move(arg);
    return Init_MapArea_Goal_sensor_overlap_ratio(msg_);
  }

private:
  ::day2::action::MapArea_Goal msg_;
};

class Init_MapArea_Goal_include_3d_data
{
public:
  explicit Init_MapArea_Goal_include_3d_data(::day2::action::MapArea_Goal & msg)
  : msg_(msg)
  {}
  Init_MapArea_Goal_max_exploration_speed include_3d_data(::day2::action::MapArea_Goal::_include_3d_data_type arg)
  {
    msg_.include_3d_data = std::move(arg);
    return Init_MapArea_Goal_max_exploration_speed(msg_);
  }

private:
  ::day2::action::MapArea_Goal msg_;
};

class Init_MapArea_Goal_coverage_percentage
{
public:
  explicit Init_MapArea_Goal_coverage_percentage(::day2::action::MapArea_Goal & msg)
  : msg_(msg)
  {}
  Init_MapArea_Goal_include_3d_data coverage_percentage(::day2::action::MapArea_Goal::_coverage_percentage_type arg)
  {
    msg_.coverage_percentage = std::move(arg);
    return Init_MapArea_Goal_include_3d_data(msg_);
  }

private:
  ::day2::action::MapArea_Goal msg_;
};

class Init_MapArea_Goal_mapping_mode
{
public:
  explicit Init_MapArea_Goal_mapping_mode(::day2::action::MapArea_Goal & msg)
  : msg_(msg)
  {}
  Init_MapArea_Goal_coverage_percentage mapping_mode(::day2::action::MapArea_Goal::_mapping_mode_type arg)
  {
    msg_.mapping_mode = std::move(arg);
    return Init_MapArea_Goal_coverage_percentage(msg_);
  }

private:
  ::day2::action::MapArea_Goal msg_;
};

class Init_MapArea_Goal_resolution
{
public:
  explicit Init_MapArea_Goal_resolution(::day2::action::MapArea_Goal & msg)
  : msg_(msg)
  {}
  Init_MapArea_Goal_mapping_mode resolution(::day2::action::MapArea_Goal::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return Init_MapArea_Goal_mapping_mode(msg_);
  }

private:
  ::day2::action::MapArea_Goal msg_;
};

class Init_MapArea_Goal_boundary_points
{
public:
  Init_MapArea_Goal_boundary_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapArea_Goal_resolution boundary_points(::day2::action::MapArea_Goal::_boundary_points_type arg)
  {
    msg_.boundary_points = std::move(arg);
    return Init_MapArea_Goal_resolution(msg_);
  }

private:
  ::day2::action::MapArea_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::MapArea_Goal>()
{
  return day2::action::builder::Init_MapArea_Goal_boundary_points();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_MapArea_Result_error_code
{
public:
  explicit Init_MapArea_Result_error_code(::day2::action::MapArea_Result & msg)
  : msg_(msg)
  {}
  ::day2::action::MapArea_Result error_code(::day2::action::MapArea_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::MapArea_Result msg_;
};

class Init_MapArea_Result_unknown_cells
{
public:
  explicit Init_MapArea_Result_unknown_cells(::day2::action::MapArea_Result & msg)
  : msg_(msg)
  {}
  Init_MapArea_Result_error_code unknown_cells(::day2::action::MapArea_Result::_unknown_cells_type arg)
  {
    msg_.unknown_cells = std::move(arg);
    return Init_MapArea_Result_error_code(msg_);
  }

private:
  ::day2::action::MapArea_Result msg_;
};

class Init_MapArea_Result_free_cells
{
public:
  explicit Init_MapArea_Result_free_cells(::day2::action::MapArea_Result & msg)
  : msg_(msg)
  {}
  Init_MapArea_Result_unknown_cells free_cells(::day2::action::MapArea_Result::_free_cells_type arg)
  {
    msg_.free_cells = std::move(arg);
    return Init_MapArea_Result_unknown_cells(msg_);
  }

private:
  ::day2::action::MapArea_Result msg_;
};

class Init_MapArea_Result_occupied_cells
{
public:
  explicit Init_MapArea_Result_occupied_cells(::day2::action::MapArea_Result & msg)
  : msg_(msg)
  {}
  Init_MapArea_Result_free_cells occupied_cells(::day2::action::MapArea_Result::_occupied_cells_type arg)
  {
    msg_.occupied_cells = std::move(arg);
    return Init_MapArea_Result_free_cells(msg_);
  }

private:
  ::day2::action::MapArea_Result msg_;
};

class Init_MapArea_Result_map_height_pixels
{
public:
  explicit Init_MapArea_Result_map_height_pixels(::day2::action::MapArea_Result & msg)
  : msg_(msg)
  {}
  Init_MapArea_Result_occupied_cells map_height_pixels(::day2::action::MapArea_Result::_map_height_pixels_type arg)
  {
    msg_.map_height_pixels = std::move(arg);
    return Init_MapArea_Result_occupied_cells(msg_);
  }

private:
  ::day2::action::MapArea_Result msg_;
};

class Init_MapArea_Result_map_width_pixels
{
public:
  explicit Init_MapArea_Result_map_width_pixels(::day2::action::MapArea_Result & msg)
  : msg_(msg)
  {}
  Init_MapArea_Result_map_height_pixels map_width_pixels(::day2::action::MapArea_Result::_map_width_pixels_type arg)
  {
    msg_.map_width_pixels = std::move(arg);
    return Init_MapArea_Result_map_height_pixels(msg_);
  }

private:
  ::day2::action::MapArea_Result msg_;
};

class Init_MapArea_Result_average_mapping_speed
{
public:
  explicit Init_MapArea_Result_average_mapping_speed(::day2::action::MapArea_Result & msg)
  : msg_(msg)
  {}
  Init_MapArea_Result_map_width_pixels average_mapping_speed(::day2::action::MapArea_Result::_average_mapping_speed_type arg)
  {
    msg_.average_mapping_speed = std::move(arg);
    return Init_MapArea_Result_map_width_pixels(msg_);
  }

private:
  ::day2::action::MapArea_Result msg_;
};

class Init_MapArea_Result_total_sensor_readings
{
public:
  explicit Init_MapArea_Result_total_sensor_readings(::day2::action::MapArea_Result & msg)
  : msg_(msg)
  {}
  Init_MapArea_Result_average_mapping_speed total_sensor_readings(::day2::action::MapArea_Result::_total_sensor_readings_type arg)
  {
    msg_.total_sensor_readings = std::move(arg);
    return Init_MapArea_Result_average_mapping_speed(msg_);
  }

private:
  ::day2::action::MapArea_Result msg_;
};

class Init_MapArea_Result_total_distance_traveled
{
public:
  explicit Init_MapArea_Result_total_distance_traveled(::day2::action::MapArea_Result & msg)
  : msg_(msg)
  {}
  Init_MapArea_Result_total_sensor_readings total_distance_traveled(::day2::action::MapArea_Result::_total_distance_traveled_type arg)
  {
    msg_.total_distance_traveled = std::move(arg);
    return Init_MapArea_Result_total_sensor_readings(msg_);
  }

private:
  ::day2::action::MapArea_Result msg_;
};

class Init_MapArea_Result_total_mapping_time
{
public:
  explicit Init_MapArea_Result_total_mapping_time(::day2::action::MapArea_Result & msg)
  : msg_(msg)
  {}
  Init_MapArea_Result_total_distance_traveled total_mapping_time(::day2::action::MapArea_Result::_total_mapping_time_type arg)
  {
    msg_.total_mapping_time = std::move(arg);
    return Init_MapArea_Result_total_distance_traveled(msg_);
  }

private:
  ::day2::action::MapArea_Result msg_;
};

class Init_MapArea_Result_feature_density
{
public:
  explicit Init_MapArea_Result_feature_density(::day2::action::MapArea_Result & msg)
  : msg_(msg)
  {}
  Init_MapArea_Result_total_mapping_time feature_density(::day2::action::MapArea_Result::_feature_density_type arg)
  {
    msg_.feature_density = std::move(arg);
    return Init_MapArea_Result_total_mapping_time(msg_);
  }

private:
  ::day2::action::MapArea_Result msg_;
};

class Init_MapArea_Result_map_accuracy
{
public:
  explicit Init_MapArea_Result_map_accuracy(::day2::action::MapArea_Result & msg)
  : msg_(msg)
  {}
  Init_MapArea_Result_feature_density map_accuracy(::day2::action::MapArea_Result::_map_accuracy_type arg)
  {
    msg_.map_accuracy = std::move(arg);
    return Init_MapArea_Result_feature_density(msg_);
  }

private:
  ::day2::action::MapArea_Result msg_;
};

class Init_MapArea_Result_coverage_percentage
{
public:
  explicit Init_MapArea_Result_coverage_percentage(::day2::action::MapArea_Result & msg)
  : msg_(msg)
  {}
  Init_MapArea_Result_map_accuracy coverage_percentage(::day2::action::MapArea_Result::_coverage_percentage_type arg)
  {
    msg_.coverage_percentage = std::move(arg);
    return Init_MapArea_Result_map_accuracy(msg_);
  }

private:
  ::day2::action::MapArea_Result msg_;
};

class Init_MapArea_Result_area_covered
{
public:
  explicit Init_MapArea_Result_area_covered(::day2::action::MapArea_Result & msg)
  : msg_(msg)
  {}
  Init_MapArea_Result_coverage_percentage area_covered(::day2::action::MapArea_Result::_area_covered_type arg)
  {
    msg_.area_covered = std::move(arg);
    return Init_MapArea_Result_coverage_percentage(msg_);
  }

private:
  ::day2::action::MapArea_Result msg_;
};

class Init_MapArea_Result_map_file_path
{
public:
  explicit Init_MapArea_Result_map_file_path(::day2::action::MapArea_Result & msg)
  : msg_(msg)
  {}
  Init_MapArea_Result_area_covered map_file_path(::day2::action::MapArea_Result::_map_file_path_type arg)
  {
    msg_.map_file_path = std::move(arg);
    return Init_MapArea_Result_area_covered(msg_);
  }

private:
  ::day2::action::MapArea_Result msg_;
};

class Init_MapArea_Result_map_topic
{
public:
  explicit Init_MapArea_Result_map_topic(::day2::action::MapArea_Result & msg)
  : msg_(msg)
  {}
  Init_MapArea_Result_map_file_path map_topic(::day2::action::MapArea_Result::_map_topic_type arg)
  {
    msg_.map_topic = std::move(arg);
    return Init_MapArea_Result_map_file_path(msg_);
  }

private:
  ::day2::action::MapArea_Result msg_;
};

class Init_MapArea_Result_result_message
{
public:
  explicit Init_MapArea_Result_result_message(::day2::action::MapArea_Result & msg)
  : msg_(msg)
  {}
  Init_MapArea_Result_map_topic result_message(::day2::action::MapArea_Result::_result_message_type arg)
  {
    msg_.result_message = std::move(arg);
    return Init_MapArea_Result_map_topic(msg_);
  }

private:
  ::day2::action::MapArea_Result msg_;
};

class Init_MapArea_Result_success
{
public:
  Init_MapArea_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapArea_Result_result_message success(::day2::action::MapArea_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MapArea_Result_result_message(msg_);
  }

private:
  ::day2::action::MapArea_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::MapArea_Result>()
{
  return day2::action::builder::Init_MapArea_Result_success();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_MapArea_Feedback_last_sensor_update
{
public:
  explicit Init_MapArea_Feedback_last_sensor_update(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  ::day2::action::MapArea_Feedback last_sensor_update(::day2::action::MapArea_Feedback::_last_sensor_update_type arg)
  {
    msg_.last_sensor_update = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_storage_space_used
{
public:
  explicit Init_MapArea_Feedback_storage_space_used(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_last_sensor_update storage_space_used(::day2::action::MapArea_Feedback::_storage_space_used_type arg)
  {
    msg_.storage_space_used = std::move(arg);
    return Init_MapArea_Feedback_last_sensor_update(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_memory_usage
{
public:
  explicit Init_MapArea_Feedback_memory_usage(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_storage_space_used memory_usage(::day2::action::MapArea_Feedback::_memory_usage_type arg)
  {
    msg_.memory_usage = std::move(arg);
    return Init_MapArea_Feedback_storage_space_used(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_cpu_usage
{
public:
  explicit Init_MapArea_Feedback_cpu_usage(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_memory_usage cpu_usage(::day2::action::MapArea_Feedback::_cpu_usage_type arg)
  {
    msg_.cpu_usage = std::move(arg);
    return Init_MapArea_Feedback_memory_usage(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_pose_uncertainty
{
public:
  explicit Init_MapArea_Feedback_pose_uncertainty(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_cpu_usage pose_uncertainty(::day2::action::MapArea_Feedback::_pose_uncertainty_type arg)
  {
    msg_.pose_uncertainty = std::move(arg);
    return Init_MapArea_Feedback_cpu_usage(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_loop_closures_detected
{
public:
  explicit Init_MapArea_Feedback_loop_closures_detected(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_pose_uncertainty loop_closures_detected(::day2::action::MapArea_Feedback::_loop_closures_detected_type arg)
  {
    msg_.loop_closures_detected = std::move(arg);
    return Init_MapArea_Feedback_pose_uncertainty(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_localization_confidence
{
public:
  explicit Init_MapArea_Feedback_localization_confidence(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_loop_closures_detected localization_confidence(::day2::action::MapArea_Feedback::_localization_confidence_type arg)
  {
    msg_.localization_confidence = std::move(arg);
    return Init_MapArea_Feedback_loop_closures_detected(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_sensor_readings_per_second
{
public:
  explicit Init_MapArea_Feedback_sensor_readings_per_second(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_localization_confidence sensor_readings_per_second(::day2::action::MapArea_Feedback::_sensor_readings_per_second_type arg)
  {
    msg_.sensor_readings_per_second = std::move(arg);
    return Init_MapArea_Feedback_localization_confidence(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_sensor_data_quality
{
public:
  explicit Init_MapArea_Feedback_sensor_data_quality(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_sensor_readings_per_second sensor_data_quality(::day2::action::MapArea_Feedback::_sensor_data_quality_type arg)
  {
    msg_.sensor_data_quality = std::move(arg);
    return Init_MapArea_Feedback_sensor_readings_per_second(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_sensor_active_status
{
public:
  explicit Init_MapArea_Feedback_sensor_active_status(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_sensor_data_quality sensor_active_status(::day2::action::MapArea_Feedback::_sensor_active_status_type arg)
  {
    msg_.sensor_active_status = std::move(arg);
    return Init_MapArea_Feedback_sensor_data_quality(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_new_features_detected
{
public:
  explicit Init_MapArea_Feedback_new_features_detected(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_sensor_active_status new_features_detected(::day2::action::MapArea_Feedback::_new_features_detected_type arg)
  {
    msg_.new_features_detected = std::move(arg);
    return Init_MapArea_Feedback_sensor_active_status(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_current_resolution
{
public:
  explicit Init_MapArea_Feedback_current_resolution(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_new_features_detected current_resolution(::day2::action::MapArea_Feedback::_current_resolution_type arg)
  {
    msg_.current_resolution = std::move(arg);
    return Init_MapArea_Feedback_new_features_detected(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_current_map_height
{
public:
  explicit Init_MapArea_Feedback_current_map_height(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_current_resolution current_map_height(::day2::action::MapArea_Feedback::_current_map_height_type arg)
  {
    msg_.current_map_height = std::move(arg);
    return Init_MapArea_Feedback_current_resolution(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_current_map_width
{
public:
  explicit Init_MapArea_Feedback_current_map_width(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_current_map_height current_map_width(::day2::action::MapArea_Feedback::_current_map_width_type arg)
  {
    msg_.current_map_width = std::move(arg);
    return Init_MapArea_Feedback_current_map_height(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_total_waypoints
{
public:
  explicit Init_MapArea_Feedback_total_waypoints(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_current_map_width total_waypoints(::day2::action::MapArea_Feedback::_total_waypoints_type arg)
  {
    msg_.total_waypoints = std::move(arg);
    return Init_MapArea_Feedback_current_map_width(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_waypoints_completed
{
public:
  explicit Init_MapArea_Feedback_waypoints_completed(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_total_waypoints waypoints_completed(::day2::action::MapArea_Feedback::_waypoints_completed_type arg)
  {
    msg_.waypoints_completed = std::move(arg);
    return Init_MapArea_Feedback_total_waypoints(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_next_target
{
public:
  explicit Init_MapArea_Feedback_next_target(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_waypoints_completed next_target(::day2::action::MapArea_Feedback::_next_target_type arg)
  {
    msg_.next_target = std::move(arg);
    return Init_MapArea_Feedback_waypoints_completed(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_current_phase
{
public:
  explicit Init_MapArea_Feedback_current_phase(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_next_target current_phase(::day2::action::MapArea_Feedback::_current_phase_type arg)
  {
    msg_.current_phase = std::move(arg);
    return Init_MapArea_Feedback_next_target(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_estimated_time_remaining
{
public:
  explicit Init_MapArea_Feedback_estimated_time_remaining(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_current_phase estimated_time_remaining(::day2::action::MapArea_Feedback::_estimated_time_remaining_type arg)
  {
    msg_.estimated_time_remaining = std::move(arg);
    return Init_MapArea_Feedback_current_phase(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_coverage_percentage
{
public:
  explicit Init_MapArea_Feedback_coverage_percentage(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_estimated_time_remaining coverage_percentage(::day2::action::MapArea_Feedback::_coverage_percentage_type arg)
  {
    msg_.coverage_percentage = std::move(arg);
    return Init_MapArea_Feedback_estimated_time_remaining(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_area_mapped_so_far
{
public:
  explicit Init_MapArea_Feedback_area_mapped_so_far(::day2::action::MapArea_Feedback & msg)
  : msg_(msg)
  {}
  Init_MapArea_Feedback_coverage_percentage area_mapped_so_far(::day2::action::MapArea_Feedback::_area_mapped_so_far_type arg)
  {
    msg_.area_mapped_so_far = std::move(arg);
    return Init_MapArea_Feedback_coverage_percentage(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

class Init_MapArea_Feedback_current_position
{
public:
  Init_MapArea_Feedback_current_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapArea_Feedback_area_mapped_so_far current_position(::day2::action::MapArea_Feedback::_current_position_type arg)
  {
    msg_.current_position = std::move(arg);
    return Init_MapArea_Feedback_area_mapped_so_far(msg_);
  }

private:
  ::day2::action::MapArea_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::MapArea_Feedback>()
{
  return day2::action::builder::Init_MapArea_Feedback_current_position();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_MapArea_SendGoal_Request_goal
{
public:
  explicit Init_MapArea_SendGoal_Request_goal(::day2::action::MapArea_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::day2::action::MapArea_SendGoal_Request goal(::day2::action::MapArea_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::MapArea_SendGoal_Request msg_;
};

class Init_MapArea_SendGoal_Request_goal_id
{
public:
  Init_MapArea_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapArea_SendGoal_Request_goal goal_id(::day2::action::MapArea_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MapArea_SendGoal_Request_goal(msg_);
  }

private:
  ::day2::action::MapArea_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::MapArea_SendGoal_Request>()
{
  return day2::action::builder::Init_MapArea_SendGoal_Request_goal_id();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_MapArea_SendGoal_Response_stamp
{
public:
  explicit Init_MapArea_SendGoal_Response_stamp(::day2::action::MapArea_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::day2::action::MapArea_SendGoal_Response stamp(::day2::action::MapArea_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::MapArea_SendGoal_Response msg_;
};

class Init_MapArea_SendGoal_Response_accepted
{
public:
  Init_MapArea_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapArea_SendGoal_Response_stamp accepted(::day2::action::MapArea_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MapArea_SendGoal_Response_stamp(msg_);
  }

private:
  ::day2::action::MapArea_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::MapArea_SendGoal_Response>()
{
  return day2::action::builder::Init_MapArea_SendGoal_Response_accepted();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_MapArea_SendGoal_Event_response
{
public:
  explicit Init_MapArea_SendGoal_Event_response(::day2::action::MapArea_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::day2::action::MapArea_SendGoal_Event response(::day2::action::MapArea_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::MapArea_SendGoal_Event msg_;
};

class Init_MapArea_SendGoal_Event_request
{
public:
  explicit Init_MapArea_SendGoal_Event_request(::day2::action::MapArea_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_MapArea_SendGoal_Event_response request(::day2::action::MapArea_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MapArea_SendGoal_Event_response(msg_);
  }

private:
  ::day2::action::MapArea_SendGoal_Event msg_;
};

class Init_MapArea_SendGoal_Event_info
{
public:
  Init_MapArea_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapArea_SendGoal_Event_request info(::day2::action::MapArea_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MapArea_SendGoal_Event_request(msg_);
  }

private:
  ::day2::action::MapArea_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::MapArea_SendGoal_Event>()
{
  return day2::action::builder::Init_MapArea_SendGoal_Event_info();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_MapArea_GetResult_Request_goal_id
{
public:
  Init_MapArea_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::day2::action::MapArea_GetResult_Request goal_id(::day2::action::MapArea_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::MapArea_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::MapArea_GetResult_Request>()
{
  return day2::action::builder::Init_MapArea_GetResult_Request_goal_id();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_MapArea_GetResult_Response_result
{
public:
  explicit Init_MapArea_GetResult_Response_result(::day2::action::MapArea_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::day2::action::MapArea_GetResult_Response result(::day2::action::MapArea_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::MapArea_GetResult_Response msg_;
};

class Init_MapArea_GetResult_Response_status
{
public:
  Init_MapArea_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapArea_GetResult_Response_result status(::day2::action::MapArea_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MapArea_GetResult_Response_result(msg_);
  }

private:
  ::day2::action::MapArea_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::MapArea_GetResult_Response>()
{
  return day2::action::builder::Init_MapArea_GetResult_Response_status();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_MapArea_GetResult_Event_response
{
public:
  explicit Init_MapArea_GetResult_Event_response(::day2::action::MapArea_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::day2::action::MapArea_GetResult_Event response(::day2::action::MapArea_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::MapArea_GetResult_Event msg_;
};

class Init_MapArea_GetResult_Event_request
{
public:
  explicit Init_MapArea_GetResult_Event_request(::day2::action::MapArea_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_MapArea_GetResult_Event_response request(::day2::action::MapArea_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MapArea_GetResult_Event_response(msg_);
  }

private:
  ::day2::action::MapArea_GetResult_Event msg_;
};

class Init_MapArea_GetResult_Event_info
{
public:
  Init_MapArea_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapArea_GetResult_Event_request info(::day2::action::MapArea_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MapArea_GetResult_Event_request(msg_);
  }

private:
  ::day2::action::MapArea_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::MapArea_GetResult_Event>()
{
  return day2::action::builder::Init_MapArea_GetResult_Event_info();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_MapArea_FeedbackMessage_feedback
{
public:
  explicit Init_MapArea_FeedbackMessage_feedback(::day2::action::MapArea_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::day2::action::MapArea_FeedbackMessage feedback(::day2::action::MapArea_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::MapArea_FeedbackMessage msg_;
};

class Init_MapArea_FeedbackMessage_goal_id
{
public:
  Init_MapArea_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapArea_FeedbackMessage_feedback goal_id(::day2::action::MapArea_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MapArea_FeedbackMessage_feedback(msg_);
  }

private:
  ::day2::action::MapArea_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::MapArea_FeedbackMessage>()
{
  return day2::action::builder::Init_MapArea_FeedbackMessage_goal_id();
}

}  // namespace day2

#endif  // DAY2__ACTION__DETAIL__MAP_AREA__BUILDER_HPP_
