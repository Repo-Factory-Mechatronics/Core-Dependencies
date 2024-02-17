// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from scion_types:msg/SubState.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__SUB_STATE__STRUCT_H_
#define SCION_TYPES__MSG__DETAIL__SUB_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SubState in the package scion_types.
typedef struct scion_types__msg__SubState
{
  uint8_t shutdown;
  uint8_t leak_detect;
  uint8_t host_mode;
} scion_types__msg__SubState;

// Struct for a sequence of scion_types__msg__SubState.
typedef struct scion_types__msg__SubState__Sequence
{
  scion_types__msg__SubState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scion_types__msg__SubState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCION_TYPES__MSG__DETAIL__SUB_STATE__STRUCT_H_
