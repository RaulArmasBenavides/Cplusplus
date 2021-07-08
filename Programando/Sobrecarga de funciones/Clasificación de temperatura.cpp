#include<iostream>
using namespace std;
typedef float Temperatura;
//declaracion de funciones
void LeerTemperatura(Temperatura T);
void ClasifTemperatura(Temperatura T);

int main()
{ Temperatura T;
  LeerTemperatura(T);
  ClasifTemperatura(T);
return 0;
}
void LeerTemperatura(Temperatura T)
{ cout<<"Ingresar Temperatura(C)"<<endl;
  cin>>T;
}
void ClasifTemperatura(Temperatura T)
{
    if(T>=90)
        {cout<<"Temperatura muy alta"<<endl;}
    else if(T>=80 && T<=89)
        {cout<<"Temperatura alta"<<endl;}
    else if(T>=40 && T<=79)
        {cout<<"Temperatura normal"<<endl;}
    else if(T>=0 && T<=39)
        {cout<<"Temperatura baja"<<endl;}
    else if(T<0)
        {cout<<"Temperatura muy baja"<<endl;}
    else
        {cout<<"Temperatura extrema"<<endl;}
}
