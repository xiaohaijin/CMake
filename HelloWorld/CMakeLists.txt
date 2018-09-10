# 指定所需要的cmake的最低版本
cmake_minimum_required(VERSION 3.0)

# 指定项目的名字，后面指定工程支持的语言。
# project(projectname [CXX] [C] [Java])
project(HELLO)

# 定义变量，多个源文件使用set(SRC_LIST main.cpp t1.cpp t2.cpp)
set(SRC_LIST main.cpp)

# 向终端输出内容
# message([SEND_ERROR | STATUS | FATAL_ERROR] "message to display" ...)
message(STATUS "This is Binary dir" ${PROJECT_BINARY_DIR})
message(STATUS "This is Source dir" ${PROJECT_SOURCE_DIR})

# 定义了这个工程会生成一个文件名为hello的可执行文件，
# 相关的源文件为SRC_LIST的值，即main.cpp.
add_executable(hello ${SRC_LIST})

# 补充：
#      这里需要指出的是，项目的名字和所要生成的可执行的名字是没有任何关系的。
#      project_binary_dir指的是编译路径。
#      project_source_dir指的是工程路径。
