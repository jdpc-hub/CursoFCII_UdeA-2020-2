#include <iostream>
#include <cmath>

using namespace std;

class Exponencial
{
public :
  Exponencial(float, int);
  int Factorial(int);
  float CalcExponencial(float, int);
  void ImpResultado();
  
private :
  float x;
  int N; 
};
