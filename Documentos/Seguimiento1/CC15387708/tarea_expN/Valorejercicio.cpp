//Código principal de la clase, devuelve un valor aproximado de exp(x)

#include "valor.h"

int main()
{
  int N;
  float X;
  cout << "Para aproximar la serie de Taylor de la función exponencial" << endl;
  cout << "\nPrimero, digitar la cantidad de términos N:" << endl;
  cin >> N;
  while (N > 10 || N < 0)
      {
	cout << "N debe estar entre 0 y 10:" << endl;
	cin >> N;
      }
  cout <<"\nSegundo, digitar el valor del punto x:" << endl;
  cin >> X;
  Valor exp(N,X);
  exp.MostrarValor();
  return 0;
}
