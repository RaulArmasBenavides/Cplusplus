#include<iostream>
using namespace std;
class vehiculo{
private:
    int peso;
    int maxvelo;
    float precio;
public:
    vehiculo(){}
    vehiculo(int, int ,float); // constructor
    ~vehiculo(){}
    int getpeso();
    int getmaxvelo();
    float getprecio();
    void print();
};
//definicion de funciones miembros de la clase base
vehiculo :: vehiculo(int a,int b,float c)
{
    peso=a;
    maxvelo=b;
    precio=c;
}
int vehiculo :: getpeso()
{
    return peso;
}
int vehiculo :: getmaxvelo()
{
    return maxvelo;
}
void vehiculo :: print()
{
    cout<<"El peso es "<<peso <<"kg"<<endl;
    cout<<"la maxima velocidad es " <<maxvelo<<" km/h"<<endl;
    cout<<"el precio es "<<precio<<"$"<<endl;
}
//clase derivada
class carro : public vehiculo //se refiere a una herencia publica
{ private:
    int nrocilindros;
    int potenciacaballos;
    int desplazamiento;
  public:
      carro(){};
      carro(int,int,float,int,int,int); // constructor
      ~carro(){};
      int getnrocilidros();
      int getpotenciacaballos();
      int getdesplazamiento();
      void print();
};
carro :: carro(int a,int b,float c,int ncil,int pc,int d):vehiculo(a,b,c)
{ nrocilindros=ncil;
  potenciacaballos=pc;
  desplazamiento=d;
}
int carro :: getnrocilidros()
{
    return nrocilindros;
}
int carro :: getpotenciacaballos()
{
    return potenciacaballos;
}
int carro :: getdesplazamiento()
{
    return desplazamiento;
}
void carro :: print()
{
    vehiculo :: print(); // heredando de la case padre
    cout<<"numero de cilindros "<<nrocilindros<<endl;
    cout<<"caballo de potencia "<<potenciacaballos<<endl;
    cout<<"desplazamiento "<<desplazamiento<<endl;
}
int main()
{ vehiculo mivehiculo(100,120,200);
  cout<<"un vehiculo ";
  mivehiculo.print();
  cout<<endl;
  //ahora un objeto derivado de vehiculo
  cout<<endl<<endl;
  carro micarro(100,200,300,150,120,300);
  cout<<"un auto "<<endl;
  micarro.print();
  cout<<endl<<endl;
  return 0;
}
