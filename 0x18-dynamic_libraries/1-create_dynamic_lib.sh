#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c || { echo "Compilation failed"; exit 1; }
gcc -shared -o liball.so *.o || { echo "Shared library creation failed"; exit 1; }
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
