#include "iostream"
using namespace std;

int main()
{
   cout << "Ingrese el numero n1 ";
   int n1;//En esta variable estará almacenado el nombre ingresado
   cin >> n1;
   cout << "Ingrese el numero n2 (n1 < n2) ";
   int n2;
   cin >> n2;
   if(n2>n1){   
	   int suma = 0;
	   for (int i = n1; i < n2 + 1; i++) {
		  suma +=i;
	   }
	   //No encontré cómo guardar en archivos de manera simple, entonces solo lo imprimire en pantalla.
	   cout << "La suma es " << suma << "\n";
   }
   else{
   	cout << "n2 debe ser mayor que n1";
   }
   return 0;
}
