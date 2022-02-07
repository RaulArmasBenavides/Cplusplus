/* Dado las siguientes declaraciones de funciones que se detalla
a) void Gestionar(int nt[],int n).- Recibe como informacion el valor
de n que indica la cantidad de alumnos y luego genera en el vector nt
la nota obtenida. Esta debe estar comprendida entre 0 y 20 y debe
generarse en forma pseudoaleatoria.
b) void Gestiona(int nt[],int a[],int d[],int p,int q).- Esta funcion
copia en el vector a y d las notas aprobadas y las desaprobadas.
Implementar las funciones indicadas, la funcion principal y otras que
usted requiera.
*/
//librerias a utilizar
#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<ctime>
using namespace std;
//declaracion de funciones prototipo
int LeerCant(int);
void Gestionar(int nt[],int n);
void Gestiona(int nt[],int a[],int d[],int n,int p,int q);
//definicion de las funciones prototipo
int LeerCant(int m)
{
    cout<<"Ingrese el numero de alumnos"<<endl;
    cin>>m;
    return m;
}

void Gestionar(int nt[],int n)
{
    srand(time(0));
    cout<<"Las notas son: "<<endl;
    for(int i=0;i<n;i++)
    {
        nt[i]=1+rand()%20;
        cout<<nt[i];
        cout<<endl;
    }
}
void Gestiona(int nt[],int a[],int d[],int n,int p,int q)
{   p=q=0;
    for(int i=0;i<n;i++)
    {
        if(nt[i]>=10.5)
            {
            a[p]=nt[i]; p++;}
        else
           {
           d[q]=nt[i];q++; }
    }
     cout<<"Los aprobados son :"<<endl;
             for(int t=0;t<p;t++)
            {cout<<a[t]<<setw(5);}
     cout<<endl;
     cout<<"Los desaprobados son :"<<endl;
             for(int t=0;t<q;t++)
            {cout<<d[t]<<setw(5);}
    }

int main()
{ //declaracion de variables
  int n,m,p,q;
  int nt[80],a[80],d[80];
  //invocacion de funciones
  n=LeerCant(m);
  Gestionar(nt,n);
  Gestiona(nt,a,d,n,p,q);
return 0;
}
