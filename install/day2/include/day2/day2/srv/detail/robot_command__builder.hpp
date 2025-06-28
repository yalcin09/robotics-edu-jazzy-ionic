// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from day2:srv/RobotCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/srv/robot_command.hpp"


#ifndef DAY2__SRV__DETAIL__ROBOT_COMMAND__BUILDER_HPP_
#define DAY2__SRV__DETAIL__ROBOT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "day2/srv/detail/robot_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace day2
{

namespace srv
{

namespace builder
{

class Init_RobotCommand_Request_deadline
{
public:
  explicit Init_RobotCommand_Request_deadline(::day2::srv::RobotCommand_Request & msg)
  : msg_(msg)
  {}
  ::day2::srv::RobotCommand_Request deadline(::day2::srv::RobotCommand_Request::_deadline_type arg)
  {
    msg_.deadline = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::srv::RobotCommand_Request msg_;
};

class Init_RobotCommand_Request_additional_params
{
public:
  explicit Init_RobotCommand_Request_additional_params(::day2::srv::RobotCommand_Request & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_Request_deadline additional_params(::day2::srv::RobotCommand_Request::_additional_params_type arg)
  {
    msg_.additional_params = std::move(arg);
    return Init_RobotCommand_Request_deadline(msg_);
  }

private:
  ::day2::srv::RobotCommand_Request msg_;
};

class Init_RobotCommand_Request_force_execution
{
public:
  explicit Init_RobotCommand_Request_force_execution(::day2::srv::RobotCommand_Request & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_Request_additional_params force_execution(::day2::srv::RobotCommand_Request::_force_execution_type arg)
  {
    msg_.force_execution = std::move(arg);
    return Init_RobotCommand_Request_additional_params(msg_);
  }

private:
  ::day2::srv::RobotCommand_Request msg_;
};

class Init_RobotCommand_Request_timeout_seconds
{
public:
  explicit Init_RobotCommand_Request_timeout_seconds(::day2::srv::RobotCommand_Request & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_Request_force_execution timeout_seconds(::day2::srv::RobotCommand_Request::_timeout_seconds_type arg)
  {
    msg_.timeout_seconds = std::move(arg);
    return Init_RobotCommand_Request_force_execution(msg_);
  }

private:
  ::day2::srv::RobotCommand_Request msg_;
};

class Init_RobotCommand_Request_max_acceleration
{
public:
  explicit Init_RobotCommand_Request_max_acceleration(::day2::srv::RobotCommand_Request & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_Request_timeout_seconds max_acceleration(::day2::srv::RobotCommand_Request::_max_acceleration_type arg)
  {
    msg_.max_acceleration = std::move(arg);
    return Init_RobotCommand_Request_timeout_seconds(msg_);
  }

private:
  ::day2::srv::RobotCommand_Request msg_;
};

class Init_RobotCommand_Request_max_velocity
{
public:
  explicit Init_RobotCommand_Request_max_velocity(::day2::srv::RobotCommand_Request & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_Request_max_acceleration max_velocity(::day2::srv::RobotCommand_Request::_max_velocity_type arg)
  {
    msg_.max_velocity = std::move(arg);
    return Init_RobotCommand_Request_max_acceleration(msg_);
  }

private:
  ::day2::srv::RobotCommand_Request msg_;
};

class Init_RobotCommand_Request_target_orientation
{
public:
  explicit Init_RobotCommand_Request_target_orientation(::day2::srv::RobotCommand_Request & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_Request_max_velocity target_orientation(::day2::srv::RobotCommand_Request::_target_orientation_type arg)
  {
    msg_.target_orientation = std::move(arg);
    return Init_RobotCommand_Request_max_velocity(msg_);
  }

private:
  ::day2::srv::RobotCommand_Request msg_;
};

class Init_RobotCommand_Request_target_position
{
public:
  explicit Init_RobotCommand_Request_target_position(::day2::srv::RobotCommand_Request & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_Request_target_orientation target_position(::day2::srv::RobotCommand_Request::_target_position_type arg)
  {
    msg_.target_position = std::move(arg);
    return Init_RobotCommand_Request_target_orientation(msg_);
  }

private:
  ::day2::srv::RobotCommand_Request msg_;
};

class Init_RobotCommand_Request_command_type
{
public:
  Init_RobotCommand_Request_command_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCommand_Request_target_position command_type(::day2::srv::RobotCommand_Request::_command_type_type arg)
  {
    msg_.command_type = std::move(arg);
    return Init_RobotCommand_Request_target_position(msg_);
  }

private:
  ::day2::srv::RobotCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::srv::RobotCommand_Request>()
{
  return day2::srv::builder::Init_RobotCommand_Request_command_type();
}

}  // namespace day2


namespace day2
{

namespace srv
{

namespace builder
{

class Init_RobotCommand_Response_error_code
{
public:
  explicit Init_RobotCommand_Response_error_code(::day2::srv::RobotCommand_Response & msg)
  : msg_(msg)
  {}
  ::day2::srv::RobotCommand_Response error_code(::day2::srv::RobotCommand_Response::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::srv::RobotCommand_Response msg_;
};

class Init_RobotCommand_Response_estimated_completion
{
public:
  explicit Init_RobotCommand_Response_estimated_completion(::day2::srv::RobotCommand_Response & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_Response_error_code estimated_completion(::day2::srv::RobotCommand_Response::_estimated_completion_type arg)
  {
    msg_.estimated_completion = std::move(arg);
    return Init_RobotCommand_Response_error_code(msg_);
  }

private:
  ::day2::srv::RobotCommand_Response msg_;
};

class Init_RobotCommand_Response_actual_target
{
public:
  explicit Init_RobotCommand_Response_actual_target(::day2::srv::RobotCommand_Response & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_Response_estimated_completion actual_target(::day2::srv::RobotCommand_Response::_actual_target_type arg)
  {
    msg_.actual_target = std::move(arg);
    return Init_RobotCommand_Response_estimated_completion(msg_);
  }

private:
  ::day2::srv::RobotCommand_Response msg_;
};

class Init_RobotCommand_Response_estimated_duration
{
public:
  explicit Init_RobotCommand_Response_estimated_duration(::day2::srv::RobotCommand_Response & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_Response_actual_target estimated_duration(::day2::srv::RobotCommand_Response::_estimated_duration_type arg)
  {
    msg_.estimated_duration = std::move(arg);
    return Init_RobotCommand_Response_actual_target(msg_);
  }

private:
  ::day2::srv::RobotCommand_Response msg_;
};

class Init_RobotCommand_Response_command_id
{
public:
  explicit Init_RobotCommand_Response_command_id(::day2::srv::RobotCommand_Response & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_Response_estimated_duration command_id(::day2::srv::RobotCommand_Response::_command_id_type arg)
  {
    msg_.command_id = std::move(arg);
    return Init_RobotCommand_Response_estimated_duration(msg_);
  }

private:
  ::day2::srv::RobotCommand_Response msg_;
};

class Init_RobotCommand_Response_message
{
public:
  explicit Init_RobotCommand_Response_message(::day2::srv::RobotCommand_Response & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_Response_command_id message(::day2::srv::RobotCommand_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_RobotCommand_Response_command_id(msg_);
  }

private:
  ::day2::srv::RobotCommand_Response msg_;
};

class Init_RobotCommand_Response_success
{
public:
  Init_RobotCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCommand_Response_message success(::day2::srv::RobotCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RobotCommand_Response_message(msg_);
  }

private:
  ::day2::srv::RobotCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::srv::RobotCommand_Response>()
{
  return day2::srv::builder::Init_RobotCommand_Response_success();
}

}  // namespace day2


namespace day2
{

namespace srv
{

namespace builder
{

class Init_RobotCommand_Event_response
{
public:
  explicit Init_RobotCommand_Event_response(::day2::srv::RobotCommand_Event & msg)
  : msg_(msg)
  {}
  ::day2::srv::RobotCommand_Event response(::day2::srv::RobotCommand_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::srv::RobotCommand_Event msg_;
};

class Init_RobotCommand_Event_request
{
public:
  explicit Init_RobotCommand_Event_request(::day2::srv::RobotCommand_Event & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_Event_response request(::day2::srv::RobotCommand_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RobotCommand_Event_response(msg_);
  }

private:
  ::day2::srv::RobotCommand_Event msg_;
};

class Init_RobotCommand_Event_info
{
public:
  Init_RobotCommand_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCommand_Event_request info(::day2::srv::RobotCommand_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RobotCommand_Event_request(msg_);
  }

private:
  ::day2::srv::RobotCommand_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::srv::RobotCommand_Event>()
{
  return day2::srv::builder::Init_RobotCommand_Event_info();
}

}  // namespace day2

#endif  // DAY2__SRV__DETAIL__ROBOT_COMMAND__BUILDER_HPP_
