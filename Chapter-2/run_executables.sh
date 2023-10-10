#!/bin/bash

# Running the makefile
make all

# Build directory path
BUILD_DIR="./build"

# Check if the build directory exists
if [ -d "${BUILD_DIR}" ]; then
    # Check if the directory is empty
    if [ -z "$(ls -A "${BUILD_DIR}")" ]; then
        echo "${BUILD_DIR} is empty"
    else
        for file in ${BUILD_DIR}/*; do
            # Check if the file exists
            if [ -f "${file}" ]; then
                echo -e "\nRunning $(basename ${file})"
                ./${file}
            else
                echo "$(basename ${file}) does not exist in ${BUILD_DIR}"
            fi
        done
    fi
else
    echo "${BUILD_DIR} does not exist"
fi

# Cleanup
# make clean