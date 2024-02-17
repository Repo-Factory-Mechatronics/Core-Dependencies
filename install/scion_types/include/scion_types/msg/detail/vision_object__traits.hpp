// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from scion_types:msg/VisionObject.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__VISION_OBJECT__TRAITS_HPP_
#define SCION_TYPES__MSG__DETAIL__VISION_OBJECT__TRAITS_HPP_

#include "scion_types/msg/detail/vision_object__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<scion_types::msg::VisionObject>()
{
  return "scion_types::msg::VisionObject";
}

template<>
inline const char * name<scion_types::msg::VisionObject>()
{
  return "scion_types/msg/VisionObject";
}

template<>
struct has_fixed_size<scion_types::msg::VisionObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<scion_types::msg::VisionObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<scion_types::msg::VisionObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SCION_TYPES__MSG__DETAIL__VISION_OBJECT__TRAITS_HPP_
