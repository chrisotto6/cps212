// Chris Otto - More Classes!
// Week11.cpp : main project file.

#include "stdafx.h"
#include <string>
#include <iostream>
#include "VerifyDate.h"

using namespace std;

int main()
{
	// Create new date object and variables to take in the users input
	VerifyDate date;
	int day;
	int month;
	int year;
	char input;
	char const* output;

	// Loop through as many times as the user wants
	do {
		// Get input from the user
		cout << "This program will validate a date is correct, dates can" << endl;
		cout << "be between 1/1/1850 and 12/31/2100. Follow instructions." << endl;
		cout << "Please enter a day number: ";
		cin >> day;
		cout << "Please enter a month number: ";
		cin >> month;
		cout << "Please enter a year number: ";
		cin >> year;

		// Create the date object based on the user input
		date.setDay(day);
		date.setMonth(month);
		date.setYear(year);

		if (date.validateDate() == true) {
			cout << "You have enter a valid date." << endl;
			date.printDate();
		} else {
			cout << "You entered an invalid date, you will be able to try again." << endl;
		}
		
 		cout << "Process another date? y/n" << endl;
		cin >> input;
	} while (input == 'y' || input == 'Y');
	
	system("pause");
    return 0;
}
