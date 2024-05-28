#!/bin/bash

refresh_input() {
    local filename="$1"
    if [ -f "$filename" ]; then
        rm "$filename"
    else
        touch "$filename"
    fi
}

main() {
    local INPUT_FILE="input.txt"

    refresh_input "$INPUT_FILE"

    echo "##### IN #####"

    while read line
    do
        echo "$line" >> "$INPUT_FILE"
    done

    # Filename
    NAME="$1";

    # Compile to executable file called "program"
    g++ "${NAME}" -o program 

    echo "##### OUT #####"

    # Execute with arguments
    ./program < "$INPUT_FILE"
}


main "$@"

