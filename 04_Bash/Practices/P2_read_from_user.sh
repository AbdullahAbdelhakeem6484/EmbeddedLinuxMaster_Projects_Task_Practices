#! /bin/bash

#read the user input

echo "Enter the user name : "
read -p "the name is " first_name
echo "the current user Name is $first_name"
echo

read -sp "Password:  " pass
echo "Password is $pass"

#Array
echo "Enter names: "
read -a names
echo "The entered names are :  ${names[0]}, ${names[1]} "