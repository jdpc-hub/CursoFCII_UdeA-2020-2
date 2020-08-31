/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int c = 0;
    int min;
    int max ;
    std::cout << "cota inferior: ";
    std::cin >> min;
    std::cout << "cota superior: ";
    std::cin >> max;
        for (int i = min; i <= max; ++i) {
           c += i;
        
    }
    cout << "Suma de los número del " << min << " hasta el " <<max << " = "<< c;
    
    return 0;
}
