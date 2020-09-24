#include <iostream>

using namespace std;

class ExpN {
public:
    ExpN(double, unsigned int); //El constructor
    void setX(double);
    double getX();
    void setN(unsigned int);
    unsigned int getN();
    unsigned long factorial(unsigned int);
    double calcExpX();
    void printExpX();

private:
    double x;
    unsigned int N;
};

