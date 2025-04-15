cmake_minimum_required(VERSION 3.29)
project(gradingsystem)

set(CMAKE_CXX_STANDARD 20)

add_executable(gradingsystem main.cpp
        examgradecalculator.cpp
        examgradecalculator.h
        science.h
        science.cpp
        intro.cpp
        intro.h
)
