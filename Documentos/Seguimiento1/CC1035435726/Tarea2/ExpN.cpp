#include <iostream>

using namespace std;

#include "ExpN.h"

ExpN::ExpN(double x_, unsigned int N_)
{
    setX(x_);
    setN(N_);
}

void ExpN::setX(double x_)
{
    x = x_;
}

double ExpN::getX()
{
    return x;
}

void ExpN::setN(unsigned int N_)
{
    N = N_;
}

unsigned int ExpN::getN()
{
    return N;
}

unsigned long ExpN::factorial(unsigned int m)
{
    unsigned long f = 1;
    for (int i = m; i > 1; i--) {
    	f *= i;
    }
    return f;
}

double ExpN::calcExpX()
{
    double ex = 0.;
    double x_pow = 1.;

    for (int i = 0; i < N; i++) {
        ex += x_pow / factorial(i);
        x_pow *= x;
    }
    return ex;
}

void ExpN::printExpX()
{
    cout << "El valor del e^" << x << " es " << calcExpX() << endl;
}

