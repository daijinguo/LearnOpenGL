cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

set(GLAD_LIB_NAME glad)
add_library(${GLAD_LIB_NAME} STATIC src/glad.c)
target_include_directories(${GLAD_LIB_NAME} PUBLIC include)
