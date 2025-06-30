// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from day2:action/PickAndPlace.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/action/pick_and_place.hpp"


#ifndef DAY2__ACTION__DETAIL__PICK_AND_PLACE__BUILDER_HPP_
#define DAY2__ACTION__DETAIL__PICK_AND_PLACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "day2/action/detail/pick_and_place__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace day2
{

namespace action
{

namespace builder
{

class Init_PickAndPlace_Goal_forbidden_zones
{
public:
  explicit Init_PickAndPlace_Goal_forbidden_zones(::day2::action::PickAndPlace_Goal & msg)
  : msg_(msg)
  {}
  ::day2::action::PickAndPlace_Goal forbidden_zones(::day2::action::PickAndPlace_Goal::_forbidden_zones_type arg)
  {
    msg_.forbidden_zones = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::PickAndPlace_Goal msg_;
};

class Init_PickAndPlace_Goal_enable_force_feedback
{
public:
  explicit Init_PickAndPlace_Goal_enable_force_feedback(::day2::action::PickAndPlace_Goal & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Goal_forbidden_zones enable_force_feedback(::day2::action::PickAndPlace_Goal::_enable_force_feedback_type arg)
  {
    msg_.enable_force_feedback = std::move(arg);
    return Init_PickAndPlace_Goal_forbidden_zones(msg_);
  }

private:
  ::day2::action::PickAndPlace_Goal msg_;
};

class Init_PickAndPlace_Goal_collision_threshold
{
public:
  explicit Init_PickAndPlace_Goal_collision_threshold(::day2::action::PickAndPlace_Goal & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Goal_enable_force_feedback collision_threshold(::day2::action::PickAndPlace_Goal::_collision_threshold_type arg)
  {
    msg_.collision_threshold = std::move(arg);
    return Init_PickAndPlace_Goal_enable_force_feedback(msg_);
  }

private:
  ::day2::action::PickAndPlace_Goal msg_;
};

class Init_PickAndPlace_Goal_timeout_seconds
{
public:
  explicit Init_PickAndPlace_Goal_timeout_seconds(::day2::action::PickAndPlace_Goal & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Goal_collision_threshold timeout_seconds(::day2::action::PickAndPlace_Goal::_timeout_seconds_type arg)
  {
    msg_.timeout_seconds = std::move(arg);
    return Init_PickAndPlace_Goal_collision_threshold(msg_);
  }

private:
  ::day2::action::PickAndPlace_Goal msg_;
};

class Init_PickAndPlace_Goal_use_careful_mode
{
public:
  explicit Init_PickAndPlace_Goal_use_careful_mode(::day2::action::PickAndPlace_Goal & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Goal_timeout_seconds use_careful_mode(::day2::action::PickAndPlace_Goal::_use_careful_mode_type arg)
  {
    msg_.use_careful_mode = std::move(arg);
    return Init_PickAndPlace_Goal_timeout_seconds(msg_);
  }

private:
  ::day2::action::PickAndPlace_Goal msg_;
};

class Init_PickAndPlace_Goal_max_acceleration
{
public:
  explicit Init_PickAndPlace_Goal_max_acceleration(::day2::action::PickAndPlace_Goal & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Goal_use_careful_mode max_acceleration(::day2::action::PickAndPlace_Goal::_max_acceleration_type arg)
  {
    msg_.max_acceleration = std::move(arg);
    return Init_PickAndPlace_Goal_use_careful_mode(msg_);
  }

private:
  ::day2::action::PickAndPlace_Goal msg_;
};

class Init_PickAndPlace_Goal_max_velocity
{
public:
  explicit Init_PickAndPlace_Goal_max_velocity(::day2::action::PickAndPlace_Goal & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Goal_max_acceleration max_velocity(::day2::action::PickAndPlace_Goal::_max_velocity_type arg)
  {
    msg_.max_velocity = std::move(arg);
    return Init_PickAndPlace_Goal_max_acceleration(msg_);
  }

private:
  ::day2::action::PickAndPlace_Goal msg_;
};

class Init_PickAndPlace_Goal_lift_height
{
public:
  explicit Init_PickAndPlace_Goal_lift_height(::day2::action::PickAndPlace_Goal & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Goal_max_velocity lift_height(::day2::action::PickAndPlace_Goal::_lift_height_type arg)
  {
    msg_.lift_height = std::move(arg);
    return Init_PickAndPlace_Goal_max_velocity(msg_);
  }

private:
  ::day2::action::PickAndPlace_Goal msg_;
};

class Init_PickAndPlace_Goal_approach_distance
{
public:
  explicit Init_PickAndPlace_Goal_approach_distance(::day2::action::PickAndPlace_Goal & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Goal_lift_height approach_distance(::day2::action::PickAndPlace_Goal::_approach_distance_type arg)
  {
    msg_.approach_distance = std::move(arg);
    return Init_PickAndPlace_Goal_lift_height(msg_);
  }

private:
  ::day2::action::PickAndPlace_Goal msg_;
};

class Init_PickAndPlace_Goal_grasp_force
{
public:
  explicit Init_PickAndPlace_Goal_grasp_force(::day2::action::PickAndPlace_Goal & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Goal_approach_distance grasp_force(::day2::action::PickAndPlace_Goal::_grasp_force_type arg)
  {
    msg_.grasp_force = std::move(arg);
    return Init_PickAndPlace_Goal_approach_distance(msg_);
  }

private:
  ::day2::action::PickAndPlace_Goal msg_;
};

class Init_PickAndPlace_Goal_grasp_type
{
public:
  explicit Init_PickAndPlace_Goal_grasp_type(::day2::action::PickAndPlace_Goal & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Goal_grasp_force grasp_type(::day2::action::PickAndPlace_Goal::_grasp_type_type arg)
  {
    msg_.grasp_type = std::move(arg);
    return Init_PickAndPlace_Goal_grasp_force(msg_);
  }

private:
  ::day2::action::PickAndPlace_Goal msg_;
};

class Init_PickAndPlace_Goal_object_dimensions
{
public:
  explicit Init_PickAndPlace_Goal_object_dimensions(::day2::action::PickAndPlace_Goal & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Goal_grasp_type object_dimensions(::day2::action::PickAndPlace_Goal::_object_dimensions_type arg)
  {
    msg_.object_dimensions = std::move(arg);
    return Init_PickAndPlace_Goal_grasp_type(msg_);
  }

private:
  ::day2::action::PickAndPlace_Goal msg_;
};

class Init_PickAndPlace_Goal_object_weight
{
public:
  explicit Init_PickAndPlace_Goal_object_weight(::day2::action::PickAndPlace_Goal & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Goal_object_dimensions object_weight(::day2::action::PickAndPlace_Goal::_object_weight_type arg)
  {
    msg_.object_weight = std::move(arg);
    return Init_PickAndPlace_Goal_object_dimensions(msg_);
  }

private:
  ::day2::action::PickAndPlace_Goal msg_;
};

class Init_PickAndPlace_Goal_object_type
{
public:
  explicit Init_PickAndPlace_Goal_object_type(::day2::action::PickAndPlace_Goal & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Goal_object_weight object_type(::day2::action::PickAndPlace_Goal::_object_type_type arg)
  {
    msg_.object_type = std::move(arg);
    return Init_PickAndPlace_Goal_object_weight(msg_);
  }

private:
  ::day2::action::PickAndPlace_Goal msg_;
};

class Init_PickAndPlace_Goal_place_location
{
public:
  explicit Init_PickAndPlace_Goal_place_location(::day2::action::PickAndPlace_Goal & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Goal_object_type place_location(::day2::action::PickAndPlace_Goal::_place_location_type arg)
  {
    msg_.place_location = std::move(arg);
    return Init_PickAndPlace_Goal_object_type(msg_);
  }

private:
  ::day2::action::PickAndPlace_Goal msg_;
};

class Init_PickAndPlace_Goal_pickup_location
{
public:
  explicit Init_PickAndPlace_Goal_pickup_location(::day2::action::PickAndPlace_Goal & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Goal_place_location pickup_location(::day2::action::PickAndPlace_Goal::_pickup_location_type arg)
  {
    msg_.pickup_location = std::move(arg);
    return Init_PickAndPlace_Goal_place_location(msg_);
  }

private:
  ::day2::action::PickAndPlace_Goal msg_;
};

class Init_PickAndPlace_Goal_object_id
{
public:
  Init_PickAndPlace_Goal_object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickAndPlace_Goal_pickup_location object_id(::day2::action::PickAndPlace_Goal::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_PickAndPlace_Goal_pickup_location(msg_);
  }

private:
  ::day2::action::PickAndPlace_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::PickAndPlace_Goal>()
{
  return day2::action::builder::Init_PickAndPlace_Goal_object_id();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_PickAndPlace_Result_error_details
{
public:
  explicit Init_PickAndPlace_Result_error_details(::day2::action::PickAndPlace_Result & msg)
  : msg_(msg)
  {}
  ::day2::action::PickAndPlace_Result error_details(::day2::action::PickAndPlace_Result::_error_details_type arg)
  {
    msg_.error_details = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::PickAndPlace_Result msg_;
};

class Init_PickAndPlace_Result_error_code
{
public:
  explicit Init_PickAndPlace_Result_error_code(::day2::action::PickAndPlace_Result & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Result_error_details error_code(::day2::action::PickAndPlace_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_PickAndPlace_Result_error_details(msg_);
  }

private:
  ::day2::action::PickAndPlace_Result msg_;
};

class Init_PickAndPlace_Result_grasp_quality
{
public:
  explicit Init_PickAndPlace_Result_grasp_quality(::day2::action::PickAndPlace_Result & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Result_error_code grasp_quality(::day2::action::PickAndPlace_Result::_grasp_quality_type arg)
  {
    msg_.grasp_quality = std::move(arg);
    return Init_PickAndPlace_Result_error_code(msg_);
  }

private:
  ::day2::action::PickAndPlace_Result msg_;
};

class Init_PickAndPlace_Result_max_force_applied
{
public:
  explicit Init_PickAndPlace_Result_max_force_applied(::day2::action::PickAndPlace_Result & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Result_grasp_quality max_force_applied(::day2::action::PickAndPlace_Result::_max_force_applied_type arg)
  {
    msg_.max_force_applied = std::move(arg);
    return Init_PickAndPlace_Result_grasp_quality(msg_);
  }

private:
  ::day2::action::PickAndPlace_Result msg_;
};

class Init_PickAndPlace_Result_accuracy_score
{
public:
  explicit Init_PickAndPlace_Result_accuracy_score(::day2::action::PickAndPlace_Result & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Result_max_force_applied accuracy_score(::day2::action::PickAndPlace_Result::_accuracy_score_type arg)
  {
    msg_.accuracy_score = std::move(arg);
    return Init_PickAndPlace_Result_max_force_applied(msg_);
  }

private:
  ::day2::action::PickAndPlace_Result msg_;
};

class Init_PickAndPlace_Result_place_duration
{
public:
  explicit Init_PickAndPlace_Result_place_duration(::day2::action::PickAndPlace_Result & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Result_accuracy_score place_duration(::day2::action::PickAndPlace_Result::_place_duration_type arg)
  {
    msg_.place_duration = std::move(arg);
    return Init_PickAndPlace_Result_accuracy_score(msg_);
  }

private:
  ::day2::action::PickAndPlace_Result msg_;
};

class Init_PickAndPlace_Result_transport_duration
{
public:
  explicit Init_PickAndPlace_Result_transport_duration(::day2::action::PickAndPlace_Result & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Result_place_duration transport_duration(::day2::action::PickAndPlace_Result::_transport_duration_type arg)
  {
    msg_.transport_duration = std::move(arg);
    return Init_PickAndPlace_Result_place_duration(msg_);
  }

private:
  ::day2::action::PickAndPlace_Result msg_;
};

class Init_PickAndPlace_Result_pickup_duration
{
public:
  explicit Init_PickAndPlace_Result_pickup_duration(::day2::action::PickAndPlace_Result & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Result_transport_duration pickup_duration(::day2::action::PickAndPlace_Result::_pickup_duration_type arg)
  {
    msg_.pickup_duration = std::move(arg);
    return Init_PickAndPlace_Result_transport_duration(msg_);
  }

private:
  ::day2::action::PickAndPlace_Result msg_;
};

class Init_PickAndPlace_Result_place_successful
{
public:
  explicit Init_PickAndPlace_Result_place_successful(::day2::action::PickAndPlace_Result & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Result_pickup_duration place_successful(::day2::action::PickAndPlace_Result::_place_successful_type arg)
  {
    msg_.place_successful = std::move(arg);
    return Init_PickAndPlace_Result_pickup_duration(msg_);
  }

private:
  ::day2::action::PickAndPlace_Result msg_;
};

class Init_PickAndPlace_Result_transport_successful
{
public:
  explicit Init_PickAndPlace_Result_transport_successful(::day2::action::PickAndPlace_Result & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Result_place_successful transport_successful(::day2::action::PickAndPlace_Result::_transport_successful_type arg)
  {
    msg_.transport_successful = std::move(arg);
    return Init_PickAndPlace_Result_place_successful(msg_);
  }

private:
  ::day2::action::PickAndPlace_Result msg_;
};

class Init_PickAndPlace_Result_pickup_successful
{
public:
  explicit Init_PickAndPlace_Result_pickup_successful(::day2::action::PickAndPlace_Result & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Result_transport_successful pickup_successful(::day2::action::PickAndPlace_Result::_pickup_successful_type arg)
  {
    msg_.pickup_successful = std::move(arg);
    return Init_PickAndPlace_Result_transport_successful(msg_);
  }

private:
  ::day2::action::PickAndPlace_Result msg_;
};

class Init_PickAndPlace_Result_total_task_time
{
public:
  explicit Init_PickAndPlace_Result_total_task_time(::day2::action::PickAndPlace_Result & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Result_pickup_successful total_task_time(::day2::action::PickAndPlace_Result::_total_task_time_type arg)
  {
    msg_.total_task_time = std::move(arg);
    return Init_PickAndPlace_Result_pickup_successful(msg_);
  }

private:
  ::day2::action::PickAndPlace_Result msg_;
};

class Init_PickAndPlace_Result_final_object_location
{
public:
  explicit Init_PickAndPlace_Result_final_object_location(::day2::action::PickAndPlace_Result & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Result_total_task_time final_object_location(::day2::action::PickAndPlace_Result::_final_object_location_type arg)
  {
    msg_.final_object_location = std::move(arg);
    return Init_PickAndPlace_Result_total_task_time(msg_);
  }

private:
  ::day2::action::PickAndPlace_Result msg_;
};

class Init_PickAndPlace_Result_result_message
{
public:
  explicit Init_PickAndPlace_Result_result_message(::day2::action::PickAndPlace_Result & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Result_final_object_location result_message(::day2::action::PickAndPlace_Result::_result_message_type arg)
  {
    msg_.result_message = std::move(arg);
    return Init_PickAndPlace_Result_final_object_location(msg_);
  }

private:
  ::day2::action::PickAndPlace_Result msg_;
};

class Init_PickAndPlace_Result_success
{
public:
  Init_PickAndPlace_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickAndPlace_Result_result_message success(::day2::action::PickAndPlace_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PickAndPlace_Result_result_message(msg_);
  }

private:
  ::day2::action::PickAndPlace_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::PickAndPlace_Result>()
{
  return day2::action::builder::Init_PickAndPlace_Result_success();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_PickAndPlace_Feedback_phase_start_time
{
public:
  explicit Init_PickAndPlace_Feedback_phase_start_time(::day2::action::PickAndPlace_Feedback & msg)
  : msg_(msg)
  {}
  ::day2::action::PickAndPlace_Feedback phase_start_time(::day2::action::PickAndPlace_Feedback::_phase_start_time_type arg)
  {
    msg_.phase_start_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::PickAndPlace_Feedback msg_;
};

class Init_PickAndPlace_Feedback_path_deviation
{
public:
  explicit Init_PickAndPlace_Feedback_path_deviation(::day2::action::PickAndPlace_Feedback & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Feedback_phase_start_time path_deviation(::day2::action::PickAndPlace_Feedback::_path_deviation_type arg)
  {
    msg_.path_deviation = std::move(arg);
    return Init_PickAndPlace_Feedback_phase_start_time(msg_);
  }

private:
  ::day2::action::PickAndPlace_Feedback msg_;
};

class Init_PickAndPlace_Feedback_grasp_stability
{
public:
  explicit Init_PickAndPlace_Feedback_grasp_stability(::day2::action::PickAndPlace_Feedback & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Feedback_path_deviation grasp_stability(::day2::action::PickAndPlace_Feedback::_grasp_stability_type arg)
  {
    msg_.grasp_stability = std::move(arg);
    return Init_PickAndPlace_Feedback_path_deviation(msg_);
  }

private:
  ::day2::action::PickAndPlace_Feedback msg_;
};

class Init_PickAndPlace_Feedback_is_moving
{
public:
  explicit Init_PickAndPlace_Feedback_is_moving(::day2::action::PickAndPlace_Feedback & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Feedback_grasp_stability is_moving(::day2::action::PickAndPlace_Feedback::_is_moving_type arg)
  {
    msg_.is_moving = std::move(arg);
    return Init_PickAndPlace_Feedback_grasp_stability(msg_);
  }

private:
  ::day2::action::PickAndPlace_Feedback msg_;
};

class Init_PickAndPlace_Feedback_current_behavior
{
public:
  explicit Init_PickAndPlace_Feedback_current_behavior(::day2::action::PickAndPlace_Feedback & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Feedback_is_moving current_behavior(::day2::action::PickAndPlace_Feedback::_current_behavior_type arg)
  {
    msg_.current_behavior = std::move(arg);
    return Init_PickAndPlace_Feedback_is_moving(msg_);
  }

private:
  ::day2::action::PickAndPlace_Feedback msg_;
};

class Init_PickAndPlace_Feedback_current_velocity
{
public:
  explicit Init_PickAndPlace_Feedback_current_velocity(::day2::action::PickAndPlace_Feedback & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Feedback_current_behavior current_velocity(::day2::action::PickAndPlace_Feedback::_current_velocity_type arg)
  {
    msg_.current_velocity = std::move(arg);
    return Init_PickAndPlace_Feedback_current_behavior(msg_);
  }

private:
  ::day2::action::PickAndPlace_Feedback msg_;
};

class Init_PickAndPlace_Feedback_estimated_time_remaining
{
public:
  explicit Init_PickAndPlace_Feedback_estimated_time_remaining(::day2::action::PickAndPlace_Feedback & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Feedback_current_velocity estimated_time_remaining(::day2::action::PickAndPlace_Feedback::_estimated_time_remaining_type arg)
  {
    msg_.estimated_time_remaining = std::move(arg);
    return Init_PickAndPlace_Feedback_current_velocity(msg_);
  }

private:
  ::day2::action::PickAndPlace_Feedback msg_;
};

class Init_PickAndPlace_Feedback_collision_warning
{
public:
  explicit Init_PickAndPlace_Feedback_collision_warning(::day2::action::PickAndPlace_Feedback & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Feedback_estimated_time_remaining collision_warning(::day2::action::PickAndPlace_Feedback::_collision_warning_type arg)
  {
    msg_.collision_warning = std::move(arg);
    return Init_PickAndPlace_Feedback_estimated_time_remaining(msg_);
  }

private:
  ::day2::action::PickAndPlace_Feedback msg_;
};

class Init_PickAndPlace_Feedback_force_torque_readings
{
public:
  explicit Init_PickAndPlace_Feedback_force_torque_readings(::day2::action::PickAndPlace_Feedback & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Feedback_collision_warning force_torque_readings(::day2::action::PickAndPlace_Feedback::_force_torque_readings_type arg)
  {
    msg_.force_torque_readings = std::move(arg);
    return Init_PickAndPlace_Feedback_collision_warning(msg_);
  }

private:
  ::day2::action::PickAndPlace_Feedback msg_;
};

class Init_PickAndPlace_Feedback_transport_progress
{
public:
  explicit Init_PickAndPlace_Feedback_transport_progress(::day2::action::PickAndPlace_Feedback & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Feedback_force_torque_readings transport_progress(::day2::action::PickAndPlace_Feedback::_transport_progress_type arg)
  {
    msg_.transport_progress = std::move(arg);
    return Init_PickAndPlace_Feedback_force_torque_readings(msg_);
  }

private:
  ::day2::action::PickAndPlace_Feedback msg_;
};

class Init_PickAndPlace_Feedback_current_grasp_force
{
public:
  explicit Init_PickAndPlace_Feedback_current_grasp_force(::day2::action::PickAndPlace_Feedback & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Feedback_transport_progress current_grasp_force(::day2::action::PickAndPlace_Feedback::_current_grasp_force_type arg)
  {
    msg_.current_grasp_force = std::move(arg);
    return Init_PickAndPlace_Feedback_transport_progress(msg_);
  }

private:
  ::day2::action::PickAndPlace_Feedback msg_;
};

class Init_PickAndPlace_Feedback_object_in_grasp
{
public:
  explicit Init_PickAndPlace_Feedback_object_in_grasp(::day2::action::PickAndPlace_Feedback & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Feedback_current_grasp_force object_in_grasp(::day2::action::PickAndPlace_Feedback::_object_in_grasp_type arg)
  {
    msg_.object_in_grasp = std::move(arg);
    return Init_PickAndPlace_Feedback_current_grasp_force(msg_);
  }

private:
  ::day2::action::PickAndPlace_Feedback msg_;
};

class Init_PickAndPlace_Feedback_object_detected
{
public:
  explicit Init_PickAndPlace_Feedback_object_detected(::day2::action::PickAndPlace_Feedback & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Feedback_object_in_grasp object_detected(::day2::action::PickAndPlace_Feedback::_object_detected_type arg)
  {
    msg_.object_detected = std::move(arg);
    return Init_PickAndPlace_Feedback_object_in_grasp(msg_);
  }

private:
  ::day2::action::PickAndPlace_Feedback msg_;
};

class Init_PickAndPlace_Feedback_object_position
{
public:
  explicit Init_PickAndPlace_Feedback_object_position(::day2::action::PickAndPlace_Feedback & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Feedback_object_detected object_position(::day2::action::PickAndPlace_Feedback::_object_position_type arg)
  {
    msg_.object_position = std::move(arg);
    return Init_PickAndPlace_Feedback_object_detected(msg_);
  }

private:
  ::day2::action::PickAndPlace_Feedback msg_;
};

class Init_PickAndPlace_Feedback_gripper_position
{
public:
  explicit Init_PickAndPlace_Feedback_gripper_position(::day2::action::PickAndPlace_Feedback & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Feedback_object_position gripper_position(::day2::action::PickAndPlace_Feedback::_gripper_position_type arg)
  {
    msg_.gripper_position = std::move(arg);
    return Init_PickAndPlace_Feedback_object_position(msg_);
  }

private:
  ::day2::action::PickAndPlace_Feedback msg_;
};

class Init_PickAndPlace_Feedback_completion_percentage
{
public:
  explicit Init_PickAndPlace_Feedback_completion_percentage(::day2::action::PickAndPlace_Feedback & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Feedback_gripper_position completion_percentage(::day2::action::PickAndPlace_Feedback::_completion_percentage_type arg)
  {
    msg_.completion_percentage = std::move(arg);
    return Init_PickAndPlace_Feedback_gripper_position(msg_);
  }

private:
  ::day2::action::PickAndPlace_Feedback msg_;
};

class Init_PickAndPlace_Feedback_current_phase
{
public:
  Init_PickAndPlace_Feedback_current_phase()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickAndPlace_Feedback_completion_percentage current_phase(::day2::action::PickAndPlace_Feedback::_current_phase_type arg)
  {
    msg_.current_phase = std::move(arg);
    return Init_PickAndPlace_Feedback_completion_percentage(msg_);
  }

private:
  ::day2::action::PickAndPlace_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::PickAndPlace_Feedback>()
{
  return day2::action::builder::Init_PickAndPlace_Feedback_current_phase();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_PickAndPlace_SendGoal_Request_goal
{
public:
  explicit Init_PickAndPlace_SendGoal_Request_goal(::day2::action::PickAndPlace_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::day2::action::PickAndPlace_SendGoal_Request goal(::day2::action::PickAndPlace_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::PickAndPlace_SendGoal_Request msg_;
};

class Init_PickAndPlace_SendGoal_Request_goal_id
{
public:
  Init_PickAndPlace_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickAndPlace_SendGoal_Request_goal goal_id(::day2::action::PickAndPlace_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PickAndPlace_SendGoal_Request_goal(msg_);
  }

private:
  ::day2::action::PickAndPlace_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::PickAndPlace_SendGoal_Request>()
{
  return day2::action::builder::Init_PickAndPlace_SendGoal_Request_goal_id();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_PickAndPlace_SendGoal_Response_stamp
{
public:
  explicit Init_PickAndPlace_SendGoal_Response_stamp(::day2::action::PickAndPlace_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::day2::action::PickAndPlace_SendGoal_Response stamp(::day2::action::PickAndPlace_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::PickAndPlace_SendGoal_Response msg_;
};

class Init_PickAndPlace_SendGoal_Response_accepted
{
public:
  Init_PickAndPlace_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickAndPlace_SendGoal_Response_stamp accepted(::day2::action::PickAndPlace_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PickAndPlace_SendGoal_Response_stamp(msg_);
  }

private:
  ::day2::action::PickAndPlace_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::PickAndPlace_SendGoal_Response>()
{
  return day2::action::builder::Init_PickAndPlace_SendGoal_Response_accepted();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_PickAndPlace_SendGoal_Event_response
{
public:
  explicit Init_PickAndPlace_SendGoal_Event_response(::day2::action::PickAndPlace_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::day2::action::PickAndPlace_SendGoal_Event response(::day2::action::PickAndPlace_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::PickAndPlace_SendGoal_Event msg_;
};

class Init_PickAndPlace_SendGoal_Event_request
{
public:
  explicit Init_PickAndPlace_SendGoal_Event_request(::day2::action::PickAndPlace_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_SendGoal_Event_response request(::day2::action::PickAndPlace_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PickAndPlace_SendGoal_Event_response(msg_);
  }

private:
  ::day2::action::PickAndPlace_SendGoal_Event msg_;
};

class Init_PickAndPlace_SendGoal_Event_info
{
public:
  Init_PickAndPlace_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickAndPlace_SendGoal_Event_request info(::day2::action::PickAndPlace_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PickAndPlace_SendGoal_Event_request(msg_);
  }

private:
  ::day2::action::PickAndPlace_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::PickAndPlace_SendGoal_Event>()
{
  return day2::action::builder::Init_PickAndPlace_SendGoal_Event_info();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_PickAndPlace_GetResult_Request_goal_id
{
public:
  Init_PickAndPlace_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::day2::action::PickAndPlace_GetResult_Request goal_id(::day2::action::PickAndPlace_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::PickAndPlace_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::PickAndPlace_GetResult_Request>()
{
  return day2::action::builder::Init_PickAndPlace_GetResult_Request_goal_id();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_PickAndPlace_GetResult_Response_result
{
public:
  explicit Init_PickAndPlace_GetResult_Response_result(::day2::action::PickAndPlace_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::day2::action::PickAndPlace_GetResult_Response result(::day2::action::PickAndPlace_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::PickAndPlace_GetResult_Response msg_;
};

class Init_PickAndPlace_GetResult_Response_status
{
public:
  Init_PickAndPlace_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickAndPlace_GetResult_Response_result status(::day2::action::PickAndPlace_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PickAndPlace_GetResult_Response_result(msg_);
  }

private:
  ::day2::action::PickAndPlace_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::PickAndPlace_GetResult_Response>()
{
  return day2::action::builder::Init_PickAndPlace_GetResult_Response_status();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_PickAndPlace_GetResult_Event_response
{
public:
  explicit Init_PickAndPlace_GetResult_Event_response(::day2::action::PickAndPlace_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::day2::action::PickAndPlace_GetResult_Event response(::day2::action::PickAndPlace_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::PickAndPlace_GetResult_Event msg_;
};

class Init_PickAndPlace_GetResult_Event_request
{
public:
  explicit Init_PickAndPlace_GetResult_Event_request(::day2::action::PickAndPlace_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_GetResult_Event_response request(::day2::action::PickAndPlace_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PickAndPlace_GetResult_Event_response(msg_);
  }

private:
  ::day2::action::PickAndPlace_GetResult_Event msg_;
};

class Init_PickAndPlace_GetResult_Event_info
{
public:
  Init_PickAndPlace_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickAndPlace_GetResult_Event_request info(::day2::action::PickAndPlace_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PickAndPlace_GetResult_Event_request(msg_);
  }

private:
  ::day2::action::PickAndPlace_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::PickAndPlace_GetResult_Event>()
{
  return day2::action::builder::Init_PickAndPlace_GetResult_Event_info();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_PickAndPlace_FeedbackMessage_feedback
{
public:
  explicit Init_PickAndPlace_FeedbackMessage_feedback(::day2::action::PickAndPlace_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::day2::action::PickAndPlace_FeedbackMessage feedback(::day2::action::PickAndPlace_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::PickAndPlace_FeedbackMessage msg_;
};

class Init_PickAndPlace_FeedbackMessage_goal_id
{
public:
  Init_PickAndPlace_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickAndPlace_FeedbackMessage_feedback goal_id(::day2::action::PickAndPlace_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PickAndPlace_FeedbackMessage_feedback(msg_);
  }

private:
  ::day2::action::PickAndPlace_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::PickAndPlace_FeedbackMessage>()
{
  return day2::action::builder::Init_PickAndPlace_FeedbackMessage_goal_id();
}

}  // namespace day2

#endif  // DAY2__ACTION__DETAIL__PICK_AND_PLACE__BUILDER_HPP_
