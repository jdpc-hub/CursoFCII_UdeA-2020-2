/**
 * Programa muestra la frecuencia de la suma al tirar
 * dos dados 36000 veces. Se hace usando arreglos y 
 * vectores.
 * @author Valentina Roquemen
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main()
{

  const int tamanioArreglo = 13; // ignora el elemento cero y uno

  int dado1,dado2;
  int n_trials = 36000;
  srand( time( NULL ) );

  /*******************************************
  ************ Metodo:arreglos ***************
  *******************************************/  
  int frecuencia[ tamanioArreglo ] = {};

  //Se tiran los dados 36000 veces
  for ( int tiro = 1; tiro <= n_trials; tiro++ )
  {
  	dado1 = 1 + rand() % 6;
  	dado2 = 1 + rand() % 6;

    frecuencia[ dado1+dado2 ]++;
  }

  // Se imprime la tabla de frecuencias
  cout<< "Metodo: arreglos\n" << endl;

  cout<< "--------------------" << endl;
  cout <<"|" << "Suma" <<"|" << setw( 13 ) << "Frecuencia" <<"|" << endl;
  cout<< "--------------------" << endl;

 
  for ( int cara = 2; cara < tamanioArreglo; cara++ )
  {
  	cout <<"|" <<setw( 4 ) << cara  <<"|"<< setw( 13 ) << frecuencia[ cara ] <<"|"<< endl;
	  cout<< "--------------------" << endl;

  }

  if (frecuencia[7]-200<n_trials/6. and n_trials/6.<frecuencia[7]+200 )
		cout<< "Aproximadamente 1/6 parte de los tiros corresponden a 7" << endl;
  
  /*******************************************
  ************ Metodo:vectores ***************
  *******************************************/  
  vector<int> frecuencia_vector(tamanioArreglo);

  //Se tiran los dados 36000 veces
  for ( int tiro = 1; tiro <= n_trials; tiro++ )
  {
  	dado1 = 1 + rand() % 6;
  	dado2 = 1 + rand() % 6;

    frecuencia_vector[ dado1+dado2 ]++;
  }

  // Se imprime la tabla de frecuencia_vectors
  cout<< "\nMetodo: vectores\n" << endl;

  cout<< "--------------------" << endl;
  cout <<"|" << "Suma" <<"|" << setw( 13 ) << "Frecuencia" <<"|" << endl;
  cout<< "--------------------" << endl;

 
  for ( int cara = 2; cara < tamanioArreglo; cara++ )
  {
  	cout <<"|" <<setw( 4 ) << cara  <<"|"<< setw( 13 ) << frecuencia_vector[ cara ] <<"|"<< endl;
	  cout<< "--------------------" << endl;

  }

  if (frecuencia_vector[7]-200<n_trials/6. and n_trials/6.<frecuencia_vector[7]+200 )
		cout<< "Aproximadamente 1/6 parte de los tiros corresponden a 7" << endl;
  
	return 0; 
}