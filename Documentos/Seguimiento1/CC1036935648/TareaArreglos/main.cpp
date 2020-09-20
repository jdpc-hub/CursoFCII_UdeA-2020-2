#include <iostream>
#include <iomanip>
#include <vector>
#include "Dice.h"

using std::cout;
using std::endl;

int main()
{
    const int N_THROWS = 36000; //Número de lanzamientos
    int result[11]={0}; // variable para almacenar el conteo de resultados entre 2 y 12
    Dice d1 = Dice();
    Dice d2 = Dice();

    /* Lanzamientos */
    for(int i=0; i<N_THROWS; ++i)
    {
        int r = d1.Throw() + d2.Throw();
        if(r >= 2 && r<= 12)
            result[r - 2] ++;
    }

    cout<< "========================================" << endl;
    cout<< "        Resultado con arreglos          " << endl;
    cout<< "========================================" << endl;
    for(int i=0; i<11; ++i)
        cout<< "N=" <<i+2<<"\t";
    cout<<endl;
    for(int i=0; i<11; ++i)
        cout<< result[i] << "\t";
    cout<<endl<<endl;

    cout<<"Para el caso de que la suma sea 7, se reportaron " << result[5] << " eventos." << endl << endl;
    cout<<result[5] << "/" << N_THROWS << "= " << std::setprecision(3) << result[5]/static_cast<float>(N_THROWS) << endl;
    cout << endl;
    cout << "el resultado se acerca mucho al valor de esperado de 1/6=1.67,"<<endl;
    cout << "por lo que se puede concluir que el resultado tiene sentido."<< endl << endl;


    cout<< "========================================" << endl;
    cout<< "        Resultado con vectores          " << endl;
    cout<< "========================================" << endl;

    std::vector<int> vResult(11,0); //

    /* Lanzamientos */
    for(int i=0; i<N_THROWS; ++i)
    {
        int r = d1.Throw() + d2.Throw();
        if(r >= 2 && r<= 12)
            vResult[r - 2] ++;
    }

    for(int i=0; i<11; ++i)
        cout<< "N=" <<i+2<<"\t";
    cout<<endl;
    for(int i=0; i<11; ++i)
        cout<< vResult[i] << "\t";
    cout<<endl<<endl;

    cout<<"Para el caso de que la suma sea 7, se reportaron " << vResult[5] << " eventos." << endl << endl;
    cout<<vResult[5] << "/" << N_THROWS << "= " << std::setprecision(3) << vResult[5]/static_cast<float>(N_THROWS) << endl;
    cout << endl;
    cout << "el resultado se acerca mucho al valor de esperado de 1/6=1.67,"<<endl;
    cout << "por lo que se puede concluir que el resultado tiene sentido."<< endl << endl;


    return 0;
}
