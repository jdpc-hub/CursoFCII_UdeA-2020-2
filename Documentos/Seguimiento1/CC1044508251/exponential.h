// exponential.h
#include <iostream>
#include <cmath>

using namespace std;

class Exponential
{
public:
  Exponential(); // Constructor
  int factorial(int); //Funcion que calcular el factorial
  float exponential(float); //Funcion que calcula la exp(x)
  void mostrarValor(); //Funcion que muestra el valor de exp(x)
 
private:
  int x;  
  int N; 
}; 
