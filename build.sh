#!/bin/bash

# This script is used to build and run the C++ project located in the same directory.

SCRIPT_DIR=$(dirname "$(readlink -f "$0")")

BUILD_DIR="$SCRIPT_DIR/build"

# Create the build directory if it doesn't exist
mkdir -p "$BUILD_DIR" || exit 1

# Change to the build directory
cd "$BUILD_DIR" || exit 1

# Run CMake to generate the build files
cmake "$SCRIPT_DIR" -DCMAKE_CXX_COMPILER=clang++

# Build the project using make
make

# Run the executable
"$SCRIPT_DIR/bin/my_executable"