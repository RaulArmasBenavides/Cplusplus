#include<iostream>
#include<fstream>//para objetos de flujo de archivo
#include<string.h>
#include<stdio.h>
#include<stdlib.h>//para exit()
using namespace std;
//declaracion de la estructura
struct emp1
{
    char c[10],nom[30],car[25];
    float sb,afp,sn;
};
//definicion de funciones
void Leerdatos(ofstream &a1)
{ ifstream achivo;
  string texto;
  archivo.open("programacion.txt",ios:in);
  if(archivo.fail())
  {
      cout<<"No se pudo abrir el arhcivo";
      exit(1);
  }
  while(!archivo.eof())
   {
      getline(archivo,texto);
   }
}
void Listado(ifstream &a2)
{
    emp1 p;
    float tsb=0,tafp=0,tsn=0;
    a2.open("Nombre.dat");
    cout<<"Listado de empleados"<<endl;
    a2>>p.c;
    for(;!a2.eof();)
    {
        a2>>p.nom>>p.car>>p.sb>>p.afp>>p.sn;
        tsb+=p.sb;tafp+=p.afp;tsn=p.sn;
        //escribiendo datos en la pantalla
        cout<<p.c<<"\t"<<p.nom<<"\t"<<p.car<<"\t"<<p.sb<<"\t"<<p.afp<<"\t"<<p.sn<<endl;
        a2>>p.c;
    }
    a2.close();
    cout<<endl<<endl<<"totalde suelgos bruto: "<<tsb<<endl;
    cout<<"total descuento por afp "<<tafp<<endl;
    cout<<"total de sueldos netos "<<tsn<<endl;

}
void Filtrar(ifstream &a4,ofstream &a3)
{
    emp1 p;
    char x[15]; cout<<"Nombre del cargo que se desea filtrar ";gets(x);
    a3.open(x);
    a4.open("Nombre.dat");
    a4>>p.c;
    while(a4.peek()!=EOF)
    {a4>>p.nom>>p.car>>p.sb>>p.afp>>p.sn;
    if(strcmp(p.car,x)==0)
        a3<<p.c<<"\t"<<p.nom<<"\t"<<p.car<<"\t"<<p.sb<<"\t"<<p.afp<<"\t"<<p.sn<<endl;
    a4>>p.c;
}
a3.close();
a4.close();
}
bool buscar(ifstream &a4)
{   emp1 p; char mc[50]; cout<<"Ingrese codigo a buscar"<<endl;gets(mc);
    a4.open("Nombre.dat");
    a4>>p.c;
    while(a4.peek()!=EOF)
    {a4>>p.nom>>p.car>>p.sb>>p.afp>>p.sn;
     if(strcmp(p.c,mc)==0)
        return true;
     a4>>p.c;
    }
    return false;
    a4.close();
    }
//funcion principal
int main()
{ ofstream arch1,arch3;
  ifstream arch2,arch4;
  Leerdatos(arch1);
  Listado(arch2);
  Filtrar(arch4,arch3);
return 0;
}


