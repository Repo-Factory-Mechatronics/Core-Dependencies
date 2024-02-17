// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from scion_types:msg/RawData.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__RAW_DATA__STRUCT_H_
#define SCION_TYPES__MSG__DETAIL__RAW_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'device'
// Member 'format'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/RawData in the package scion_types.
typedef struct scion_types__msg__RawData
{
  rosidl_runtime_c__String device;
  float value;
  int32_t datatype;
  rosidl_runtime_c__String format;
} scion_types__msg__RawData;

// Struct for a sequence of scion_types__msg__RawData.
typedef struct scion_types__msg__RawData__Sequence
{
  scion_types__msg__RawData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scion_types__msg__RawData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCION_TYPES__MSG__DETAIL__RAW_DATA__STRUCT_H_
