// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from scion_types:msg/Datapoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "scion_types/msg/detail/datapoint__rosidl_typesupport_introspection_c.h"
#include "scion_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "scion_types/msg/detail/datapoint__functions.h"
#include "scion_types/msg/detail/datapoint__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Datapoint__rosidl_typesupport_introspection_c__Datapoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  scion_types__msg__Datapoint__init(message_memory);
}

void Datapoint__rosidl_typesupport_introspection_c__Datapoint_fini_function(void * message_memory)
{
  scion_types__msg__Datapoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Datapoint__rosidl_typesupport_introspection_c__Datapoint_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types__msg__Datapoint, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Datapoint__rosidl_typesupport_introspection_c__Datapoint_message_members = {
  "scion_types__msg",  // message namespace
  "Datapoint",  // message name
  1,  // number of fields
  sizeof(scion_types__msg__Datapoint),
  Datapoint__rosidl_typesupport_introspection_c__Datapoint_message_member_array,  // message members
  Datapoint__rosidl_typesupport_introspection_c__Datapoint_init_function,  // function to initialize message memory (memory has to be allocated)
  Datapoint__rosidl_typesupport_introspection_c__Datapoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Datapoint__rosidl_typesupport_introspection_c__Datapoint_message_type_support_handle = {
  0,
  &Datapoint__rosidl_typesupport_introspection_c__Datapoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_scion_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scion_types, msg, Datapoint)() {
  if (!Datapoint__rosidl_typesupport_introspection_c__Datapoint_message_type_support_handle.typesupport_identifier) {
    Datapoint__rosidl_typesupport_introspection_c__Datapoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Datapoint__rosidl_typesupport_introspection_c__Datapoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
