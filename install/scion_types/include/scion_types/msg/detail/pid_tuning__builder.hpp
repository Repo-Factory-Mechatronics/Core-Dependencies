// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scion_types:msg/PidTuning.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__PID_TUNING__BUILDER_HPP_
#define SCION_TYPES__MSG__DETAIL__PID_TUNING__BUILDER_HPP_

#include "scion_types/msg/detail/pid_tuning__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace scion_types
{

namespace msg
{

namespace builder
{

class Init_PidTuning_data
{
public:
  explicit Init_PidTuning_data(::scion_types::msg::PidTuning & msg)
  : msg_(msg)
  {}
  ::scion_types::msg::PidTuning data(::scion_types::msg::PidTuning::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scion_types::msg::PidTuning msg_;
};

class Init_PidTuning_axis
{
public:
  Init_PidTuning_axis()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PidTuning_data axis(::scion_types::msg::PidTuning::_axis_type arg)
  {
    msg_.axis = std::move(arg);
    return Init_PidTuning_data(msg_);
  }

private:
  ::scion_types::msg::PidTuning msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::scion_types::msg::PidTuning>()
{
  return scion_types::msg::builder::Init_PidTuning_axis();
}

}  // namespace scion_types

#endif  // SCION_TYPES__MSG__DETAIL__PID_TUNING__BUILDER_HPP_
