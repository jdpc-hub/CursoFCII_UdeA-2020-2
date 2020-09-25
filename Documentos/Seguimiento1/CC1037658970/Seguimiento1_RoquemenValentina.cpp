/*
! ===========================================================================
! Seguimiento1_RoquemenValentina.cpp
! ===========================================================================
! Este programa resuelve el ejercicio 6 del capitulo 3 del libro C++ para
! ingenieria y ciencias, segunda edicion. 
!
!     Valentina Roquemen Echeverry, valentina.roquemen@udea.edu.co

! Up to date: 31 agosto 2020      
*/

//Librerias
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

/* Ecuacion de la curva normal
Input:
	x: Punto a evaluar
	sigma: Desviacion estandar
	mu: Valor medio

Return:
	y: Resultado de evaluar el punto x
*/
double gaussiana(double x, double sigma,double mu){
	double y = (1./(sigma*sqrt(2*M_PI)))*exp(-0.5*pow((x-mu)/sigma,2));
	return y;
}

int main(){

	double x, mu, sigma;

	/*Numeral a*/
	x = 80;
	mu = 90;
	sigma = 4; 

	cout.precision(2);
	cout. setf(ios::scientific);
	
	cout<<"------------------------------------------------------\n";
	cout<<"| Valor medio | Desviacion estandar |   x    |   y    |\n";
	cout<<"------------------------------------------------------\n";
	cout<<"|"<<setw(13)<<mu<<"|";
	cout<<setw(21)<<sigma<<"|";
	cout<<setw(3)<<x<<"|";
	cout<<gaussiana(x,sigma,mu)<<"|\n";
	cout<<"------------------------------------------------------\n\n\n";
	

	/*Numeral b*/
    cout<<"Introduce el punto para el que quiere conocer la ecuacion de la curva normal: "; 
    cin >> x;

    cout<<"Introduce el valor medio: "; 
    cin >> mu;
    
    cout<<"Introduce la desviacion estandar: "; 
    cin >> sigma;

	cout<<"------------------------------------------------------\n";
	cout<<"| Valor medio | Desviacion estandar |   x    |   y    |\n";
	cout<<"------------------------------------------------------\n";
	cout<<"|"<<setw(13)<<mu<<"|";
	cout<<setw(21)<<sigma<<"|";
	cout<<setw(3)<<x<<"|";
	cout<<gaussiana(x,sigma,mu)<<"|\n";
	cout<<"------------------------------------------------------\n";
	

	return 0;
}

