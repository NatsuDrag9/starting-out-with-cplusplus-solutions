#!/bin/bash

# Find all sub-directories starting with pc_
subdirs=$(find . -type d -name "pc_*")

# Loop through the sub-directories
for subdir in ${subdirs}; do
    if [ -f "${subdir}/makefile" ]; then
        echo "Running makefile in ${subdir}"
        # Change to the sub-directory and run make
        (cd "${subdir}" && make)

        # Check whether executable exists
        if [ -f "${subdir}/build/pc_${subdir##*_}.out" ]
        then
            echo "Running pc_${subdir##*_}.out in ${subdir}."
            ./"${subdir}/build/pc_${subdir##*_}.out"
        else
            echo "Executable pc_${subdir##*_}.out not found in ${subdir}/build"
        fi
    else
        echo "No makefile found in ${subdir}."
    fi
done
