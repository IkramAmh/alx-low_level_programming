#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -rv liball.a *.o
