# FILEPATH: /home/mharv/repos/cpp-testing/CMakeLists.txt

# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Set the output directory for the runtime files
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# Set the project name and language
project(template CXX)

# Glob all source files in the "src" directory
file(GLOB SOURCE_FILES "src/*.cpp")

# Create an executable named "my_executable" with the main.cpp and source files
add_executable(my_executable main.cpp ${SOURCE_FILES})

# Add the "src" directory to the include directories for the target
target_include_directories(my_executable PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)