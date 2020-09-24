#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

  const int arraysize = 13;
  const int number_of_throws = 36000;
  int Incidince_array[arraysize] = {};
  
  srand( time( NULL ) );
  
  for ( int Throw = 1; Throw <= number_of_throws; Throw++ )
  {
    int R1 = (1 + rand() % 6);
    int R2 = (1 + rand() % 6);
    Incidince_array[R1+R2]++ ; 
  }
  
  cout << "Face" << setw( 22 ) << "Number of incidences" << setw(15) << "Percentage" << endl;

  for ( int face = 2; face < arraysize; face++ )
  {
    cout << setw(4) << face << setw(14) << Incidince_array[face] 
         << setw(21) << Incidince_array[face]/360. << "%" << endl;
  }
  
return 0; 
}