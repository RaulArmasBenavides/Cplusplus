/*DEFINICION DE pregunta2.h*/
#include <iostream>
#include <cstring>
#include <cstdio>
#include "pregunta2.h"

using namespace std;
//para el centro de espectaculos
centro_espectaculo :: centro_espectaculo( char du[30], char di[40] , char t[10] )
{
    strcpy(dueno, du);
    strcpy(direccion, di);
    strcpy(telefono,t);
}

centro_espectaculo :: ~centro_espectaculo()
{

}

// ingreso de los datos del centro de espectáculos
void centro_espectaculo :: ingresar()
{
    cout<<"Ingrese el nombre del dueno: "; gets(dueno);
    cout<<"Ingrese la direccion: "; gets(direccion);
    cout<<"Ingrese el telefono: "; gets(telefono);
}

// impresión de los datos del centro de espectáculos
void centro_espectaculo :: imprimir()
{
    cout<<"Dueno: "<<dueno;
    cout<<"\nDireccion: "<<direccion;
    cout<<"\nTelefono: "<<telefono;
}

//para cine
cine :: cine(char du[30],char di[40],char t[10],char n[20], int c, float e) : centro_espectaculo(du,di,t)
{
    strcpy(nombre, n);
    cantsalas = c;
    entrada = e;
}

cine :: ~cine()
{

}

// ingreso de todos los datos del cine
void cine :: ingresar()
{

    cout<<"Ingrese el nombre del cine: "; gets(nombre);
    cout<<"Ingrese la cantidad de salas: "; cin>>cantsalas;
    cout<<"Ingrese el costo de entrada: "; cin>>entrada;
    cout<<"Ingrese el nombre de las peliculas de cada sala\n";
    fflush(stdin);
    for(int i=0; i<20; i++)
        gets(pelicula[i]);
    cout<<"Ingrese la cantidad de asistentes de cada sala\n";
    for(int c=0; c<20; c++)
        cin>>asistentes[c];
}

void cine :: imprimir()	// impresión de los datos generales del cine
{
    cout<<"\nNombre del cine: "<<nombre;
    cout<<"\nCantidad de salas: "<<cantsalas;
    cout<<"\nCosto de entrada: "<<entrada;
    cout<<"\nNombre de las peliculas de cada sala\n";
    for(int i=0; i<20; i++)
        cout<<pelicula[i]<<endl;
    cout<<"\nCantidad de asistentes de cada sala\n";
    for(int c=0; c<20; c++)
        cout<<asistentes[c]<<endl;
}

void cine :: cartelera()	// impresión de las películas y su número de sala
{
    cout<<"\nPELICULAS\n";
    for(int i=0; i<20; i++)
        cout<<"\nSala "<<i+1<<" : "<<pelicula[i];
}

float cine :: taquilla()  // devuelve el total recaudado considerando todas las salas
{
    float total = 0;
    for(int i=0; i<20; i++)
        total = total + asistentes[i]*entrada;
    return total;
}


