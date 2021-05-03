#!/bin/bash
gcc -fPIC -werror -pedantic -c *.c 
gcc -shared -g liball.so *.o
