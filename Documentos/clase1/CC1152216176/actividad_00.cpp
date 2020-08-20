#include <iostream>
#include <fstream>
using namespace std;

int main()
{
int a,b,s,i,t;
s=0;
cout << "Introduzca dos numeros a y b tales que a < b\n";
cout << "a: ";
cin >> a;
cout << "b: ";
cin >> b;
for(i=a; i<=b; i++)
{
s += i;
};
cout << "Para mostrar el resultado en la terminal presione 1, para guardar el resultado en un archivo de texto presione 0\n";
cin >> t;
if(t==1)
{
cout << "El resultado de la suma de todos los numeros enteros entre " << a << " y " << b << " es " << s <<"\n";
};
if(t==0)
{
ofstream file;
file.open("resultado.txt");
file << s;
file.close();
};
return 0;
}
