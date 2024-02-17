// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scion_types:msg/VisionObject.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__VISION_OBJECT__BUILDER_HPP_
#define SCION_TYPES__MSG__DETAIL__VISION_OBJECT__BUILDER_HPP_

#include "scion_types/msg/detail/vision_object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace scion_types
{

namespace msg
{

namespace builder
{

class Init_VisionObject_distance
{
public:
  explicit Init_VisionObject_distance(::scion_types::msg::VisionObject & msg)
  : msg_(msg)
  {}
  ::scion_types::msg::VisionObject distance(::scion_types::msg::VisionObject::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scion_types::msg::VisionObject msg_;
};

class Init_VisionObject_object_name
{
public:
  Init_VisionObject_object_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisionObject_distance object_name(::scion_types::msg::VisionObject::_object_name_type arg)
  {
    msg_.object_name = std::move(arg);
    return Init_VisionObject_distance(msg_);
  }

private:
  ::scion_types::msg::VisionObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::scion_types::msg::VisionObject>()
{
  return scion_types::msg::builder::Init_VisionObject_object_name();
}

}  // namespace scion_types

#endif  // SCION_TYPES__MSG__DETAIL__VISION_OBJECT__BUILDER_HPP_
