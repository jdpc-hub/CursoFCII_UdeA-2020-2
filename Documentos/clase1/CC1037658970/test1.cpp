/*
! ===========================================================================
! test1.cpp
! ===========================================================================
! Este programa suma los numeros enteros que hay entre dos que han sido 
! ingresados porel usuario y devuelve el resultado en pantalla o en un archivo
! según la eleccion del mismo.
!     Valentina Roquemen Echeverry, valentina.roquemen@udea.edu.co

! Up to date: 20 agosto 2020      
*/

#include <iostream>
#include <fstream>
using namespace std;

int sum(int, int);  // Declaracion de la funcion que realiza la suma

int main()
{
  int num1,num2,resultado,choose; // Declaracion de variables

  //Entradas
  cout<<"Introduce el primer numero entero: "; 
  cin >> num1;

  cout<<"Introduce el segundo numero entero (debe de ser mayor a "<<num1<<"): "; 
  cin >> num2;
  
  //Calculo
  resultado = sum(num1,num2);  //Llamada a la función

  //Resultados
  cout<<"Escriba 1 si desea ver el resultado en pantalla o escriba 2 si desea verlo en un archivo de texo: "; 
  cin >> choose;

  if(choose == 1)
  {
    cout << "El resultado de sumar los numeros enteros de "<<num1<<" a "<< num2 <<" es: "<<resultado << endl;
  }

  else if(choose == 2)
  {

    ofstream file;
    file.open ("resultado.txt");
    file << "El resultado de sumar los numeros enteros de "<<num1<<" a "<< num2 <<" es: "<<resultado;
    file.close();
  
  }
}


int sum(int num1, int num2)
{
  int resultado=0;

  for(int i = num1; i<=num2; i+=1 )
  {
    resultado += i;
  }
  return resultado;
}