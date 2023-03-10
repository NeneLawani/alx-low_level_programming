#!/bin/bash

# Create object files from all c files in current directory
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
