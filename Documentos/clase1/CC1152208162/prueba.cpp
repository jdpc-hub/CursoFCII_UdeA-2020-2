#include <iostream>
using namespace std;

int main () {
	int x1, x2;
	cout << "Ingrese un numero: ";
	cin >> x1;
	cout << "Ingrese otro numero mayor al anterior: ";
	cin >> x2;
	int suma = 0; //no se como comenzar la suma desde el primer numero entregado
	while (x2 > 0) 
	{
		suma+= x2;
		x2--;
	}
	cout << "La suma es: " << suma;
	return 0;
}
 //tampoco se como entregar el resultado en un archivo
