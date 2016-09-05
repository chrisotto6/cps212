// week3.cpp : main project file.
// CPS212 - Chris Otto - Week 3

#include "stdafx.h"
#include <iostream>
using namespace std;

// Function prototypes
int binarySearch(int[], int, int);

int main()
{
	const int NUM_NAMES = 10;
	string names[NUM_NAMES] = { "baboon", "giraffe", "hippopotamus", "lion", "monkey", "rhinoceros", "tapir", "tiger", "wildebeest", "zebra" };

	// Insert your code to complete this program

	return;
}

// Change function to search an array of strings
int binarySearch(int array[], int size, int value)
{
	int first = 0,             // First array element
		last = size - 1,       // Last array element
		middle,                // Mid point of search
		position = -1;         // Position of search value
	bool found = false;        // Flag

	while (!found && first <= last)
	{
		middle = (first + last) / 2;     // Calculate mid point
		if (array[middle] == value)      // If value is found at mid
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value)  // If value is in lower half
			last = middle - 1;
		else
			first = middle + 1;           // If value is in upper half
	}
	return position;
}