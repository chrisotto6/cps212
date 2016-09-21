// week3.cpp : main project file.
// CPS212 - Chris Otto - Week 3

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// Function prototypes
int binarySearch(string [], int, string);

int main()
{
	// Initialize the variables for the application
	string search;
	int position;
	const int NUM_NAMES = 10;
	string names[NUM_NAMES] = { "baboon", "giraffe", "hippopotamus", "lion", "monkey", "rhinoceros", "tapir", "tiger", "wildebeest", "zebra" };

	// Prompt the user to see what string they would like to search for and assign to variable
	cout << "What word would you like to search for?" << endl;
	cin >> search;

	// Assign the result of the function to an int to tell the user the position of the string in the array
	position = binarySearch(names, NUM_NAMES, search);

	// If the position of the string was found return it, if not let user know the search was unsuccessful 
	if (position != -1) 
	{
		cout << "The string was located at the " << position << " in the array." << endl;
	}
	else
	{
		cout << search << " was not found in the array, did you make a spelling mistake?" << endl;
	}

	system("pause");
	return 0;
}

// Change function to search an array of strings
int binarySearch(string array[], int size, string value)
{
	int first = 0,             // First array element
		last = size - 1,       // Last array element
		middle,                // Mid point of search
		position = -1;         // Position of search value
	bool found = false;        // Flag

	while (!found && first <= last)
	{
		middle = (first + last) / 2;     // Calculate mid point
		if (array[middle] == value)      // If value is found at mid
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value)  // If value is in lower half
			last = middle - 1;
		else
			first = middle + 1;           // If value is in upper half
	}
	return position;
}