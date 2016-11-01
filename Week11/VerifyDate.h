#pragma once

// Verify Date class Declaration
#include <string>

class VerifyDate
{
private:
	// Data Members
	int month = 01;
	int day = 01;
	int year = 2000;

	// Private Mutator Functions
	bool isLeap(int) const;
	
public:
	// Setters
	void setDay(int);
	void setMonth(int);
	void setYear(int);

	// Getters
	int getDay() const;
	int getMonth() const;
	double getYear() const;

	// Public Mutator Functions
	string printDate();
	bool validateDate(int, int, int);
	bool validateMonth(int);
	bool validateYear(int);
};

