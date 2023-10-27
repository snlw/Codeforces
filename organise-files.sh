#!/bin/bash

for filename in *
do
    for level in 'A' 'B' 'C' 'D' 'E' 'F'
    do 
        if [[ "$filename" =~ .*"$level.cpp" ]]; then
            mv "$filename" ./$level
        fi
    done
done
