cmake_minimum_required(VERSION 3.10)
project(ElephantMemory)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(elephant_memory SHARED src/ElephantMemory.cpp)
add_executable(example examples/main.cpp)
target_link_libraries(example elephant_memory)


add_library(elephant_memory_c SHARED src/ElephantMemory.cpp src/ElephantMemory_c.cpp)
