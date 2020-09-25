#include "exponential.h"
#include <iostream>

using namespace std;

Exponential::Exponential( double xvalue , int nvalue )
{/*Constructor:
   xvalue: is the exponent which e will be elevated.
   nvalue: is the amount of terms in the power series.*/
  setx( xvalue );
  setn( nvalue );
}

void Exponential::setx( double value )
{//Set the exponent
  x = value;
}

void Exponential::setn( int value )
{//Set the terms on the power series
  n = value;
}

void Exponential::printExp(  )
{
  cout << getExp(  ) << endl;
}

double Exponential::power( double base , int exponent )
{
  double result = 1;
  for ( int i = 1 ; i <= exponent ; i++ )
    {
      result *= base;
    }
  return result;
}

double Exponential::factorial( int value )
{
  double result = 1;
  for ( int i = value ; i >= 1 ; i-- )
    {
      result *= i;
    }
  return result;
}

double Exponential::getExp(  )
{
  double sum = 0;
  for ( int i = 0 ; i <= n ; i++ )
    {
      sum += power( x , i )/factorial( i );
    }
  return sum; 
}
