// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from scion_types:msg/PidTuning.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "scion_types/msg/detail/pid_tuning__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace scion_types
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PidTuning_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) scion_types::msg::PidTuning(_init);
}

void PidTuning_fini_function(void * message_memory)
{
  auto typed_message = static_cast<scion_types::msg::PidTuning *>(message_memory);
  typed_message->~PidTuning();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PidTuning_message_member_array[2] = {
  {
    "axis",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types::msg::PidTuning, axis),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types::msg::PidTuning, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PidTuning_message_members = {
  "scion_types::msg",  // message namespace
  "PidTuning",  // message name
  2,  // number of fields
  sizeof(scion_types::msg::PidTuning),
  PidTuning_message_member_array,  // message members
  PidTuning_init_function,  // function to initialize message memory (memory has to be allocated)
  PidTuning_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PidTuning_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PidTuning_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace scion_types


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<scion_types::msg::PidTuning>()
{
  return &::scion_types::msg::rosidl_typesupport_introspection_cpp::PidTuning_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, scion_types, msg, PidTuning)() {
  return &::scion_types::msg::rosidl_typesupport_introspection_cpp::PidTuning_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
