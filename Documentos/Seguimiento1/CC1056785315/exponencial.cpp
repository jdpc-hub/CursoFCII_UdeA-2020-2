#include <iostream>
#include <cmath>
#include "exponencial.h"

using namespace std;

Exponencial::Exponencial(float exp, int Nterm)
{
  x = exp;
  
  if (Nterm<10)
    {
      N = Nterm;
    }
  else
    {
      N = 10;
    }
}

int Exponencial::Factorial(int f)
{
  int r = 1;
  if (f == 0)
    {
      return r;
    }

  else
    {
      for (int j=1; j<=f; j++)
	{
	  r *= j;
	}
      return r;
    }
}

float Exponencial::CalcExponencial(float, int)
{
  float resultado = 1;
  for (int i=1; i<=(N-1); i++)
    {
      resultado += pow(x,i)/Factorial(i);
    }

  return resultado;
}

void Exponencial::ImpResultado()
{
  cout << "La exponencial de " << x << " usando " << N << " terminos es " << CalcExponencial(x,N) << endl;
}
