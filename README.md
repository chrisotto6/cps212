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

## Week 8
Write two programs which will work with a structure.

a) The first program will use a structure to store the following inventory data in a file:

Item Description
Quantity on Hand
Wholesale Cost
Retail Cost
Date Added to Inventory
The program will write five records to an output file for different items; the quantity, costs, and date for each item will be different from the other items.

b) The second program will read the file created by the first program using the same structure. The second program will calculate and display the following information:

total wholesale value of the inventory
total retail value of the inventory
total quantity of all items in the inventory

## Week 9/10
Write a Circle class that has the following member variables:

* radius: a double
* pi: a double initialized with the value of 3.14159

The class shall have the following member functions:

* Default Constructor: a default constructor which sets radius to 0.0
* Constructor: accepts the radius of the circle as an argument
* setRadius: a mutator function for the radius variable
* getRadius: an accessor function for the radius variable
* getArea: returns the area of the circle which is calculated as area = pi * radius * radius
* getDiameter: returns the diameter of the circle which is calculated as diameter = radius * 2
* getCircumference: returns the circumference of the circle which is calculated as circumference = 2 * pi * radius

Write a program with driver, implementation, and specification files which demonstrates the Circle class by asking the user for the circle's radius, creating a Circle object, and then reporting the circle's area, diameter, and circumference.

The specification file will contain declarations for the member variables and prototypes for the member functions.  The implementation file will contain the fully defined member functions and constructors.

## Week 11

Create a project consisting of three files – driver program, implementation, and specification - which will allow a month, day, and year between January 1, 1850, and December 31, 2100, to be entered and verified as valid. The solution will satisfy the following requirements:

(1) Create a class called VerifyDate that will contain data members and member functions to meet the listed criteria listed:
* The VerifyDate class is used for inputting and validating a date by month, day, and year.
* Create private integer data members names: month, day, year.
* A default constructor will set the date to 1/1/2000; another constructor may be created with parameters for the month, day, and year.
* Create accessor and mutator functions for the date variables.
* Create a public function, PrintDate, to print the date in the form mm/dd/year, e.g., 10/22/2000 or 4/08/2011.
* Create a private function, IsLeap, which will return true when the year is a leap year and false when it is not.
* Create a public function, CheckDate, which will return true when the month, day, and year are valid and false when they are not. For example, to be valid, the day must be appropriate for the given month and/or year, if a leap year. The date must be between January 1, 1850, and December 31, 2100.

(2) Create a specification file containing the declaration of the VerifyDate class.
(3) Create a implementation file containing the member function definitions for VerifyDate.
(4) Create a driver program which uses the VerifyDate class. The main function should prompt the user to input month, day, and year, call the function to display the date, call the function to verify the date and indicate the result to the user, and permit the user to enter another date for verification.
(5) Debug the program.

Supporting Information:
In a leap year, February has 29 days. The following three criteria determine which years will be leap years:
* A year which is divisible by 400 is a leap year.
* A year not divisible by 400 but which is divisible by 100 is NOT a leap year.
* A year not divisible by 100 but which is divisible by 4 is a leap year.
Example: 2000, 2004, and 2008 are leap years. 1900 and 2100 are not leap years.

Days in each month: January = 31, February = 28 or 29, March = 31, April = 30, May = 31, June = 30, July = 31, August = 31, September = 30, October = 31, November = 30, December = 31.
