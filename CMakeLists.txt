cmake_minimum_required(VERSION 2.6)
project(qnl)

add_executable(qnl main.cpp)

install(TARGETS qnl RUNTIME DESTINATION bin)
