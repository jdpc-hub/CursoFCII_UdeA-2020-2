#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{ float y;
float sigma = 4, mu = 90, x = 80;
 y = (1/(sigma*sqrt(2*3.14159265359)))*exp(-0.5*pow((x-mu)/sigma,2));
cout << "El valor de la Gaussiana para x = 80, mu = 90 y sigma = 4 es y=" << y <<endl;
float x1, sigma1, mu1, y1;
 cout << "Ingrese el valor de x" << "\n";
  cin >> x1;
  cout << "Ingrese el valor de mu" << "\n";
  cin >> mu1;
  cout << "Ingrese el valor de sigma" << "\n";
  cin >> sigma1;
  y1 = (1/(sigma1*sqrt(2*3.14159265359)))*exp(-0.5*pow((x1-mu1)/sigma1,2));
   cout << "El valor de la Gaussiana para los valores que introdujo es y=" << y1 <<endl;
ofstream archivo;
archivo.open ("Gaussiana.txt");
 for (int i=30; i<=150; i=i+1)
    { float mu = 90, sigma = 4;
      float gaussiana;
       gaussiana = (1/(sigma*sqrt(2*3.14159265359)))*exp(-0.5*pow((i-mu)/sigma,2));
      archivo << i << " " << gaussiana << endl;
    }


  archivo.close();
  return 0;
}  
