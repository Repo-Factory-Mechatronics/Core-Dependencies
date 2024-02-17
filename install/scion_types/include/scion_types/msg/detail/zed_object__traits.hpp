// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from scion_types:msg/ZedObject.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__ZED_OBJECT__TRAITS_HPP_
#define SCION_TYPES__MSG__DETAIL__ZED_OBJECT__TRAITS_HPP_

#include "scion_types/msg/detail/zed_object__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'corners'
#include "scion_types/msg/detail/keypoint2_di__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<scion_types::msg::ZedObject>()
{
  return "scion_types::msg::ZedObject";
}

template<>
inline const char * name<scion_types::msg::ZedObject>()
{
  return "scion_types/msg/ZedObject";
}

template<>
struct has_fixed_size<scion_types::msg::ZedObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<scion_types::msg::ZedObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<scion_types::msg::ZedObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SCION_TYPES__MSG__DETAIL__ZED_OBJECT__TRAITS_HPP_
