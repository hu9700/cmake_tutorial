cmake_minimum_required(VERSION 2.8)
project(mymath)
add_library(mymath adder.cpp)
set_target_properties(mymath PROPERTIES PUBLIC_HEADER adder.h)
install(TARGETS mymath LIBRARY DESTINATION lib
        PUBLIC_HEADER DESTINATION include)