// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from day2:srv/GetRobotStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/srv/get_robot_status.hpp"


#ifndef DAY2__SRV__DETAIL__GET_ROBOT_STATUS__BUILDER_HPP_
#define DAY2__SRV__DETAIL__GET_ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "day2/srv/detail/get_robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace day2
{

namespace srv
{

namespace builder
{

class Init_GetRobotStatus_Request_requested_fields
{
public:
  explicit Init_GetRobotStatus_Request_requested_fields(::day2::srv::GetRobotStatus_Request & msg)
  : msg_(msg)
  {}
  ::day2::srv::GetRobotStatus_Request requested_fields(::day2::srv::GetRobotStatus_Request::_requested_fields_type arg)
  {
    msg_.requested_fields = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Request msg_;
};

class Init_GetRobotStatus_Request_include_history
{
public:
  explicit Init_GetRobotStatus_Request_include_history(::day2::srv::GetRobotStatus_Request & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Request_requested_fields include_history(::day2::srv::GetRobotStatus_Request::_include_history_type arg)
  {
    msg_.include_history = std::move(arg);
    return Init_GetRobotStatus_Request_requested_fields(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Request msg_;
};

class Init_GetRobotStatus_Request_include_diagnostics
{
public:
  explicit Init_GetRobotStatus_Request_include_diagnostics(::day2::srv::GetRobotStatus_Request & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Request_include_history include_diagnostics(::day2::srv::GetRobotStatus_Request::_include_diagnostics_type arg)
  {
    msg_.include_diagnostics = std::move(arg);
    return Init_GetRobotStatus_Request_include_history(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Request msg_;
};

class Init_GetRobotStatus_Request_include_sensors
{
public:
  explicit Init_GetRobotStatus_Request_include_sensors(::day2::srv::GetRobotStatus_Request & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Request_include_diagnostics include_sensors(::day2::srv::GetRobotStatus_Request::_include_sensors_type arg)
  {
    msg_.include_sensors = std::move(arg);
    return Init_GetRobotStatus_Request_include_diagnostics(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Request msg_;
};

class Init_GetRobotStatus_Request_robot_name
{
public:
  explicit Init_GetRobotStatus_Request_robot_name(::day2::srv::GetRobotStatus_Request & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Request_include_sensors robot_name(::day2::srv::GetRobotStatus_Request::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_GetRobotStatus_Request_include_sensors(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Request msg_;
};

class Init_GetRobotStatus_Request_robot_id
{
public:
  Init_GetRobotStatus_Request_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRobotStatus_Request_robot_name robot_id(::day2::srv::GetRobotStatus_Request::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_GetRobotStatus_Request_robot_name(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::srv::GetRobotStatus_Request>()
{
  return day2::srv::builder::Init_GetRobotStatus_Request_robot_id();
}

}  // namespace day2


namespace day2
{

namespace srv
{

namespace builder
{

class Init_GetRobotStatus_Response_last_update_time
{
public:
  explicit Init_GetRobotStatus_Response_last_update_time(::day2::srv::GetRobotStatus_Response & msg)
  : msg_(msg)
  {}
  ::day2::srv::GetRobotStatus_Response last_update_time(::day2::srv::GetRobotStatus_Response::_last_update_time_type arg)
  {
    msg_.last_update_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Response msg_;
};

class Init_GetRobotStatus_Response_query_timestamp
{
public:
  explicit Init_GetRobotStatus_Response_query_timestamp(::day2::srv::GetRobotStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Response_last_update_time query_timestamp(::day2::srv::GetRobotStatus_Response::_query_timestamp_type arg)
  {
    msg_.query_timestamp = std::move(arg);
    return Init_GetRobotStatus_Response_last_update_time(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Response msg_;
};

class Init_GetRobotStatus_Response_network_latency_ms
{
public:
  explicit Init_GetRobotStatus_Response_network_latency_ms(::day2::srv::GetRobotStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Response_query_timestamp network_latency_ms(::day2::srv::GetRobotStatus_Response::_network_latency_ms_type arg)
  {
    msg_.network_latency_ms = std::move(arg);
    return Init_GetRobotStatus_Response_query_timestamp(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Response msg_;
};

class Init_GetRobotStatus_Response_memory_usage_percent
{
public:
  explicit Init_GetRobotStatus_Response_memory_usage_percent(::day2::srv::GetRobotStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Response_network_latency_ms memory_usage_percent(::day2::srv::GetRobotStatus_Response::_memory_usage_percent_type arg)
  {
    msg_.memory_usage_percent = std::move(arg);
    return Init_GetRobotStatus_Response_network_latency_ms(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Response msg_;
};

class Init_GetRobotStatus_Response_cpu_usage_percent
{
public:
  explicit Init_GetRobotStatus_Response_cpu_usage_percent(::day2::srv::GetRobotStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Response_memory_usage_percent cpu_usage_percent(::day2::srv::GetRobotStatus_Response::_cpu_usage_percent_type arg)
  {
    msg_.cpu_usage_percent = std::move(arg);
    return Init_GetRobotStatus_Response_memory_usage_percent(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Response msg_;
};

class Init_GetRobotStatus_Response_average_response_time_ms
{
public:
  explicit Init_GetRobotStatus_Response_average_response_time_ms(::day2::srv::GetRobotStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Response_cpu_usage_percent average_response_time_ms(::day2::srv::GetRobotStatus_Response::_average_response_time_ms_type arg)
  {
    msg_.average_response_time_ms = std::move(arg);
    return Init_GetRobotStatus_Response_cpu_usage_percent(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Response msg_;
};

class Init_GetRobotStatus_Response_error_count_today
{
public:
  explicit Init_GetRobotStatus_Response_error_count_today(::day2::srv::GetRobotStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Response_average_response_time_ms error_count_today(::day2::srv::GetRobotStatus_Response::_error_count_today_type arg)
  {
    msg_.error_count_today = std::move(arg);
    return Init_GetRobotStatus_Response_average_response_time_ms(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Response msg_;
};

class Init_GetRobotStatus_Response_total_distance_traveled
{
public:
  explicit Init_GetRobotStatus_Response_total_distance_traveled(::day2::srv::GetRobotStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Response_error_count_today total_distance_traveled(::day2::srv::GetRobotStatus_Response::_total_distance_traveled_type arg)
  {
    msg_.total_distance_traveled = std::move(arg);
    return Init_GetRobotStatus_Response_error_count_today(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Response msg_;
};

class Init_GetRobotStatus_Response_total_commands_executed
{
public:
  explicit Init_GetRobotStatus_Response_total_commands_executed(::day2::srv::GetRobotStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Response_total_distance_traveled total_commands_executed(::day2::srv::GetRobotStatus_Response::_total_commands_executed_type arg)
  {
    msg_.total_commands_executed = std::move(arg);
    return Init_GetRobotStatus_Response_total_distance_traveled(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Response msg_;
};

class Init_GetRobotStatus_Response_uptime_hours
{
public:
  explicit Init_GetRobotStatus_Response_uptime_hours(::day2::srv::GetRobotStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Response_total_commands_executed uptime_hours(::day2::srv::GetRobotStatus_Response::_uptime_hours_type arg)
  {
    msg_.uptime_hours = std::move(arg);
    return Init_GetRobotStatus_Response_total_commands_executed(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Response msg_;
};

class Init_GetRobotStatus_Response_status_history
{
public:
  explicit Init_GetRobotStatus_Response_status_history(::day2::srv::GetRobotStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Response_uptime_hours status_history(::day2::srv::GetRobotStatus_Response::_status_history_type arg)
  {
    msg_.status_history = std::move(arg);
    return Init_GetRobotStatus_Response_uptime_hours(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Response msg_;
};

class Init_GetRobotStatus_Response_diagnostic_messages
{
public:
  explicit Init_GetRobotStatus_Response_diagnostic_messages(::day2::srv::GetRobotStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Response_status_history diagnostic_messages(::day2::srv::GetRobotStatus_Response::_diagnostic_messages_type arg)
  {
    msg_.diagnostic_messages = std::move(arg);
    return Init_GetRobotStatus_Response_status_history(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Response msg_;
};

class Init_GetRobotStatus_Response_sensor_data
{
public:
  explicit Init_GetRobotStatus_Response_sensor_data(::day2::srv::GetRobotStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Response_diagnostic_messages sensor_data(::day2::srv::GetRobotStatus_Response::_sensor_data_type arg)
  {
    msg_.sensor_data = std::move(arg);
    return Init_GetRobotStatus_Response_diagnostic_messages(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Response msg_;
};

class Init_GetRobotStatus_Response_current_status
{
public:
  explicit Init_GetRobotStatus_Response_current_status(::day2::srv::GetRobotStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Response_sensor_data current_status(::day2::srv::GetRobotStatus_Response::_current_status_type arg)
  {
    msg_.current_status = std::move(arg);
    return Init_GetRobotStatus_Response_sensor_data(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Response msg_;
};

class Init_GetRobotStatus_Response_message
{
public:
  explicit Init_GetRobotStatus_Response_message(::day2::srv::GetRobotStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Response_current_status message(::day2::srv::GetRobotStatus_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_GetRobotStatus_Response_current_status(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Response msg_;
};

class Init_GetRobotStatus_Response_success
{
public:
  Init_GetRobotStatus_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRobotStatus_Response_message success(::day2::srv::GetRobotStatus_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetRobotStatus_Response_message(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::srv::GetRobotStatus_Response>()
{
  return day2::srv::builder::Init_GetRobotStatus_Response_success();
}

}  // namespace day2


namespace day2
{

namespace srv
{

namespace builder
{

class Init_GetRobotStatus_Event_response
{
public:
  explicit Init_GetRobotStatus_Event_response(::day2::srv::GetRobotStatus_Event & msg)
  : msg_(msg)
  {}
  ::day2::srv::GetRobotStatus_Event response(::day2::srv::GetRobotStatus_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Event msg_;
};

class Init_GetRobotStatus_Event_request
{
public:
  explicit Init_GetRobotStatus_Event_request(::day2::srv::GetRobotStatus_Event & msg)
  : msg_(msg)
  {}
  Init_GetRobotStatus_Event_response request(::day2::srv::GetRobotStatus_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetRobotStatus_Event_response(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Event msg_;
};

class Init_GetRobotStatus_Event_info
{
public:
  Init_GetRobotStatus_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRobotStatus_Event_request info(::day2::srv::GetRobotStatus_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetRobotStatus_Event_request(msg_);
  }

private:
  ::day2::srv::GetRobotStatus_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::srv::GetRobotStatus_Event>()
{
  return day2::srv::builder::Init_GetRobotStatus_Event_info();
}

}  // namespace day2

#endif  // DAY2__SRV__DETAIL__GET_ROBOT_STATUS__BUILDER_HPP_
