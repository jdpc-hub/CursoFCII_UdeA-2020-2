#include <iostream>
#include <cmath>

using namespace std;

const double pi = 2*asin(1);//
double gaussian(double x, double mu, double sigma)//Funcion gaussiana
{
  return exp(-0.5*pow((x-mu)/sigma,2))/(sigma*sqrt(2*pi));
}

int main()
{
  double Mu = 90;
  double Sigma = 4;
  double x = 80;
  double y = gaussian(x,Mu,Sigma);
  
  cout << "El valor de la funcion gaussiana cuando:\n" << endl;
  cout << "x = " << x << endl;
  cout << "Mu = " << Mu << endl;
  cout << "Sigma = " << Sigma << endl;
  cout << "\nEs: y = " << y << endl;
  
  return 0;
}
