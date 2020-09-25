#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>  // Libreria para manejar files


using std::cout; 
using std::cin; 
using std::setw;
using std::ofstream;  // Para escribir en el file


const float pi=3.1416;

// Declaracion de files
ofstream myfile;

// Declaracion de rutinas y funciones
void gaussiana(float mu, float sigma, int n, float x_i, float x_f);  // esta rutina calcula el valor y de la gaussiana


// Funcion principal del programa
int main(){

	float mu, sigma, x_i, x_f; 
	int n;

	cout << "Ingrese mu y sigma en respectivo orden\n";
	cin >> mu >> sigma;
	cout << "Ingrese el numero de puntos y el intervalo, en respectivo orden n, (x_i, x_f)\n";
	cin >> n >> x_i >> x_f;

	gaussiana(mu, sigma, n, x_i, x_f);
	system("gnuplot grafica.gp"); // bash command for graph the function 

	return 0;
}


// Definicion de rutinas y funciones
void gaussiana(float mu, float sigma, int n, float x_i, float x_f){

	float N = 1 / ( sigma * sqrt(2 * pi) );
	float dx = (x_f - x_i) / n; // puntos igualmente espaciados en el intervalo
	
	myfile.open("distribucion_gaussiana.dat");  // se abre el archivo

	for(float x = x_i; x <= x_f; x += dx){

		myfile << x << "	" << N * exp( -0.5 * pow( (x-mu)/sigma, 2 ) ) << "\n";  // se guardan los datos
	}

	myfile.close();  // se cierra el archivo
}