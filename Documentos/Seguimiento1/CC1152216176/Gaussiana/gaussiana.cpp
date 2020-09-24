#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float Norm(float mu, float sig, float x)
{
const float PI = 2*acos(0.0);
float a;

a=(x-mu)/sig;

return exp(-0.5*pow(a,2))/(sig*sqrt(2*PI));
};

int main()
{
float mu, sig, x0;
int b;
//int n = 1000;
//vector<double> x(n), y(n);

cout << "a)\n";
cout << "Para una media de 90 y una desviación estándar de 4 el valor de la ecuación de la curva normal para x=80 es y=" << Norm(90,4,80) << "\n\n";

cout << "b)\n";
cout << "Para calcular el valor de la curva normal deseado ingrese\n" << "Media: ";
cin >> mu;
cout << "Desviacion estandar: ";
cin >> sig;
cout << "x: ";
cin >> x0;
cout << "y=" << Norm(mu,sig,x0) << "\n\n";

/*
cout << "punto extra)\n";
cout << "si desea obtener la grafica de la curva normal obtenida para la media y la desviasion estandar ingresadas anteriormente presiones 1, de lo contrario presione 0: ";
cin >> b;

if(b==1)
{
for(int i=0; i<n; ++i)
{
x.at(i) = (mu - 5*sigma) + i*(sigma/100);
y.at(i) = Norm(mu,sig,x(i));
}
plotxy(x, y, "Ch plot", "xlabel", "ylabel")
}
*/

return 0; 
}
