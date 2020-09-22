#include <iostream>
#include <cmath>


using namespace std;
#include "exponencial.h"

D_Cal_exp :: D_Cal_exp(int N,float X)
{
  Set_Values(N,X);
  fac_n = 1;
  exp = 0;
}
void D_Cal_exp :: Set_Values(int N, float X)
{
  x = X;
  n = N;
     }
void D_Cal_exp :: factorial(int n1)
{
  if (n1 == 0)
    {
      fac_n = 1;
	}
  else {
        
  for (int i = n1;i>1;i--)
    
    {
      fac_n = fac_n*i;

    }
  }
}
void D_Cal_exp :: expon()
{

  for (int i = 0;i<n; i++)
    {

      fac_n = 1;
      factorial(i);
      
      exp += pow(x,i)/(fac_n);
    }
}
  void D_Cal_exp :: report_exp()
  {
    cout<< exp << endl;
  }
