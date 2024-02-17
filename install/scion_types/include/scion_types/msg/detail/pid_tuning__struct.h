// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from scion_types:msg/PidTuning.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__PID_TUNING__STRUCT_H_
#define SCION_TYPES__MSG__DETAIL__PID_TUNING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/PidTuning in the package scion_types.
typedef struct scion_types__msg__PidTuning
{
  int32_t axis;
  float data;
} scion_types__msg__PidTuning;

// Struct for a sequence of scion_types__msg__PidTuning.
typedef struct scion_types__msg__PidTuning__Sequence
{
  scion_types__msg__PidTuning * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scion_types__msg__PidTuning__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCION_TYPES__MSG__DETAIL__PID_TUNING__STRUCT_H_
