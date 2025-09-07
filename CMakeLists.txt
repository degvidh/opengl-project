cmake_minimum_required(VERSION 3.20)
project(hello_window VERSION 1.0.0)

# Find the GLFW library
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

# Executable and its source file
add_executable(
    hello_window 
    src/config.h 
    src/main.cpp 
    src/glad.c
)

# Add both dep and src directories to include path
target_include_directories(hello_window PRIVATE dep src)

target_link_libraries(hello_window glfw OpenGL::GL)