//Definición de la clase

#include <iostream>
#include <cmath>

using namespace std;

class Valor
{
public :
  Valor(int, float); //Constructor
  int Entero(int);
  float CalculoValor(int, float);
  void MostrarValor();
private :
  int N;
  float X;
};
