#include <iostream>
#include <cmath>

class exp_f{
	public:
		exp_f();
		void print_expval();
		void set_x(double); // Resets the argument of exp function. Recalculates exp() function
		void set_N(unsigned long long int); // Resets the truncation number of the series. Recalculates exp() function	
		unsigned long long int fac(unsigned long long int);	// Calculation of factotial given N
		void start_interactive();
	private:
		unsigned long long int N; // Number of terms to truncate the series
		double x; // Argument of exponential function
		double exp_val; // Value of exponential function
		double exp(double, unsigned long long int); // Calculation of exponential given x and N
};
