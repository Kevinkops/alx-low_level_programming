#!/bin/bash

# Compile C source files with all warnings enabled
gcc -Wall -pedantic -Werror -Wextra -c *.c

# Create a static library archive file
ar -rc liball.a *.o

# Generate an index for the library archive file
ranlib liball.a
