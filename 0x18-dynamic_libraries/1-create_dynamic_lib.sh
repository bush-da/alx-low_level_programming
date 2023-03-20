#!/bin/bash
gcc -fPIC -c *.c
gcc -fPIC -shared -o liball.so *.o
