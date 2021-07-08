#include<iostream>
#include<fstream>
#include<stdio.h>
#include<iomanip>
#include<stdlib.h>
#define Q reinterpret_cast<char *>c
using namespace std;
//definiendo la estructura
struct alumno {
char nom[20];
int  p1,p2,p3,pp,pf;
};
void Leerdatos(ofstream &f1)
{ alumno a;

  f1.open("REGISTRO",ios::binary)
  {if(!f1)
  {
      cerr<<"Error "<<endl;
      cin.get();
      exit(1);
  }
cout<<endl<<"Ingrese el numero de alumnos"<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{
    cout<<"Ingrese el nombre del alumno ";fflush(stdin);gets(a.nom);
    cout<<"Ingrese nota de las 3 practicas respectivamente";cin>>a.p1>>a.p2>>a.p3;
    cout<<"Ingrese la nota de la practica parcial";cin>>a.pp;
    cout<<"Ingrese la nota de la practica final";cin>>a.pf;
}
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

int main()
{ofstream file1
 return 0;
}
