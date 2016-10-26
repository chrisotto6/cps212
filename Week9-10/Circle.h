#pragma once

// Circle Class Declaration

class Circle
{
private:
	double radius;
	double pi = 3.14159;
public:
	void setRadius(double);
	double getRadius() const;
	double getArea() const;
	double getDiameter() const;
	double getCircumference() const;
};