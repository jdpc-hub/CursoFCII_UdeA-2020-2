#include <iostream>
using namespace std;


int Suma(int n1, int n2){
  int n=0;
  for(int i=n1; i<=n2; i++){

  n = n + i;

}
 return n;
}

int main(){
  
int n1;
cout << "ingrese primer numero ";
cin >> n1;
cout << "\n";

int n2;
cout << "ingrese segundo numero ";
cin >> n2;
cout << "\n";


 cout << "El resultado de sumar los numeros es:" << Suma(n1,n2) << endl;


}
