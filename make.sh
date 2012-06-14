#!/bin/sh

if [ -f "cbits" ]; then
    rm -f cbits
    echo "Removed existing binary \'cbits\'"
fi

g++ -Wall ./src/*.h ./src/*.cpp -o cbits

if [ -f "cbits" ]; then
    echo "Compiled binary \'cbits\'"
else
    echo "Errors while compiling binary \'cbits\'"
    exit 1
fi

exit 0
