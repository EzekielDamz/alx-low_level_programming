#!bin/bash
gcc -Wall -padantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
