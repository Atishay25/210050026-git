#! /bin/bash 

g++ -c main.cpp
g++ -c hashing.cpp
g++ main.o hashing.o -o a.out
./a.out "$1"