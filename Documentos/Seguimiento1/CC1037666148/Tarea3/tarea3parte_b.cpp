#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int suma(int,int);

int main()
{
  const int N = 13;
  int dado1;
  int dado2;
  vector<int> f_sum(N);
  srand(time(NULL));
  for (int i=1;i<36000;i++)
    
    {
      dado1 = 1 + rand()%6;
      dado2 = 1 + rand()%6;
      f_sum[suma(dado1,dado2)]++;
    }
  cout << setw(4)<< "Suma caras" << setw(3) <<"|"<< setw(18) << "Frecuencia caída" <<endl;
  for (int j = 1; j < N; j++)
    {

    cout << setw(4)<< j <<  setw(10) << " | "<< setw(10) << f_sum[j] <<endl;
    }
  
  return 0;
}

int suma(int cara_1, int cara_2)
{
  return cara_1+cara_2;
}


