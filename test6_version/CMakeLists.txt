cmake_minimum_required(VERSION 3.22.1)

project(test6 VERSION 1.0)

configure_file(test6_Config.h.in test6_Config.h)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})