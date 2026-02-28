cmake_minimum_required(VERSION 3.21)

project(RocketSim VERSION 1.0
                  DESCRIPTION "Rocket simulation project"
                  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(RocketSim
               src/main.cpp
               src/ForwardEulerIntegrator.cpp
               src/Entity.cpp)
               
target_include_directories(RocketSim PUBLIC ${PROJECT_SOURCE_DIR}/include)

find_package(fmt CONFIG REQUIRED)
target_link_libraries(RocketSim PRIVATE fmt::fmt)


# --- Create GoogleTest target
find_package(GTest CONFIG REQUIRED)

add_executable(unit_tests
    tests/test_sanity.cpp
)

target_include_directories(unit_tests PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(unit_tests PRIVATE GTest::gtest_main)
