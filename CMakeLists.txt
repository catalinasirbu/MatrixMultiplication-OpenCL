cmake_minimum_required(VERSION 3.24)
project(MatrixMultiplication)

set(CMAKE_CXX_STANDARD 17)

# Find OpenCL package
find_package(OpenCL REQUIRED)

# Include OpenCL headers
include_directories(${OpenCL_INCLUDE_DIRS})

add_executable(MatrixMultiplication main.cpp)

# Link OpenCL library
target_link_libraries(MatrixMultiplication ${OpenCL_LIBRARIES})
