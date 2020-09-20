/*a) Escriba un programa para simular el tiro de dos dados. El programa debe utilizar rand para tirar el primer dado, y de
nuevo para tirar el segundo dado. Después debe calcularse la suma de los dos valores. [Nota: cada dado puede mostrar un valor
entero del 1 al 6, por lo que la suma de los valores variará del 2 al 12, siendo 7 la suma más frecuente, mientras que 2 y 12 serán
las sumas menos frecuentes]. existen 36 posibles combinaciones de los dos dados. Su programa debe
tirar los dados 36,000 veces. Utilice un arreglo unidimensional para registrar el número de veces que aparezca cada una de las
posibles sumas. Imprima los resultados en formato tabular. Determine además si los totales son razonables (es decir, hay seis
formas de tirar un 7, por lo que aproximadamente una sexta parte de los tiros deben ser 7).

b) Modifique el programa, de manera que utilice un vector para almacenar
el número de veces que aparece cada posible suma de los dos lados.
*/

#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void frecuenciasArreglo(int [], int );
void frecuenciasVector(vector< int > &, int );
void imprimirFqArreglo(const int [], int, int );
void imprimirFqVector(const vector< int > &, int, int);

int main()
{
    const int n_tiros = 36000;
    //numero de sumas posibles
    const int n_sumas = 11;

    srand( time( NULL ) );
    int arreglo[n_sumas] = {};

    cout << "Este es el resultado usando arreglos:" << endl;
    frecuenciasArreglo(arreglo, n_tiros);
    imprimirFqArreglo(arreglo, n_sumas, n_tiros);

    vector< int > arreglo_v( n_sumas );

    cout << "\nEste es el resultado usando vectores:" << endl;
    frecuenciasVector(arreglo_v, n_tiros);
    imprimirFqVector(arreglo_v, n_sumas, n_tiros);

    return 0;

}

void frecuenciasArreglo(int arreglo[], int n_tiros)
{
  for(int i=0; i<n_tiros; i++) {
      int n1 = 1 + rand() % 6;
      int n2 = 1 + rand() % 6;
      int suma = n1 + n2;
      //Las sumas van entre 2 y 12, mientras que los indices del arreglo de 0 a 10, por tanto suma = indice - 2.
      arreglo[suma-2]++;
  }
}

void imprimirFqArreglo(const int arreglo[], int n_sumas, int n_tiros)
{
  cout << "Suma" << setw( 13 ) << "Frecuencia" << endl;

  // imprime el valor de cada elemento del arreglo
  for ( int suma = 2; suma < n_sumas + 2; suma++ ) {
      cout << setw( 4 ) << suma << setw( 13 ) << arreglo[ suma - 2 ] << endl;
  }
  cout << "El 7 aparece " << arreglo[5] << " veces, debe salir aproximadamente " << n_tiros/6. << " veces." << endl ;
}

void frecuenciasVector(vector< int > &arreglo, int n_tiros)
{
  for(int i=0; i<n_tiros; i++) {
      int n1 = 1 + rand() % 6;
      int n2 = 1 + rand() % 6;
      int suma = n1 + n2;
      //Las sumas van entre 2 y 12, mientras que los indices del arreglo de 0 a 10, por tanto suma = indice - 2.
      arreglo[suma-2]++;
  }
}

void imprimirFqVector(const vector< int> &arreglo, int n_sumas, int n_tiros)
{
  cout << "Suma" << setw( 13 ) << "Frecuencia" << endl;

  // imprime el valor de cada elemento del vector
  for ( int suma = 2; suma < n_sumas + 2; suma++ ) {
      cout << setw( 4 ) << suma << setw( 13 ) << arreglo[ suma - 2 ] << endl;
  }

  cout << "El 7 aparece " << arreglo[5] << " veces, debe salir aproximadamente " << n_tiros/6. << " veces." << endl ;
}

