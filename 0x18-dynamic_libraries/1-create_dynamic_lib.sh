#!/bin/bash

# Create object files from all c files in current directory.
gcc -c *.c -fpic

# Create a dynamic library called liball.so from all newly created object files.
gcc *.o -shared -o liball.so

# Clean up the object files
# rm *.o
