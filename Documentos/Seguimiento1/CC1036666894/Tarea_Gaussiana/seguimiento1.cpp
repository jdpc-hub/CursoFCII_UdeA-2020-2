#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;


int main(){
  float sig = 4.0;
  float mu = 90.0;
  float x = 80.0;
  float y=0;
  
  y = 1/(sig*sqrt(M_PI*2)) * exp(-(0.5)*(pow((x-mu)/sig,2)));
  cout << "El valor de la funcion para mu=90 y sigma=4 en x=80 es: " << y << endl;
  
  
  float mu1=0;
  float x1=0;
  float sig1=0;

  cout << "ingrese el valor de mu: ";
  cin >> mu1;
  cout << "ingrese el valor de sigma: ";
  cin >> sig1;
  cout << "ingrese el valor de x: ";
  cin >> x1;

  y = 1/(sig1*sqrt(M_PI*2)) * exp(-(0.5)*(pow((x1-mu1)/sig1,2)));

  cout << "El valor de la funcion para mu=" << mu1 << " sigma=" << sig1 << " en x= " << x1 << " es: " << y << endl;
  
  return 0;
}
