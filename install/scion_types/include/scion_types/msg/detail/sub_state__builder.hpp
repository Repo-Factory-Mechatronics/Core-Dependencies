// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scion_types:msg/SubState.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__SUB_STATE__BUILDER_HPP_
#define SCION_TYPES__MSG__DETAIL__SUB_STATE__BUILDER_HPP_

#include "scion_types/msg/detail/sub_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace scion_types
{

namespace msg
{

namespace builder
{

class Init_SubState_host_mode
{
public:
  explicit Init_SubState_host_mode(::scion_types::msg::SubState & msg)
  : msg_(msg)
  {}
  ::scion_types::msg::SubState host_mode(::scion_types::msg::SubState::_host_mode_type arg)
  {
    msg_.host_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scion_types::msg::SubState msg_;
};

class Init_SubState_leak_detect
{
public:
  explicit Init_SubState_leak_detect(::scion_types::msg::SubState & msg)
  : msg_(msg)
  {}
  Init_SubState_host_mode leak_detect(::scion_types::msg::SubState::_leak_detect_type arg)
  {
    msg_.leak_detect = std::move(arg);
    return Init_SubState_host_mode(msg_);
  }

private:
  ::scion_types::msg::SubState msg_;
};

class Init_SubState_shutdown
{
public:
  Init_SubState_shutdown()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SubState_leak_detect shutdown(::scion_types::msg::SubState::_shutdown_type arg)
  {
    msg_.shutdown = std::move(arg);
    return Init_SubState_leak_detect(msg_);
  }

private:
  ::scion_types::msg::SubState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::scion_types::msg::SubState>()
{
  return scion_types::msg::builder::Init_SubState_shutdown();
}

}  // namespace scion_types

#endif  // SCION_TYPES__MSG__DETAIL__SUB_STATE__BUILDER_HPP_
