#include "stdafx.h"
#include "Employee.h"
#include <string>
using namespace std;

// Constructors
Employee::Employee() {
	name = "";
	number = 0;
	hireDate = "";
}

Employee::Employee(string nam, int num, string hire) {
	name = nam;
	number = num;
	hireDate = hire;
}

Employee::Employee(const Employee &obj) {
	name = obj.name;
	number = obj.number;
	hireDate = obj.hireDate;
}

void Employee::setName(string nam) {
	name = nam;
}

void Employee::setNumber(int num) {
	number = num;
}

void Employee::setHire(string hire) {
	hireDate = hire;
}

string Employee::getName() const {
	return name;
}

int Employee::getNumber() const {
	return number;
}

string Employee::getHire() const {
	return hireDate;
}