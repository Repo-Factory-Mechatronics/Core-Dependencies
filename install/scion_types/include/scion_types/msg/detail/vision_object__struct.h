// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from scion_types:msg/VisionObject.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__VISION_OBJECT__STRUCT_H_
#define SCION_TYPES__MSG__DETAIL__VISION_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/VisionObject in the package scion_types.
typedef struct scion_types__msg__VisionObject
{
  rosidl_runtime_c__String object_name;
  float distance;
} scion_types__msg__VisionObject;

// Struct for a sequence of scion_types__msg__VisionObject.
typedef struct scion_types__msg__VisionObject__Sequence
{
  scion_types__msg__VisionObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scion_types__msg__VisionObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCION_TYPES__MSG__DETAIL__VISION_OBJECT__STRUCT_H_
