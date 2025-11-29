cmake_minimum_required(VERSION 4.0)
project(CppLessons)

set(CMAKE_CXX_STANDARD 23)

add_executable(CppLessons main.cpp
        Types.h
        Iostream.h
        ByteOperations.h
        SwitchCase.h
        References.h
        Functions.h
        sum.cpp
        sum.h
        some_variables.cpp
        objects.h
        SmartReferences.h
)
