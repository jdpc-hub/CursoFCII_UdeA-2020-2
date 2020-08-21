/*
Programa que suma los enteros desde n1 hasta n2 
*/

#include <iostream>
using namespace std; 

//---- main ---- 

int Suman(int a, int b)
{
	for (int i=a+1; i<b+1; i+1)
	{
		int c=a+i; a=c;
	}
	return c;

}


int main()
{
	int n1,n2;
	cout << "ingrese los enteros n1 y n2 tal que n1 menor que n2" << endl;

	cin << n1;
	cin << n2;

	int l = Suman(n1, n2);

	cout << "La suma es: " << l << endl;

	return 0;
}