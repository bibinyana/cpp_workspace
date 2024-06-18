#!/bin/bash

# Specify the files to check
FILES=$(find . -name '*.cpp' -o -name '*.h')

# Initialize a variable to track if any file needs formatting
FORMAT_NEEDED=0

for FILE in $FILES; do
    # Run clang-format in dry-run mode and capture the output
    OUTPUT=$(clang-format -n -Werror $FILE 2>&1)
    if [ $? -ne 0 ]; then
        echo "File needs formatting: $FILE"
        echo "$OUTPUT"
        FORMAT_NEEDED=1
    fi
done

# Exit with 1 if any file needs formatting
if [ $FORMAT_NEEDED -ne 0 ]; then
    exit 1
else
    echo "All files are properly formatted."
    exit 0
fi
