#!/bin/bash

# Simple Interest Calculator in Bash

echo "Enter principal amount: "
read principal

echo "Enter annual interest rate (in %): "
read rate

echo "Enter time (in years): "
read time

# Calculate simple interest
interest=$(echo "scale=2; ($principal * $rate * $time) / 100" | bc)
total=$(echo "scale=2; $principal + $interest" | bc)

echo "Simple Interest: $interest"
echo "Total Amount after $time years: $total"
