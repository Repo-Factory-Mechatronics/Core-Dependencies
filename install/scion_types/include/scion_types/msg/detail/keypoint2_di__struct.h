// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from scion_types:msg/Keypoint2Di.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__KEYPOINT2_DI__STRUCT_H_
#define SCION_TYPES__MSG__DETAIL__KEYPOINT2_DI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Keypoint2Di in the package scion_types.
typedef struct scion_types__msg__Keypoint2Di
{
  uint32_t kp[2];
} scion_types__msg__Keypoint2Di;

// Struct for a sequence of scion_types__msg__Keypoint2Di.
typedef struct scion_types__msg__Keypoint2Di__Sequence
{
  scion_types__msg__Keypoint2Di * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scion_types__msg__Keypoint2Di__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCION_TYPES__MSG__DETAIL__KEYPOINT2_DI__STRUCT_H_
