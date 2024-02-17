// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from scion_types:msg/ZedObject.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "scion_types/msg/detail/zed_object__struct.hpp"
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

void ZedObject_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) scion_types::msg::ZedObject(_init);
}

void ZedObject_fini_function(void * message_memory)
{
  auto typed_message = static_cast<scion_types::msg::ZedObject *>(message_memory);
  typed_message->~ZedObject();
}

size_t size_function__ZedObject__position(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ZedObject__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ZedObject__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__ZedObject__position_covariance(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__ZedObject__position_covariance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__ZedObject__position_covariance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

size_t size_function__ZedObject__velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ZedObject__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ZedObject__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__ZedObject__dimensions_3d(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ZedObject__dimensions_3d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ZedObject__dimensions_3d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__ZedObject__corners(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__ZedObject__corners(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<scion_types::msg::Keypoint2Di, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__ZedObject__corners(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<scion_types::msg::Keypoint2Di, 4> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ZedObject_message_member_array[12] = {
  {
    "label",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types::msg::ZedObject, label),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "label_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types::msg::ZedObject, label_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sublabel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types::msg::ZedObject, sublabel),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "confidence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types::msg::ZedObject, confidence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(scion_types::msg::ZedObject, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__ZedObject__position,  // size() function pointer
    get_const_function__ZedObject__position,  // get_const(index) function pointer
    get_function__ZedObject__position,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position_covariance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(scion_types::msg::ZedObject, position_covariance),  // bytes offset in struct
    nullptr,  // default value
    size_function__ZedObject__position_covariance,  // size() function pointer
    get_const_function__ZedObject__position_covariance,  // get_const(index) function pointer
    get_function__ZedObject__position_covariance,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(scion_types::msg::ZedObject, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__ZedObject__velocity,  // size() function pointer
    get_const_function__ZedObject__velocity,  // get_const(index) function pointer
    get_function__ZedObject__velocity,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tracking_available",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types::msg::ZedObject, tracking_available),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tracking_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types::msg::ZedObject, tracking_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "action_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types::msg::ZedObject, action_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dimensions_3d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(scion_types::msg::ZedObject, dimensions_3d),  // bytes offset in struct
    nullptr,  // default value
    size_function__ZedObject__dimensions_3d,  // size() function pointer
    get_const_function__ZedObject__dimensions_3d,  // get_const(index) function pointer
    get_function__ZedObject__dimensions_3d,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "corners",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<scion_types::msg::Keypoint2Di>(),  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(scion_types::msg::ZedObject, corners),  // bytes offset in struct
    nullptr,  // default value
    size_function__ZedObject__corners,  // size() function pointer
    get_const_function__ZedObject__corners,  // get_const(index) function pointer
    get_function__ZedObject__corners,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ZedObject_message_members = {
  "scion_types::msg",  // message namespace
  "ZedObject",  // message name
  12,  // number of fields
  sizeof(scion_types::msg::ZedObject),
  ZedObject_message_member_array,  // message members
  ZedObject_init_function,  // function to initialize message memory (memory has to be allocated)
  ZedObject_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ZedObject_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ZedObject_message_members,
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
get_message_type_support_handle<scion_types::msg::ZedObject>()
{
  return &::scion_types::msg::rosidl_typesupport_introspection_cpp::ZedObject_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, scion_types, msg, ZedObject)() {
  return &::scion_types::msg::rosidl_typesupport_introspection_cpp::ZedObject_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
