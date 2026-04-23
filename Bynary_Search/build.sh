#!/bin/bash
rm -rf build 
mkdir build && cd build 
cmake -DCMAKE-BUILD-TYPE=Debug ..
cmake --build .
