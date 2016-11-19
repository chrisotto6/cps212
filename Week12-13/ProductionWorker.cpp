#include "stdafx.h"
#include "ProductionWorker.h"
using namespace std;

ProductionWorker::ProductionWorker() {
	shift = 0;
	pay = 0.0;
}

ProductionWorker::ProductionWorker(string na, int nu, string h, int s, double p) :Employee(na, nu, h){
	shift = s;
	pay = p;
}

void ProductionWorker::setShift(int s) {
	shift = s;
}

void ProductionWorker::setPayRate(double p) {
	pay = p;
}

int ProductionWorker::getShift() const {
	return shift;
}

double ProductionWorker::getPayRate() const {
	return pay;
}

bool ProductionWorker::validateShift(int) const
{
	return false;
}

bool ProductionWorker::validateShift(int s) const {
	bool valid = false;

	if (s == 1 || s == 2) {
		valid = true;
	}

	return valid;
}