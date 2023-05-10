cmake_minimum_required(VERSION 3.24)
project(repo)

set(CMAKE_CXX_STANDARD 14)

add_executable(repo
        hello-dev01.c
        hello.c
        hello.cpp)
