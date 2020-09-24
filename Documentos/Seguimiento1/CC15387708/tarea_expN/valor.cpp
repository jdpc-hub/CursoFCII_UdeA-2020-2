//Implementación de la clase

#include "valor.h"

Valor::Valor(int n, float x)
{
  X = x;

  if (n <= 10)
    {
      N = n;
    } 
}

int Valor::Entero(int k)
{
  int i,
    factor = 1;
  for (i = k; i > 1; --i)
    {
      factor *= i;
    }
  return factor;
}

float Valor::CalculoValor(int, float)
{
  float exponencial = 1;
  for (int j = 1; j <= (N-1); j++)
    {
      exponencial += pow(X,j)/Entero(j);
    }
  return exponencial;
}

void Valor::MostrarValor()
{
  cout << "\ncon N = " << N << ", y alrededor de x = " << X << ", la serie de exp(x) tiene un valor aproximado de:" << endl;
  cout << CalculoValor(X, N) << endl;
}
