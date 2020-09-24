// Johan Carrillo - 1214734681
// Here it is declared the class and included the libraries that
// the code needs to work

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


// Class and prototypes declaration
class ExponentialFunction{
public:
	ExponentialFunction();  // Constructor
	long long int factorial( int );  // This function calculate the factorial
	double exponential( float, int );  // This function calculates the exponential
	void show();  // show in the screen the value of exp(x)
 
private:
int N;  // Maximum term of the serie
float x;  // pow of the exponential
};