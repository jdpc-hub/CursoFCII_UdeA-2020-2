#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;

#include "Function.h"

Exponential::Exponential()
{
 N = 1; 
 x=0;
}

void Exponential::SetValues()
{ 
cout <<  "Ingrese la precisión que desea (N), recuerde no tomar un valor superior a 10 \n";
    cin >> N;

cout <<  "Ingrese el valor a evaluar en la exponencial (x) \n";
  cin >> x;
}



int Exponential::Factorial(int N)
{int fact = 1; 
while(N  > 1)
{
    fact = fact* N*(N-1);
    N = N-2;
      };
 return fact;}


float Exponential::Exp(int N, float x)
{float exp = 1;
while(N  >= 1)
{ 
    exp=exp+pow(x,N)/Factorial(N);
    N = N-1;
 };
 return exp;
}

void Exponential::Result()
{cout<<"El valor de "<< N <<"! es "<< Factorial(N) << endl;
  cout<<"El valor de la e^("<< x <<") "<< Exp(N,x) << endl;
}
