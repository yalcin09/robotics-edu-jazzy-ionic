// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from day2:action/Navigate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/action/navigate.hpp"


#ifndef DAY2__ACTION__DETAIL__NAVIGATE__BUILDER_HPP_
#define DAY2__ACTION__DETAIL__NAVIGATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "day2/action/detail/navigate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace day2
{

namespace action
{

namespace builder
{

class Init_Navigate_Goal_behavior_on_failure
{
public:
  explicit Init_Navigate_Goal_behavior_on_failure(::day2::action::Navigate_Goal & msg)
  : msg_(msg)
  {}
  ::day2::action::Navigate_Goal behavior_on_failure(::day2::action::Navigate_Goal::_behavior_on_failure_type arg)
  {
    msg_.behavior_on_failure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::Navigate_Goal msg_;
};

class Init_Navigate_Goal_timeout_seconds
{
public:
  explicit Init_Navigate_Goal_timeout_seconds(::day2::action::Navigate_Goal & msg)
  : msg_(msg)
  {}
  Init_Navigate_Goal_behavior_on_failure timeout_seconds(::day2::action::Navigate_Goal::_timeout_seconds_type arg)
  {
    msg_.timeout_seconds = std::move(arg);
    return Init_Navigate_Goal_behavior_on_failure(msg_);
  }

private:
  ::day2::action::Navigate_Goal msg_;
};

class Init_Navigate_Goal_waypoints
{
public:
  explicit Init_Navigate_Goal_waypoints(::day2::action::Navigate_Goal & msg)
  : msg_(msg)
  {}
  Init_Navigate_Goal_timeout_seconds waypoints(::day2::action::Navigate_Goal::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_Navigate_Goal_timeout_seconds(msg_);
  }

private:
  ::day2::action::Navigate_Goal msg_;
};

class Init_Navigate_Goal_planning_algorithm
{
public:
  explicit Init_Navigate_Goal_planning_algorithm(::day2::action::Navigate_Goal & msg)
  : msg_(msg)
  {}
  Init_Navigate_Goal_waypoints planning_algorithm(::day2::action::Navigate_Goal::_planning_algorithm_type arg)
  {
    msg_.planning_algorithm = std::move(arg);
    return Init_Navigate_Goal_waypoints(msg_);
  }

private:
  ::day2::action::Navigate_Goal msg_;
};

class Init_Navigate_Goal_use_obstacle_avoidance
{
public:
  explicit Init_Navigate_Goal_use_obstacle_avoidance(::day2::action::Navigate_Goal & msg)
  : msg_(msg)
  {}
  Init_Navigate_Goal_planning_algorithm use_obstacle_avoidance(::day2::action::Navigate_Goal::_use_obstacle_avoidance_type arg)
  {
    msg_.use_obstacle_avoidance = std::move(arg);
    return Init_Navigate_Goal_planning_algorithm(msg_);
  }

private:
  ::day2::action::Navigate_Goal msg_;
};

class Init_Navigate_Goal_tolerance_angle
{
public:
  explicit Init_Navigate_Goal_tolerance_angle(::day2::action::Navigate_Goal & msg)
  : msg_(msg)
  {}
  Init_Navigate_Goal_use_obstacle_avoidance tolerance_angle(::day2::action::Navigate_Goal::_tolerance_angle_type arg)
  {
    msg_.tolerance_angle = std::move(arg);
    return Init_Navigate_Goal_use_obstacle_avoidance(msg_);
  }

private:
  ::day2::action::Navigate_Goal msg_;
};

class Init_Navigate_Goal_tolerance_distance
{
public:
  explicit Init_Navigate_Goal_tolerance_distance(::day2::action::Navigate_Goal & msg)
  : msg_(msg)
  {}
  Init_Navigate_Goal_tolerance_angle tolerance_distance(::day2::action::Navigate_Goal::_tolerance_distance_type arg)
  {
    msg_.tolerance_distance = std::move(arg);
    return Init_Navigate_Goal_tolerance_angle(msg_);
  }

private:
  ::day2::action::Navigate_Goal msg_;
};

class Init_Navigate_Goal_max_speed
{
public:
  explicit Init_Navigate_Goal_max_speed(::day2::action::Navigate_Goal & msg)
  : msg_(msg)
  {}
  Init_Navigate_Goal_tolerance_distance max_speed(::day2::action::Navigate_Goal::_max_speed_type arg)
  {
    msg_.max_speed = std::move(arg);
    return Init_Navigate_Goal_tolerance_distance(msg_);
  }

private:
  ::day2::action::Navigate_Goal msg_;
};

class Init_Navigate_Goal_target_pose
{
public:
  Init_Navigate_Goal_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_Goal_max_speed target_pose(::day2::action::Navigate_Goal::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return Init_Navigate_Goal_max_speed(msg_);
  }

private:
  ::day2::action::Navigate_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::Navigate_Goal>()
{
  return day2::action::builder::Init_Navigate_Goal_target_pose();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_Navigate_Result_error_code
{
public:
  explicit Init_Navigate_Result_error_code(::day2::action::Navigate_Result & msg)
  : msg_(msg)
  {}
  ::day2::action::Navigate_Result error_code(::day2::action::Navigate_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::Navigate_Result msg_;
};

class Init_Navigate_Result_replanning_count
{
public:
  explicit Init_Navigate_Result_replanning_count(::day2::action::Navigate_Result & msg)
  : msg_(msg)
  {}
  Init_Navigate_Result_error_code replanning_count(::day2::action::Navigate_Result::_replanning_count_type arg)
  {
    msg_.replanning_count = std::move(arg);
    return Init_Navigate_Result_error_code(msg_);
  }

private:
  ::day2::action::Navigate_Result msg_;
};

class Init_Navigate_Result_smoothness_score
{
public:
  explicit Init_Navigate_Result_smoothness_score(::day2::action::Navigate_Result & msg)
  : msg_(msg)
  {}
  Init_Navigate_Result_replanning_count smoothness_score(::day2::action::Navigate_Result::_smoothness_score_type arg)
  {
    msg_.smoothness_score = std::move(arg);
    return Init_Navigate_Result_replanning_count(msg_);
  }

private:
  ::day2::action::Navigate_Result msg_;
};

class Init_Navigate_Result_path_efficiency
{
public:
  explicit Init_Navigate_Result_path_efficiency(::day2::action::Navigate_Result & msg)
  : msg_(msg)
  {}
  Init_Navigate_Result_smoothness_score path_efficiency(::day2::action::Navigate_Result::_path_efficiency_type arg)
  {
    msg_.path_efficiency = std::move(arg);
    return Init_Navigate_Result_smoothness_score(msg_);
  }

private:
  ::day2::action::Navigate_Result msg_;
};

class Init_Navigate_Result_warnings
{
public:
  explicit Init_Navigate_Result_warnings(::day2::action::Navigate_Result & msg)
  : msg_(msg)
  {}
  Init_Navigate_Result_path_efficiency warnings(::day2::action::Navigate_Result::_warnings_type arg)
  {
    msg_.warnings = std::move(arg);
    return Init_Navigate_Result_path_efficiency(msg_);
  }

private:
  ::day2::action::Navigate_Result msg_;
};

class Init_Navigate_Result_obstacle_encounters
{
public:
  explicit Init_Navigate_Result_obstacle_encounters(::day2::action::Navigate_Result & msg)
  : msg_(msg)
  {}
  Init_Navigate_Result_warnings obstacle_encounters(::day2::action::Navigate_Result::_obstacle_encounters_type arg)
  {
    msg_.obstacle_encounters = std::move(arg);
    return Init_Navigate_Result_warnings(msg_);
  }

private:
  ::day2::action::Navigate_Result msg_;
};

class Init_Navigate_Result_average_speed
{
public:
  explicit Init_Navigate_Result_average_speed(::day2::action::Navigate_Result & msg)
  : msg_(msg)
  {}
  Init_Navigate_Result_obstacle_encounters average_speed(::day2::action::Navigate_Result::_average_speed_type arg)
  {
    msg_.average_speed = std::move(arg);
    return Init_Navigate_Result_obstacle_encounters(msg_);
  }

private:
  ::day2::action::Navigate_Result msg_;
};

class Init_Navigate_Result_total_time_elapsed
{
public:
  explicit Init_Navigate_Result_total_time_elapsed(::day2::action::Navigate_Result & msg)
  : msg_(msg)
  {}
  Init_Navigate_Result_average_speed total_time_elapsed(::day2::action::Navigate_Result::_total_time_elapsed_type arg)
  {
    msg_.total_time_elapsed = std::move(arg);
    return Init_Navigate_Result_average_speed(msg_);
  }

private:
  ::day2::action::Navigate_Result msg_;
};

class Init_Navigate_Result_total_distance_traveled
{
public:
  explicit Init_Navigate_Result_total_distance_traveled(::day2::action::Navigate_Result & msg)
  : msg_(msg)
  {}
  Init_Navigate_Result_total_time_elapsed total_distance_traveled(::day2::action::Navigate_Result::_total_distance_traveled_type arg)
  {
    msg_.total_distance_traveled = std::move(arg);
    return Init_Navigate_Result_total_time_elapsed(msg_);
  }

private:
  ::day2::action::Navigate_Result msg_;
};

class Init_Navigate_Result_final_pose
{
public:
  explicit Init_Navigate_Result_final_pose(::day2::action::Navigate_Result & msg)
  : msg_(msg)
  {}
  Init_Navigate_Result_total_distance_traveled final_pose(::day2::action::Navigate_Result::_final_pose_type arg)
  {
    msg_.final_pose = std::move(arg);
    return Init_Navigate_Result_total_distance_traveled(msg_);
  }

private:
  ::day2::action::Navigate_Result msg_;
};

class Init_Navigate_Result_result_message
{
public:
  explicit Init_Navigate_Result_result_message(::day2::action::Navigate_Result & msg)
  : msg_(msg)
  {}
  Init_Navigate_Result_final_pose result_message(::day2::action::Navigate_Result::_result_message_type arg)
  {
    msg_.result_message = std::move(arg);
    return Init_Navigate_Result_final_pose(msg_);
  }

private:
  ::day2::action::Navigate_Result msg_;
};

class Init_Navigate_Result_success
{
public:
  Init_Navigate_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_Result_result_message success(::day2::action::Navigate_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Navigate_Result_result_message(msg_);
  }

private:
  ::day2::action::Navigate_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::Navigate_Result>()
{
  return day2::action::builder::Init_Navigate_Result_success();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_Navigate_Feedback_last_update_time
{
public:
  explicit Init_Navigate_Feedback_last_update_time(::day2::action::Navigate_Feedback & msg)
  : msg_(msg)
  {}
  ::day2::action::Navigate_Feedback last_update_time(::day2::action::Navigate_Feedback::_last_update_time_type arg)
  {
    msg_.last_update_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::Navigate_Feedback msg_;
};

class Init_Navigate_Feedback_memory_usage
{
public:
  explicit Init_Navigate_Feedback_memory_usage(::day2::action::Navigate_Feedback & msg)
  : msg_(msg)
  {}
  Init_Navigate_Feedback_last_update_time memory_usage(::day2::action::Navigate_Feedback::_memory_usage_type arg)
  {
    msg_.memory_usage = std::move(arg);
    return Init_Navigate_Feedback_last_update_time(msg_);
  }

private:
  ::day2::action::Navigate_Feedback msg_;
};

class Init_Navigate_Feedback_cpu_usage
{
public:
  explicit Init_Navigate_Feedback_cpu_usage(::day2::action::Navigate_Feedback & msg)
  : msg_(msg)
  {}
  Init_Navigate_Feedback_memory_usage cpu_usage(::day2::action::Navigate_Feedback::_cpu_usage_type arg)
  {
    msg_.cpu_usage = std::move(arg);
    return Init_Navigate_Feedback_memory_usage(msg_);
  }

private:
  ::day2::action::Navigate_Feedback msg_;
};

class Init_Navigate_Feedback_battery_consumption_rate
{
public:
  explicit Init_Navigate_Feedback_battery_consumption_rate(::day2::action::Navigate_Feedback & msg)
  : msg_(msg)
  {}
  Init_Navigate_Feedback_cpu_usage battery_consumption_rate(::day2::action::Navigate_Feedback::_battery_consumption_rate_type arg)
  {
    msg_.battery_consumption_rate = std::move(arg);
    return Init_Navigate_Feedback_cpu_usage(msg_);
  }

private:
  ::day2::action::Navigate_Feedback msg_;
};

class Init_Navigate_Feedback_path_deviation
{
public:
  explicit Init_Navigate_Feedback_path_deviation(::day2::action::Navigate_Feedback & msg)
  : msg_(msg)
  {}
  Init_Navigate_Feedback_battery_consumption_rate path_deviation(::day2::action::Navigate_Feedback::_path_deviation_type arg)
  {
    msg_.path_deviation = std::move(arg);
    return Init_Navigate_Feedback_battery_consumption_rate(msg_);
  }

private:
  ::day2::action::Navigate_Feedback msg_;
};

class Init_Navigate_Feedback_current_status
{
public:
  explicit Init_Navigate_Feedback_current_status(::day2::action::Navigate_Feedback & msg)
  : msg_(msg)
  {}
  Init_Navigate_Feedback_path_deviation current_status(::day2::action::Navigate_Feedback::_current_status_type arg)
  {
    msg_.current_status = std::move(arg);
    return Init_Navigate_Feedback_path_deviation(msg_);
  }

private:
  ::day2::action::Navigate_Feedback msg_;
};

class Init_Navigate_Feedback_obstacle_detected
{
public:
  explicit Init_Navigate_Feedback_obstacle_detected(::day2::action::Navigate_Feedback & msg)
  : msg_(msg)
  {}
  Init_Navigate_Feedback_current_status obstacle_detected(::day2::action::Navigate_Feedback::_obstacle_detected_type arg)
  {
    msg_.obstacle_detected = std::move(arg);
    return Init_Navigate_Feedback_current_status(msg_);
  }

private:
  ::day2::action::Navigate_Feedback msg_;
};

class Init_Navigate_Feedback_current_behavior
{
public:
  explicit Init_Navigate_Feedback_current_behavior(::day2::action::Navigate_Feedback & msg)
  : msg_(msg)
  {}
  Init_Navigate_Feedback_obstacle_detected current_behavior(::day2::action::Navigate_Feedback::_current_behavior_type arg)
  {
    msg_.current_behavior = std::move(arg);
    return Init_Navigate_Feedback_obstacle_detected(msg_);
  }

private:
  ::day2::action::Navigate_Feedback msg_;
};

class Init_Navigate_Feedback_current_waypoint_index
{
public:
  explicit Init_Navigate_Feedback_current_waypoint_index(::day2::action::Navigate_Feedback & msg)
  : msg_(msg)
  {}
  Init_Navigate_Feedback_current_behavior current_waypoint_index(::day2::action::Navigate_Feedback::_current_waypoint_index_type arg)
  {
    msg_.current_waypoint_index = std::move(arg);
    return Init_Navigate_Feedback_current_behavior(msg_);
  }

private:
  ::day2::action::Navigate_Feedback msg_;
};

class Init_Navigate_Feedback_remaining_path
{
public:
  explicit Init_Navigate_Feedback_remaining_path(::day2::action::Navigate_Feedback & msg)
  : msg_(msg)
  {}
  Init_Navigate_Feedback_current_waypoint_index remaining_path(::day2::action::Navigate_Feedback::_remaining_path_type arg)
  {
    msg_.remaining_path = std::move(arg);
    return Init_Navigate_Feedback_current_waypoint_index(msg_);
  }

private:
  ::day2::action::Navigate_Feedback msg_;
};

class Init_Navigate_Feedback_completion_percentage
{
public:
  explicit Init_Navigate_Feedback_completion_percentage(::day2::action::Navigate_Feedback & msg)
  : msg_(msg)
  {}
  Init_Navigate_Feedback_remaining_path completion_percentage(::day2::action::Navigate_Feedback::_completion_percentage_type arg)
  {
    msg_.completion_percentage = std::move(arg);
    return Init_Navigate_Feedback_remaining_path(msg_);
  }

private:
  ::day2::action::Navigate_Feedback msg_;
};

class Init_Navigate_Feedback_current_speed
{
public:
  explicit Init_Navigate_Feedback_current_speed(::day2::action::Navigate_Feedback & msg)
  : msg_(msg)
  {}
  Init_Navigate_Feedback_completion_percentage current_speed(::day2::action::Navigate_Feedback::_current_speed_type arg)
  {
    msg_.current_speed = std::move(arg);
    return Init_Navigate_Feedback_completion_percentage(msg_);
  }

private:
  ::day2::action::Navigate_Feedback msg_;
};

class Init_Navigate_Feedback_estimated_time_remaining
{
public:
  explicit Init_Navigate_Feedback_estimated_time_remaining(::day2::action::Navigate_Feedback & msg)
  : msg_(msg)
  {}
  Init_Navigate_Feedback_current_speed estimated_time_remaining(::day2::action::Navigate_Feedback::_estimated_time_remaining_type arg)
  {
    msg_.estimated_time_remaining = std::move(arg);
    return Init_Navigate_Feedback_current_speed(msg_);
  }

private:
  ::day2::action::Navigate_Feedback msg_;
};

class Init_Navigate_Feedback_distance_to_goal
{
public:
  explicit Init_Navigate_Feedback_distance_to_goal(::day2::action::Navigate_Feedback & msg)
  : msg_(msg)
  {}
  Init_Navigate_Feedback_estimated_time_remaining distance_to_goal(::day2::action::Navigate_Feedback::_distance_to_goal_type arg)
  {
    msg_.distance_to_goal = std::move(arg);
    return Init_Navigate_Feedback_estimated_time_remaining(msg_);
  }

private:
  ::day2::action::Navigate_Feedback msg_;
};

class Init_Navigate_Feedback_current_pose
{
public:
  Init_Navigate_Feedback_current_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_Feedback_distance_to_goal current_pose(::day2::action::Navigate_Feedback::_current_pose_type arg)
  {
    msg_.current_pose = std::move(arg);
    return Init_Navigate_Feedback_distance_to_goal(msg_);
  }

private:
  ::day2::action::Navigate_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::Navigate_Feedback>()
{
  return day2::action::builder::Init_Navigate_Feedback_current_pose();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_Navigate_SendGoal_Request_goal
{
public:
  explicit Init_Navigate_SendGoal_Request_goal(::day2::action::Navigate_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::day2::action::Navigate_SendGoal_Request goal(::day2::action::Navigate_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::Navigate_SendGoal_Request msg_;
};

class Init_Navigate_SendGoal_Request_goal_id
{
public:
  Init_Navigate_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_SendGoal_Request_goal goal_id(::day2::action::Navigate_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Navigate_SendGoal_Request_goal(msg_);
  }

private:
  ::day2::action::Navigate_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::Navigate_SendGoal_Request>()
{
  return day2::action::builder::Init_Navigate_SendGoal_Request_goal_id();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_Navigate_SendGoal_Response_stamp
{
public:
  explicit Init_Navigate_SendGoal_Response_stamp(::day2::action::Navigate_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::day2::action::Navigate_SendGoal_Response stamp(::day2::action::Navigate_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::Navigate_SendGoal_Response msg_;
};

class Init_Navigate_SendGoal_Response_accepted
{
public:
  Init_Navigate_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_SendGoal_Response_stamp accepted(::day2::action::Navigate_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Navigate_SendGoal_Response_stamp(msg_);
  }

private:
  ::day2::action::Navigate_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::Navigate_SendGoal_Response>()
{
  return day2::action::builder::Init_Navigate_SendGoal_Response_accepted();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_Navigate_SendGoal_Event_response
{
public:
  explicit Init_Navigate_SendGoal_Event_response(::day2::action::Navigate_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::day2::action::Navigate_SendGoal_Event response(::day2::action::Navigate_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::Navigate_SendGoal_Event msg_;
};

class Init_Navigate_SendGoal_Event_request
{
public:
  explicit Init_Navigate_SendGoal_Event_request(::day2::action::Navigate_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Navigate_SendGoal_Event_response request(::day2::action::Navigate_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Navigate_SendGoal_Event_response(msg_);
  }

private:
  ::day2::action::Navigate_SendGoal_Event msg_;
};

class Init_Navigate_SendGoal_Event_info
{
public:
  Init_Navigate_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_SendGoal_Event_request info(::day2::action::Navigate_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Navigate_SendGoal_Event_request(msg_);
  }

private:
  ::day2::action::Navigate_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::Navigate_SendGoal_Event>()
{
  return day2::action::builder::Init_Navigate_SendGoal_Event_info();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_Navigate_GetResult_Request_goal_id
{
public:
  Init_Navigate_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::day2::action::Navigate_GetResult_Request goal_id(::day2::action::Navigate_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::Navigate_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::Navigate_GetResult_Request>()
{
  return day2::action::builder::Init_Navigate_GetResult_Request_goal_id();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_Navigate_GetResult_Response_result
{
public:
  explicit Init_Navigate_GetResult_Response_result(::day2::action::Navigate_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::day2::action::Navigate_GetResult_Response result(::day2::action::Navigate_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::Navigate_GetResult_Response msg_;
};

class Init_Navigate_GetResult_Response_status
{
public:
  Init_Navigate_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_GetResult_Response_result status(::day2::action::Navigate_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Navigate_GetResult_Response_result(msg_);
  }

private:
  ::day2::action::Navigate_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::Navigate_GetResult_Response>()
{
  return day2::action::builder::Init_Navigate_GetResult_Response_status();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_Navigate_GetResult_Event_response
{
public:
  explicit Init_Navigate_GetResult_Event_response(::day2::action::Navigate_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::day2::action::Navigate_GetResult_Event response(::day2::action::Navigate_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::Navigate_GetResult_Event msg_;
};

class Init_Navigate_GetResult_Event_request
{
public:
  explicit Init_Navigate_GetResult_Event_request(::day2::action::Navigate_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Navigate_GetResult_Event_response request(::day2::action::Navigate_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Navigate_GetResult_Event_response(msg_);
  }

private:
  ::day2::action::Navigate_GetResult_Event msg_;
};

class Init_Navigate_GetResult_Event_info
{
public:
  Init_Navigate_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_GetResult_Event_request info(::day2::action::Navigate_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Navigate_GetResult_Event_request(msg_);
  }

private:
  ::day2::action::Navigate_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::Navigate_GetResult_Event>()
{
  return day2::action::builder::Init_Navigate_GetResult_Event_info();
}

}  // namespace day2


namespace day2
{

namespace action
{

namespace builder
{

class Init_Navigate_FeedbackMessage_feedback
{
public:
  explicit Init_Navigate_FeedbackMessage_feedback(::day2::action::Navigate_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::day2::action::Navigate_FeedbackMessage feedback(::day2::action::Navigate_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::action::Navigate_FeedbackMessage msg_;
};

class Init_Navigate_FeedbackMessage_goal_id
{
public:
  Init_Navigate_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_FeedbackMessage_feedback goal_id(::day2::action::Navigate_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Navigate_FeedbackMessage_feedback(msg_);
  }

private:
  ::day2::action::Navigate_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::action::Navigate_FeedbackMessage>()
{
  return day2::action::builder::Init_Navigate_FeedbackMessage_goal_id();
}

}  // namespace day2

#endif  // DAY2__ACTION__DETAIL__NAVIGATE__BUILDER_HPP_
