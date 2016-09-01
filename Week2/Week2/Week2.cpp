// Week2.cpp : main project file.
// Chris Otto - Week 2 - CPS212

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

// Function prototypes
int lowestNumber(int numbers[], int lines);
int largestNumber(int number[], int lines);
int totalOfNumbers(int numbers[], int lines);
int averageOfNumbers(int total, int lines);

int main()
{
	// Declare array to be used
	int numbers[15];
	int number;
	ifstream file;
	string line;
	int n = 0;

	// Open the file read all the numbers and assign them to an array then close it once we have saved the array to memory
	file.open("numbers.txt");

	while (file >> number) {
		number = numbers[n];
		n++;
	}

	file.close();

	// Get the length of the array and assign it as a constant for looping
	const int lines = sizeof(numbers) / sizeof(numbers[0]);

	// Run through our functions to get all the require information and print it out to the user
	int lowest = lowestNumber(numbers, lines);
	int largest = largestNumber(numbers, lines);
	int total = totalOfNumbers(numbers, lines);
	int average = averageOfNumbers(total, lines);

	// Print the information out to the console for the user
	cout << "The lowest number is: " << lowest;
	cout << "The largest number is: " << largest;
	cout << "The total of all the numbers is: " << total;
	cout << "The average of all the numbers is: " << average;

	system("pause");
	return 0;
}

int lowestNumber(int numbers[], int lines) {
	int j = 1000;
	for (int i = 0; i < lines; i++) {
		if (numbers[i] < j) {
			j = numbers[i];
		}
	}
	return j;
}

int largestNumber(int numbers[], int lines) {
	int j = 0;
	for (int i = 0; i < lines; i++) {
		if (numbers[i] > j) {
			j = numbers[i];
		}
	}
	return j;
}

int totalOfNumbers(int numbers[], int lines) {
	int j = 0;
	for (int i = 0; i < lines; i++) {
		j += numbers[i];
	}
	return j;
}

int averageOfNumbers(int total, int lines) {
	return total / lines;
}