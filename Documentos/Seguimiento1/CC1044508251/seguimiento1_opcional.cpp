/*
Este programa grafica una gaussiana en un archivo .eps usando gnuplot y recibiendo la cantidad de puntos, u y sigma.
*/

#include<iostream>
#include<math.h>
#include <fstream>
#include "gnuplot.h"

using namespace std;

double y(double u, double sig, double x)
{
  double pi = 2*acos(0.0);
  return (1/(sig*sqrt(2*pi)))*exp(-(0.5)*pow((x-u)/sig,2));
}

int main()
{
  
  //Parte opcional
  int j;
  double u, sig;
  cout << "Ingrese la cantidad de puntos: ";
  cin >> j;

  cout << "Ingrese el valor de u: ";
  cin >> u;

  cout << "Ingrese el valor de sigma: ";
  cin >> sig;

  double dx = 7*sig/j;
  double x = u-7*sig/2;

  ofstream fs("gauss-data.dat");
  
  for(int i=0; i<=j; i=i+1){
    fs << x << "\t" << y(x, sig, u) << endl;
    x = x+dx;
  }

  fs.close();

  gnuplot p;
  p("set term postscript eps");
  p("set output \"gauss-plot.eps\" ");
  p("plot \"./gauss-data.dat\" u 1:2 w l ");
      
  return 0;
}
