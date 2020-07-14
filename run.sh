#!/bin/sh

read name
if [ -f CS200/"Lesson-3.1-Iteration"/Homework/$name.cpp ]; then
  echo Success! Program starting...
else
  echo File not found, exiting; exit;
fi
g++ -o $name.exe CS200/"Lesson-3.1-Iteration"/Homework/$name.cpp;
echo Program started
./$name.exe