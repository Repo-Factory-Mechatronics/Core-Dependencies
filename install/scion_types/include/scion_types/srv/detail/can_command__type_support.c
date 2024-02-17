// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from scion_types:srv/CanCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "scion_types/srv/detail/can_command__rosidl_typesupport_introspection_c.h"
#include "scion_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "scion_types/srv/detail/can_command__functions.h"
#include "scion_types/srv/detail/can_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CanCommand_Request__rosidl_typesupport_introspection_c__CanCommand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  scion_types__srv__CanCommand_Request__init(message_memory);
}

void CanCommand_Request__rosidl_typesupport_introspection_c__CanCommand_Request_fini_function(void * message_memory)
{
  scion_types__srv__CanCommand_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CanCommand_Request__rosidl_typesupport_introspection_c__CanCommand_Request_message_member_array[4] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types__srv__CanCommand_Request, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "device",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types__srv__CanCommand_Request, device),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types__srv__CanCommand_Request, topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(scion_types__srv__CanCommand_Request, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CanCommand_Request__rosidl_typesupport_introspection_c__CanCommand_Request_message_members = {
  "scion_types__srv",  // message namespace
  "CanCommand_Request",  // message name
  4,  // number of fields
  sizeof(scion_types__srv__CanCommand_Request),
  CanCommand_Request__rosidl_typesupport_introspection_c__CanCommand_Request_message_member_array,  // message members
  CanCommand_Request__rosidl_typesupport_introspection_c__CanCommand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CanCommand_Request__rosidl_typesupport_introspection_c__CanCommand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CanCommand_Request__rosidl_typesupport_introspection_c__CanCommand_Request_message_type_support_handle = {
  0,
  &CanCommand_Request__rosidl_typesupport_introspection_c__CanCommand_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_scion_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scion_types, srv, CanCommand_Request)() {
  if (!CanCommand_Request__rosidl_typesupport_introspection_c__CanCommand_Request_message_type_support_handle.typesupport_identifier) {
    CanCommand_Request__rosidl_typesupport_introspection_c__CanCommand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CanCommand_Request__rosidl_typesupport_introspection_c__CanCommand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "scion_types/srv/detail/can_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "scion_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "scion_types/srv/detail/can_command__functions.h"
// already included above
// #include "scion_types/srv/detail/can_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CanCommand_Response__rosidl_typesupport_introspection_c__CanCommand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  scion_types__srv__CanCommand_Response__init(message_memory);
}

void CanCommand_Response__rosidl_typesupport_introspection_c__CanCommand_Response_fini_function(void * message_memory)
{
  scion_types__srv__CanCommand_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CanCommand_Response__rosidl_typesupport_introspection_c__CanCommand_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scion_types__srv__CanCommand_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CanCommand_Response__rosidl_typesupport_introspection_c__CanCommand_Response_message_members = {
  "scion_types__srv",  // message namespace
  "CanCommand_Response",  // message name
  1,  // number of fields
  sizeof(scion_types__srv__CanCommand_Response),
  CanCommand_Response__rosidl_typesupport_introspection_c__CanCommand_Response_message_member_array,  // message members
  CanCommand_Response__rosidl_typesupport_introspection_c__CanCommand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CanCommand_Response__rosidl_typesupport_introspection_c__CanCommand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CanCommand_Response__rosidl_typesupport_introspection_c__CanCommand_Response_message_type_support_handle = {
  0,
  &CanCommand_Response__rosidl_typesupport_introspection_c__CanCommand_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_scion_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scion_types, srv, CanCommand_Response)() {
  if (!CanCommand_Response__rosidl_typesupport_introspection_c__CanCommand_Response_message_type_support_handle.typesupport_identifier) {
    CanCommand_Response__rosidl_typesupport_introspection_c__CanCommand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CanCommand_Response__rosidl_typesupport_introspection_c__CanCommand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "scion_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "scion_types/srv/detail/can_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers scion_types__srv__detail__can_command__rosidl_typesupport_introspection_c__CanCommand_service_members = {
  "scion_types__srv",  // service namespace
  "CanCommand",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // scion_types__srv__detail__can_command__rosidl_typesupport_introspection_c__CanCommand_Request_message_type_support_handle,
  NULL  // response message
  // scion_types__srv__detail__can_command__rosidl_typesupport_introspection_c__CanCommand_Response_message_type_support_handle
};

static rosidl_service_type_support_t scion_types__srv__detail__can_command__rosidl_typesupport_introspection_c__CanCommand_service_type_support_handle = {
  0,
  &scion_types__srv__detail__can_command__rosidl_typesupport_introspection_c__CanCommand_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scion_types, srv, CanCommand_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scion_types, srv, CanCommand_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_scion_types
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scion_types, srv, CanCommand)() {
  if (!scion_types__srv__detail__can_command__rosidl_typesupport_introspection_c__CanCommand_service_type_support_handle.typesupport_identifier) {
    scion_types__srv__detail__can_command__rosidl_typesupport_introspection_c__CanCommand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)scion_types__srv__detail__can_command__rosidl_typesupport_introspection_c__CanCommand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scion_types, srv, CanCommand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scion_types, srv, CanCommand_Response)()->data;
  }

  return &scion_types__srv__detail__can_command__rosidl_typesupport_introspection_c__CanCommand_service_type_support_handle;
}
