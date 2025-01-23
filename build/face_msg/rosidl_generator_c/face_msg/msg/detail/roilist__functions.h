// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from face_msg:msg/Roilist.idl
// generated code does not contain a copyright notice

#ifndef FACE_MSG__MSG__DETAIL__ROILIST__FUNCTIONS_H_
#define FACE_MSG__MSG__DETAIL__ROILIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "face_msg/msg/rosidl_generator_c__visibility_control.h"

#include "face_msg/msg/detail/roilist__struct.h"

/// Initialize msg/Roilist message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * face_msg__msg__Roilist
 * )) before or use
 * face_msg__msg__Roilist__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_face_msg
bool
face_msg__msg__Roilist__init(face_msg__msg__Roilist * msg);

/// Finalize msg/Roilist message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_face_msg
void
face_msg__msg__Roilist__fini(face_msg__msg__Roilist * msg);

/// Create msg/Roilist message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * face_msg__msg__Roilist__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_face_msg
face_msg__msg__Roilist *
face_msg__msg__Roilist__create();

/// Destroy msg/Roilist message.
/**
 * It calls
 * face_msg__msg__Roilist__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_face_msg
void
face_msg__msg__Roilist__destroy(face_msg__msg__Roilist * msg);

/// Check for msg/Roilist message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_face_msg
bool
face_msg__msg__Roilist__are_equal(const face_msg__msg__Roilist * lhs, const face_msg__msg__Roilist * rhs);

/// Copy a msg/Roilist message.
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
ROSIDL_GENERATOR_C_PUBLIC_face_msg
bool
face_msg__msg__Roilist__copy(
  const face_msg__msg__Roilist * input,
  face_msg__msg__Roilist * output);

/// Initialize array of msg/Roilist messages.
/**
 * It allocates the memory for the number of elements and calls
 * face_msg__msg__Roilist__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_face_msg
bool
face_msg__msg__Roilist__Sequence__init(face_msg__msg__Roilist__Sequence * array, size_t size);

/// Finalize array of msg/Roilist messages.
/**
 * It calls
 * face_msg__msg__Roilist__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_face_msg
void
face_msg__msg__Roilist__Sequence__fini(face_msg__msg__Roilist__Sequence * array);

/// Create array of msg/Roilist messages.
/**
 * It allocates the memory for the array and calls
 * face_msg__msg__Roilist__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_face_msg
face_msg__msg__Roilist__Sequence *
face_msg__msg__Roilist__Sequence__create(size_t size);

/// Destroy array of msg/Roilist messages.
/**
 * It calls
 * face_msg__msg__Roilist__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_face_msg
void
face_msg__msg__Roilist__Sequence__destroy(face_msg__msg__Roilist__Sequence * array);

/// Check for msg/Roilist message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_face_msg
bool
face_msg__msg__Roilist__Sequence__are_equal(const face_msg__msg__Roilist__Sequence * lhs, const face_msg__msg__Roilist__Sequence * rhs);

/// Copy an array of msg/Roilist messages.
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
ROSIDL_GENERATOR_C_PUBLIC_face_msg
bool
face_msg__msg__Roilist__Sequence__copy(
  const face_msg__msg__Roilist__Sequence * input,
  face_msg__msg__Roilist__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FACE_MSG__MSG__DETAIL__ROILIST__FUNCTIONS_H_
