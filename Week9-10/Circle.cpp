// Implementation for the Circle Class

#include "stdafx.h"
#include "Circle.h"
using namespace std;

// Sets the radius
void Circle::setRadius(double rad) {
	radius = rad;
}

// Returns the radius
double Circle::getRadius() const {
	return radius;
}

// Returns the Area
double Circle::getArea() const {
	return pi * radius * radius;
}

// Returns the Diameter
double Circle::getDiameter() const {
	return radius * 2;
}

// Returns the Circumference
double Circle::getCircumference() const {
	return 2 * pi * radius;
}