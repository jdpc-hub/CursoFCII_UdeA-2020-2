#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int n1, n2, suma;
  cout << "Ingrese dos numeros enteros (el segundo mayor que el primero): " << endl;
  cin >> n1;
  cin >> n2;
  suma = 0;
  for (int i=n1; i<=n2; i++)
    {
      suma += i;
    }
  cout << "Como quiere ver el resultado?" << endl;
  cout << "En consola ingrese 0" << endl;
  cout << "En un archivo de texto ingrese 1" << endl;
  bool flag;
  cin >> flag;
  if (not flag)
    {
      cout << "La suma es: " << suma << endl;
    }
  else
    {
      ofstream archivo;
      archivo.open("suma.txt",ios::out);
      archivo << "La suma es: " << suma << endl;
      archivo.close();
      cout << "El resultado se almaceno en el archivo suma.txt" << endl;
    }
  return 0;
}
