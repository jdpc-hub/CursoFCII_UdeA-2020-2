#include<iostream>
#include <fstream>
using namespace std;


int main()
{
  cout << "Escriba dos numeros enteros n1 y n2 tal que n1<n2 para calcular la suma desde n1 hasta n2 \n";
  
  int n1, n2;
  cout << "Escriba el primer número (n1): ";
  cin >> n1;
  cout << "Escriba el segundo número (n2): ";
  cin >> n2;

  if(n1>n2)
  {
    cout << "Escriba los numeros nuevamente\n";
    cout << "Escriba el primer número (n1): ";
    cin >> n1;
    cout << "Escriba el segundo número (n2): ";
    cin >> n2;  
  }

  int sum = 0;
  for(int i=n1; i<=n2; i+=1){
    sum = sum+i;
  }
  
  int d;
  cout << "Si desea imprimir en pantalla escriba 1, si desea escribir un archivo escriba 0: ";
  cin >> d;

  if(d==1)
    {
  cout << "La suma de los numeros " << n1 << " hasta " << n2 << " es: \n";
  cout << sum << "\n";
  }else
    {
    ofstream fs("Resultado.txt"); 
    fs << "La suma de los numeros " << n1 << " hasta " << n2 << " es: \n";
    fs << sum << "\n";
    fs.close();
  }
}
