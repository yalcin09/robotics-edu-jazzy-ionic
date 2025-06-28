// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from day2:srv/CalculatePath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/srv/calculate_path.hpp"


#ifndef DAY2__SRV__DETAIL__CALCULATE_PATH__BUILDER_HPP_
#define DAY2__SRV__DETAIL__CALCULATE_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "day2/srv/detail/calculate_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace day2
{

namespace srv
{

namespace builder
{

class Init_CalculatePath_Request_special_constraints
{
public:
  explicit Init_CalculatePath_Request_special_constraints(::day2::srv::CalculatePath_Request & msg)
  : msg_(msg)
  {}
  ::day2::srv::CalculatePath_Request special_constraints(::day2::srv::CalculatePath_Request::_special_constraints_type arg)
  {
    msg_.special_constraints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::srv::CalculatePath_Request msg_;
};

class Init_CalculatePath_Request_forbidden_zones
{
public:
  explicit Init_CalculatePath_Request_forbidden_zones(::day2::srv::CalculatePath_Request & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Request_special_constraints forbidden_zones(::day2::srv::CalculatePath_Request::_forbidden_zones_type arg)
  {
    msg_.forbidden_zones = std::move(arg);
    return Init_CalculatePath_Request_special_constraints(msg_);
  }

private:
  ::day2::srv::CalculatePath_Request msg_;
};

class Init_CalculatePath_Request_waypoints
{
public:
  explicit Init_CalculatePath_Request_waypoints(::day2::srv::CalculatePath_Request & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Request_forbidden_zones waypoints(::day2::srv::CalculatePath_Request::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_CalculatePath_Request_forbidden_zones(msg_);
  }

private:
  ::day2::srv::CalculatePath_Request msg_;
};

class Init_CalculatePath_Request_avoid_dynamic_obstacles
{
public:
  explicit Init_CalculatePath_Request_avoid_dynamic_obstacles(::day2::srv::CalculatePath_Request & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Request_waypoints avoid_dynamic_obstacles(::day2::srv::CalculatePath_Request::_avoid_dynamic_obstacles_type arg)
  {
    msg_.avoid_dynamic_obstacles = std::move(arg);
    return Init_CalculatePath_Request_waypoints(msg_);
  }

private:
  ::day2::srv::CalculatePath_Request msg_;
};

class Init_CalculatePath_Request_optimize_for_smoothness
{
public:
  explicit Init_CalculatePath_Request_optimize_for_smoothness(::day2::srv::CalculatePath_Request & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Request_avoid_dynamic_obstacles optimize_for_smoothness(::day2::srv::CalculatePath_Request::_optimize_for_smoothness_type arg)
  {
    msg_.optimize_for_smoothness = std::move(arg);
    return Init_CalculatePath_Request_avoid_dynamic_obstacles(msg_);
  }

private:
  ::day2::srv::CalculatePath_Request msg_;
};

class Init_CalculatePath_Request_optimize_for_speed
{
public:
  explicit Init_CalculatePath_Request_optimize_for_speed(::day2::srv::CalculatePath_Request & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Request_optimize_for_smoothness optimize_for_speed(::day2::srv::CalculatePath_Request::_optimize_for_speed_type arg)
  {
    msg_.optimize_for_speed = std::move(arg);
    return Init_CalculatePath_Request_optimize_for_smoothness(msg_);
  }

private:
  ::day2::srv::CalculatePath_Request msg_;
};

class Init_CalculatePath_Request_planning_timeout
{
public:
  explicit Init_CalculatePath_Request_planning_timeout(::day2::srv::CalculatePath_Request & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Request_optimize_for_speed planning_timeout(::day2::srv::CalculatePath_Request::_planning_timeout_type arg)
  {
    msg_.planning_timeout = std::move(arg);
    return Init_CalculatePath_Request_optimize_for_speed(msg_);
  }

private:
  ::day2::srv::CalculatePath_Request msg_;
};

class Init_CalculatePath_Request_planning_algorithm
{
public:
  explicit Init_CalculatePath_Request_planning_algorithm(::day2::srv::CalculatePath_Request & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Request_planning_timeout planning_algorithm(::day2::srv::CalculatePath_Request::_planning_algorithm_type arg)
  {
    msg_.planning_algorithm = std::move(arg);
    return Init_CalculatePath_Request_planning_timeout(msg_);
  }

private:
  ::day2::srv::CalculatePath_Request msg_;
};

class Init_CalculatePath_Request_safety_margin
{
public:
  explicit Init_CalculatePath_Request_safety_margin(::day2::srv::CalculatePath_Request & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Request_planning_algorithm safety_margin(::day2::srv::CalculatePath_Request::_safety_margin_type arg)
  {
    msg_.safety_margin = std::move(arg);
    return Init_CalculatePath_Request_planning_algorithm(msg_);
  }

private:
  ::day2::srv::CalculatePath_Request msg_;
};

class Init_CalculatePath_Request_turning_radius
{
public:
  explicit Init_CalculatePath_Request_turning_radius(::day2::srv::CalculatePath_Request & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Request_safety_margin turning_radius(::day2::srv::CalculatePath_Request::_turning_radius_type arg)
  {
    msg_.turning_radius = std::move(arg);
    return Init_CalculatePath_Request_safety_margin(msg_);
  }

private:
  ::day2::srv::CalculatePath_Request msg_;
};

class Init_CalculatePath_Request_max_acceleration
{
public:
  explicit Init_CalculatePath_Request_max_acceleration(::day2::srv::CalculatePath_Request & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Request_turning_radius max_acceleration(::day2::srv::CalculatePath_Request::_max_acceleration_type arg)
  {
    msg_.max_acceleration = std::move(arg);
    return Init_CalculatePath_Request_turning_radius(msg_);
  }

private:
  ::day2::srv::CalculatePath_Request msg_;
};

class Init_CalculatePath_Request_max_velocity
{
public:
  explicit Init_CalculatePath_Request_max_velocity(::day2::srv::CalculatePath_Request & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Request_max_acceleration max_velocity(::day2::srv::CalculatePath_Request::_max_velocity_type arg)
  {
    msg_.max_velocity = std::move(arg);
    return Init_CalculatePath_Request_max_acceleration(msg_);
  }

private:
  ::day2::srv::CalculatePath_Request msg_;
};

class Init_CalculatePath_Request_goal_orientation
{
public:
  explicit Init_CalculatePath_Request_goal_orientation(::day2::srv::CalculatePath_Request & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Request_max_velocity goal_orientation(::day2::srv::CalculatePath_Request::_goal_orientation_type arg)
  {
    msg_.goal_orientation = std::move(arg);
    return Init_CalculatePath_Request_max_velocity(msg_);
  }

private:
  ::day2::srv::CalculatePath_Request msg_;
};

class Init_CalculatePath_Request_start_orientation
{
public:
  explicit Init_CalculatePath_Request_start_orientation(::day2::srv::CalculatePath_Request & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Request_goal_orientation start_orientation(::day2::srv::CalculatePath_Request::_start_orientation_type arg)
  {
    msg_.start_orientation = std::move(arg);
    return Init_CalculatePath_Request_goal_orientation(msg_);
  }

private:
  ::day2::srv::CalculatePath_Request msg_;
};

class Init_CalculatePath_Request_goal_position
{
public:
  explicit Init_CalculatePath_Request_goal_position(::day2::srv::CalculatePath_Request & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Request_start_orientation goal_position(::day2::srv::CalculatePath_Request::_goal_position_type arg)
  {
    msg_.goal_position = std::move(arg);
    return Init_CalculatePath_Request_start_orientation(msg_);
  }

private:
  ::day2::srv::CalculatePath_Request msg_;
};

class Init_CalculatePath_Request_start_position
{
public:
  Init_CalculatePath_Request_start_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalculatePath_Request_goal_position start_position(::day2::srv::CalculatePath_Request::_start_position_type arg)
  {
    msg_.start_position = std::move(arg);
    return Init_CalculatePath_Request_goal_position(msg_);
  }

private:
  ::day2::srv::CalculatePath_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::srv::CalculatePath_Request>()
{
  return day2::srv::builder::Init_CalculatePath_Request_start_position();
}

}  // namespace day2


namespace day2
{

namespace srv
{

namespace builder
{

class Init_CalculatePath_Response_error_code
{
public:
  explicit Init_CalculatePath_Response_error_code(::day2::srv::CalculatePath_Response & msg)
  : msg_(msg)
  {}
  ::day2::srv::CalculatePath_Response error_code(::day2::srv::CalculatePath_Response::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::srv::CalculatePath_Response msg_;
};

class Init_CalculatePath_Response_iterations_count
{
public:
  explicit Init_CalculatePath_Response_iterations_count(::day2::srv::CalculatePath_Response & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Response_error_code iterations_count(::day2::srv::CalculatePath_Response::_iterations_count_type arg)
  {
    msg_.iterations_count = std::move(arg);
    return Init_CalculatePath_Response_error_code(msg_);
  }

private:
  ::day2::srv::CalculatePath_Response msg_;
};

class Init_CalculatePath_Response_nodes_explored
{
public:
  explicit Init_CalculatePath_Response_nodes_explored(::day2::srv::CalculatePath_Response & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Response_iterations_count nodes_explored(::day2::srv::CalculatePath_Response::_nodes_explored_type arg)
  {
    msg_.nodes_explored = std::move(arg);
    return Init_CalculatePath_Response_iterations_count(msg_);
  }

private:
  ::day2::srv::CalculatePath_Response msg_;
};

class Init_CalculatePath_Response_algorithm_used
{
public:
  explicit Init_CalculatePath_Response_algorithm_used(::day2::srv::CalculatePath_Response & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Response_nodes_explored algorithm_used(::day2::srv::CalculatePath_Response::_algorithm_used_type arg)
  {
    msg_.algorithm_used = std::move(arg);
    return Init_CalculatePath_Response_nodes_explored(msg_);
  }

private:
  ::day2::srv::CalculatePath_Response msg_;
};

class Init_CalculatePath_Response_planning_time_ms
{
public:
  explicit Init_CalculatePath_Response_planning_time_ms(::day2::srv::CalculatePath_Response & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Response_algorithm_used planning_time_ms(::day2::srv::CalculatePath_Response::_planning_time_ms_type arg)
  {
    msg_.planning_time_ms = std::move(arg);
    return Init_CalculatePath_Response_algorithm_used(msg_);
  }

private:
  ::day2::srv::CalculatePath_Response msg_;
};

class Init_CalculatePath_Response_alternative_scores
{
public:
  explicit Init_CalculatePath_Response_alternative_scores(::day2::srv::CalculatePath_Response & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Response_planning_time_ms alternative_scores(::day2::srv::CalculatePath_Response::_alternative_scores_type arg)
  {
    msg_.alternative_scores = std::move(arg);
    return Init_CalculatePath_Response_planning_time_ms(msg_);
  }

private:
  ::day2::srv::CalculatePath_Response msg_;
};

class Init_CalculatePath_Response_alternative_paths
{
public:
  explicit Init_CalculatePath_Response_alternative_paths(::day2::srv::CalculatePath_Response & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Response_alternative_scores alternative_paths(::day2::srv::CalculatePath_Response::_alternative_paths_type arg)
  {
    msg_.alternative_paths = std::move(arg);
    return Init_CalculatePath_Response_alternative_scores(msg_);
  }

private:
  ::day2::srv::CalculatePath_Response msg_;
};

class Init_CalculatePath_Response_num_waypoints
{
public:
  explicit Init_CalculatePath_Response_num_waypoints(::day2::srv::CalculatePath_Response & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Response_alternative_paths num_waypoints(::day2::srv::CalculatePath_Response::_num_waypoints_type arg)
  {
    msg_.num_waypoints = std::move(arg);
    return Init_CalculatePath_Response_alternative_paths(msg_);
  }

private:
  ::day2::srv::CalculatePath_Response msg_;
};

class Init_CalculatePath_Response_safety_score
{
public:
  explicit Init_CalculatePath_Response_safety_score(::day2::srv::CalculatePath_Response & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Response_num_waypoints safety_score(::day2::srv::CalculatePath_Response::_safety_score_type arg)
  {
    msg_.safety_score = std::move(arg);
    return Init_CalculatePath_Response_num_waypoints(msg_);
  }

private:
  ::day2::srv::CalculatePath_Response msg_;
};

class Init_CalculatePath_Response_path_smoothness
{
public:
  explicit Init_CalculatePath_Response_path_smoothness(::day2::srv::CalculatePath_Response & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Response_safety_score path_smoothness(::day2::srv::CalculatePath_Response::_path_smoothness_type arg)
  {
    msg_.path_smoothness = std::move(arg);
    return Init_CalculatePath_Response_safety_score(msg_);
  }

private:
  ::day2::srv::CalculatePath_Response msg_;
};

class Init_CalculatePath_Response_total_time
{
public:
  explicit Init_CalculatePath_Response_total_time(::day2::srv::CalculatePath_Response & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Response_path_smoothness total_time(::day2::srv::CalculatePath_Response::_total_time_type arg)
  {
    msg_.total_time = std::move(arg);
    return Init_CalculatePath_Response_path_smoothness(msg_);
  }

private:
  ::day2::srv::CalculatePath_Response msg_;
};

class Init_CalculatePath_Response_total_distance
{
public:
  explicit Init_CalculatePath_Response_total_distance(::day2::srv::CalculatePath_Response & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Response_total_time total_distance(::day2::srv::CalculatePath_Response::_total_distance_type arg)
  {
    msg_.total_distance = std::move(arg);
    return Init_CalculatePath_Response_total_time(msg_);
  }

private:
  ::day2::srv::CalculatePath_Response msg_;
};

class Init_CalculatePath_Response_path_timestamps
{
public:
  explicit Init_CalculatePath_Response_path_timestamps(::day2::srv::CalculatePath_Response & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Response_total_distance path_timestamps(::day2::srv::CalculatePath_Response::_path_timestamps_type arg)
  {
    msg_.path_timestamps = std::move(arg);
    return Init_CalculatePath_Response_total_distance(msg_);
  }

private:
  ::day2::srv::CalculatePath_Response msg_;
};

class Init_CalculatePath_Response_path_velocities
{
public:
  explicit Init_CalculatePath_Response_path_velocities(::day2::srv::CalculatePath_Response & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Response_path_timestamps path_velocities(::day2::srv::CalculatePath_Response::_path_velocities_type arg)
  {
    msg_.path_velocities = std::move(arg);
    return Init_CalculatePath_Response_path_timestamps(msg_);
  }

private:
  ::day2::srv::CalculatePath_Response msg_;
};

class Init_CalculatePath_Response_path_orientations
{
public:
  explicit Init_CalculatePath_Response_path_orientations(::day2::srv::CalculatePath_Response & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Response_path_velocities path_orientations(::day2::srv::CalculatePath_Response::_path_orientations_type arg)
  {
    msg_.path_orientations = std::move(arg);
    return Init_CalculatePath_Response_path_velocities(msg_);
  }

private:
  ::day2::srv::CalculatePath_Response msg_;
};

class Init_CalculatePath_Response_path_points
{
public:
  explicit Init_CalculatePath_Response_path_points(::day2::srv::CalculatePath_Response & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Response_path_orientations path_points(::day2::srv::CalculatePath_Response::_path_points_type arg)
  {
    msg_.path_points = std::move(arg);
    return Init_CalculatePath_Response_path_orientations(msg_);
  }

private:
  ::day2::srv::CalculatePath_Response msg_;
};

class Init_CalculatePath_Response_message
{
public:
  explicit Init_CalculatePath_Response_message(::day2::srv::CalculatePath_Response & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Response_path_points message(::day2::srv::CalculatePath_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_CalculatePath_Response_path_points(msg_);
  }

private:
  ::day2::srv::CalculatePath_Response msg_;
};

class Init_CalculatePath_Response_success
{
public:
  Init_CalculatePath_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalculatePath_Response_message success(::day2::srv::CalculatePath_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CalculatePath_Response_message(msg_);
  }

private:
  ::day2::srv::CalculatePath_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::srv::CalculatePath_Response>()
{
  return day2::srv::builder::Init_CalculatePath_Response_success();
}

}  // namespace day2


namespace day2
{

namespace srv
{

namespace builder
{

class Init_CalculatePath_Event_response
{
public:
  explicit Init_CalculatePath_Event_response(::day2::srv::CalculatePath_Event & msg)
  : msg_(msg)
  {}
  ::day2::srv::CalculatePath_Event response(::day2::srv::CalculatePath_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::srv::CalculatePath_Event msg_;
};

class Init_CalculatePath_Event_request
{
public:
  explicit Init_CalculatePath_Event_request(::day2::srv::CalculatePath_Event & msg)
  : msg_(msg)
  {}
  Init_CalculatePath_Event_response request(::day2::srv::CalculatePath_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CalculatePath_Event_response(msg_);
  }

private:
  ::day2::srv::CalculatePath_Event msg_;
};

class Init_CalculatePath_Event_info
{
public:
  Init_CalculatePath_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalculatePath_Event_request info(::day2::srv::CalculatePath_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CalculatePath_Event_request(msg_);
  }

private:
  ::day2::srv::CalculatePath_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::srv::CalculatePath_Event>()
{
  return day2::srv::builder::Init_CalculatePath_Event_info();
}

}  // namespace day2

#endif  // DAY2__SRV__DETAIL__CALCULATE_PATH__BUILDER_HPP_
