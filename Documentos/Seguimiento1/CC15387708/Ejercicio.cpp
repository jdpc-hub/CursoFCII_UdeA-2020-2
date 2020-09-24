//Eevalúa la curva normal gaussiana y(x)
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  //(a)
  float x, u, sigma, y1=0;
  u = 90;
  sigma = 4;
  x = 80;
  float y = (1/(sigma*sqrt(2*M_PI)))*exp(-0.5*pow((x-u)/sigma,2));
  cout << "\nPara una curva normal gaussiana y(x)" << endl;
  cout << "\nCon x = 80, u = 90 y sigma = 4; entonces y = " << y << endl;

  //(b)
  cout << "\nAhora digitando los valores para" << endl;
  cout << "la variable x: "; cin >> x;
  cout << "la media u: "; cin >> u;
  cout << "y la desviación sigma: "; cin >> sigma;
  y1 = (1/(sigma*sqrt(2*M_PI)))*exp(-0.5*pow((x-u)/sigma,2));
  cout << "El valor de la curva es y = " << y1 << endl;
  
  return 0;
}
