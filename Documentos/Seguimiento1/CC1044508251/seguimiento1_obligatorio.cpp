/*
Este programa calcular el valor para una funcion gaussiana
*/

#include<iostream>
#include<math.h>

using namespace std;

double y(double u, double sig, double x)
{
  double pi = 2*acos(0.0);
  return (1/(sig*sqrt(2*pi)))*exp(-(0.5)*pow((x-u)/sig,2));
}

int main()
{
  //Parte A
  
  int xi = 80, ui = 90, sigi = 4;
  cout << "PARTE A \nEl valor de la funcion para u = " << ui << " y sigma = " << sigi << endl;
  cout << "f("<<xi<<") = " << y(xi, sigi, ui) << endl;

  //Parte B
  double x, u, sig;
  cout << "\nPARTE B \nIngrese el valor de x: ";
  cin >> x;

  cout << "Ingrese el valor de u: ";
  cin >> u;

  cout << "Ingrese el valor de sigma: ";
  cin >> sig;

  cout << "El valor de la funcion para u = " << u << " y sigma = " << sig << endl;						 
  cout << "f("<< x <<") = "<< y(x, sig, u) << endl;
    
  return 0;
}
