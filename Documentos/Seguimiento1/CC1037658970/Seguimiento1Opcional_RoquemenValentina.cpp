/*
! ===========================================================================
! Seguimiento1Opcional_RoquemenValentina.cpp
! ===========================================================================
! Este programa grafica la ecuacion de la curva normal para un valor medio de 
! 80 y desviacion estandar de 4, en un intervalo de 0 a 150 con 300 puntos. 
!
!     Valentina Roquemen Echeverry, valentina.roquemen@udea.edu.co

! Up to date: 31 agosto 2020      
*/

//Librerias
#include<iostream>
#include<cmath>
#include "matplotlib-cpp/matplotlibcpp.h"
#include <vector>

using namespace std;
namespace plt = matplotlibcpp;

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

	double mu, sigma;

	mu = 80;
	sigma = 4; 

  int n = 300; // Numero de puntos
  vector<double> x(n), y(n);
  for (int i = 0; i < n; ++i) {
    x.at(i) = i*0.5;
    y.at(i) = gaussiana(x.at(i),sigma,mu);
  }
   plt::plot(x, y,"g--",{{"label","Ecuacion de la curva normal"}});
   plt::title("Valor medio=80\t Desviacion estandar=4 ");
   plt::legend();
   plt::grid();
   plt::show();

	return 0;
}

