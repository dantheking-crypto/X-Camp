IFS=
for i in 1 2 3 4 5 6 7 8 9 10; do
    echo "" >> output.txt ;
    echo "====" >> output.txt ;
    echo "Test case for $i" >> output.txt
    echo "CS200/Lesson-3.1-Iteration/Homework/tiles.cpp\n" > input.txt
    echo "$i" >> input.txt
    chmod 755 makerun.sh
    ./makerun.sh < input.txt >> output.txt
done
