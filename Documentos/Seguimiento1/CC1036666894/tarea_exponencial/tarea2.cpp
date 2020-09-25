#include <iostream>
#include <cmath>
#include "exponencial.h"

using namespace std;

Exponencial::Exponencial(float x, int N)
{  
  prv_x = x;
  
  if (N<=10){
  prv_N = N;
  }
  
  else {
    cout << "El numero N es muy grande, se limitara a 10." << endl;
    prv_N=10;
  } 
}


int Exponencial::factorial(int n)
{
  int fact = 1;
  if (n>0){
    for (int i=1;i<=n;i++){
      fact=i*fact;
    }
    return fact;
  }

  else if (n==0){
    fact=1;
    return fact;
      }
}


float Exponencial::valorExponencial(float,int){
  float valExp = 1;
  for (int j=1; j<prv_N;j++){
    valExp = valExp + (pow(prv_x,j))/factorial(j);
  }
  return valExp;
}

void Exponencial::mostrarValor(){
  
  cout << "El valor de la exponencial para x = "<< prv_x <<" y N = "<<prv_N<<" es:  "<< valorExponencial(prv_x,prv_N)<<endl;
}
