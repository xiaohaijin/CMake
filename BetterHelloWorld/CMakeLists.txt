# 指定所需要的cmake的最低版本
cmake_minimum_required(VERSION 3.0)

# 指定项目的名字，后面指定工程支持的语言。
# project(projectname [CXX] [C] [Java])
project(HELLO)

# 这个指令用于向当前工程添加存放源文件的子目录。
# add_subdirectory(source_dir [binary_dir] [EXCLUDE_FROM_ALL])
# 其中binary_dir指定了编译输出的存放路径
# add_subdirectory(src bin)
add_subdirectory(src)

# message([SEND_ERROR | STATUS | FATAL_ERROR] "message to display" ...)
message(STATUS "This is Binary dir" ${PROJECT_BINARY_DIR})
message(STATUS "This is Source dir" ${PROJECT_SOURCE_DIR})

# 安装文件
install(FILES COPYRIGHT README.md DESTINATION doc) 
# 安装脚本
install(PROGRAMS runhello.sh DESTINATION bin)
# 安装目录
install(DIRECTORY doc/ DESTINATION doc)
