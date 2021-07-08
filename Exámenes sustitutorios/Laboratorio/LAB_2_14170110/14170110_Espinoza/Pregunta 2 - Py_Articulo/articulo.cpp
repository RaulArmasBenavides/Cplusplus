/*Gestionar un arreglo de Objetos de la clase Articulo, para:
1)	Ingresar n artículos
2)	Imprimirlos
3)	Buscar un determinado articulo según su código
4)	Averiguar precio de un determinado articulo según su descripción y marca
5)	Totalizar el valor de todos los artículos en el arreglo en soles y en dólares.
*/
#include <iostream>
#include <cstring>
#include <cstdio>
#include "articulo.h"
using namespace std;

//DEFINICIÓN DE LAS FUNCIONES MIEMBRO
Articulo :: Articulo()
{
    strcpy(Codigo, " ");
    strcpy(Descri, " ");
    strcpy(Marca, " ");
    Precio=0;
    Cantidad=0;
}
Articulo :: ~Articulo()
{

}
//DEFINICIÓN DE LAS FUNCIONES PARA GESTIONAR EL ARREGLO
void LlenarArticulos(Articulo a[N], int n)
{
    for(int i=0; i<n;i++)
    {
        fflush(stdin);
        cout<<"\nCodigo: "; gets(a[i].Codigo);
        cout<<"Descripcion: ";gets(a[i].Descri);
        cout<<"Marca: "; gets(a[i].Marca);
        cout<<"Precio: ";cin>>a[i].Precio;
        cout<<"Cantidad: ";cin>>a[i].Cantidad;
    }
}
void ImprimirArticulos(Articulo a[N], int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<"Codigo: "<<a[i].Codigo;
        cout<<"\nDescripcion: "<<a[i].Descri;
        cout<<"\nMarca: "<<a[i].Marca;
        cout<<"\nPrecio: "<<a[i].Precio;
        cout<<"\nCantidad: "<<a[i].Cantidad;
        cout<<endl;
    }
}
void BuscarArticulo(Articulo a[N], int n, char cod[N])
{
    for(int i=0; i<n;i++)
    {
        if(strcmp(a[i].Codigo,cod)==0)
          {
            cout<<"Codigo: "<<a[i].Codigo;
            cout<<"\nDescripcion: "<<a[i].Descri;
            cout<<"\nMarca: "<<a[i].Marca;
            cout<<"\nPrecio: "<<a[i].Precio;
            cout<<"\nCantidad: "<<a[i].Cantidad;
          }
    }
}
void PrecioArticulo(Articulo a[N], int n, char des[N], char marca[N])
{
    for(int i=0; i<n;i++)
    {
        if(strcmp(a[i].Descri,des)==0 && strcmp(a[i].Marca,marca)==0)
            cout<<"\nPrecio: "<<a[i].Precio;
    }
}
void Totalizar(Articulo a[N], int n)
{
    float total=0;
    for(int i=0;i<n;i++)
     total=total+a[i].Precio;
    cout<<"\nTotal <soles>: "<<total;
    cout<<"\nTotal <dolares>: "<<total*2.8;
}
