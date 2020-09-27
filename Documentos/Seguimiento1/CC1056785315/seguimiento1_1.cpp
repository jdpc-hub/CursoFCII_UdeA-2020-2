#include <iostream>
#include <cmath>

using namespace std;

int main() {
  //Literal a
  float sigma, u, x;
  u = 90;
  sigma = 4;
  x = 80;
  float y = (1/(sigma*sqrt(2*M_PI)))*exp(-0.5*pow((x-u)/sigma,2));
  cout << "y = " << y << " cuando x = 80, u = 90 y sigma = 4" << endl;

  //Literal b
  cout << "\nAhora ingrese sus valores para calcular la gaussiana en ese punto:" << endl;
  cout << "u = ";
  cin >> u;
  cout << "sigma = ";
  cin >> sigma;
  cout << "x = ";
  cin >> x;
  y = (1/(sigma*sqrt(2*M_PI)))*exp(-0.5*pow((x-u)/sigma,2));
  cout << "\ny = " << y << " para los datos ingresados" << endl;
}
