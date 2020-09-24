#include <iostream>
#include <cmath>
#include "seg2.h"

using namespace std;

ExpClass::ExpClass(float x,int N)
{    
    setValues(x,N);
}

void ExpClass::setValues(float x, int N)
{
    number = x;
    precision = N;
}

float ExpClass::getValue()
{
   return number;
}

int ExpClass::getPrecision()
{
    return precision;
}
   
int ExpClass::Factorial(int n)
{
    int y = 1;
    for (int i = 1 ; i <= n ; i++)
    {
        y *= i;
    } 
    return y;    
}

float ExpClass::getExponential()
{
    float S = 1;    
    for (int i = 1; i <= precision ; i++)
    {
        S += pow(number,i)/Factorial(i);
    }
    return S;
}




