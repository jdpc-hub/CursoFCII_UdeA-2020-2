#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

  const int tamanioArreglo = 13; // ignora el elemento cero y 1
  int frecuencia[ tamanioArreglo ] = {};
  
  srand( time( NULL ) );
  
  for ( int tiro = 1; tiro <= 36000; tiro++ ){
    int dado1 = 1 + rand() % 6;
    int dado2 = 1 + rand() % 6;
    frecuencia[ dado1 + dado2 ]++; 
  }
  
  cout << "Cara" << setw( 13 ) << "Frecuencia" << setw( 22 ) << "Frecuencia Relativa" <<endl;
  
  for ( int cara = 2; cara < tamanioArreglo; cara++ ){
    cout << setw( 4 ) << cara << setw( 13 ) << frecuencia[ cara ]<< setw( 13 ) << frecuencia[ cara ]/36000.0 << endl;
  }
  
return 0; 
}
