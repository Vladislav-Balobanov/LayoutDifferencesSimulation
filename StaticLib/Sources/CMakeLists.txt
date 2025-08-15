cmake_minimum_required( VERSION 3.5 )

project(ExampleLib)

#message(WARNING "Path is ${CMAKE_LIBRARY_OUTPUT_DIRECTORY}")

add_compile_definitions(PROJ_DOMAIN=${PROJECT_NAME})
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SOURCES)
include_directories(${CMAKE_SOURCE_DIR}/StaticLib/Includes/example_lib ${CMAKE_SOURCE_DIR}/HeaderOnlyLib/V1/)

add_library( ${PROJECT_NAME} STATIC ${SOURCES})
