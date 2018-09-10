# 设定最低需求版本
cmake_minimum_required(VERSION 3.0)

# 工程名字
project(ROOTUseCMake)

# 查找需要的ROOT库文件
find_package(ROOT)

# 添加头文件的搜索路径
include_directories(${PROJECT_SOURCE_DIR}/include)

# 添加子目录
add_subdirectory(src)
