#!/bin/bash

#create object file from all c file in the dir
gcc -c *.c

# create the static lib from all the object files
ar rcs liball.a *.o

echo "Seccess!"
