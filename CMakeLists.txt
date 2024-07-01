cmake_minimum_required(VERSION 3.0)
project(main)  

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Eigen3 REQUIRED)

add_executable(selection_sort selection_sort.cpp)  
add_executable(binary_search binary_search.cpp)  
add_executable(quick_sort quick_sort.cpp)  
add_executable(quick_sort_beta quick_sort_beta.cpp)  
add_executable(hash_table hash_table.cpp)  