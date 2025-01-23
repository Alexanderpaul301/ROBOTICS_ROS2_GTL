# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_vrep4_helpers_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED vrep4_helpers_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(vrep4_helpers_FOUND FALSE)
  elseif(NOT vrep4_helpers_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(vrep4_helpers_FOUND FALSE)
  endif()
  return()
endif()
set(_vrep4_helpers_CONFIG_INCLUDED TRUE)

# output package information
if(NOT vrep4_helpers_FIND_QUIETLY)
  message(STATUS "Found vrep4_helpers: 0.0.0 (${vrep4_helpers_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'vrep4_helpers' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${vrep4_helpers_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(vrep4_helpers_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${vrep4_helpers_DIR}/${_extra}")
endforeach()
