#!/bin/bash

echo "Testing the LOADing of different # of figures."
printf "Note: Generating time not counted.\n\n\n"

printf "10 figures"
./generator 10 > temp.txt
{ time printf "LOAD temp.txt\nEXIT\n" | ./geometry > /dev/null; } 2>&1
echo

printf "50 figures"
./generator 50 > temp.txt
{ time printf "LOAD temp.txt\nEXIT\n" | ./geometry > /dev/null; } 2>&1
echo

printf "100 figures"
./generator 100 > temp.txt
{ time printf "LOAD temp.txt\nEXIT\n" | ./geometry > /dev/null; } 2>&1
echo

printf "500 figures"
./generator 500 > temp.txt
{ time printf "LOAD temp.txt\nEXIT\n" | ./geometry > /dev/null; } 2>&1
echo

printf "1000 figures"
./generator 1000 > temp.txt
{ time printf "LOAD temp.txt\nEXIT\n" | ./geometry > /dev/null; } 2>&1
echo

printf "5000 figures"
./generator 5000 > temp.txt
{ time printf "LOAD temp.txt\nEXIT\n" | ./geometry > /dev/null; } 2>&1
echo

printf "10000 figures"
./generator 10000 > temp.txt
{ time printf "LOAD temp.txt\nEXIT\n" | ./geometry > /dev/null; } 2>&1
echo

printf "50000 figures"
./generator 50000 > temp.txt
{ time printf "LOAD temp.txt\nEXIT\n" | ./geometry > /dev/null; } 2>&1
echo

printf "100000 figures"
./generator 100000 > temp.txt
{ time printf "LOAD temp.txt\nEXIT\n" | ./geometry > /dev/null; } 2>&1
echo

printf "500000 figures"
./generator 500000 > temp.txt
{ time printf "LOAD temp.txt\nEXIT\n" | ./geometry > /dev/null; } 2>&1
echo

printf "1000000 figures"
./generator 1000000 > temp.txt
{ time printf "LOAD temp.txt\nEXIT\n" | ./geometry > /dev/null; } 2>&1
echo

rm temp.txt
