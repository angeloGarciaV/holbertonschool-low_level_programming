#!/bin/bash
c_files=$(find . -name "*.c")

# Compile each .c file into an object file and add it to the library
for file in $c_files; do
    object_file="${file%.c}.o"
    gcc -c $file -o $object_file
    ar rcs liball.a $object_file
done
