#include <iostream>
#include <cmath>
#include <iomanip>


int main(){
	const double PI = 3.141592653589793238463;
	double sigma,mu,x;

	std::cout << "Ingrese mu: ";
	std::cin >> mu;

	std::cout << "Ingrese sigma: ";
	std::cin >> sigma;

	std::cout << "Ingrese x: ";
	std::cin >> x;

	double y = std::exp(-0.5*std::pow((x-mu)/sigma,2.))/(sigma*std::sqrt(2.*PI));

	std::cout << "GaussBell(" << x << ";" << mu << "," << sigma << ") = " << y << std::endl;

	return 0;
}

