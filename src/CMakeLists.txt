cmake_minimum_required(VERSION 3.2)

set(myproject "tema1")

project(${myproject})

set(CMAKE_CXX_STANDARD 14) #WE REQUEST C++ 14

set(CMAKE_CXX_STANDARD_REQUIRED ON) #we request cmake to verify the compiler

set(CMAKE_CXX_EXTENSIONS OFF) #we request -std=c++14 in the compiler frags instead of --std=gnuc++14
 
set(myfiles src/main.cpp)

add_executable(${myproject} ${myfiles})