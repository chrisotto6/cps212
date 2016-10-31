#pragma once

// Verify Date class Declaration
#include <string>

class VerifyDate
{
private:
	// Data Members
	int month = 1;
	int day = 1;
	double year = 2000;

	// Private Mutator Functions
	bool isLeap(double) const;
public:
	// Setters
	void setDay(int);
	void setMonth(int);
	void setYear(double);

	// Getters
	int getDay() const;
	int getMonth() const;
	double getYear() const;

	// Public Mutator Functions
	string printDate();
};

