#!/bin/bash
gcc -fPIC -werror -pedantic -c *.c 
gcc -shared -o liball.so *.o
