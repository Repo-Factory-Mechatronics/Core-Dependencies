// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scion_types:msg/Idea.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__IDEA__BUILDER_HPP_
#define SCION_TYPES__MSG__DETAIL__IDEA__BUILDER_HPP_

#include "scion_types/msg/detail/idea__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace scion_types
{

namespace msg
{

namespace builder
{

class Init_Idea_parameters
{
public:
  explicit Init_Idea_parameters(::scion_types::msg::Idea & msg)
  : msg_(msg)
  {}
  ::scion_types::msg::Idea parameters(::scion_types::msg::Idea::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scion_types::msg::Idea msg_;
};

class Init_Idea_code
{
public:
  Init_Idea_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Idea_parameters code(::scion_types::msg::Idea::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_Idea_parameters(msg_);
  }

private:
  ::scion_types::msg::Idea msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::scion_types::msg::Idea>()
{
  return scion_types::msg::builder::Init_Idea_code();
}

}  // namespace scion_types

#endif  // SCION_TYPES__MSG__DETAIL__IDEA__BUILDER_HPP_
