#!/bin/bash

# Define an array
myArray=("apple" "banana" "orange" "grape")

# Loop over the indices of the array
for ((i = 0; i < ${#myArray[@]}; i++)); do
    echo "Element at index $i is ${myArray[i]}"
done

