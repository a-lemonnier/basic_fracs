cmake_minimum_required(VERSION 2.6)
project(basic_fracs)

add_subdirectory(./include)

add_compile_options(-std=c++11 -o3 -Wall -pedantic)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(basic_fracs main.cpp include/basic_fracs.tpp)

install(TARGETS basic_fracs RUNTIME DESTINATION bin)
