cmake_minimum_required(VERSION 3.0.0)
project(mp1 VERSION 0.1.0)

#include(CTest)
#enable_testing()

add_library(
    s01.cpp
    s01.hpp
)
add_executable(mp1 main.cpp)

#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)
