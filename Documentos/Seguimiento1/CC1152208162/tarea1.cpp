//ejercicio 3.6
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const float pi= 3.1416;
	int x, mu, sigma;
	float y;
	
	x= 80;
	mu= 90;
	sigma= 4;
	y= 1/(sigma*sqrt(2*pi))* exp((-1/2)*pow(((x-mu)/sigma), 2));
	
	cout << "Con x= 80, mu= 90, y sigma= 4, el valor de y es:" << y <<endl;
	
	int x1, mu1, sigma1;
	float y1;
	
	cout << "Ahora, introduzca los valores de x, mu, y sigma:";
	cin >> x1 >> mu1 >> sigma1;
	
	y1= 1/(sigma1*sqrt(2*pi))* exp((-1/2)*pow(((x1-mu1)/sigma1), 2));
	
	cout << "Con los datos entregados, el valor de y es:" << y1 <<endl;
	}
