//Calcula el valor de la funcion gaussiana para varios x con parametros mu y sigma y guarda los resultados en un .txt
#include <iostream>
#include <cmath>
#include <fstream>

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
  //cout<< "Ingrese un número x"<< endl;
  //cin>>x;
  cout<< "Ingrese un parametro mu"<< endl;
  cin>>mu;
  cout<< "Ingrese un parametro sigma"<< endl;
  cin>>sigma;
  ofstream file;
  file.open("dat.txt");
  //for (int i=(int)x-500; i<=(int)x+500; i+)
  float dt=0.1;
  x = mu-500*dt;
  for (int i=1; i<=1000; i++){
      y = gaus(x,mu,sigma);
      file << x << " " << y << endl;
      x = x + dt;
  }
  //cout<<"El resultado de (1/(sigma*(2*pi)^0.5)))*exp(-0.5*((x-mu)/sigma)^2) es "<<y<<endl;
  file.close();

}
