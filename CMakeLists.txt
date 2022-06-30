cmake_minimum_required(VERSION 3.9.0)
project(Boids-Algorithm VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

add_subdirectory(src/app)

add_executable(Boids_Algorithm
    src/app/main.cpp
)

target_link_libraries(Boids_Algorithm PRIVATE Qt6::Widgets)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
