// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from scion_types:msg/Datapoint.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__DATAPOINT__FUNCTIONS_H_
#define SCION_TYPES__MSG__DETAIL__DATAPOINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "scion_types/msg/rosidl_generator_c__visibility_control.h"

#include "scion_types/msg/detail/datapoint__struct.h"

/// Initialize msg/Datapoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * scion_types__msg__Datapoint
 * )) before or use
 * scion_types__msg__Datapoint__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
bool
scion_types__msg__Datapoint__init(scion_types__msg__Datapoint * msg);

/// Finalize msg/Datapoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
void
scion_types__msg__Datapoint__fini(scion_types__msg__Datapoint * msg);

/// Create msg/Datapoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * scion_types__msg__Datapoint__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
scion_types__msg__Datapoint *
scion_types__msg__Datapoint__create();

/// Destroy msg/Datapoint message.
/**
 * It calls
 * scion_types__msg__Datapoint__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
void
scion_types__msg__Datapoint__destroy(scion_types__msg__Datapoint * msg);

/// Check for msg/Datapoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
bool
scion_types__msg__Datapoint__are_equal(const scion_types__msg__Datapoint * lhs, const scion_types__msg__Datapoint * rhs);

/// Copy a msg/Datapoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
bool
scion_types__msg__Datapoint__copy(
  const scion_types__msg__Datapoint * input,
  scion_types__msg__Datapoint * output);

/// Initialize array of msg/Datapoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * scion_types__msg__Datapoint__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
bool
scion_types__msg__Datapoint__Sequence__init(scion_types__msg__Datapoint__Sequence * array, size_t size);

/// Finalize array of msg/Datapoint messages.
/**
 * It calls
 * scion_types__msg__Datapoint__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
void
scion_types__msg__Datapoint__Sequence__fini(scion_types__msg__Datapoint__Sequence * array);

/// Create array of msg/Datapoint messages.
/**
 * It allocates the memory for the array and calls
 * scion_types__msg__Datapoint__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
scion_types__msg__Datapoint__Sequence *
scion_types__msg__Datapoint__Sequence__create(size_t size);

/// Destroy array of msg/Datapoint messages.
/**
 * It calls
 * scion_types__msg__Datapoint__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
void
scion_types__msg__Datapoint__Sequence__destroy(scion_types__msg__Datapoint__Sequence * array);

/// Check for msg/Datapoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
bool
scion_types__msg__Datapoint__Sequence__are_equal(const scion_types__msg__Datapoint__Sequence * lhs, const scion_types__msg__Datapoint__Sequence * rhs);

/// Copy an array of msg/Datapoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
bool
scion_types__msg__Datapoint__Sequence__copy(
  const scion_types__msg__Datapoint__Sequence * input,
  scion_types__msg__Datapoint__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SCION_TYPES__MSG__DETAIL__DATAPOINT__FUNCTIONS_H_
