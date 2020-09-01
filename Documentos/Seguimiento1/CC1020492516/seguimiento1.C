/*Seguimiento 1. Problema 6 del libro 3.6
Parte a y b:
*/

#include <iostream>
#include <cmath>
#include <iomanip>

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

const float pi  = 3.1416;
const float e  = 2.71828;

class Funciones{
	public: 
	float gaussiana(float sigma,float mu,float x)
		{
		float expo = -0.5*pow((x-mu)/sigma, 2);
		float y = ( 1/( sigma*sqrt(2*pi) ) )*pow(e,expo);
		return y;
			}
		};

int main(){
  float sigma,mu,x,result;
  sigma = 4;
  mu = 90;
  x = 80;

  Funciones result1;
  result = result1.gaussiana(sigma,mu,x);

  cout<<"a) El resultado predeterminado es "<< result <<endl;
    cout<<"b) para un resultado deseado ingrese el valor de sigma: " <<endl;
	cin>>sigma;
    cout<<"Ahora ingrese mu: " <<endl;
	cin>>mu;
    cout<<"Ingrese el punto x donde desea el resultado: " <<endl;
	cin>>x;
	result = result1.gaussiana(sigma,mu,x);

	 cout<<"El resultado deseado es: "<< result <<endl;


cout<<"Ahora graficaremos de mu -10 a mu + 10" <<endl;

int gdriver = DETECT, gmode, errorcode;
   initgraph(&gdriver, &gmode, "");
   errorcode = graphresult();
  
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
   line(0, 0, 50,50 );
   getch();
   closegraph();

  //return 0; 
}
