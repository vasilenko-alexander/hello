cmake_minimum_required(VERSION 3.5.1)

project(hello)

set(SOURCES src/hello.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

if(MSVC)
    add_compile_options(/W4)  
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(CMAKE_CXX_STANDARD 11)

add_executable(hello ${SOURCES})