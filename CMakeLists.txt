cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(LearnOpengl)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

option(GLFW_BUILD_EXAMPLES OFF)
option(GLFW_BUILD_TESTS OFF)
option(GLFW_BUILD_DOCS OFF)
option(GLFW_INSTALL OFF)
add_subdirectory(3rd/glfw glfw EXCLUDE_FROM_ALL)

add_subdirectory(3rd/glad glad EXCLUDE_FROM_ALL)


set(TARGET_NAME gldemo)
set(SRC_FILES
        src/main.cc
        src/1_1_helloworld.cc
        src/2_1_hello_triangle.cc)


add_executable(${TARGET_NAME} ${SRC_FILES})
target_include_directories(${TARGET_NAME} PRIVATE
        3rd/glfw/include
        3rd/glad/include)
target_link_libraries(${TARGET_NAME} glfw glad)

