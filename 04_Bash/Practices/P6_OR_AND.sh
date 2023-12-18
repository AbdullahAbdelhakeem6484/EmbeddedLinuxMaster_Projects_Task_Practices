#! /bin/bash

x=5
y=7

if [ $x == $y ]; then
    echo "true"
else
    echo "false"
fi
echo

if [ 8 -gt 6 ] && [ 10 -eq 10 ]; then
echo "Conditions are true"
fi
echo

if [ 8 -gt 7 ] || [ 10 -eq 10 ]; then
echo "Condition is true"
fi

