// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from scion_types:msg/ZedObject.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__ZED_OBJECT__STRUCT_H_
#define SCION_TYPES__MSG__DETAIL__ZED_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
// Member 'sublabel'
#include "rosidl_runtime_c/string.h"
// Member 'corners'
#include "scion_types/msg/detail/keypoint2_di__struct.h"

// Struct defined in msg/ZedObject in the package scion_types.
typedef struct scion_types__msg__ZedObject
{
  rosidl_runtime_c__String label;
  int16_t label_id;
  rosidl_runtime_c__String sublabel;
  float confidence;
  float position[3];
  float position_covariance[6];
  float velocity[3];
  bool tracking_available;
  int8_t tracking_state;
  int8_t action_state;
  float dimensions_3d[3];
  scion_types__msg__Keypoint2Di corners[4];
} scion_types__msg__ZedObject;

// Struct for a sequence of scion_types__msg__ZedObject.
typedef struct scion_types__msg__ZedObject__Sequence
{
  scion_types__msg__ZedObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scion_types__msg__ZedObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCION_TYPES__MSG__DETAIL__ZED_OBJECT__STRUCT_H_
