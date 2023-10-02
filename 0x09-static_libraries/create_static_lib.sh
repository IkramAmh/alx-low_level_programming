#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic *.c
ar -rv liball.a *.o
