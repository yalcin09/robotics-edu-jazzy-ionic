# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_day2_2_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED day2_2_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(day2_2_FOUND FALSE)
  elseif(NOT day2_2_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(day2_2_FOUND FALSE)
  endif()
  return()
endif()
set(_day2_2_CONFIG_INCLUDED TRUE)

# output package information
if(NOT day2_2_FIND_QUIETLY)
  message(STATUS "Found day2_2: 1.0.0 (${day2_2_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'day2_2' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT day2_2_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(day2_2_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${day2_2_DIR}/${_extra}")
endforeach()
