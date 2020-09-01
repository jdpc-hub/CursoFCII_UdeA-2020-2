#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int n1;
  int n2;
  int B;
  cout << "Please enter the first integer value: ";
  cin >> n1;
  cout << "Please enter the second integer value: ";
  cin >> n2;

  cout << "If you want to display the sum in terminal press (1)" << endl;
  cout << "If you to save it in a file press (2): ";
  cin >> B;
  
  int N = 0;
 
  for (int j = n1; j <= n2 ; j++)
    {
      N += j;
    }
  if (B == 1)
    {
      cout << "The sum from " << n1 << " to " << n2 << " is " << N << endl;
    }
  if (B == 2)
    {
      ofstream file;
      file.open("sum.txt");
      file << "The sum from " << n1 << " to " << n2 << " is " << N << endl;
      file.close();
    }

  return 0;
}
