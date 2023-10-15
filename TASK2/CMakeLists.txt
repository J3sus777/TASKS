cmake_minimum_required(VERSION 3.5)

project(TASK2 LANGUAGES C)

add_executable(TASK2 main.c)

install(TARGETS TASK2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
