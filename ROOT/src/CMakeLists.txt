# 生成files
file(GLOB SRC "${PROJECT_SOURCE_DIR}/src/*.cpp")

# 添加目标文件
add_executable(${PROJECT_NAME} ${SRC})

# 添加依赖库
target_link_libraries(${PROJECT_NAME} ${ROOT_LIBRARIES})

# 安装
install(TARGETS ${PROJECT_NAME}
  RUNTIME DESTINATION ${PROJECT_SOURCE_DIR}/bin)
