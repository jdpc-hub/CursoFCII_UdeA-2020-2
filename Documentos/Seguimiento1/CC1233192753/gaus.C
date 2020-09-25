//Calcula el valor de la funcion gaussiana para un x determinado con parametros mu=90 y sigma=4
#include <iostream>
#include <cmath>

using namespace std;

double gaus(double x)
{
  const double PI  = 3.1416;
  double y, sigma, mu;
  sigma = 4.0;
  mu = 90.0;
  y = (1.0/(sigma*sqrt(2.0*PI)))*exp(-0.5*pow((x-mu)/sigma,2.0));
  return y;
}


int main()
{
  double y,x;
  cout<< "Ingrese un número x"<< endl;
  cin>>x;
  y = gaus(x);
  cout<<"El resultado la gaussiana para x="<<x<<", "<<"mu=90 y sigma=4 es y="<<y<<endl;
}
