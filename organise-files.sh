#!/bin/bash

for filename in *
do
    echo "$filename" 
    for level in 'A' 'B' 'C' 'D' 'E' 'F'
    do 
        if [[ "$filename" =~ .*"$level.cpp" ]]; then
            mv "$filename" ./$level
        fi
    done
done
