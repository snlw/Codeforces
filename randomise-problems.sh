#!/bin/bash

NUMBER_OF_PROBLEMS=5

MIN=1
MAX=2000
DIFFICULTY=("A" "B" "C" "D" "E")


get_random_problem () {
   problem_set=$((RANDOM%$MAX+$MIN))
   grade=${DIFFICULTY[ $RANDOM % ${#DIFFICULTY[@]} ]}
   
   FILE=./$grade/${problem_set}${grade}.cpp

   if [ ! -f "$FILE" ]; then
        echo https://codeforces.com/problemset/problem/$problem_set/$grade
        return 1
   fi

   return 0
}


for i in {1..5}
do
    get_random_problem
done