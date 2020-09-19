#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main()
{
  vector <int> frecuencia(11, 0); //Son 11 las posibles sumas de 2 dados
  
  srand(time(NULL));
  
  for (int lanz = 1; lanz <= 36000; lanz++)
  {
    int dado1 = 1 + rand()%6;
    int dado2 = 1 + rand()%6;
    int sumadados = dado1 + dado2;
    
    frecuencia[sumadados - 2]++; //Se registra el resultado. Se resta un 2 a la
                                 //suma porque el rango de esta es 2-12,
                                 //pero el de los indices del arreglo es 0-10
  }
  cout << "RESULTADOS SIMULADOS:" << endl;
  cout << "Suma" << setw(13) << "Frecuencia" << endl;

  for (int suma = 2; suma <= 12; suma++)
  {
    //Se imprimen en pantalla las frecuencias totales
    cout << setw(4) << suma << setw(13) << frecuencia[suma - 2]<< endl;
  }

  cout << "\nLas probabilidades de cada posible suma de 2 dados, cuando el numero de lanzamientos tiende a infinito, son: 1/36 para obtener un 2 o un 12, 1/18 para un 3 o un 11, 1/12 para un 4 o un 10, 1/9 para el 5 o el 9, 5/36 para el 6 o el 8 y 1/6 para sacar un 7" << endl;

  float prob[11] = {1/36., 1/18., 1/12., 1/9., 5/36., 1/6., 5/36., 1/9.,
		    1/12., 1/18., 1/36.};
  
  cout << "\nSuponiendo estas probabilidades para el mismo caso de 36000 lanzamientos, los resultados esperados son:\n" << endl;

  cout << "Suma" << setw(13) << "Frecuencia" << endl;

  for (int j = 0; j <= 10; j++)
    {
      cout << setw(4) << j + 2 << setw(13) << (36000*prob[j]) << endl;
    }

  cout << "\nComparando esto con la primera tabla vemos que las frecuencias de la simulacion son razonables" << endl;
  
return 0; 
}
