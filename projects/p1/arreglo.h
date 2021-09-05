#ifndef ARREGLO_H_INCLUDED
#define ARREGLO_H_INCLUDED
#include<iostream>
#include<ctime>
#include<fstream>
const int N=100;
using namespace std;
class Arreglo{

public:
    Arreglo(){}
    Arreglo(int); // constructor
    ~Arreglo(){}
    bool esPrimo(int);
    void operator+(int k);
    void operator-();
    friend ostream& operator<<(ostream& os,Arreglo &a);

private:
    int datos[N];
    int nact;
};


#endif // ARREGLO_H_INCLUDED
