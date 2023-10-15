cmake_minimum_required(VERSION 3.5)

project(TASK1 LANGUAGES C)

add_executable(TASK1 main.c)

install(TARGETS TASK1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
