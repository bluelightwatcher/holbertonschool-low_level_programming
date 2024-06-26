Learning Objectives

General
What are pointers and how to use them
What are arrays and how to use them
What are the differences between pointers and arrays
How to use strings and how to manipulate them
Scope of variables

task 0
first commit: the logic is corret although the syntax was incorrect.
to change the value stored in a variable using a pointer do as follow.

*ptr = var 
*ptr = 42

task 1

swaping 2 values together. 
First: creating a temporary value to store "a" value.
Second: storing "b" value into "a" using "*b".
Third: storing temporary value into b using "*b".

int swap = *a; // variable swap is equal to the value accessed by a
*a = *b;   // value accessed by a is equal to the value accessed by b
*b = swap; // value accessed by b is equal to the value of variable swap

task 2

Programm uses a loop to count the number of characters.
I initially wanted to use the sizeof operator in order to check the number of character in a string. 
I have not succeeded so we looped over the string and return the number of character prior to the Null character. 

