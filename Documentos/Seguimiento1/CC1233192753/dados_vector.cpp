#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main(){

    int x;
    int y;
    const int tamanioFrecuencia =13;
    srand( time( NULL ) );

    vector< int > frecuencia(tamanioFrecuencia);

    for (int tiro=1;tiro < 36000;tiro++)
    {
      int s=0;
      x = 1 + rand() % 6;
      y = 1 + rand() % 6;
      s = x + y;

      frecuencia[s]++;
    }

    cout << "Suma" << setw( 13 ) << "Frecuencia" << endl;
  // imprime el valor de cada elemento del arreglo
  for ( int suma = 2; suma < tamanioFrecuencia; suma++ ){
    cout << setw( 4 ) << suma << setw( 13 ) << frecuencia[ suma ]<< endl;
  }


}
