cmake_minimum_required(VERSION 3.20)

project(statistic_distributions)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

target_include_directories(statistic_distributions PUBLICS ${CMAKE_CURRENT_BINARY_DIR}/include)

file(GLOB SOURCES "src/*.cpp")
add_executable(statistic_distributions ${SOURCES})