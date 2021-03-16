cmake_minimum_required(VERSION 3.0.0)
project(ABC081B VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(ABC081B main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
