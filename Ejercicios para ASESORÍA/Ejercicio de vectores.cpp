/*Separa un vector que contenga los numero pares y otro vector que contenga los numeros imnpares*/

#include<iostream>

using namespace std;
//declaracion de variables
void ingresarVector ( int a[50],int &n);
void separarpi(int a[50], int n1, int b[50], int &n2 , int c[50], int &n3);
void mostrarVector( int a[50], int n);
void ingresarVector ( int a[50],int &n)
{
     //definir variable
     int i;
     cout<<"Ingresar cantidad de elementos del vector " <<endl;
     cin>>n;
    for(i=0;i<n;i++)
    {
     cout<<"Ingrese elemento " <<i<<endl;
     cin>>a[i];
    }
}
void separarpi(int a[50], int n1, int b[50], int &n2 , int c[50], int &n3)
{
    int i=0;
    while(i<n1)
    {
        if(a[i]%2==0)
        {
            b[n2]=a[i];
            n2++;
        }
        else
        {
            c[n3]=a[i];
            n3++;
        }
        i++;
    }
}
void mostrarVector( int a[50], int n)
{    cout<<"Reporte de datos del vector"<<endl;
     for ( int i=0;i<n;i++)
        cout<<a[i]<<endl;

}
int main()
{  //definicion de variables
    int n1,n2=0,n3=0,a[50],b[50],c[50];
    //lectura de datos
    ingresarVector(a,n1);
    //Proceso
    separarpi(a,n1,b,n2,c,n3);
    //salida de datos
    cout<<"vector de numeros pares "<<endl;
    mostrarVector(b,n2);
    cout<<"vector de numeros impares "<<endl;
    mostrarVector(c,n3);

 return 0;
}
