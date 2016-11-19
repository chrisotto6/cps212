#pragma once

#include "stdafx.h"
#include <string>
using namespace std;

class Employee
{
	protected:
		// Data Members
		string name;
		int number;
		string hireDate;
	public:
		// Constructor
		Employee();
		Employee(string, int, string);
		Employee(const Employee&);

		// Setters
		void setName(string);
		void setNumber(int);
		void setHire(string);

		// Getters
		string getName() const;
		int getNumber() const;
		string getHire() const;
};