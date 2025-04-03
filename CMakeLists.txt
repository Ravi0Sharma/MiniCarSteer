cmake_minimum_required(VERSION 3.2)
project(helloworld)

set(CMAKE_CXX_STANDARD 11)

# Main Application
add_executable(${PROJECT_NAME} 
    ${CMAKE_CURRENT_SOURCE_DIR}/helloworld.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/PrimeChecker.cpp
)

# Enable CTest
enable_testing()

# Unit Test Executable
add_executable(${PROJECT_NAME}-Runner
    ${CMAKE_CURRENT_SOURCE_DIR}/TestPrimeChecker.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/PrimeChecker.cpp
)

# Register a test for CTest 
add_test(NAME ${PROJECT_NAME}-Runner COMMAND ${PROJECT_NAME}-Runner)