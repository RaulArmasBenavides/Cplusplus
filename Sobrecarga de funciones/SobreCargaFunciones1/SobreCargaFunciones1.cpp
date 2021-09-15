/* Sobrecargar una funcion enigma, que cuando reciba como parámetro
 un numero entero convierta un numero entero a un numero romano
 y cuando reciba como parámetro el nombre de una persona diga el numero de la
 suerte, que se calcula como el modulo de dicho numero entre 9
*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
//Declaracion de funciones prototipo
void FuncionObjetivo(int);
void FuncionObjetivo(int x[], int &n ,int impares[], int &nimpares,int &minimpar );

//Definicion de funciones
void FuncionObjetivo(int nt[] , int n)
{
   int aux = 0;
   for(int i=0;i<n;i++)
    {
        nt[i] =0+rand()%800;
        cout<<nt[i];
        cout<<endl;
    }
    cout<<endl;
}

void FuncionObjetivo(int x[], int n ,int impares[], int &nimpares,int &minimpar, bool ok )
{
    minimpar =801;
    nimpares = 0;
    int i=0;
    while(i<n)
    {
        if(x[i]%2==0)
        {
            //son pares
            //b[n2]=x[i];
            //n2++;
        }
        else
        {
            //vectores
            impares[nimpares]=x[i];
            nimpares++;
        }
        i++;
    }

     minimpar = impares[0];
    //vector impares
    cout<<"Hay numeros impares"<<nimpares<<endl;
     for ( int j=0;j<nimpares;j++)
     {
         if( minimpar>impares[j] )
            minimpar= impares[j];

     }

       cout<<"Este es el menor número impar " << minimpar<<endl;
}


void FuncionObjetivo(int impares[],int &nimpares, int minimpar)
{

    int distancia = 0;
    //vector impares
    cout<<endl;
    cout<<"Reporte de distancias del vector de impartes "<<endl;
     for ( int j=0;j<nimpares;j++)
     {
        distancia = impares[j] - minimpar;
        if(distancia != 0)
        cout<<"Distancia " << distancia<<endl;
        else
        cout<<"Este es el menor número impar " << impares[j]<<endl;

     }

}



void mostrarVector( int a[50], int n)
{    cout<<"Reporte de datos del vector"<<endl;
     for ( int i=0;i<n;i++)
        cout<<a[i]<<endl;
}


//funcion principal
int main()
{
 // Configuracion
    setlocale(LC_CTYPE,"Spanish");
   //declaracion de variables
    int nt[100];
    int impares[100];
    int n;
    int nimpares;
    int minimpar;


    n =10;
    //invocacion de funciones
    FuncionObjetivo(nt,n);
    FuncionObjetivo(nt,n,impares,nimpares,minimpar,true);
    FuncionObjetivo(impares,nimpares,minimpar);
    return 0;
}
