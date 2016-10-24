// Week8Write.cpp : main project file.
// Chris Otto - Programming II
// Chapter 12 Assignment

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

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
	// Open file for output
	fstream document("c:\\items.txt", ios::out | ios::app | ios::binary);

	// Create the five structures to write to the file
	Item part1 = {"Trinket", 5, 2.50, 3.00, "1/1/2016"};
	Item part2 = {"Baseball", 100, 2.00, 5.00, "8/1/2016"};
	Item part3 = { "Basketball", 50, 10.00, 15.00, "10/10/2016" };
	Item part4 = { "Hockey Puck", 75, 1.50, 2.00, "9/09/2016" };
	Item part5 = { "Lacrosse Ball", 60, 3.00, 4.00, "8/20/2016" };

	// Write the items to the file
	document.write(reinterpret_cast<char *>(&part1), sizeof(part1));
	document.write(reinterpret_cast<char *>(&part2), sizeof(part2));
	document.write(reinterpret_cast<char *>(&part3), sizeof(part3));
	document.write(reinterpret_cast<char *>(&part4), sizeof(part4));
	document.write(reinterpret_cast<char *>(&part5), sizeof(part5));

	// Close the file
	document.close();

	system("pause");
    return 0;
}