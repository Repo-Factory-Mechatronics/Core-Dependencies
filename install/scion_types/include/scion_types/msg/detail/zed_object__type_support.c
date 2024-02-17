// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from scion_types:msg/ZedObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "scion_types/msg/detail/zed_object__rosidl_typesupport_introspection_c.h"
#include "scion_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "scion_types/msg/detail/zed_object__functions.h"
#include "scion_types/msg/detail/zed_object__struct.h"


// Include directives for member types
// Member `label`
// Member `sublabel`
#include "rosidl_runtime_c/string_functions.h"
// Member `corners`
#include "scion_types/msg/keypoint2_di.h"
// Member `corners`
#include "scion_types/msg/detail/keypoint2_di__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ZedObject__rosidl_typesupport_introspection_c__ZedObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  scion_types__msg__ZedObject__init(message_memory);
}

void ZedObject__rosidl_typesupport_introspection_c__ZedObject_fini_function(void * message_memory)
{
  scion_types__msg__ZedObject__fini(message_memory);
}

size_t ZedObject__rosidl_typesupport_introspection_c__size_function__Keypoint2Di__corners(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * ZedObject__rosidl_typesupport_introspection_c__get_const_function__Keypoint2Di__corners(
  const void * untyped_member, size_t index)
{
  const scion_types__msg__Keypoint2Di ** member =
    (const scion_types__msg__Keypoint2Di **)(untyped_member);
  return &(*member)[index];
}

void * ZedObject__rosidl_typesupport_introspection_c__get_function__Keypoint2Di__corners(
  void * untyped_member, size_t index)
{
  scion_types__msg__Keypoint2Di ** member =
    (scion_types__msg__Keypoint2Di **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember ZedObject__rosidl_typesupport_introspection_c__ZedObject_message_member_array[12] = {
  {
    "label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types__msg__ZedObject, label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "label_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types__msg__ZedObject, label_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sublabel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types__msg__ZedObject, sublabel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types__msg__ZedObject, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(scion_types__msg__ZedObject, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(scion_types__msg__ZedObject, position_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(scion_types__msg__ZedObject, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracking_available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types__msg__ZedObject, tracking_available),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracking_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types__msg__ZedObject, tracking_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types__msg__ZedObject, action_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dimensions_3d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(scion_types__msg__ZedObject, dimensions_3d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "corners",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(scion_types__msg__ZedObject, corners),  // bytes offset in struct
    NULL,  // default value
    ZedObject__rosidl_typesupport_introspection_c__size_function__Keypoint2Di__corners,  // size() function pointer
    ZedObject__rosidl_typesupport_introspection_c__get_const_function__Keypoint2Di__corners,  // get_const(index) function pointer
    ZedObject__rosidl_typesupport_introspection_c__get_function__Keypoint2Di__corners,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ZedObject__rosidl_typesupport_introspection_c__ZedObject_message_members = {
  "scion_types__msg",  // message namespace
  "ZedObject",  // message name
  12,  // number of fields
  sizeof(scion_types__msg__ZedObject),
  ZedObject__rosidl_typesupport_introspection_c__ZedObject_message_member_array,  // message members
  ZedObject__rosidl_typesupport_introspection_c__ZedObject_init_function,  // function to initialize message memory (memory has to be allocated)
  ZedObject__rosidl_typesupport_introspection_c__ZedObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ZedObject__rosidl_typesupport_introspection_c__ZedObject_message_type_support_handle = {
  0,
  &ZedObject__rosidl_typesupport_introspection_c__ZedObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_scion_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scion_types, msg, ZedObject)() {
  ZedObject__rosidl_typesupport_introspection_c__ZedObject_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scion_types, msg, Keypoint2Di)();
  if (!ZedObject__rosidl_typesupport_introspection_c__ZedObject_message_type_support_handle.typesupport_identifier) {
    ZedObject__rosidl_typesupport_introspection_c__ZedObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ZedObject__rosidl_typesupport_introspection_c__ZedObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
