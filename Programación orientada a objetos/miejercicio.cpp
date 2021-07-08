
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class instru
{
public:
    instru(){};
    instru(char a[],float b ,float c);
    ~instru(){};
    char getnombre();
    float getprecio();
    float getpeso();
    void print();
private:
    char nombre[50];
    float precio;
    float peso;
};
instru ::  instru(char a[],float b, float c)
{   strcpy(nombre,a);
    precio=b;
    peso=c;
}
void instru :: print()
{   cout<<"El instrumento es "<<nombre<<endl;
    cout<<"cuesta  s/."<<precio <<endl;
    cout<<"pesa "<<peso<<endl;
}
int main()
{
 instru i("guitarra",700,10);
 i.print();
 i.~instru();
 return 0;
}
