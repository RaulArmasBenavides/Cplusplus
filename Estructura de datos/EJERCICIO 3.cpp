#include<iostream>
#include<iomanip>
//declaracion de funciones prototipo
void ingresarVector( int a[50], int &n);
void ingresarDatos(int &val,int &pos);
bool insertarPorPosicion(int a[50],int &n1, int posicion,int valor);
void mostrarVector(int vec[50] , int numel);
using namespace std;
//definicion de funciones
void ingresarVector (int a[50], int &n)
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
void ingresarDatos(int &val,int &pos)
{

   cout<<"Ingresar valor a insertar :"<<endl;
   cin>>val;
   cout<<"Ingresar posicion"<<endl;
   cin>>pos;
}

bool insertarPorPosicion(int a[50],int &n1,int posicion,int valor)
{
    bool encontro=false;
    int i=0,j;
    while(j<n1 && !encontro)
    {
        if(i==posicion)
        {
        encontro = true;
         cout<<"encontro"<<endl;
        }
         else
        i++;
    }
    if(encontro == true)
    {
        j=n1;
        while ( i<j)
        {
            a[j] = a[j-1];
            j--;
        }
        a[i]=valor;
        n1++;
    }
    return encontro;
}

void mostrarVector (int vec[50], int numel)
{
    //Definir variable
    int i;
    for(i=0;i<numel;i++)
     cout<<vec[i]<<setw(4);
     cout<<endl;
}

//implementacion de la funcion principal
int main()
{
    // definir variables y vectores
    int n1,valor,posicion,a[50];
    ingresarVector(a,n1);
    cout<<"El vector es:" <<endl;
    mostrarVector(a,n1);
    cout<<endl;
    ingresarDatos(valor,posicion);

    if(insertarPorPosicion(a,n1,posicion,valor)==true)
       {
           cout<<endl<<"El nuevo vector es " <<endl;
           mostrarVector(a,n1);
       }
       else
        cout<<" No se puede insertar"<<endl;
    return 0;
}
