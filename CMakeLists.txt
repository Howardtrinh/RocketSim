cmake_minimum_required(VERSION 4.2.1)
project(rocketsim LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

find_package(fmt CONFIG REQUIRED)

target_link_libraries(rocketsim PRIVATE fmt::fmt)