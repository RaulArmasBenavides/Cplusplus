
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
    //Factura(const Factura &t);//Constructor copia
    friend void RegistrarDatos (instru &q); //realiza la lectura de datos
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

void RegistrarDatos(instru &q)
{
    cout<<"Ingrese el nombre del instrumento"<<endl;
    gets(q.nombre);
    cout<<"Ingrese el precio del instrumento"<<endl;
    cin>>q.precio;
    cout<<"Ingrese el peso del intrumento"<<endl;
    cin>>q.peso;
}
void instru :: print()
{   cout<<"El instrumento es "<<nombre<<endl;
    cout<<"cuesta  s/."<<precio <<endl;
    cout<<"pesa "<<peso<<endl;
}

//Clase guitarra hereda de clase instrumento
class guitar : public instru
{
public:
    guitar(){};
    guitar(char a[],float b,float c,char d[]);
    ~guitar(){};
    void print();
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
 instru i;
 RegistrarDatos(i);
 //instru i("guitarra",700,10);
 i.print();
 i.~instru();

 //clase hija
 guitar g("guitarra",700,10,"fender");
 g.print();
 g.~guitar();
 return 0;
}
