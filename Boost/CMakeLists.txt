cmake_minimum_required(VERSION 3.0)

set(CMAKE_PREFIX_PATH "/opt/boost/install")
set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_STATIC_RUNTIME OFF)

find_package(Boost)
include_directories(${Boost_INCLUDE_DIRS})

message(STATUS ${Boost_INCLUDE_DIRS})
message(STATUS ${Boost_LIBRARIES})

add_subdirectory(src)
