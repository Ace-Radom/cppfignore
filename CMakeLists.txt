cmake_minimum_required(VERSION 3.10)
project(cppfignore LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)
add_subdirectory(src)

add_executable(test test.cpp)
target_link_libraries(test cppfignore)
