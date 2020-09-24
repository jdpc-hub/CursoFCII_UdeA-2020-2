/*
Código que genera una gaussiana con valores de mu y sigma definidos por el usuario 
*/

#include <iostream>
#include <cmath>
using namespace std;

// función con la ecuación dela curva normal
double normCurve (float x, float mu=90.0, float sigma=4.0)
{
	const double PI = 2*acos(0.0);
	float yval = (1/(sigma*pow(2*PI, 0.5))) * exp(-0.5*pow( (x-mu) / sigma, 2));

	return yval;
}

int main()
{
	int ival;
	float u_mu, u_sig, u_x;

	cout << "El siguiente programa calculará el valor de la distribución gaussiana para x dado" << endl;
	cout << "¿Desea definir mu y sigma? \n ingrese 1 para si o 0 para no" << endl;
	cin >> ival;

	if (ival == 1)
	{
		cout << "Ingrese valor de mu" << endl;
		cin >> u_mu;
		cout << "Ingrese valor de sigma" << endl;
		cin >> u_sig;
		cout << "Ingrese valor de x" << endl;
		cin >> u_x;

		float y1 = normCurve(u_x, u_mu, u_sig);
		cout << "el resultado es: " << y1 << endl;
	}

	else if (ival == 0)
	{
		cout << "valores por defecto son mu = 90 y sigma = 4" << endl;
		cout << "Ingrese valor de x" << endl;
		cin >> u_x;

		float y1 = normCurve(u_x);
		cout << "el resultado es: " << y1 << endl;
	}

	return 0;

}