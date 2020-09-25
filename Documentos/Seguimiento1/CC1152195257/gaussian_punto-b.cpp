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
  double Mu;
  double Sigma;
  double x;

  cout << "Ingrese valor de Mu: " << endl;
  cin >> Mu;
  cout << "Ingrese valor de Sigma: " << endl;
  cin >> Sigma;
  cout << "Ingrese valor de x: " << endl;
  cin >> x;
  
  double y = gaussian(x,Mu,Sigma);

  cout << "\nEl valor de la funcion gaussiana cuando:\n" << endl;
  cout << "Mu = " << Mu << endl;
  cout << "Sigma = " << Sigma << endl;
  cout << "x = " << x << endl;
  cout << "\nEs: y = " << y << endl;
  
  return 0;
}
