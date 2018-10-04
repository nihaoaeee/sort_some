cmake_minimum_required(VERSION 2.8)
project(sort)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -std=c++0x)
set(CMAKE_USE_64BITS on)
include_directories(
    ./include
)





add_executable(sort main.cc)
#target_link_libraries(sort ./src/SortPao.cc)
