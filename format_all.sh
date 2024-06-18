#!/bin/bash

# Find all .cpp and .hpp files in the current directory and subdirectories
FILES=$(find . -name '*.cpp' -o -name '*.hpp')

# Format each file using clang-format
for FILE in $FILES; do
    echo "Formatting $FILE"
    clang-format -i $FILE
done

echo "All files have been formatted."
