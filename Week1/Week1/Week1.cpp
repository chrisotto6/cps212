// Week1.cpp : main project file.
// Chris Otto - Week 1 - CPS212

#include "stdafx.h"
#include <iostream>
using namespace std;

int multiFunction(int, int, char);

int main()
{
	//Define the varaibles used when prompting the user and returning the calculated value
	int A;
	int B;
	char math;
	int C;
	bool valid = false;

	//Prompt the user for the two numbers
	cout << "Welcome to mathmatic program, please enter two numbers, the first number will have the math performed on first." << endl;
	cout << "What is the first number? ";
	cin >> A;
	cout << "What is the second number? ";
	cin >> B;

	//Prompt the user for math operation
	cout << "What operation would you like to perform (+,-,*,/)? ";
	cin >> math;

	//Perform math based on multiFunction function
	C = multiFunction(A, B, math);

	//Give the user feedback based on the calculations
	cout << "The value of your completed operation is: " << C << endl;

	//Stop the console application from exiting so that we can validate the value
	system("pause");
}

int multiFunction(int one, int two, char op) {
	int three;

	switch (op) {
	case '+':
		three = one + two;
		break;
	case '-':
		three = one - two;
		break;
	case '/':
		three = one / two;
		break;
	case '*':
		three = one * two;
		break;
	default:
		cout << "Oops you didn't enter a correct math operation." << endl;
	}
	return three;
}