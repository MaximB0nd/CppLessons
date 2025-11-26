cmake_minimum_required(VERSION 4.0)
project(CppLessons)

set(CMAKE_CXX_STANDARD 23)

add_executable(CppLessons main.cpp
        Types.h
        Iostream.h
        ByteOperations.h)
