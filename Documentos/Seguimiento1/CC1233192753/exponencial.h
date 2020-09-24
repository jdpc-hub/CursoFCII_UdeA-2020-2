// exponencial.h
#include <iostream>
#include <string>

using namespace std;

class FuncionExponencial
{
public:
  FuncionExponencial();
  void setValues();
  int Factorial(int);
  double Exp(int, double);
  void Print();

private:
  int N;
  double x;
};
