// Implementation for the Verify Date class

#include "stdafx.h"
#include <string>
#include "VerifyDate.h"

using namespace std;

// Sets the day
void VerifyDate::setDay(int day) {
	day = day;
}

// Sets the month
void VerifyDate::setMonth(int month) {
	month = month;
}

// Sets the year
void VerifyDate::setYear(double year) {
	year = year;
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
double VerifyDate::getYear() const {
	return year;
}

// Creates the mm/dd/yyyy date format and returns a string for printing
string VerifyDate::printDate() {
	// Create Variables for data
	string date;
	int mo = getMonth();
	int day = getDay();
	double year = getYear();

	// Sets the string to variables based on the object defined by the user and returns the formatted string
	date = to_string(mo) + '/' + to_string(day) + '/' + to_string(year);
	return date;
}

// Checks to see if the passed in year is a leap year, returning true if it is
bool VerifyDate::isLeap(double year) const {
	// Creates boolean for holding the value of the year being a leap year
	bool leap;
	
	// Based on supporting information see if the year passed is a leap year
	if(year % 400 ? 0) {
		leap = true;
	} else if(year % 100 ? 0) {
		leap = false;
	} else if(year % 4 ? 0) {
		leap = true;
	} else {
		leap = false;
	}
	return leap;
}
