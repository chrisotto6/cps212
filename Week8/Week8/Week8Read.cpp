// Week8Read.cpp : main project file.
// Chris Otto - Programming II
// Chapter 12 Assignment

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

// Prototype for Method
void printParts(int, int, int);

const int DESC = 30, DATE = 14;

struct Item {
	char desc[DESC];
	int qty;
	double wsCost;
	double rCost;
	char date[DATE];
};

int main()
{
	// Define the variables to be used 
	Item part;
	int wholeSale = 0;
	int retail = 0;
	int quantity = 0;

	// Open file for output
	fstream document("c:\\items.txt", ios::in | ios::binary);

	// Test to see if their were any errors opening the file
	if (!document) {
		cout << "Error opening the file. Program will exit.\n";
		return 0;
	}

	// Loop through the file and get the information and perform logic on it
	while (!document.eof()) {
		document.read(reinterpret_cast<char *>(&part), sizeof(part));
		wholeSale += part.wsCost;
		retail += part.rCost;
		quantity += part.qty;
	}

	// Close the file
	document.close();

	// Print the information back out to the user
	printParts(wholeSale, retail, quantity);

	system("pause");
	return 0;
}

void printParts(int whole, int retail, int qty) {
	cout << "The total wholesale cost of the items are: ";
	cout << whole << endl;
	cout << "The total retail cost of the items are: ";
	cout << retail << endl;
	cout << "The total quantity of the items are: ";
	cout << qty << endl;
}