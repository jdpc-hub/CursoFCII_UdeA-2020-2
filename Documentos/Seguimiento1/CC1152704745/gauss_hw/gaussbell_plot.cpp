#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;

const double PI = 3.141592653589793238463;

double N_fdp(double x, double mu, double sigma){
	return std::exp(-0.5*std::pow((x-mu)/sigma,2.))/(sigma*std::sqrt(2.*PI));
}

int main(){
	double sigma,mu;
	
	std::cout << "Ingrese la media: ";
	std::cin >> mu;

	std::cout << "Ingrese la desviación estándar: ";
	std::cin >> sigma;

	float delta_x = sigma/50;

	std::vector<double> x(100);
	std::vector<double> gauss_x(100);
	
	for (int i=-50; i <= 50; i++){
		gauss_x[50+i] = N_fdp(mu-i*delta_x,mu,sigma);
		x[50+i] = mu-i*delta_x;
	}

	plt::plot(x,gauss_x);
	plt::show();

	return 0;
}

