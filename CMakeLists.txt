cmake_minimum_required(VERSION 3.9)
project(vijos)

set(CMAKE_CXX_STANDARD 11)

add_executable(vijos main.cpp header.hpp DP/knapsack/1025.hpp DP/knapsack/1025.cpp)