#!/bin/bash

# Extract object files from  all c files in current directory.
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create a static library called liball.a from all newly created object files.
ar rcs liball.a *.o

# Clean up the object files
rm *.o
