#include<iostream>
using namespace std;

#include"expN.h"

ExpN::ExpN(double X,int N)
{
	x = X;
	n = N;
	calcExp();
}

void ExpN::calcExp()
{
	s = 0;
	for(int i = 0; i < n; i++)
	{
		s += pow(x, i)/calcFact(i);
	}
}

void ExpN::resultado()
{
	cout << s;
}

int ExpN::calcFact(int n)
{
	int f = 1;
	for(int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}
