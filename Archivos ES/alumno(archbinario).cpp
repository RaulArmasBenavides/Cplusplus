//Pregunta 1
//Alumno : Villalta Pachas Rodrigo Manuel Tito
//Código : 20170299
#include<iostream>
#include<fstream>
#include<stdio.h>
#include<iomanip>
#include<stdlib.h>
#define Q reinterpret_cast<char *>
using namespace std;
void RegistrarDatos(ofstream &f1);
void ImprimirDatos(ifstream &f2);
//definiendo la estructura
struct alumno {
char nom[20];
int  p1,p2,p3,pp,pf;
};
void RegistrarDatos(ofstream &f1)
{
  alumno a;
  int n; //cantidad de alumnos
  f1.open("Alumnos.dat",ios::binary);
  if(!f1)
  {
      cerr<<"Error "<<endl;
      cin.get();
      exit(1);
  }
  cout<<endl<<"Ingrese el numero de alumnos"<<endl;
  cin>>n;

for(int i=0;i<n;i++)
{
    cout<<"Ingrese el nombre del alumno: ";fflush(stdin);gets(a.nom);
    cout<<a.nom<<" Ingresado..";
    cout<<"Ingrese nota de la practica 1 "; cin>>a.p1;
    cout<<"Ingrese nota de la practica 2 "; cin>>a.p2;
    cout<<"Ingrese nota de la practica 3 "; cin>>a.p3;
    cout<<"Ingrese la nota de la practica parcial: ";cin>>a.pp;
    cout<<"Ingrese la nota de la practica final: ";cin>>a.pf;
   //escribir en el archivo
    f1.write(Q(&a.nom),sizeof(a.nom));
    f1.write(Q(&a.p1),sizeof(a.p1));
    f1.write(Q(&a.p2),sizeof(a.p2));
    f1.write(Q(&a.p3),sizeof(a.p3));
    f1.write(Q(&a.pp),sizeof(a.pp));
    f1.write(Q(&a.pf),sizeof(a.pf));
}
f1.close();
}

void ImprimirDatos(ifstream &f2)
{
 alumno p;
 f2.open("Alumnos.dat",ios::binary);
 //asumimos que no hay errores
 //lectura adelantada
 cout<<"NOMBRE"<<"\t"<<"P1"<<"\t"<<"P2"<<"\t"<<"P3"<<"\t"<<"PP"<<"\t"<<"PF"<<endl;
 f2.read(Q(&p.nom),sizeof(p.nom));
 while(f2.peek()!=EOF)
 {
    f2.read(Q(&p.p1),sizeof(p.p1));
    f2.read(Q(&p.p2),sizeof(p.p2));
    f2.read(Q(&p.p3),sizeof(p.p3));
    f2.read(Q(&p.pp),sizeof(p.pp));
    f2.read(Q(&p.pf),sizeof(p.pf));
    f2.read(Q(&p.nom),sizeof(p.nom));
    //mostrar en la pantalla
    cout<<p.nom<<"\t"<<p.p1<<"\t"<<p.p2<<"\t"<<p.p3<<"\t"<<p.pp<<"\t"<<p.pf<<endl;
 }
 f2.close();
}

int main()
{
 ofstream file1;
 ifstream file2,file3;
 RegistrarDatos(file1);
 ImprimirDatos(file2);
 //Listado(file2);
 //BusquedadeRegistro(file3);
 return 0;
}
