// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from scion_types:msg/RawData.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__RAW_DATA__FUNCTIONS_H_
#define SCION_TYPES__MSG__DETAIL__RAW_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "scion_types/msg/rosidl_generator_c__visibility_control.h"

#include "scion_types/msg/detail/raw_data__struct.h"

/// Initialize msg/RawData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * scion_types__msg__RawData
 * )) before or use
 * scion_types__msg__RawData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
bool
scion_types__msg__RawData__init(scion_types__msg__RawData * msg);

/// Finalize msg/RawData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
void
scion_types__msg__RawData__fini(scion_types__msg__RawData * msg);

/// Create msg/RawData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * scion_types__msg__RawData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
scion_types__msg__RawData *
scion_types__msg__RawData__create();

/// Destroy msg/RawData message.
/**
 * It calls
 * scion_types__msg__RawData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
void
scion_types__msg__RawData__destroy(scion_types__msg__RawData * msg);

/// Check for msg/RawData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
bool
scion_types__msg__RawData__are_equal(const scion_types__msg__RawData * lhs, const scion_types__msg__RawData * rhs);

/// Copy a msg/RawData message.
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
scion_types__msg__RawData__copy(
  const scion_types__msg__RawData * input,
  scion_types__msg__RawData * output);

/// Initialize array of msg/RawData messages.
/**
 * It allocates the memory for the number of elements and calls
 * scion_types__msg__RawData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
bool
scion_types__msg__RawData__Sequence__init(scion_types__msg__RawData__Sequence * array, size_t size);

/// Finalize array of msg/RawData messages.
/**
 * It calls
 * scion_types__msg__RawData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
void
scion_types__msg__RawData__Sequence__fini(scion_types__msg__RawData__Sequence * array);

/// Create array of msg/RawData messages.
/**
 * It allocates the memory for the array and calls
 * scion_types__msg__RawData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
scion_types__msg__RawData__Sequence *
scion_types__msg__RawData__Sequence__create(size_t size);

/// Destroy array of msg/RawData messages.
/**
 * It calls
 * scion_types__msg__RawData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
void
scion_types__msg__RawData__Sequence__destroy(scion_types__msg__RawData__Sequence * array);

/// Check for msg/RawData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_scion_types
bool
scion_types__msg__RawData__Sequence__are_equal(const scion_types__msg__RawData__Sequence * lhs, const scion_types__msg__RawData__Sequence * rhs);

/// Copy an array of msg/RawData messages.
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
scion_types__msg__RawData__Sequence__copy(
  const scion_types__msg__RawData__Sequence * input,
  scion_types__msg__RawData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SCION_TYPES__MSG__DETAIL__RAW_DATA__FUNCTIONS_H_
