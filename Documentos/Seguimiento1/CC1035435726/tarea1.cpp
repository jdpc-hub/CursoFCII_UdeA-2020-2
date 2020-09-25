#include <iostream>
#include <cmath>

using namespace std;

double y(float x, float mu, float sigma){
	return exp(-0.5*pow((x-mu)/sigma, 2))/(sigma*pow(2*M_PI, 0.5));
}

int main()
{
	//Parte a:
	cout << "Para mu = 80, sigma = 4 y x = 80, el valor de y es: " << y(80., 90., 4.) << endl;
	//Parte b: 
	float x;
	float sigma;
	float mu;
	cout << "Ingrese el valor de x: " << endl;;
	cin >> x;
	cout << "Ingrese el valor de mu: " << endl;;
	cin >> mu;
	cout << "Ingrese el valor de sigma: " << endl;;
	cin >> sigma;
	cout << "Para mu = " << mu << ", sigma = " << sigma << ", x = " << x << ", el valor de y es: " << y(x, mu, sigma) << endl;
	return 0;
}

