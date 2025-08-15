cmake_minimum_required(VERSION 3.5)

project(Simulator)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC ${CMAKE_BINARY_DIR}/StaticLib/Sources/Debug/ExampleLib.lib)

target_include_directories(${PROJECT_NAME} PUBLIC  ${CMAKE_SOURCE_DIR}/StaticLib/Includes/ ${CMAKE_SOURCE_DIR}/HeaderOnlyLib/V2/)