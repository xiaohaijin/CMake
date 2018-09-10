# 生成files
file(GLOB SRC "${PROJECT_SOURCE_DIR}/src/*.cpp")
file(GLOB MOC_HEADER "${PROJECT_SOURCE_DIR}/include/*.h")
file(GLOB UIC_UI "${PROJECT_SOURCE_DIR}/ui/*.ui")
file(GLOB QRC "${PROJECT_SOURCE_DIR}/resources/action.qrc")

# 通过UI文件生成对应的头文件
qt5_wrap_cpp(MOC_SRC ${MOC_HEADER})
qt5_wrap_ui(UIC_SRC ${UIC_UI})
qt5_add_resources(QRC_SRC ${QRC})

# 添加目标文件
add_executable(${PROJECT_NAME} ${SRC} ${MOC_SRC} ${UIC_SRC} ${QRC_SRC})

# 添加依赖库
target_link_libraries(${PROJECT_NAME} Qt5::Widgets Qt5::Core Qt5::Gui)

# 安装
install(TARGETS ${PROJECT_NAME}
  RUNTIME DESTINATION bin)
