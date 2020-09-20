#include<iostream>
#include <stdlib.h>
#include<time.h>
#include <vector> 

using namespace std;

int tirar_dados()
{
  return 1 + rand() % 6;
}

void arreglos(int n)
{
  int C[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int d1 = 0, d2 = 0, dplus = 0;
  
  for(int i=0; i<n; i++)
    {
      d1 = tirar_dados();
      d2 = tirar_dados();
      dplus = d1 + d2;

      for(int j=2; j<=12; j=j+1)
	{
	  if(dplus==j)
	    {
	      C[j-2] = C[j-2] + 1;
	    }
	}
    }

  cout << "Arreglos" << endl;
  
  for(int j=2; j<=12; j=j+1)
    {
      cout << j << "\t" << C[j-2] << endl;
    }

  float c5 = C[5]; 
  float sextaparte = c5/n;
    
  cout << "La cantidad de veces que sale 7 es: " << sextaparte << endl;

  return;
}

void vectores(int n)
{
  vector<int> v {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  
  int d1 = 0, d2 = 0, dplus = 0;
  
  for(int i=0; i<n; i++)
    {
      d1 = tirar_dados();
      d2 = tirar_dados();
      dplus = d1 + d2;

      for(int j=2; j<=12; j=j+1)
	{
	  if(dplus==j)
	    {
	      v[j-2] = v[j-2] + 1;
	    }
	}
    }

  cout << "Arreglos" << endl;
  
  for(int j=2; j<=12; j=j+1)
    {
      cout << j << "\t" << v[j-2] << endl;
    }

  float v5 = v[5]; 
  float sextaparte = v5/n;
    
  cout << "La cantidad de veces que sale 7 es: " << sextaparte << endl;
  
  return;
}


int main()
{
  srand(time(NULL));
  
  int n = 36000;
  
  arreglos(n);
  vectores(n);

  return 0;
}
