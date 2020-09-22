#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;


class Exponential
{
public:
Exponential();
void SetValues();
int Factorial(int); 
float Exp(int, float);
void Result();

private:
 int N;
 float x;
};
