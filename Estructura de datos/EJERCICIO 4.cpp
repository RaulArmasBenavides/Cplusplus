#include<iostream>
#include<iomanip>
using namespace std;
//declaracion de funciones prototipo
void ingresarVector(int a[50], int &n);
void separarpi( int a[50], int n1, int b[50], int &n2, int c[50], int &n3);
void mostrarVector(int vector[50], int numel);
void chancar ( int a[50],int c [50], int n , int m);
//definicion de funciones


void chancar ( int a[50],int c [50], int n , int m)
{ int i ,j;
  for (i=0;i<m;i++)
  {
      a[i]=c[i];
  }
}
void ingresarVector ( int a[50], int &n)
{
    //Definir variable
    int i;
    cout<<"Ingresar cantidad de elementos del vector: "<<endl;
    cin>>n;
    for ( i= 0; i<n;i++)
    {
        cout<<"Ingresar elemento"<<endl;
        cin>> a[i];
    }
}
void mostrarVector (int vector[50], int numel)
{
    //Definir variable
    int i;
    for(i=0;i<numel;i++)
     cout<<vector[i]<<setw(4);
     cout<<endl;
}
void separarpi(int a[50],int n1, int b[50], int &n2, int c[50], int &n3)
{
    //definir variables
    int i;
    i=0;
    while ( i<n1)
    {
        if(a[i]%2==0)
        {
            b[n2] = a[i];
            n2 = n2+1;
        }
        else
        {
            c[n3] = a[i];
            n3 = n3+1;
        }
      i++;
    }
}

//implementacion de la funcion principal
int main()
{  //definir e inicializar variables y vecctores
   int n1,n2=0,n3=0,a[50],b[50],c[50];
   ingresarVector(a,n1);
   separarpi(a,n1,b,n2,c,n3);
   //salida de resultados
   cout<<" El vector A es " <<endl;
   mostrarVector(a,n1);
   cout<<endl;
   chancar(a,c,n1,n3);
   cout<<" El vector sin pares es " <<endl;
   mostrarVector(a,n3);
   cout<<endl;
return 0;
}
