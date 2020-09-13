#include <iostream>

using namespace std;

#include "exponential.h"

//Se inicializa N (precision) y x
Exponential::Exponential(int n)
{
  x = 0;
  N = n;
}

// Funcion para calcular el factorial
int Exponential::factorial(int n)
{ 
  if(n == 0)
    {
      return 1;
    }
  else
    {

      int m=1;
      int p=1;

      while(m<=n)
        {
          p=p*m;
          m=m+1;	  
        }

      return p;
    }
}

//Funcion para la exp(x)  
float Exponential::exponential(float y)
{
  x = y;
  float exp = 0;

  for(int i=0; i<=N; i++)
    {
      exp = exp + pow(x,i)/factorial(i);
    }

  return exp;
}

//Funcion para imprimir exp(x)
 void Exponential::mostrarValor()
  {
    cout << exponential(x) << endl;
  }


	  
