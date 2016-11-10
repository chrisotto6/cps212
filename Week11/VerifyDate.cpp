// Implementation for the Verify Date class

#include "stdafx.h"
#include "VerifyDate.h"
#include <string>
#include <iostream>

using namespace std;

// Sets the day
void VerifyDate::setDay(int days) {
	day = days;
}

// Sets the month
void VerifyDate::setMonth(int months) {
	month = months;
}

// Sets the year
void VerifyDate::setYear(int years) {
	year = years;
}

// Gets the day
int VerifyDate::getDay() const {
	return day;
}

// Gets the month
int VerifyDate::getMonth() const {
	return month;
}

// Gets the year
int VerifyDate::getYear() const {
	return year;
}

// Constructor
VerifyDate::VerifyDate() {
	day = 1;
	month = 1;
	year = 2000;
}


// Creates the mm/dd/yyyy date format and prints
void VerifyDate::printDate() {
	string date = to_string(month) + '/' + to_string(day) + '/' + to_string(year);
	cout << date << endl;
}

// Checks to see if the passed in year is a leap year, returning true if it is
bool VerifyDate::isLeap() const {
	// Creates boolean for holding the value of the year being a leap year
	bool leap;
	
	// Based on supporting information see if the year passed is a leap year
	if(year % 400 == 0) {
		leap = true;
	} else if(year % 100 == 0) {
		leap = false;
	} else if(year % 4 == 0) {
		leap = true;
	} else {
		leap = false;
	}
	return leap;
}

// Checks to see if the user inputed date is of valid input
bool VerifyDate::validateDate() {
	// Variables
	bool valid = false;

	// First see if the year is valid and then the rest of the inputs
	if (validateYear() == true) {
		if (validateMonth() == true) {
			if (isLeap() == true) {
				if (regularYear[0] <= day <= regularYear[month]) {
					valid = true;
				}
			}
			else {
				if (leapYear[0] <= day <= leapYear[month]) {
					valid = true;
				}

			}
		}
	}
	return valid;
}

// Checks to make sure the month input is valid
bool VerifyDate::validateMonth() {
	// Bool for tracking operation
	bool valid = false;

	if (1 <= month <= 12) {
		valid = true;
	}

	return valid;
}

// Checks to make sure the year is of valid input
bool VerifyDate::validateYear() {
	// Bool for tracking operation
	bool valid = false;

	if (1850 <= year <= 2100) {
		valid = true;
	}

	return valid;
}
