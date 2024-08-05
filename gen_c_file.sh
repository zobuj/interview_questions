#!/bin/bash

# Function to display usage information
usage() {
    echo "Usage: $0 <directory> <filename>"
    echo "Example: $0 ./src myfile"
    exit 1
}

# Check if the correct number of arguments is provided
if [ "$#" -ne 2 ]; then
    usage
fi

# Get the directory and filename from the arguments
DIR=$1
FILENAME=$2

# Create the directory if it doesn't exist
mkdir -p "$DIR"

# Create the full path for the new C file
FILEPATH="$DIR/$FILENAME.c"

# Content to be added to the C file
CONTENT="#include <stdio.h>
#include <assert.h>
int main() {
    printf(\"Hello, World!\\n\");
    return 0;
}
"

# Create the C file and add the content
echo "$CONTENT" > "$FILEPATH"

# Display a success message
echo "C file created at $FILEPATH"
