#include <iostream>
#include <iomanip>
#include <cstdlib> 
#include <ctime>  
#include <vector>

using namespace std;

int main()
{
  int frecuencias[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; //para contar las veces que sale cada valor de la suma

  srand(time(NULL)); 

  int suma, dado1, dado2; 
  for ( int tiro = 1; tiro <= 36000; tiro++ ) //para tirar 36,000 veces los dados
{
  dado1 = 1 + rand() % 6; //número aleatorio del 1 al 6
  dado2 = 1 + rand() % 6;
  suma = dado1 + dado2;
  switch ( suma )
    {
    case 2:
      ++frecuencias[0]; //incrementa el contador de 2s, se repite para todos los posibles valores de la suma
      break;
    case 3:
      ++frecuencias[1]; 
      break;
    case 4:
      ++frecuencias[2]; 
      break;
    case 5:
      ++frecuencias[3]; 
      break;
    case 6:
      ++frecuencias[4]; 
      break;
    case 7:
      ++frecuencias[5]; 
      break;
    case 8:
      ++frecuencias[6]; 
      break;
    case 9:
      ++frecuencias[7]; 
      break;
    case 10:
      ++frecuencias[8]; 
      break;
    case 11:
      ++frecuencias[9]; 
      break;
    case 12:
      ++frecuencias[10]; 
      break;
    } 
 } 

  cout << "suma" << setw(13) << "  Frecuencia" << endl;
  cout << "2" << setw(13) << frecuencias[0]
    << "\n3" << setw(13) << frecuencias[1]
    << "\n4" << setw(13) << frecuencias[2]
    << "\n5" << setw(13) << frecuencias[3]
    << "\n6" << setw(13) << frecuencias[4]
    << "\n7" << setw(13) << frecuencias[5]
    << "\n8" << setw(13) << frecuencias[6]
    << "\n9" << setw(13) << frecuencias[7]
    << "\n10" << setw(12) << frecuencias[8]
    << "\n11" << setw(12) << frecuencias[9]
    << "\n12" << setw(12) << frecuencias[10]<< endl;

vector<int> frec(frecuencias, frecuencias + sizeof(frecuencias) / sizeof(int)); //para crear un vector a partir del arreglo unidimencional

cout << "Estos son los datos en forma de vector:";
for (int i=0; i < frec.size(); i++)
cout << frec[i] << " ";

return 0; 
}
  
