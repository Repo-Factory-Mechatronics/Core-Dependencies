// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scion_types:srv/CanCommand.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__SRV__DETAIL__CAN_COMMAND__BUILDER_HPP_
#define SCION_TYPES__SRV__DETAIL__CAN_COMMAND__BUILDER_HPP_

#include "scion_types/srv/detail/can_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace scion_types
{

namespace srv
{

namespace builder
{

class Init_CanCommand_Request_data
{
public:
  explicit Init_CanCommand_Request_data(::scion_types::srv::CanCommand_Request & msg)
  : msg_(msg)
  {}
  ::scion_types::srv::CanCommand_Request data(::scion_types::srv::CanCommand_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scion_types::srv::CanCommand_Request msg_;
};

class Init_CanCommand_Request_topic
{
public:
  explicit Init_CanCommand_Request_topic(::scion_types::srv::CanCommand_Request & msg)
  : msg_(msg)
  {}
  Init_CanCommand_Request_data topic(::scion_types::srv::CanCommand_Request::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return Init_CanCommand_Request_data(msg_);
  }

private:
  ::scion_types::srv::CanCommand_Request msg_;
};

class Init_CanCommand_Request_device
{
public:
  explicit Init_CanCommand_Request_device(::scion_types::srv::CanCommand_Request & msg)
  : msg_(msg)
  {}
  Init_CanCommand_Request_topic device(::scion_types::srv::CanCommand_Request::_device_type arg)
  {
    msg_.device = std::move(arg);
    return Init_CanCommand_Request_topic(msg_);
  }

private:
  ::scion_types::srv::CanCommand_Request msg_;
};

class Init_CanCommand_Request_command
{
public:
  Init_CanCommand_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanCommand_Request_device command(::scion_types::srv::CanCommand_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_CanCommand_Request_device(msg_);
  }

private:
  ::scion_types::srv::CanCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::scion_types::srv::CanCommand_Request>()
{
  return scion_types::srv::builder::Init_CanCommand_Request_command();
}

}  // namespace scion_types


namespace scion_types
{

namespace srv
{

namespace builder
{

class Init_CanCommand_Response_status
{
public:
  Init_CanCommand_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::scion_types::srv::CanCommand_Response status(::scion_types::srv::CanCommand_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scion_types::srv::CanCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::scion_types::srv::CanCommand_Response>()
{
  return scion_types::srv::builder::Init_CanCommand_Response_status();
}

}  // namespace scion_types

#endif  // SCION_TYPES__SRV__DETAIL__CAN_COMMAND__BUILDER_HPP_
