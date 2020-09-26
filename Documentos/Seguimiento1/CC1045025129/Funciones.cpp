#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;

#include "Funciones.h"

Exponencial::Exponencial()
{
 N = 1; 
 x=0;
}

void Exponencial::AsignarValores()
{ 
cout <<  "Ingrese la precisión que desea (N) ";
    cin >> N;

cout <<  "Ingrese el valor al que desea elevar la exponencial (x) ";
  cin >> x;
}



int Exponencial::Factorial(int N)
{int fact = 1; 
while(N  > 1)
{
    fact = fact* N*(N-1);
    N = N-2;
      };
 return fact;}


float Exponencial::Exp(int N, float x)
{float exp = 1;
while(N  >= 1)
{ 
    exp=exp+pow(x,N)/Factorial(N);
    N = N-1;
 };
 return exp;
}

void Exponencial::Resultados()
{cout<<"El valor del factorial es "<< Factorial(N) << endl;
  cout<<"El valor de la exponencial es "<< Exp(N,x) << endl;
}
