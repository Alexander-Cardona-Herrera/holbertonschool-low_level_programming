#!/bin/bash
gcc -fPIC -Wall -Wextra -Werror -pedantic -c *.c 
gcc -shared -o liball.so *.o
