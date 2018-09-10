# 最低需要2.8.11版本
cmake_minimum_required(VERSION 3.0)

# 设定Qt的安装位置
set(CMAKE_PREFIX_PATH "/opt/qt/install/")

# include的目录包含当前目录
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# 工程名字
project(QtUseCMake)

# 查找需要的Qt库文件
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)

# 设定头文件和UI的搜索路径
set(HEADER_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")
set(GUI_DIR "${CMAKE_CURRENT_SOURCE_DIR}/ui")
set(RESOURCES_DIR "${CMAKE_CURRENT_SOURCE_DIR}/resources")

# 添加头文件的搜索路径
include_directories(${HEADER_DIR})

# 添加子目录
add_subdirectory(src)

# 安装
install(FILES COPYRIGHT README.md
  DESTINATION doc)
