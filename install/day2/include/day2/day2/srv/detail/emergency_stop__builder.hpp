// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from day2:srv/EmergencyStop.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/srv/emergency_stop.hpp"


#ifndef DAY2__SRV__DETAIL__EMERGENCY_STOP__BUILDER_HPP_
#define DAY2__SRV__DETAIL__EMERGENCY_STOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "day2/srv/detail/emergency_stop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace day2
{

namespace srv
{

namespace builder
{

class Init_EmergencyStop_Request_priority_level
{
public:
  explicit Init_EmergencyStop_Request_priority_level(::day2::srv::EmergencyStop_Request & msg)
  : msg_(msg)
  {}
  ::day2::srv::EmergencyStop_Request priority_level(::day2::srv::EmergencyStop_Request::_priority_level_type arg)
  {
    msg_.priority_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Request msg_;
};

class Init_EmergencyStop_Request_operator_id
{
public:
  explicit Init_EmergencyStop_Request_operator_id(::day2::srv::EmergencyStop_Request & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Request_priority_level operator_id(::day2::srv::EmergencyStop_Request::_operator_id_type arg)
  {
    msg_.operator_id = std::move(arg);
    return Init_EmergencyStop_Request_priority_level(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Request msg_;
};

class Init_EmergencyStop_Request_sound_alarm
{
public:
  explicit Init_EmergencyStop_Request_sound_alarm(::day2::srv::EmergencyStop_Request & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Request_operator_id sound_alarm(::day2::srv::EmergencyStop_Request::_sound_alarm_type arg)
  {
    msg_.sound_alarm = std::move(arg);
    return Init_EmergencyStop_Request_operator_id(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Request msg_;
};

class Init_EmergencyStop_Request_lock_brakes
{
public:
  explicit Init_EmergencyStop_Request_lock_brakes(::day2::srv::EmergencyStop_Request & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Request_sound_alarm lock_brakes(::day2::srv::EmergencyStop_Request::_lock_brakes_type arg)
  {
    msg_.lock_brakes = std::move(arg);
    return Init_EmergencyStop_Request_sound_alarm(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Request msg_;
};

class Init_EmergencyStop_Request_disable_motors
{
public:
  explicit Init_EmergencyStop_Request_disable_motors(::day2::srv::EmergencyStop_Request & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Request_lock_brakes disable_motors(::day2::srv::EmergencyStop_Request::_disable_motors_type arg)
  {
    msg_.disable_motors = std::move(arg);
    return Init_EmergencyStop_Request_lock_brakes(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Request msg_;
};

class Init_EmergencyStop_Request_stop_type
{
public:
  explicit Init_EmergencyStop_Request_stop_type(::day2::srv::EmergencyStop_Request & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Request_disable_motors stop_type(::day2::srv::EmergencyStop_Request::_stop_type_type arg)
  {
    msg_.stop_type = std::move(arg);
    return Init_EmergencyStop_Request_disable_motors(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Request msg_;
};

class Init_EmergencyStop_Request_reason
{
public:
  explicit Init_EmergencyStop_Request_reason(::day2::srv::EmergencyStop_Request & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Request_stop_type reason(::day2::srv::EmergencyStop_Request::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return Init_EmergencyStop_Request_stop_type(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Request msg_;
};

class Init_EmergencyStop_Request_robot_id
{
public:
  Init_EmergencyStop_Request_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmergencyStop_Request_reason robot_id(::day2::srv::EmergencyStop_Request::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_EmergencyStop_Request_reason(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::srv::EmergencyStop_Request>()
{
  return day2::srv::builder::Init_EmergencyStop_Request_robot_id();
}

}  // namespace day2


namespace day2
{

namespace srv
{

namespace builder
{

class Init_EmergencyStop_Response_error_code
{
public:
  explicit Init_EmergencyStop_Response_error_code(::day2::srv::EmergencyStop_Response & msg)
  : msg_(msg)
  {}
  ::day2::srv::EmergencyStop_Response error_code(::day2::srv::EmergencyStop_Response::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Response msg_;
};

class Init_EmergencyStop_Response_requires_investigation
{
public:
  explicit Init_EmergencyStop_Response_requires_investigation(::day2::srv::EmergencyStop_Response & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Response_error_code requires_investigation(::day2::srv::EmergencyStop_Response::_requires_investigation_type arg)
  {
    msg_.requires_investigation = std::move(arg);
    return Init_EmergencyStop_Response_error_code(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Response msg_;
};

class Init_EmergencyStop_Response_incident_classification
{
public:
  explicit Init_EmergencyStop_Response_incident_classification(::day2::srv::EmergencyStop_Response & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Response_requires_investigation incident_classification(::day2::srv::EmergencyStop_Response::_incident_classification_type arg)
  {
    msg_.incident_classification = std::move(arg);
    return Init_EmergencyStop_Response_requires_investigation(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Response msg_;
};

class Init_EmergencyStop_Response_incident_id
{
public:
  explicit Init_EmergencyStop_Response_incident_id(::day2::srv::EmergencyStop_Response & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Response_incident_classification incident_id(::day2::srv::EmergencyStop_Response::_incident_id_type arg)
  {
    msg_.incident_id = std::move(arg);
    return Init_EmergencyStop_Response_incident_classification(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Response msg_;
};

class Init_EmergencyStop_Response_estimated_recovery_time
{
public:
  explicit Init_EmergencyStop_Response_estimated_recovery_time(::day2::srv::EmergencyStop_Response & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Response_incident_id estimated_recovery_time(::day2::srv::EmergencyStop_Response::_estimated_recovery_time_type arg)
  {
    msg_.estimated_recovery_time = std::move(arg);
    return Init_EmergencyStop_Response_incident_id(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Response msg_;
};

class Init_EmergencyStop_Response_reset_procedures
{
public:
  explicit Init_EmergencyStop_Response_reset_procedures(::day2::srv::EmergencyStop_Response & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Response_estimated_recovery_time reset_procedures(::day2::srv::EmergencyStop_Response::_reset_procedures_type arg)
  {
    msg_.reset_procedures = std::move(arg);
    return Init_EmergencyStop_Response_estimated_recovery_time(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Response msg_;
};

class Init_EmergencyStop_Response_manual_reset_required
{
public:
  explicit Init_EmergencyStop_Response_manual_reset_required(::day2::srv::EmergencyStop_Response & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Response_reset_procedures manual_reset_required(::day2::srv::EmergencyStop_Response::_manual_reset_required_type arg)
  {
    msg_.manual_reset_required = std::move(arg);
    return Init_EmergencyStop_Response_reset_procedures(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Response msg_;
};

class Init_EmergencyStop_Response_required_actions
{
public:
  explicit Init_EmergencyStop_Response_required_actions(::day2::srv::EmergencyStop_Response & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Response_manual_reset_required required_actions(::day2::srv::EmergencyStop_Response::_required_actions_type arg)
  {
    msg_.required_actions = std::move(arg);
    return Init_EmergencyStop_Response_manual_reset_required(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Response msg_;
};

class Init_EmergencyStop_Response_active_alarms
{
public:
  explicit Init_EmergencyStop_Response_active_alarms(::day2::srv::EmergencyStop_Response & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Response_required_actions active_alarms(::day2::srv::EmergencyStop_Response::_active_alarms_type arg)
  {
    msg_.active_alarms = std::move(arg);
    return Init_EmergencyStop_Response_required_actions(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Response msg_;
};

class Init_EmergencyStop_Response_system_safe_state
{
public:
  explicit Init_EmergencyStop_Response_system_safe_state(::day2::srv::EmergencyStop_Response & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Response_active_alarms system_safe_state(::day2::srv::EmergencyStop_Response::_system_safe_state_type arg)
  {
    msg_.system_safe_state = std::move(arg);
    return Init_EmergencyStop_Response_active_alarms(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Response msg_;
};

class Init_EmergencyStop_Response_stop_distances
{
public:
  explicit Init_EmergencyStop_Response_stop_distances(::day2::srv::EmergencyStop_Response & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Response_system_safe_state stop_distances(::day2::srv::EmergencyStop_Response::_stop_distances_type arg)
  {
    msg_.stop_distances = std::move(arg);
    return Init_EmergencyStop_Response_system_safe_state(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Response msg_;
};

class Init_EmergencyStop_Response_robot_responses
{
public:
  explicit Init_EmergencyStop_Response_robot_responses(::day2::srv::EmergencyStop_Response & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Response_stop_distances robot_responses(::day2::srv::EmergencyStop_Response::_robot_responses_type arg)
  {
    msg_.robot_responses = std::move(arg);
    return Init_EmergencyStop_Response_stop_distances(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Response msg_;
};

class Init_EmergencyStop_Response_stopped_robot_ids
{
public:
  explicit Init_EmergencyStop_Response_stopped_robot_ids(::day2::srv::EmergencyStop_Response & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Response_robot_responses stopped_robot_ids(::day2::srv::EmergencyStop_Response::_stopped_robot_ids_type arg)
  {
    msg_.stopped_robot_ids = std::move(arg);
    return Init_EmergencyStop_Response_robot_responses(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Response msg_;
};

class Init_EmergencyStop_Response_stop_timestamp
{
public:
  explicit Init_EmergencyStop_Response_stop_timestamp(::day2::srv::EmergencyStop_Response & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Response_stopped_robot_ids stop_timestamp(::day2::srv::EmergencyStop_Response::_stop_timestamp_type arg)
  {
    msg_.stop_timestamp = std::move(arg);
    return Init_EmergencyStop_Response_stopped_robot_ids(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Response msg_;
};

class Init_EmergencyStop_Response_message
{
public:
  explicit Init_EmergencyStop_Response_message(::day2::srv::EmergencyStop_Response & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Response_stop_timestamp message(::day2::srv::EmergencyStop_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_EmergencyStop_Response_stop_timestamp(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Response msg_;
};

class Init_EmergencyStop_Response_success
{
public:
  Init_EmergencyStop_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmergencyStop_Response_message success(::day2::srv::EmergencyStop_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_EmergencyStop_Response_message(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::srv::EmergencyStop_Response>()
{
  return day2::srv::builder::Init_EmergencyStop_Response_success();
}

}  // namespace day2


namespace day2
{

namespace srv
{

namespace builder
{

class Init_EmergencyStop_Event_response
{
public:
  explicit Init_EmergencyStop_Event_response(::day2::srv::EmergencyStop_Event & msg)
  : msg_(msg)
  {}
  ::day2::srv::EmergencyStop_Event response(::day2::srv::EmergencyStop_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Event msg_;
};

class Init_EmergencyStop_Event_request
{
public:
  explicit Init_EmergencyStop_Event_request(::day2::srv::EmergencyStop_Event & msg)
  : msg_(msg)
  {}
  Init_EmergencyStop_Event_response request(::day2::srv::EmergencyStop_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_EmergencyStop_Event_response(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Event msg_;
};

class Init_EmergencyStop_Event_info
{
public:
  Init_EmergencyStop_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmergencyStop_Event_request info(::day2::srv::EmergencyStop_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_EmergencyStop_Event_request(msg_);
  }

private:
  ::day2::srv::EmergencyStop_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::srv::EmergencyStop_Event>()
{
  return day2::srv::builder::Init_EmergencyStop_Event_info();
}

}  // namespace day2

#endif  // DAY2__SRV__DETAIL__EMERGENCY_STOP__BUILDER_HPP_
