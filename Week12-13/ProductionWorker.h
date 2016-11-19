#pragma once
#include "Employee.h"
#include <string>
using namespace std;

class ProductionWorker: public Employee
{
	private:
		int shift;
		double pay;
	public:
		ProductionWorker();
		ProductionWorker(string, int, string, int, double);
		void setShift(int);
		void setPayRate(double);
		int getShift() const;
		double getPayRate() const;
		bool validateShift(int) const;
};

