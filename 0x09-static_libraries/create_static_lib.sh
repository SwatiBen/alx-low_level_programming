#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a 8.o
ranlib liball.a
