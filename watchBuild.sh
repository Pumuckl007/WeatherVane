#!/bin/bash
./build.sh
fswatch -o *.h *.cpp test/ | xargs -n1 -I{} ./build.sh