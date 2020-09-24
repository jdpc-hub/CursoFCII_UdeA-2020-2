// En este codigo se calcula el valor de la disribucion gaussiana a partir de parametros dados
//librerias
#include <iostream>
#include <math.h>

using std::cout; 
using std::cin; 
using std::endl; 

int main()
{
  const double PI = std::atan(1.0)*4; //definicion Pi
  double mu, sigma;
  double y, x, param;
  x=80;
  mu=90;
  sigma=4;
  param=(x-mu)/sigma;
  y=(1/sigma*sqrt(2*PI))*(exp(-0.5*pow(param,2)));
  cout << "Ejemplo del valor de la gaussiana para mu=90 sigma=4 y x=80 \n"<<"y="<< y <<"\n";
  cout << "Ingrese los valores de mu, sigma y x respectivamente, para el calculo de la curva" << "\n";
  cin >> mu >> sigma >> x;
  param=(x-mu)/sigma;
  y=(1/sigma*sqrt(2*PI))*(exp(-0.5*pow(param,2)));
  cout << "y("<< mu << "," << sigma << ","<< x << ")"<<"="<< y << "\n" ;
}

