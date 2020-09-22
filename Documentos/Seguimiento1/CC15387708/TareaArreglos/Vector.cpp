// Simulador lanzamiento de dos dados
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

/*
La cantidad de combinaciones que da una suma de (2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12); es
respectivamente (1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1). El total son 36 y la probabilidad de
obtener cada resultado es (1/36, 2/36, 3/36, 4/36, 5/36, 6/36, 5/36, 4/36, 3/36, 2/36, 1/36)
= (2.78, 5.56, 8.33, 11.11, 13.89, 16.67, 13.89, 11.11, 8.33, 5.56, 2.78) % .
 */

int main()
{

  int n = 13;
  
  vector <int> teorico = {0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1}; // Vector combinaciones
  vector <int> simulado(n, 0); // Vector lanzamiento aleatorio

  srand(time(NULL));

  cout << "\nSimulando dos dados que se lanzan 36000 veces y sumando los dos valores," << endl;
  cout << "la frecuencia y la probabilidad de obtener cada resultado es:" << endl;

  int i, j, k = 36000, l = 36; // k cantidad de lanzamientos y l número de combinaciones

  for ( i = 1; i <= k; i++ ) // Tiro de cada dado
    {
      simulado[( 1 + rand() % 6) + (1 + rand() % 6)]++;
    }

  cout << setw( 9 ) << "\nResultado " << setw( 13 ) << "Frecuencia " << setw( 14 )
       << "% Simulado" << setw( 15 ) << "% Teórico " << endl;
  
  for ( j = 2; j <= n-1; j++ ) // La suma de los dos valores está entre 2 y 12
    {
      cout << setw( 9 ) << j << setw( 13 ) << simulado[j] << setw( 14 )
	   << simulado[j]*100.0/k <<  setw( 14 ) << teorico[j]*100.0/l << endl;
    }

  cout << "\nEl total simulado es razonable, comparado con el cálculo teórico.\n" << endl;

  return 0;

}
