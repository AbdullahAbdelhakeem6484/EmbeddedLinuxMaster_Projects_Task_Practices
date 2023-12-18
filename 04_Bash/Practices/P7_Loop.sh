#! /bin/bash

# for i in  1 2 3 4 5 6
# do
# echo $i
# done

# for i in {1..10}; do
#     echo "the number is ${i}"
# done

# learn="Hello World"
# for i in $learn;
# do
# echo $i
# done



# /*****************************/


# x=$(ls)
# for i in $x; do
# echo "the file name is ${i}"
# done


# # /*****************************/


files=$(ls test)
for i in ${files}; do
    echo "the content of file name  ${i} is: "
    cat "./test/${i}"
    echo
done