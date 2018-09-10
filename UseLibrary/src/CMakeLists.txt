cmake_minimum_required(VERSION 3.0)

# 头文件的搜索路径
include_directories(/home/xiaohai/Desktop/cmake/include)

# 动态库的搜索路径
link_directories(/home/xiaohai/Desktop/cmake/lib)

# 生成目标文件
add_executable(main main.cpp)

# 需要使用的动态库的名字
target_link_libraries(main hello)

# 安装
install(TARGETS main
  RUNTIME DESTINATION bin)
