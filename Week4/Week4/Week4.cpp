// Week4.cpp : main project file.
// Week 4 

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
void *reverseArr(int [], int);

int main()
{
	// Initialize the global variables for the application
	int arr[] = { 12, 52, 21, 27, 88 };

	// Loop through the original array and display the number to the console
	for (int i = 0; i <= 4; i++)
	{
		cout << "The original number at " << i << " is: " << arr[i] << endl;
	}

	// Reverse the array
	reverseArr(arr, 5);
	
	system("pause");
	return 0;
}

void *reverseArr(int arr[], int size) {
	// Array to hold new numbers and tracker for the old array
	int *numbers = nullptr;
	int trck = size - 1;

	// If the size is 0 or less return null pointer
	if (size <= 0) {
		return nullptr;
	}

	// Allocate new array
	numbers = new int[size];

	// Reverse the old array and save it to the new array
	for (int index = 0; index < size; index++) {
		numbers[index] = arr[trck];
		trck--;
	}

	// Loop through the new array and display the number to the console
	for (int j = 0; j <= 4; j++)
	{
		cout << "The reverse number at " << j << " is: " << numbers[j] << endl;
	}

	// Free the memory
	delete [] numbers;
	numbers = 0;
}
