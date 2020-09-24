//Calcula el valor de la funcion gaussiana para un x determinado con parametros mu y sigma
#include <iostream>
#include <cmath>

using namespace std;

double gaus(double x, double mu, double sigma)
{
  const double PI  = 3.1416;
  double y;
  y = (1.0/(sigma*sqrt(2.0*PI)))*exp(-0.5*pow((x-mu)/sigma,2.0));
  return y;
}


int main()
{
  double y, x, mu, sigma;
  cout<< "Ingrese un número x"<< endl;
  cin>>x;
  cout<< "Ingrese un parametro mu"<< endl;
  cin>>mu;
  cout<< "Ingrese un parametro sigma"<< endl;
  cin>>sigma;
  y = gaus(x,mu,sigma);
  cout<<"El resultado la gaussiana para x="<<x<<", "<<"mu="<<mu<<", "<<"y sigma="<<sigma<<" "<<"es y="<<y<<endl;
}
