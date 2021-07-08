/*archivo que almacena los datos de un alumno*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<fstream>
const int N=90;
using namespace std;
struct alum
{ char nom[20],ap[20],obs[10],cod[10];
  int n1,n2,n3,ep,ef;
  float prom,promf;
};
int main()
{ int n;
  char co[N];
  alum a[N];
  cout<<"Ingrese la cantidad de alumnos"<<endl;
  cin>>n;
  ofstream p1;
  ifstream p2;
  //abriendo el archivo
  p1.open("alumnos.txt",ios:: out);
  p2.open("alumnos.txt",ios :: in);
  if(!p1 || !p2)
  {
      cerr<<"Error:el archivo no se pudo guardar con exito"<<endl;
      cin.get();//esperar la entrada estandar
      exit(1);//sale y devuelve el control al sistema operativo
  }
   while(!p2.eof())
   for(int i=1;i<=n;i++)
  {
      cout<<"Ingrese datos del alumno #"<<i<<endl;
      cout<<"Ingrese codigo"<<endl;fflush(stdin);
      gets(a[i].cod);
      cout<<"Nombre ?"<<endl;
      gets(a[i].nom);
      cout<<"Apellido paterno?"<<endl;
      gets(a[i].ap);
      cout<<"Ingrese nota de las 3 practicas "<<endl;
      cin>>a[i].n1>>a[i].n2>>a[i].n3;
      a[i].prom=(a[i].n1+a[i].n2+a[i].n3)/3;
      cout<<"El promedio de las notas de practicas es "<<a[i].prom<<endl;
      cout<<"Ingrese la nota del examen parcial"<<endl;
      cin>>a[i].ep;
      cout<<"Ingrese la nota del examen final"<<endl;
      cin>>a[i].ef;
      a[i].promf=a[i].ep+a[i].ef+a[i].prom;
      cout<<"RESULTADO"<<endl;
      if(a[i].promf>=10.5)
        strcpy(a[i].obs,"APROBADO");
      else
        strcpy(a[i].obs,"DESAPROBADO");
        //guardar los datos
        p1<<a[i].cod<<""<<a[i].nom<<""<<a[i].ap<<"\t"<<a[i].obs<<endl;
  //lectura adelantada
  cout<<"Codigo"<<"\t"<<"Nombres"<<"\t"<<"Apellido Paterno"<<"\t"<<"Observacion"<<endl;
  cout<<a[i].cod<<"\t"<<a[i].nom<<"\t"<<a[i].ap<<"\t"<<a[i].obs<<endl;
  }
  p2.close();
  p1.close();
  cout<<"Los datos se guardaron con exito";
return 0;
}
