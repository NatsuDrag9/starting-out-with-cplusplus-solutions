#!/bin/bash
# Script to build all files

PROJ_DIR="."

# Check if the project directory exists
if [ -d "${PROJ_DIR}" ]; then
    # Loop through the sub-directories
    for CHP_DIR in "${PROJ_DIR}"/Chapter-*; do
        # Check if the chapter directory exists
        if [ -d "${CHP_DIR}" ]; then
            # Check if run_executables.sh exists in CHP_DIR
            if [ -f "${CHP_DIR}/run_executables.sh" ]; then
                # Change to CHP_DIR
                cd ${CHP_DIR}
                echo "Running run_executables in ${CHP_DIR}"
                ./run_executables.sh

                # Return to original directory
                cd - || exit
            else
                echo "run_executables.sh not found in ${CHP_DIR}"
            fi
        else
            echo "${CHP_DIR} not found."
        fi
    done
else
    echo "Project directory not found."
fi