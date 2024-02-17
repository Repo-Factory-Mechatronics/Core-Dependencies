// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scion_types:msg/RawData.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__RAW_DATA__BUILDER_HPP_
#define SCION_TYPES__MSG__DETAIL__RAW_DATA__BUILDER_HPP_

#include "scion_types/msg/detail/raw_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace scion_types
{

namespace msg
{

namespace builder
{

class Init_RawData_format
{
public:
  explicit Init_RawData_format(::scion_types::msg::RawData & msg)
  : msg_(msg)
  {}
  ::scion_types::msg::RawData format(::scion_types::msg::RawData::_format_type arg)
  {
    msg_.format = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scion_types::msg::RawData msg_;
};

class Init_RawData_datatype
{
public:
  explicit Init_RawData_datatype(::scion_types::msg::RawData & msg)
  : msg_(msg)
  {}
  Init_RawData_format datatype(::scion_types::msg::RawData::_datatype_type arg)
  {
    msg_.datatype = std::move(arg);
    return Init_RawData_format(msg_);
  }

private:
  ::scion_types::msg::RawData msg_;
};

class Init_RawData_value
{
public:
  explicit Init_RawData_value(::scion_types::msg::RawData & msg)
  : msg_(msg)
  {}
  Init_RawData_datatype value(::scion_types::msg::RawData::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_RawData_datatype(msg_);
  }

private:
  ::scion_types::msg::RawData msg_;
};

class Init_RawData_device
{
public:
  Init_RawData_device()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawData_value device(::scion_types::msg::RawData::_device_type arg)
  {
    msg_.device = std::move(arg);
    return Init_RawData_value(msg_);
  }

private:
  ::scion_types::msg::RawData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::scion_types::msg::RawData>()
{
  return scion_types::msg::builder::Init_RawData_device();
}

}  // namespace scion_types

#endif  // SCION_TYPES__MSG__DETAIL__RAW_DATA__BUILDER_HPP_
