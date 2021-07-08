#include<string.h>
#include<iostream>
#include<stdio.h>
using namespace std;
//declaracion de la clase
class alumnoUNMSM
{ public:
    alumnoUNMSM();//constructor por defecto
    alumnoUNMSM(char cod[],char nom[]);//constructor alternativo
    alumnoUNMSM(alumnoUNMSM &a);//constructor de copia
    ~alumnoUNMSM();//destructor
    void getDatos();//enviar datos o mostrarlos en la salida estandar
    float promedio();//devuelve promedio simple
    float promPonderado();//devuelve promedio ponderado
 private:
    char codigo[10];//codigo alumno
    char nombre[40];//nombre de alumno
    int notasFinales[5];//notas finales en 5 cursos
    float creditaje[5];//peso o creditaje en c/u de los 5 cursos
};
alumnoUNMSM :: alumnoUNMSM()
 {
     strcpy(codigo,"");
     strcpy(nombre,"");
     for(int i=0;i<5;i++)
     {
         notasFinales[i]=0;
         creditaje[i]=0;
     }
 }
alumnoUNMSM :: alumnoUNMSM(char cod[],char nom[])
{
  strcpy(codigo,cod);
  strcpy(nombre,nom);
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
{  strcpy(codigo,a.codigo);
  strcpy(nombre,a.nombre);
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
//implementacion de la funcion principal
int main()
{
 char c[10],n[10];
 fflush(stdin);
 cout<<"Ingrese codigo"<<endl; gets(c);
 cout<<"Ingrese nombre"<<endl; gets(n);
 //creando el objeto
 alumnoUNMSM a(c,n);
 a.getDatos();
 cout<<"El promedio simple es "<<a.promedio()<<endl;
 cout<<"El promedio ponderado es "<<a.promPonderado()<<endl;
return 0;
}
