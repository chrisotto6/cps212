#pragma once

// Verify Date class Declaration

class VerifyDate
{
private:
	// Data Members
	int month;
	int day;
	int year;

	// Private Mutator Functions
	bool isLeap() const;
public:
	// Data Members
	int regularYear[13] = { 1,31,28,31,30,31,30,31,31,30,31,30,31 };
	int leapYear[13] = { 1,31,29,31,30,31,30,31,31,30,31,30,31 };
	
	// Constructor
	VerifyDate();

	// Setters
	void setDay(int);
	void setMonth(int);
	void setYear(int);

	// Getters
	int getDay() const;
	int getMonth() const;
	int getYear() const;

	// Public Mutator Functions
	void printDate();
	bool validateDate();
	bool validateMonth();
	bool validateYear();
};

