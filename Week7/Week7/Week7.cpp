// Week7.cpp : main project file.
// Chris Otto - Promgramming II
// Chapter 11 Assignment

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int id;
	int scores[3];
	int average;
	char grade;
};

// Declare methods to be used in the application
Student getInfo();
int calculate(int []);
char detGrade(int);
void displayInfo(Student *);

int main()
{
	// Declare new student structure to be used
	Student stdnt;

	// Get and calculate information to populate the student structure
	stdnt = getInfo();
	stdnt.average = calculate(stdnt.scores);
	stdnt.grade = detGrade(stdnt.average);

	// Use a pointer to the student structure
	Student *pntr = &stdnt;

	// Display information back to the user with the new student pointer
	displayInfo(pntr);

	system("pause");
    return 0;
}

// Method gets the users input for the student that they are entering the information for
Student getInfo() {
	// Delcare a student to be used in our getInfo() method
	Student stdnt;
	
	// Prompt the user for their name and student ID
	cout << "Enter your name: ";
	getline(cin, stdnt.name);
	cout << "Enter your ID number: ";
	cin >> stdnt.id;
	
	// Loop through the test scores array and prompt and assign values
	for (int i = 0; i < 3; i++) {
		cout << "Please input your " << i + 1 << " test score: ";
		cin >> stdnt.scores[i];
	}

	return stdnt;
}

// Calculates the average test scores
int calculate(int data[]) {
	// Declare variables for use within method
	int total = 0;
	int avg;

	// Loop through the scores and add them up so that we can have a number to divide by 3
	for (int j = 0; j < 3; j++) {
		total += data[j];
	}

	// Divide the total scores by 3 and then return the average scores
	avg = total / 3;
	return avg;
}

// Determines the grade based on the average test scores
char detGrade(int avg) {
	// Variable to hold the return of the average of the test scores
	char grade = 0;

	// Assign the grade based on the average test scores
	if (avg <= 60)
		grade = 'F';
	else if (avg <= 70)
		grade = 'D';
	else if (avg <= 80)
		grade = 'C';
	else if (avg <= 90)
		grade = 'B';
	else
		grade = 'A';
	return grade;
}

// Displays information of the student back to the user
void displayInfo(Student *std) {
	cout << "Name: " << std->name << endl;
	cout << "ID: " << std->id << endl;
	cout << "Average Score: " << std->average << endl;
	cout << "Grade: " << std->grade << endl;
}