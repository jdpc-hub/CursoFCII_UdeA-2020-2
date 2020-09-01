#include <iostream>
#include <fstream>

using namespace std;

int main() {

  int n1,n2,nf,x;
  nf = 0;
  
  cout << "Ingrese el numero inicial (n1): ";
  cin >> n1;
  
  cout << "Ingrese el numero final (n2): ";
  cin >> n2;

  if (n1<n2)
    {
      for (int j=n1; j<=n2; j++)
	{
	  nf += j;
	}
      cout << "Desea la respuesta en pantalla o en un archivo? (Pantalla=1, Archivo=2): ";
      cin >> x;

      if (x == 1)
	{
	  cout << "La suma es " << nf << endl;
	}

      if (x == 2)
	{
	  ofstream suma;
	  suma.open("suma.txt");
	  suma << "La suma es " << nf;
	  suma.close();
	  cout << "Buscar el archivo suma.txt" << endl;
	}
    }

  else
    {
      cout << "n1 debe ser menor que n2" << endl;
    }
  
}
