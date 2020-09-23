//Primer ejercicio de seguimiento Johan Alexis Carrillo Toro - 1214734681
#include<iostream>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;

const float pi=3.1416;


// Declaracion de rutinas
float gaussiana(float x, float mu, float sigma);  // esta rutina calcula el valor y de la gaussiana


// Funcion principal del programa
int main(){

	// Declaracion de variables
	float y, x, mu, sigma;
	int opc;
	cout << "Si desea usar los valores de sigma, x y mu del punto 6.1 oprima 1\n";
	cout << "Si desea ingresar los valores de x, sigma y mu por teclado oprima 2\n";
	cin >> opc;

	// Ejercicio 6.a
	if(opc == 1){

		cout << "Se usa un valor de mu=90, sigma=4, x=80\n" << endl;

		y = gaussiana(80, 90, 4);
	
		cout << "y=" << y << "\n" << endl;
		return 0;	
	}
	// Ejercicio 6.2
	if(opc == 2){
		
		cout << "Ingrese los valores de mu, sigma, x en el orden respectivo\n" << endl;
		cin >> mu >> sigma >> x;

		y = gaussiana(x, mu, sigma);
		cout << "y=" << y << "\n" << endl;
		return 0;
	}
	else{
		cout << "La opcion ingresada no existe\n" << endl;
		return 0;
	}	
}


// Definicion de rutinas
float gaussiana(float x, float mu, float sigma){

	float y;

	y = ( 1 / (sigma * sqrt(2*pi)) ) * exp( -0.5 * pow( (x-mu)/sigma, 2 ));
	return y;
}