cmake_minimum_required(VERSION 3.29)
project(Prac_02)

set(CMAKE_CXX_STANDARD 20)

add_compile_options(-fmodules-ts)

add_custom_target(build_modules
        COMMAND g++ -std=c++20 -fmodules-ts -x c++-system-header iostream
)

add_executable(Prac_02 structtest.cpp)

add_dependencies(Prac_02 build_modules)