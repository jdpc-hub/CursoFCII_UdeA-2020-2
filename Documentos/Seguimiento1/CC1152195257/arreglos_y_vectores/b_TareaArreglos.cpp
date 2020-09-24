#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

int tirarDado( void );

int main()
{
  srand(time(NULL));
  
  int dado1, dado2, suma;
  vector<int> frec(11,0); //Se inicializa un vector con 11 ints iguales a 0
  
  for (int i = 1; i <= 36000; i++)
    {
      dado1 = tirarDado();
      dado2 = tirarDado();
      suma = dado1 + dado2;
      switch (suma)
	{
	case 2:
	  frec[0]++;
	  break;
	case 3:
	  frec[1]++;
	  break;
	case 4:
	  frec[2]++;
	  break;
	case 5:
	  frec[3]++;
	  break;
	case 6:
	  frec[4]++;
	  break;
	case 7:
	  frec[5]++;
	  break;
	case 8:
	  frec[6]++;
	  break;
	case 9:
	  frec[7]++;
	  break;
	case 10:
	  frec[8]++;
	  break;
	case 11:
	  frec[9]++;
	  break;
	case 12:
	  frec[10]++;
	  break;
	default:
	  cout << "¡Hubo un resultado raro!" << endl;
	  break;
	}
    }

  cout << "b) Resuelto con vectores.\n" << endl;
  cout << "----------------------" << endl;
  cout << "|  Suma | Frecuencia |" << endl;
  cout << "----------------------" << endl;
  
  for (int i = 2; i <= 12; i++)
    {
      cout << "| " << setw(5) << i << " | "
	   << setw(10) << frec[i - 2] << " | " << endl;
    }
  
  int total = 0;
  for (int i = 2; i <= 12; i++)
    {
      total += frec[i - 2];
    }
  cout << "----------------------" << endl;
  cout << "| Total | " << setw(10) << total << " |" << endl;
  cout << "----------------------" << endl;
  return 0;
}

//Implementación de funciones

int tirarDado( void )
{
  return 1 + rand()%6;
}
