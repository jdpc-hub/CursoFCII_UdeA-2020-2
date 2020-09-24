#include <iostream>
#include <iomanip>
#include <ctime>
#include <vector>

using namespace std;

int main()
{
  int cara1;
  int cara2;
  vector < int > frecuencia(13, 0);

  srand( time ( NULL ) );

  
  for (int tiro=0;tiro<36000;tiro++)
    {
      cara1 = 1 + rand() % 6;
      cara2 = 1 + rand() % 6;
      frecuencia[cara1 + cara2]++;
    }
  cout << "Suma dados" << setw(13) << "Frecuencia" << endl;
  
  for (int jj=2;jj<13;jj++)
    {
      cout << setw(5) << jj << setw(15) << frecuencia[jj] << endl;
    }

  return 0;
}
  
