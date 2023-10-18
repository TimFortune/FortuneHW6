#!/bin/bash

# Compile the C++ program
g++ -o myCopier myCopier.cpp

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful."

    # Example invocation
    echo "To copy a file, use the following command:"
    echo "./myCopier source.txt destination.txt"
    echo "Replace 'source.txt' with the source file and 'destination.txt' with the destination file."
else
    echo "Compilation failed."
fi
