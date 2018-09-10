file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/src/main.cpp)

add_executable(${PROJECT_NAME} ${SRC_FILES})
link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})
