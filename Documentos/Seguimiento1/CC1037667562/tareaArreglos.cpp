/* 
Programa que tabula las frecuencias de los valores obtenidos al lanzar dos dados
36000 veces de manera aleatoria y sumarlos 
*/

#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	const int sizeArr = 13; // ignoramos el cero
	int allFreq[ sizeArr ] = {}; //Arreglo que contiene las frecuencias de cada suma

	vector<int> vecFreq; // Declaramos el vector
	vecFreq.assign(sizeArr, 0); // asignamos las frecuencias con 0 para iniciar

	int dado1; int dado2; // Definimos los dados
	int Ntiros = 36000; // Definimos número de tiros

	srand( time( NULL ) ); 

	for(int tiro = 1; tiro <= Ntiros; tiro++)
	{
		dado1 = 1 + rand() % 6; // tiro aleatorio dado1
		dado2 = 1 + rand() % 6; // tiro aleatorio dado2

		//Llenado del arreglo
		allFreq[ dado1+dado2 ]++; //sumo a cada valor (1-12) 

		dado1 = 1 + rand() % 6; // 2do tiro aleatorio dado1
		dado2 = 1 + rand() % 6; // 2do tiro aleatorio dado2

		//Llenado del vector
		vecFreq[ dado1+dado2 ]++; //sumo a cada valor
	}

	cout << "frecuencia aproximada esperada para el valor 7 es " << Ntiros/6 << "\n" << endl; 

	//Tabulando frecuencias
	cout << "|" << "Valor"  << " |" << setw( 12 ) << "Freq Arreglo" << " |" << setw( 12 ) << "Freq vector" << " |" << endl;

	for(int value = 2; value < sizeArr; value++)
	{
		cout << "|" << setw( 5 ) << value  << " |" << setw( 12 ) << allFreq[ value ] << " |" << setw( 12 ) << vecFreq[ value ] << " |" << endl;
	}


	return 0;
}

