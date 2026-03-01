cmake_minimum_required(VERSION 3.21)

project(RocketSim VERSION 1.0
                  DESCRIPTION "Rocket simulation project"
                  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(RocketSim
               src/main.cpp
               src/ForwardEulerIntegrator.cpp
               src/Entity.cpp
               src/Rocket.cpp)
               
target_include_directories(RocketSim PUBLIC ${PROJECT_SOURCE_DIR}/include)

find_package(fmt CONFIG REQUIRED)
find_package(Eigen3 CONFIG REQUIRED)
find_package(raylib CONFIG REQUIRED)

target_link_libraries(RocketSim 
    PRIVATE 
        raylib
        Eigen3::Eigen
        fmt::fmt
)

# --- Create GoogleTest target
find_package(GTest CONFIG REQUIRED)

add_executable(unit_tests
    tests/test_sanity.cpp
    tests/raylib_test.cpp
)

target_include_directories(unit_tests PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(unit_tests 
    PRIVATE 
        GTest::gtest_main
        raylib)

if(APPLE)
    find_package(glfw3 CONFIG REQUIRED)
    target_link_libraries(RocketSim PRIVATE glfw)
    target_link_libraries(unit_tests PRIVATE glfw)
endif()