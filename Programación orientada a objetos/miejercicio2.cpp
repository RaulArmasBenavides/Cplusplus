
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
class guitar : public instru
{
public:
    guitar(){};
    guitar(char,float,float,char);
    ~guitar(){};
private:
    char marca[50];
};
guitar :: guitar(char a[],float b,float c,char d[]):instru(a,b,c)
{
  strcpy(marca,d);
}
void guitar :: print()
{
    instru :: print(); // heredando de la clase instrumento
    cout<<"La guitarra es de marca " <<endl;
    cout<<marca<<endl;
}
int main()
{
 instru i("guitarra",700,10);
 i.print();
 i.~instru();
 guitar g("guitarra",700,10,"fender");
 g.print();
 g.~guitar();
 return 0;
}
