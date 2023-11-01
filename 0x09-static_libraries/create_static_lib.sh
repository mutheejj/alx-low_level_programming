#!/bin/bash
gcc -Wall -wextra -werror - pedanti -c *.c
ar rc liball.a *.o
