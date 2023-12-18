#! /bin/bash

model = " 0% packet"
for i in {1..10}
    do
        x=$(ping -c 1 -w 1 "192.168.100.${i}")
        if [[ $x == *"${model}"* ]]; then
            echo "this 192.168.100.${i} is exist"
        fi
    done