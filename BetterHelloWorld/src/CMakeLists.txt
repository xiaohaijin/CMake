cmake_minimum_required(VERSION 3.0)

# 指定保存二进制文件的路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

add_executable(hello main.cpp)

# 安装目标文件
install(TARGETS hello
  RUNTIME DESTINATION bin)

# 补充：
#       在哪里ADD_EXECUTABLE或ADD_LIBRARY，如果需要改变目标存放路径，
#       就在哪里加入上面的两个set.
