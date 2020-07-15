#!/bin/sh
echo "Which course?"
ls
while [ true ]
do
read folder
if [ -d $folder ]; then 
  cd $folder
  break
else
  echo Invalid course
fi
done
echo "Which lecture?"
ls
while [ true ]
do
read class
if [ -d $class ]; then 
  cd $class
  break
else
  echo Invalid lecture
fi
done
echo Which category?
ls
while [ true ]
do
read category
if [ -d $category ]; then 
  cd $category
  break
else
  echo Invalid category
fi
done
echo "Which script? Do not include file extension (i.e. .cpp)"
ls
while [ true ]
do
read name
if [ -f $name.cpp ]; then
  echo Compiling script...
  g++ -o $name.exe $name.cpp
  echo Starting script...
  echo Script started!
  ./$name.exe
  rm $name.exe
  break;
else
  echo Invalid script
fi
done
