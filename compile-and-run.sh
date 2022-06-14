#!/bin/bash

# Receive problem name from the first input
NAME=$1;

# Compile and execute
g++ "${NAME}.cpp" && ./a.out
