#!/bin/bash

# Create test case 
# To exit, enter CTRL+D
cat > testcase

# Receive problem name from the first input
NAME=$1;

# Compile to a.out
g++ "${NAME}.cpp"  


printf "##### INPUT #####\n"

cat testcase 

printf "##### OUTPUT #####\n"

# Run code against test case
./a.out < testcase

