// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cs7630_msgs:msg/ROIArray.idl
// generated code does not contain a copyright notice

#ifndef CS7630_MSGS__MSG__DETAIL__ROI_ARRAY__FUNCTIONS_H_
#define CS7630_MSGS__MSG__DETAIL__ROI_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cs7630_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "cs7630_msgs/msg/detail/roi_array__struct.h"

/// Initialize msg/ROIArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cs7630_msgs__msg__ROIArray
 * )) before or use
 * cs7630_msgs__msg__ROIArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cs7630_msgs
bool
cs7630_msgs__msg__ROIArray__init(cs7630_msgs__msg__ROIArray * msg);

/// Finalize msg/ROIArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cs7630_msgs
void
cs7630_msgs__msg__ROIArray__fini(cs7630_msgs__msg__ROIArray * msg);

/// Create msg/ROIArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cs7630_msgs__msg__ROIArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cs7630_msgs
cs7630_msgs__msg__ROIArray *
cs7630_msgs__msg__ROIArray__create();

/// Destroy msg/ROIArray message.
/**
 * It calls
 * cs7630_msgs__msg__ROIArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cs7630_msgs
void
cs7630_msgs__msg__ROIArray__destroy(cs7630_msgs__msg__ROIArray * msg);

/// Check for msg/ROIArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cs7630_msgs
bool
cs7630_msgs__msg__ROIArray__are_equal(const cs7630_msgs__msg__ROIArray * lhs, const cs7630_msgs__msg__ROIArray * rhs);

/// Copy a msg/ROIArray message.
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
ROSIDL_GENERATOR_C_PUBLIC_cs7630_msgs
bool
cs7630_msgs__msg__ROIArray__copy(
  const cs7630_msgs__msg__ROIArray * input,
  cs7630_msgs__msg__ROIArray * output);

/// Initialize array of msg/ROIArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * cs7630_msgs__msg__ROIArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cs7630_msgs
bool
cs7630_msgs__msg__ROIArray__Sequence__init(cs7630_msgs__msg__ROIArray__Sequence * array, size_t size);

/// Finalize array of msg/ROIArray messages.
/**
 * It calls
 * cs7630_msgs__msg__ROIArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cs7630_msgs
void
cs7630_msgs__msg__ROIArray__Sequence__fini(cs7630_msgs__msg__ROIArray__Sequence * array);

/// Create array of msg/ROIArray messages.
/**
 * It allocates the memory for the array and calls
 * cs7630_msgs__msg__ROIArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cs7630_msgs
cs7630_msgs__msg__ROIArray__Sequence *
cs7630_msgs__msg__ROIArray__Sequence__create(size_t size);

/// Destroy array of msg/ROIArray messages.
/**
 * It calls
 * cs7630_msgs__msg__ROIArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cs7630_msgs
void
cs7630_msgs__msg__ROIArray__Sequence__destroy(cs7630_msgs__msg__ROIArray__Sequence * array);

/// Check for msg/ROIArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cs7630_msgs
bool
cs7630_msgs__msg__ROIArray__Sequence__are_equal(const cs7630_msgs__msg__ROIArray__Sequence * lhs, const cs7630_msgs__msg__ROIArray__Sequence * rhs);

/// Copy an array of msg/ROIArray messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cs7630_msgs
bool
cs7630_msgs__msg__ROIArray__Sequence__copy(
  const cs7630_msgs__msg__ROIArray__Sequence * input,
  cs7630_msgs__msg__ROIArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CS7630_MSGS__MSG__DETAIL__ROI_ARRAY__FUNCTIONS_H_
