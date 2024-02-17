// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from scion_types:msg/Keypoint2Di.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__KEYPOINT2_DI__TRAITS_HPP_
#define SCION_TYPES__MSG__DETAIL__KEYPOINT2_DI__TRAITS_HPP_

#include "scion_types/msg/detail/keypoint2_di__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<scion_types::msg::Keypoint2Di>()
{
  return "scion_types::msg::Keypoint2Di";
}

template<>
inline const char * name<scion_types::msg::Keypoint2Di>()
{
  return "scion_types/msg/Keypoint2Di";
}

template<>
struct has_fixed_size<scion_types::msg::Keypoint2Di>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<scion_types::msg::Keypoint2Di>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<scion_types::msg::Keypoint2Di>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SCION_TYPES__MSG__DETAIL__KEYPOINT2_DI__TRAITS_HPP_
