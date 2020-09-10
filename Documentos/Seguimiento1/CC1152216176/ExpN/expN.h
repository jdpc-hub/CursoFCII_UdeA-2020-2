#include<iostream>
#include<cmath>

using namespace std;

class ExpN
{
	public:
	ExpN(double, int);	// constructor
	int calcFact(int);
	void calcExp();
	void resultado();

	private:
	double x;
	int n;
	double s;
};
