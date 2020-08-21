/**
 Repasando C++
Suma de n numeros enteros elegidos por el usuario y salida en pantalla o guardando un archivo.
Brayan Alexander Muñoz Barrera.
 */

#include<iostream>
#include <fstream>

using namespace std;

int main(){

	std::cout << "Primero que todo buenos días."<<'\n'<<"Si desea que el resultado se muestre en pantalla ingrese 1. Si desea un archivo con el resultado entonces ingrese 2:"<<'\n';
	int op;
	cin >> op;
	std::cout << "Ahora ingrese hasta el entero n que quiere sumar:"<<'\n';
	int n,suma,i;
	suma = 0;
	cin >> n;

	for (i=0; i<(n+1); i++){
  	     	suma = suma + i;}

	if (op == 1){
	std::cout << "Listo papi, muchas gracias. Tu resultado es:"<< suma <<'\n'; }

	else if (op == 2){
	ofstream fs("resultado.txt"); 
	fs << "Listo papi, muchas gracias. Tu resultado es:"<< suma <<'\n'<< endl;
	fs.close();}

	else{
	std::cout << "Meté algo valido pues y dejá de desatinar" <<'\n'<< endl; }
	return 0;                     
}

