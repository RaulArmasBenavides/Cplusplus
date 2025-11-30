#include"AlumnoUNMSM.h"
#include<string.h>
#include<iostream>
#include<stdio.h>

using namespace std;

alumnoUNMSM :: alumnoUNMSM()
 {
    strcpy_s(codigo, sizeof(codigo), "");
    strcpy_s(nombre, sizeof(nombre), "");
     for(int i=0;i<5;i++)
     {
         notasFinales[i]=0;
         creditaje[i]=0;
     }
 }
alumnoUNMSM :: alumnoUNMSM(char cod[],char nom[])
{
    strcpy_s(codigo, sizeof(codigo), cod);
    strcpy_s(nombre, sizeof(nombre), nom);
  cout<<"Ingrese las 5 notas finales"<<endl;
  int i;
  for(i=0;i<5;i++)
  {
      cout<<"Ingrese nota"<<(i+1)<<": ";
      cin>>notasFinales[i];
  }
  cout<<"Introduzca el creditaje de c/u de los 5 cursos"<<endl;
  for(i=0;i<5;i++)
  {
      cout<<"Ingrese nredito del curso"<<(i+1)<<": ";
      cin>>creditaje[i];
  }
}
alumnoUNMSM :: alumnoUNMSM(alumnoUNMSM &a)
{
    strcpy_s(codigo, sizeof(codigo), a.codigo);
    strcpy_s(nombre, sizeof(nombre), a.nombre);
      cout<<"Ingrese las 5 notas finales"<<endl;
      for(int i=0;i<5;i++)
      {
        notasFinales[i]=a.notasFinales[i];
        creditaje[i]=a.creditaje[i];
      }
}
alumnoUNMSM ::  ~alumnoUNMSM()
{
    cout<<"Destruyendo el objeto...!"<<endl;
}
void alumnoUNMSM :: getDatos()
{ // Enviando datos a la salida estandar
    cout<<"\nDatos del Alumno"<<endl;
    cout<<"Codigo: "<<codigo<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"\nNotas finales"<<endl;
    int i;
    for(i=0;i<5;i++)
    cout<<notasFinales[i]<<" ";
    cout<<endl;
    cout<<"\nCreditos x curso: ";
    for(i=0;i<5;i++)
    cout<<creditaje[i]<<" ";
    cout<<endl;
}
float alumnoUNMSM :: promedio()
{
    float acum = 0.0;
    for(int i=0;i<5;i++)
     acum+=notasFinales[i];
    return (acum/5.0);
}
float alumnoUNMSM :: promPonderado()
{ float acum=0.0,pesos =0.0;
   for(int i=0;i<5;i++)
   {
       acum+=notasFinales[i]*creditaje[i];
       pesos+=creditaje[i];
   }
    return (acum/pesos);
}
 