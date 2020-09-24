/*
Programa que suma los enteros desde n1 hasta n2 
*/

#include <fstream>
#include <string>
#include <iostream>
using namespace std; 

//---- main ---- 

int Suman(int a, int b)
{
	int sum = 0;
	for (int i=a; i<=b; ++i)
	{
		sum += i;
	}
	return sum;

}


int main()
{
	int n1,n2, ss;
	cout << "ingrese los enteros n1 y n2 tal que n1 menor que n2" << endl;

	cin >> n1;
	cin >> n2;

	int l = Suman(n1, n2);

	cout << "ingrese 1 para imprimir en pantalla o 0 para enviar resulado a archivo" << endl;

	cin >> ss;

	if (ss == 1)
	{
		cout << "La suma es: " << l << endl;
	}

	else if (ss == 0)
	{
		string ress=to_string(l);
		ofstream out("resultado.txt");
		out << ress;
		out.close();
	}
	

	return 0;
}