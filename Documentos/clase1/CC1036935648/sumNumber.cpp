
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n1,n2,suma;    

    for(;;)
    {
        cout << "Introduzca los numeros n1 y n2" << endl;
        cin >> n1;
        cin >> n2;

        if(n1 < n2)
            break;
        else
            cout << "n1 debe ser menor que n2" <<endl;
    }

    suma = 0; 
    for( int n = n1; n <= n2; ++n)
        suma += n;

    for(;;)
    {
        cout << "Seleccione una opcion" << endl;
        cout << "1. Ver en pantalla" << endl;
        cout << "2. Guardar en archivo" << endl;

        int op;
        ofstream file;
        cin >> op;
        switch(op)
        {
            case 1:
                cout << "la suma entre " << n1 << " y " << n2 << " es: " << suma << endl;
                return 0;
            case 2:                
                file.open ("result.txt");
                file << "la suma entre " << n1 << " y " << n2 << " es: " << suma << endl;
                file.close();
                return 0;
            default:
                cout << "Opcion invalida" << endl;
        }
    }

    return -1;
}