// Week2.cpp : main project file.
// Chris Otto - Week 2 - CPS212

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function prototypes
int lowestNumber(int numbers[], int lines);
int largestNumber(int number[], int lines);
int totalOfNumbers(int numbers[], int lines);
int averageOfNumbers(int total, int lines);

int main()
{
	// Declare variables to be used
	const int size = 100;
	int numbers[size] = { 0 };
	int number;
	std::ifstream file("c:\\numbers.txt");
	std::string line;
	int cnt = 0;

	// Open the file read all the numbers and assign them to an array 
	while (cnt < size && file >> numbers[cnt])
		cnt++;

	// Run through our functions to get all the require information and print it out to the user
	int lowest = lowestNumber(numbers, cnt);
	int largest = largestNumber(numbers, cnt);
	int total = totalOfNumbers(numbers, cnt);
	int average = averageOfNumbers(total, cnt);

	// Print the information out to the console for the user
	cout << "The lowest number is: " << lowest << endl;
	cout << "The largest number is: " << largest << endl;
	cout << "The total of all the numbers is: " << total << endl;
	cout << "The average of all the numbers is: " << average << endl;

	file.close();
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