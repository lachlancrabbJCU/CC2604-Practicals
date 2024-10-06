cmake_minimum_required(VERSION 3.29)
project(CC2604-Practicals)

set(CMAKE_CXX_STANDARD 20)

#add_compile_options(-fmodules-ts)
#
#add_custom_target(build_modules
#        COMMAND g++ -std=c++20 -fmodules-ts -x c++-system-header iostream
#)

add_executable(CC2604-Practicals Prac_02/prac02_prog01.cpp)

#add_dependencies(CC2604-Practicals build_modules)
