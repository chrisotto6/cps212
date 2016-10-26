// Chris Otto - Introduction to Classes
// Week9-10.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
	// Create new circle object and variable to take input for radius
	Circle oval;
	double radius;

	// Get the input from the user for the circle's radius
	cout << "This program will calculate numerous circle attributes\n";
	cout << "based on the radius given to it. What is the radius? ";
	cin >> radius;
    
	// Based on the new input set the radius into the circle class and perform the operations based on the input and output to the user
	oval.setRadius(radius);

	cout << "The following information is available about your circle:\n";
	cout << "Radius: " << oval.getRadius() << endl;
	cout << "Area: " << oval.getArea() << endl;
	cout << "Diameter: " << oval.getDiameter() << endl;
	cout << "Circumference: " << oval.getCircumference() << endl;

	system("pause");
    return 0;
}
