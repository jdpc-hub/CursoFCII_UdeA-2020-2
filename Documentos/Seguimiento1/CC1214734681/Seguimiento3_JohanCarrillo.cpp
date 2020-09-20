/* Johan Alexis Carrillo toro - 1214734681
 Se usa el calculo del tiempo de ejecucion para ver la diferencia de tiempo en el uso
 de vectores y arreglos */


#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;


// Prototypes
void UseArray( int );
void UseVector( int );


// main function
int main(){

	cout << "Este programa simula el lanzamiento de dos dados y muentra la\n"; 
	cout << "frecuencia de la suma, para 3600 lanzamientos usando arreglos y vectores" << endl;

	int ThrowsNumber = 3600;
	srand(time(NULL));  // random seed using pc's clock

	UseArray(ThrowsNumber);
	UseVector(ThrowsNumber);

	return 0;
}


// Definition of functions
void UseArray(int ThrowsNumber){

	cout << "\n\nEsta funcion usa arreglos" << endl;

	unsigned t0, t1;  // clock variables
	t0 = clock();  // initial time

	int dice1, dice2;
	int arraysize = 13;
	int frecuencies[arraysize] = {};  // array for the histogram

	// Throw the dice and save the sum
	for(int i=0; i<3600; i++){

		dice1 = 1 + rand()%6;  // random number between 1 and 6
		dice2 = 1 + rand()%6;

		frecuencies[ dice1+dice2 ]++;  // increase the frecuency
	}

	// Show the results

	cout << setw(8) << "Suma" << setw(8) << "| Frecuencia" << endl;
	for(int i=2; i<arraysize; i++)
		cout << setw(8) << i << "|" << setw(8) << frecuencies[ i ] << endl;

	t1 = clock();  // end time
	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	cout << "Tiempo de ejecucion con array: " << setprecision(8) << time << " seconds" << endl; 
}

void UseVector(int ThrowsNumber){

	cout << "\n\nEsta funcion usa vectores" << endl;

	unsigned t0, t1;  // clock variables
	t0 = clock();  // initial time

	int dice1, dice2;
	vector< int > frecuencies(13, 0);  // vector with size 13 initialized to 0

	// Throw the dice and save the sum
	for(int i=0; i<3600; i++){

		dice1 = 1 + rand()%6;  // random number between 1 and 6
		dice2 = 1 + rand()%6;

		frecuencies[ dice1+dice2 ]++;  // increase the frecuency
	}

	// Show the results
	cout << setw(8) << "Suma" << setw(8) << "| Frecuencia" << endl;
	for(int i=2; i<frecuencies.size(); i++)
		cout << setw(8) << i << "|" << setw(8) << frecuencies[ i ] << endl;

	t1 = clock();  // end time
	double time = (double(t1-t0)/CLOCKS_PER_SEC);
	cout << "Tiempo de ejecucion con vectores: " << setprecision(8) << time << " seconds" << endl; 

}