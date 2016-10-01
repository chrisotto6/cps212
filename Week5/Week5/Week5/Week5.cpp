// Chris Otto - Assignment 5
// Week5.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// Function Prototypes
string upperConverter(string, int);
string lowerConverter(string, int);
string oppositeConverter(string, int);

int main()
{
	// Constant int for the size of array and declaration of string to hold user response
	int size;
	string input;

	// Get user input
	cout << "What would you like to convert?" << endl;
	getline(cin, input);

	// Get the size of the string based on user input
	size = input.length();

	// Process the input through various converion functions
	string upper = upperConverter(input, size);
	string lower = lowerConverter(input, size);
	string opposite = oppositeConverter(input, size);

	// Print out the output of the conversion to the user
	cout << "The upppercase version of your input is: " << upper << endl;
	cout << "The lowercase version of your input is: " << lower << endl;
	cout << "The opposite version of your input is: " << opposite << endl;

	system("pause");
    return 0;
}

string upperConverter(string upper, int size) {
	// Loop through the string and convert to uppercase if it is lowercase
	for (int counter = 0; counter < size; counter++) {
		if (islower(upper.at(counter))) {
			upper.at(counter) = toupper(upper.at(counter));
		}
	}
	return upper;
}

string lowerConverter(string lower, int size) {
	// Loop through the string and convert to lowercase if it is uppercase
	for (int counter = 0; counter < size; counter++) {
		if (isupper(lower.at(counter))) {
			lower.at(counter) = tolower(lower.at(counter));
		}
	}
	return lower;
}

string oppositeConverter(string opposite, int size) {
	// Loop through the string and convert to opposite case for which the character is 
	for (int counter = 0; counter < size; counter++) {
		if (isupper(opposite.at(counter))) {
			opposite.at(counter) = tolower(opposite.at(counter));
		}
		else {
			opposite.at(counter) = toupper(opposite.at(counter));
		}
	}
	return opposite;
}