// Johan Alexis Carrillo Toro - 1214734681
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    int n_ini, n_end, j, sum = 0;

    cout << "este programa suma los enteros entre dos numeros.\n";
    cout << "Ingrese el numero inicial y final para sumarlos (en respectivo orden)\n";
    cin >> n_ini >> n_end;

    if(n_ini < n_end){

    	for (int i = n_ini; i <= n_end; ++i) {
        sum += i;
    	}

    	cout << "si desea la respuesta en pantalla ingrese 1, si la desea en un archivo .txt ingrese 2\n";
    	cin >> j;

    	if(j == 1){
    		cout << "la suma es " << sum << "\n";
    		return 0;
    	}
    	if(j == 2){
    		ofstream outfile("sum.txt");
  			outfile << "la suma es " << sum << "\n";
  			outfile.close();
  			return 0;
    	}
    	else{
    		cout << "el numero ingresado no es valido\n";
    		return 0;
    	}
    }

    else{
    	cout << "el primer numero debe ser menor al segundo\n";
    	return 0;
    }
}