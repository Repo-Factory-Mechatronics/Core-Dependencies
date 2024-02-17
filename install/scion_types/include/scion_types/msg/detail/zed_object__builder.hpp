// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scion_types:msg/ZedObject.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__ZED_OBJECT__BUILDER_HPP_
#define SCION_TYPES__MSG__DETAIL__ZED_OBJECT__BUILDER_HPP_

#include "scion_types/msg/detail/zed_object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace scion_types
{

namespace msg
{

namespace builder
{

class Init_ZedObject_corners
{
public:
  explicit Init_ZedObject_corners(::scion_types::msg::ZedObject & msg)
  : msg_(msg)
  {}
  ::scion_types::msg::ZedObject corners(::scion_types::msg::ZedObject::_corners_type arg)
  {
    msg_.corners = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scion_types::msg::ZedObject msg_;
};

class Init_ZedObject_dimensions_3d
{
public:
  explicit Init_ZedObject_dimensions_3d(::scion_types::msg::ZedObject & msg)
  : msg_(msg)
  {}
  Init_ZedObject_corners dimensions_3d(::scion_types::msg::ZedObject::_dimensions_3d_type arg)
  {
    msg_.dimensions_3d = std::move(arg);
    return Init_ZedObject_corners(msg_);
  }

private:
  ::scion_types::msg::ZedObject msg_;
};

class Init_ZedObject_action_state
{
public:
  explicit Init_ZedObject_action_state(::scion_types::msg::ZedObject & msg)
  : msg_(msg)
  {}
  Init_ZedObject_dimensions_3d action_state(::scion_types::msg::ZedObject::_action_state_type arg)
  {
    msg_.action_state = std::move(arg);
    return Init_ZedObject_dimensions_3d(msg_);
  }

private:
  ::scion_types::msg::ZedObject msg_;
};

class Init_ZedObject_tracking_state
{
public:
  explicit Init_ZedObject_tracking_state(::scion_types::msg::ZedObject & msg)
  : msg_(msg)
  {}
  Init_ZedObject_action_state tracking_state(::scion_types::msg::ZedObject::_tracking_state_type arg)
  {
    msg_.tracking_state = std::move(arg);
    return Init_ZedObject_action_state(msg_);
  }

private:
  ::scion_types::msg::ZedObject msg_;
};

class Init_ZedObject_tracking_available
{
public:
  explicit Init_ZedObject_tracking_available(::scion_types::msg::ZedObject & msg)
  : msg_(msg)
  {}
  Init_ZedObject_tracking_state tracking_available(::scion_types::msg::ZedObject::_tracking_available_type arg)
  {
    msg_.tracking_available = std::move(arg);
    return Init_ZedObject_tracking_state(msg_);
  }

private:
  ::scion_types::msg::ZedObject msg_;
};

class Init_ZedObject_velocity
{
public:
  explicit Init_ZedObject_velocity(::scion_types::msg::ZedObject & msg)
  : msg_(msg)
  {}
  Init_ZedObject_tracking_available velocity(::scion_types::msg::ZedObject::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_ZedObject_tracking_available(msg_);
  }

private:
  ::scion_types::msg::ZedObject msg_;
};

class Init_ZedObject_position_covariance
{
public:
  explicit Init_ZedObject_position_covariance(::scion_types::msg::ZedObject & msg)
  : msg_(msg)
  {}
  Init_ZedObject_velocity position_covariance(::scion_types::msg::ZedObject::_position_covariance_type arg)
  {
    msg_.position_covariance = std::move(arg);
    return Init_ZedObject_velocity(msg_);
  }

private:
  ::scion_types::msg::ZedObject msg_;
};

class Init_ZedObject_position
{
public:
  explicit Init_ZedObject_position(::scion_types::msg::ZedObject & msg)
  : msg_(msg)
  {}
  Init_ZedObject_position_covariance position(::scion_types::msg::ZedObject::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ZedObject_position_covariance(msg_);
  }

private:
  ::scion_types::msg::ZedObject msg_;
};

class Init_ZedObject_confidence
{
public:
  explicit Init_ZedObject_confidence(::scion_types::msg::ZedObject & msg)
  : msg_(msg)
  {}
  Init_ZedObject_position confidence(::scion_types::msg::ZedObject::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_ZedObject_position(msg_);
  }

private:
  ::scion_types::msg::ZedObject msg_;
};

class Init_ZedObject_sublabel
{
public:
  explicit Init_ZedObject_sublabel(::scion_types::msg::ZedObject & msg)
  : msg_(msg)
  {}
  Init_ZedObject_confidence sublabel(::scion_types::msg::ZedObject::_sublabel_type arg)
  {
    msg_.sublabel = std::move(arg);
    return Init_ZedObject_confidence(msg_);
  }

private:
  ::scion_types::msg::ZedObject msg_;
};

class Init_ZedObject_label_id
{
public:
  explicit Init_ZedObject_label_id(::scion_types::msg::ZedObject & msg)
  : msg_(msg)
  {}
  Init_ZedObject_sublabel label_id(::scion_types::msg::ZedObject::_label_id_type arg)
  {
    msg_.label_id = std::move(arg);
    return Init_ZedObject_sublabel(msg_);
  }

private:
  ::scion_types::msg::ZedObject msg_;
};

class Init_ZedObject_label
{
public:
  Init_ZedObject_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ZedObject_label_id label(::scion_types::msg::ZedObject::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_ZedObject_label_id(msg_);
  }

private:
  ::scion_types::msg::ZedObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::scion_types::msg::ZedObject>()
{
  return scion_types::msg::builder::Init_ZedObject_label();
}

}  // namespace scion_types

#endif  // SCION_TYPES__MSG__DETAIL__ZED_OBJECT__BUILDER_HPP_
