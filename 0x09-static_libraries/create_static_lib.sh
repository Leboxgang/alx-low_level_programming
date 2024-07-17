#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -c *.c

ar rcs liball.a *.o

rm *.o

echo -e "Static library liball.a created successfully."
