cmake_minimum_required(VERSION 3.0)

find_path(HELLO_INCLUDE_DIR hello.h /home/xiaohai/Desktop/cmake /usr/local/include/hello)

find_library(HELLO_LIBRARY NAMES hello PATH /home/xiaohai/Desktop/cmake /usr/local/lib)

if(HELLO_INCLUDE_DIR AND HELLO_LIBRARY)
  set(HELLO_FOUND TRUE)
endif(HELLO_INCLUDE_DIR AND HELLO_LIBRARY)

if(HELLO_FOUND)
  if(NOT HELLO_FIND_QUIETLY)
    message(STATUS "Found Hello: " ${HELLO_LIBRARY})
  endif(NOT HELLO_FIND_QUIETLY)
else(HELLO_FOUND)
  if(HELLO_FIND_REQUIRED)
    message(FATAL_ERROR "Could not find hello library")
  endif(HELLO_FIND_REQUIRED)
endif(HELLO_FOUND)
    
