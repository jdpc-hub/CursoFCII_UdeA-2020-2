#include <iostream>
using namespace std;

int main()
{
  int n1, n2, s;
  s = 0;
  cout << "Introduzca dos números enteros n1 y n2 tal que n1 < n2. Este código retornará la suma de todos los enteros entre n1 y n2" ;
  cin >> n1 >> n2;
  for (int n=n1; n<=n2; n++) s += n;
  cout << "Para mostrar el resultado en la terminal entre el numero 1 \nPara guardar el resultado en un archivo de texto presione 0\n";
  cin >> x;
  if(x==1) cout << "El resultado de la suma es " << s << "\n";
  if(t==0){
    ofstream file;
    file.open("out.txt");
    file << s;
    file.close();
  };
}
