#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <unistd.h> // Importar <windows.h> en Windows

using namespace std;

int tiro();

int main()
{
  int juego = 1;
  srand(time(NULL));
  
  cout << "\nEsto es CRAPS! Quiere jugar? (si = 1, no = 0): ";
  cin >> juego;
  cin.ignore();

  while (juego == 1)
    {
      cout << "------------------------------------------------------" << endl;
      cout << "\nTire los dados pulsando ENTER" << endl;
      cin.ignore();
      
      srand(time(NULL));
  
      int sumadados = tiro();

      cout << "Ha obtenido: " << endl;
      usleep(1000000);
      
      if (sumadados == 7 or sumadados == 11)
	{
	  cout << sumadados << endl;
	  usleep(500000);
	  cout << "\nQue suerte, HA GANADO DE UN TIRO!" << endl;
	  cout << "\nQuiere jugar de nuevo? (si = 1, no = 0): ";
	  cin >> juego;
	  cin.ignore();
	  cout << "\n";
	}

      else if (sumadados == 2 or sumadados == 12)
	{
	  cout << sumadados << endl;
	  usleep(500000);
	  cout << "\nCRAPS! Perdio de primerazo, pero no volvera a ocurrir" << endl;
	  cout << "\nQuiere jugar de nuevo? (si = 1, no = 0): ";
	  cin >> juego;
	  cin.ignore();
	  cout << "\n";
	}

      else if (4 <= sumadados <= 6 or 8 <= sumadados <= 10)
	{
	  cout << sumadados << endl;
	  usleep(500000);
	  
	  int punto = sumadados;
	  cout << "\nSu Punto es " << punto << endl;
	  cout << "Gana cuando saque de nuevo " << punto << endl;
	  cout << "Pierde si saca 7" << endl;
	  cout << "Vuelva a tirar con ENTER";
	  cin.ignore();

	  sumadados = tiro();

	  cout << "\nHa sacado: " << endl;
	  usleep(1000000);
	  cout << sumadados << endl;

	  while (sumadados != 7 and sumadados != punto)
	    {
	      usleep(500000);
	      cout << "\nEse no es su Punto, vuelva a lanzar con ENTER";
	      cin.ignore();

	      sumadados = tiro();

	      cout << "\nHa tirado: " << endl;
	      usleep(1000000);
	      cout << sumadados << endl;
	    }

	  if (sumadados == 7)
	    {
	      usleep(500000);
	      cout << "\nPerdio, LA CASA SIEMPRE GANA!" << endl;
	      cout << "\nPero no importa, Quiere volver a jugar? (si = 1, no = 0): ";
	      cin >> juego;
	      cin.ignore();
	    }

	  else if (sumadados == punto)
	    {
	      usleep(500000);
	      cout << "\nHA GANADO!" << endl;
	      cout << "\nAproveche esa suerte! Quiere jugar otra vez? (si = 1, no = 0): ";
	      cin >> juego;
	      cin.ignore();
	    }
	}
    }

  if (juego != 1)
    {
      cout << "\nComo quiera!" << endl;
    }

  return 0;
}

int tiro() // Funcion que lanza 2 dados y devuelve la suma
{
  int dado1 = 1 + rand()%6;
  int dado2 = 1 + rand()%6;
  int dados = dado1 + dado2;
  return dados;
}
