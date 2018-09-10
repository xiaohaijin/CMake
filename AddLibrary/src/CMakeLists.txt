set(LIBHELLO_SRC hello.cpp)
set(LIBRARY_OUTPUT_PATH lib)

# 添加动态库
add_library(hello_dynamic SHARED ${LIBHELLO_SRC})
# 设置动态库的名字
set_target_properties(hello_dynamic PROPERTIES OUTPUT_NAME "hello")
# 设置动态库的版本号
set_target_properties(hello_dynamic PROPERTIES VERSON 1.0 SOVERSION 1)

# 添加静态库
add_library(hello_static STATIC ${LIBHELLO_SRC})
# 设置静态库的名字
set_target_properties(hello_static PROPERTIES OUTPUT_NAME "hello")
# 设置静态库的版本号
set_target_properties(hello_static PROPERTIES VERSION 1.0 SOVERSION 1)

# 获取对象的属性
# get_target_property(value target property)
get_target_property(target_name hello_dynamic OUTPUT_NAME)
message(STATUS "对象的名字是" ${target_name})

# 安装动态库
install(TARGETS hello_dynamic hello_static
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib)

# 安装头文件
install(FILES hello.h DESTINATION include)
