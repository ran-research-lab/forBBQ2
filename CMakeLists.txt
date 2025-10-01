cmake_minimum_required(VERSION 3.10)
project(main LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(main main.cpp)

target_include_directories(main PRIVATE nlohmannjson/include)

