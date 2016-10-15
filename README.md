# cps212
Homework Assignments for Lakeland Class CPS212 - Programming II

## Week 1
Create a function named multiFunction.  Pass two integer variables and one character variable to this function.  The character variable will hold + (add), - (subtract), * (multiply), and / (divide).  The function will determine which operation to perform based on the character variable.  Within the function, use your choice of decision statements (e.g., if or switch) to determine which arithmetic operation to perform.  The add operation will add the two integer variables, the subtract operation will subtract one integer variable from the other and so on.  The function will return the result of the operation performed.

## Week 2
Write a program which reads the numbers.txt file (available in BlackBoard in the Week 2 folder).  The file contains a series of numbers, each written on a separate line.  The program will read the contents of the file into an array and then display the following information:

1. the lowest number in the array
2. the highest number in the array
3. the total of the numbers in the array
4. the average of the numbers in the array.

## Week 3
Modify the binarySearch function presented in this chapter so it searches an array of strings instead of an array of ints.  (The binarySearch code can be found in the Week 3 folder.)  Test the function with a driver program.  Use the code in the attached file (ch8_sort.txt) as a skeleton for the driver program.  This code also contains the word list which the function will search; the words are listed in alphabetical order.

## Week 4
Write a program with a function:

a) In the main function, define an integer array with five entries and assign values to the entries.  Display the entries in the order in which they occur within the array.

b) Pass the array to a function.  Within the function, dynamically allocate a new integer array.  Programmatically assign the value from the original array to the new array in reverse order such that the first entry in the original array becomes the fifth entry in the new array, the second entry in the original array becomes the fourth entry in the new array, and so on.  Display the contents of the new array in the function.  Do not return the new array from the function.  Do not change the contents of the original array.  Use a pointer to an array, i.e., use dereferencing, when assigning and displaying the contents of the new array.  The dynamically allocated array will be deleted.

## Week 5
Write a program with three functions:  upper, lower, and reverse.

The upper function will accept a pointer to a string or C-string as an argument.  It will step through each character in the string converting it (where necessary) to uppercase.

The lower function will accept a pointer to a string or C-string as an argument.  It will step through each character in the string converting it (where necessary) to lowercase.

Like the upper and lower functions, the reverse function will accept a pointer to a string or C-string.  It will step through each character in the string converting uppercase characters to lowercase and lowercase characters to uppercase; numbers and special characters will be unaffected.

The program will execute the functions in the following order:  upper, lower, and reverse.

When entering "AbCd", the upper function will return "ABCD"; the lower function will return "abcd"; and the reverse function will return "aBcD".

## Week 7
Write a program which uses a structure having the indicated member names to store the following data:

Name (student name)
IDnum (student ID number)
Tests (an array of three test scores)
Average (average test score)
Grade (course grade)

The program will keep a list of three test scores for one student.  The program may prompt the user for the name, ID number, and test scores, or these may be assigned within the program.  The average test score will be calculated and stored in the average member of the structure.  The course grade will be assigned based on this scale:

A 91 - 100
B 81 - 90
C 71 - 80
D 61 - 70
F 0 - 60
Store the course grade in the Grade member of the structure.  Display the student name, ID, average test score, and course grade on the screen.
