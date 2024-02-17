// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from scion_types:srv/CanCommand.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__SRV__DETAIL__CAN_COMMAND__STRUCT_H_
#define SCION_TYPES__SRV__DETAIL__CAN_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/CanCommand in the package scion_types.
typedef struct scion_types__srv__CanCommand_Request
{
  int16_t command;
  int16_t device;
  int16_t topic;
  uint8_t data[4];
} scion_types__srv__CanCommand_Request;

// Struct for a sequence of scion_types__srv__CanCommand_Request.
typedef struct scion_types__srv__CanCommand_Request__Sequence
{
  scion_types__srv__CanCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scion_types__srv__CanCommand_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/CanCommand in the package scion_types.
typedef struct scion_types__srv__CanCommand_Response
{
  int8_t status;
} scion_types__srv__CanCommand_Response;

// Struct for a sequence of scion_types__srv__CanCommand_Response.
typedef struct scion_types__srv__CanCommand_Response__Sequence
{
  scion_types__srv__CanCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scion_types__srv__CanCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCION_TYPES__SRV__DETAIL__CAN_COMMAND__STRUCT_H_
