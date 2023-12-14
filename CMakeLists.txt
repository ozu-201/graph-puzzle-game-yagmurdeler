cmake_minimum_required(VERSION 3.23)
project(DataStructures_CPP)

set(CMAKE_CXX_STANDARD 17)
add_executable(main main.cpp AbstractGraph.cpp AbstractGraph.h Path.cpp Path.h Edge.cpp Edge.h)