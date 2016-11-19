// Week12-13.cpp : main project file.

#include "stdafx.h"
#include <string>
#include <iostream>
#include "ProductionWorker.h"

using namespace std;

int main()
{
	ProductionWorker prod;
	bool shift = false;

	cout << "Enter Employee Name: ";
	cin >> prod.setName;
	cout << "Enter hire date: ";
	cin >> prod.setHire;
	cout << "Enter Employee Number: ";
	cin >> prod.setNumber;
	cout << "Enter Pay Rate: ";
	cin >> prod.setPayRate;
	do {
		cout << "Enter a valid shift: ";
		cin >> prod.setShift;
		shift = prod.validateShift(shift);
		if (shift == false) {
			cout << "Please enter a valid shift number 1 or 2";
		}
	} while (shift == false);

	cout << "Worker Name: " << prod.getName;
	cout << "Worker Hire Date: " << prod.getHire;
	cout << "Worker Number: " << prod.getNumber;
	cout << "Worker Pay Rate: " << prod.getPayRate;
	cout << "Worker Shift" << prod.getShift;
    system("pause");
    return 0;
}
