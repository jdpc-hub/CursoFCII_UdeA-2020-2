#include <iostream>
#include <cmath>
#include <string>

#include "exp_f.h"

using std::string;

exp_f::exp_f(){
	N = 10;
	x = 1;
	exp_val = exp(x,N);
	std::cout << "Function instance created" << std::endl;
}

unsigned long long int exp_f::fac(unsigned long long int n){
	if(n < 0){
		std::cout << "Invaild input: negative integer" << std::endl;
		
		return 0;
	}
	else if(n <= 1){
		return 1;
	}
	else{
		unsigned long long int nm1 = exp_f::fac(n-1);
		return n*nm1;
	}
}

double exp_f::exp(double x, unsigned long long int N){
	double exp_sum = 0;
	for(unsigned long long int n = 0; n <= N; n++){
		exp_sum += std::pow(x,n)/fac(n);
	}
	return exp_sum;
}

void exp_f::print_expval(){
	std::cout << "exp(" << x  << ") = " << exp_val << std::endl;
}

void exp_f::set_x(double x_new){
	x = x_new;
	exp_val = exp(x,N);
}

void exp_f::set_N(unsigned long long int N_new){
	N = N_new;
	if(N > 20){
		std::cout << "Warning: factorial overflows for N > 20. Setting N to 20" << std::endl;
		N = 20;
	}
	exp_val = exp(x,N);
}

void exp_f::start_interactive(){
	bool quit = false;
	int input_opt;	

	while(quit == false){
		std::cout << "To calculate exponential function type 1, to use factorial type 2, to exit type 0: ";
		std::cin >> input_opt;
		
		switch(input_opt){
			case 1:
				double x_arg;
				unsigned long long int N_terms;
				
				std::cout << "> Input the argument of the exponential function: ";
				std::cin >> x_arg;

				if(x_arg < 0){
					std::cout << "Negative exponents not supported. Taking the absolute value of exponent" << std::endl;	
				x_arg *= -1;
				}

				set_x(x_arg);
				
				std::cout << "> Input the number of terms to calculate the series (max 20): ";
				std::cin >> N_terms;

				set_N(N_terms);

				print_expval();

				break;
		
			case 2:
				unsigned long long int n_fac;
				
				std::cout << "> Input the argument of the factorial: ";
				std::cin >> n_fac;

				if(n_fac > 20){
					std::cout << "Warning: be aware that after n > 20 factorial overflows" << std::endl;
				}

				std::cout << n_fac << "! = " << fac(n_fac) << std::endl;

				break;

			case 0:
				quit = true;
	
				std::cout << "Bye!" << std::endl;

				break;

			default:
				std::cout << "> Invalid input" << std::endl;
		}		
	}
}
