// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from scion_types:srv/CanCommand.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__SRV__DETAIL__CAN_COMMAND__TRAITS_HPP_
#define SCION_TYPES__SRV__DETAIL__CAN_COMMAND__TRAITS_HPP_

#include "scion_types/srv/detail/can_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<scion_types::srv::CanCommand_Request>()
{
  return "scion_types::srv::CanCommand_Request";
}

template<>
inline const char * name<scion_types::srv::CanCommand_Request>()
{
  return "scion_types/srv/CanCommand_Request";
}

template<>
struct has_fixed_size<scion_types::srv::CanCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<scion_types::srv::CanCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<scion_types::srv::CanCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<scion_types::srv::CanCommand_Response>()
{
  return "scion_types::srv::CanCommand_Response";
}

template<>
inline const char * name<scion_types::srv::CanCommand_Response>()
{
  return "scion_types/srv/CanCommand_Response";
}

template<>
struct has_fixed_size<scion_types::srv::CanCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<scion_types::srv::CanCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<scion_types::srv::CanCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<scion_types::srv::CanCommand>()
{
  return "scion_types::srv::CanCommand";
}

template<>
inline const char * name<scion_types::srv::CanCommand>()
{
  return "scion_types/srv/CanCommand";
}

template<>
struct has_fixed_size<scion_types::srv::CanCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<scion_types::srv::CanCommand_Request>::value &&
    has_fixed_size<scion_types::srv::CanCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<scion_types::srv::CanCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<scion_types::srv::CanCommand_Request>::value &&
    has_bounded_size<scion_types::srv::CanCommand_Response>::value
  >
{
};

template<>
struct is_service<scion_types::srv::CanCommand>
  : std::true_type
{
};

template<>
struct is_service_request<scion_types::srv::CanCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<scion_types::srv::CanCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SCION_TYPES__SRV__DETAIL__CAN_COMMAND__TRAITS_HPP_
