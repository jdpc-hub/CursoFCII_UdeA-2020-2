#include <iostream>
#include <fstream>

using namespace std;

int sum( int n1, int n2, int opc);

int main(int argc, char const *argv[])
{
	int n1, n2;
	int opc;

	cout << "Este codigo suma los numeros de n1 hasta n2, donde n1<n2 y n1 y n2 son enteros \n" << endl;
	
	cout << "Ingrese los numeros: n1 n2\n" << endl;
	cin >> n1 >> n2;
	
	cout << "desea: \n 1. imprimir el resultado en pantalla\n 2. imprimir el resultado en un archivo\n" ;
	cin >> opc;

	sum(n1, n2, opc);

	return 0;
}

int sum( int n1, int n2, int opc){
	int sum = 0;

	sum = n2 * ( n2 + 1 )/2 - (n1 - 1) * n1 / 2 ;

	if (opc == 1)
		cout << "el resultado de la suma es: " << sum << endl;	
	
	else if (opc == 2){
		ofstream File("suma.txt");

		File << "el resultado de la suma es: " << sum << "\n" ;
		File.close();
	}
	else
		return 0;
}