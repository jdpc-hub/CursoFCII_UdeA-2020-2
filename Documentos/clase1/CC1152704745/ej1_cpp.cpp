#include <iostream>
#include <fstream>

int main(){
	int n1,n2;
	std::string opt;
	std::ofstream file;

	std::cout << "ingrese dos números para ser sumados" << std::endl;
	std::cin >> n1 >> n2;
	std::cout << "desea guardar el resultado en un archivo? [y/n] de lo contrario se mostrará en pantalla" << std::endl;
	std::cin >> opt;
	if (opt == "y"){
		file.open("result.txt");
		file << "la suma de " << n1 << " y " << n2 << " es " << n1+n2 << std::endl;
		file.close();
	}
	else if (opt == "n"){
		std::cout << "la suma de " << n1 << " y " << n2 << " es " << n1+n2 << std::endl;

	}
	else{
		std::cout << "la opción ingresada no es válida" << std::endl;
	}
	return 0;
}
