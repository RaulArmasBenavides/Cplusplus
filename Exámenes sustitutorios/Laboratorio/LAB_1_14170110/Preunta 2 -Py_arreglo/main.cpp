/* PREGUNTA 2: ( 7 puntos)
Escriba un Proyecto que defina un archivo de inclusión arreglo.h,
en donde se definen macros que permitan realizar las siguientes tareas:

(a) Leer un arreglo de tamaño n
(b) Imprimir un arreglo de tamaño n
(c) Reciba dos arreglos a y b, para luego reportar que elementos de a no están en b.

Para resolver esta pregunta y considerar todo el puntaje, debe plantear macros;
en caso contrario se asignara como máximo 3 puntos.
*/
#include <iostream>
#include <cstdio>
#include "arreglo.h"

using namespace std;

int main()
{
    int arreglo1[N],a1[N],a2[N];//Arreglos
    int n,n1;//tamaño a ingresar
    cout<<"Ingrese el tamanio del arreglo: ";cin>>n;
    cout<<"\nIngrese el arreglo de enteros: ";
    LEER_ARREGLO(arreglo1,n);
    cout<<"\nImpresion del arreglo\n";
    PRINT_ARREGLO(arreglo1,n);
    fflush(stdin);//Para limpiar el buffer de memoria
    cout<<"\n\nIngrese el tamanio de otros dos arreglos: ";cin>>n1;
    cout<<"\nIngrese el arreglo1: ";
    LEER_ARREGLO(a1,n);
    cout<<"\nIngrese el arreglo2: ";
    LEER_ARREGLO(a2,n);
    REPORTAR(a1,a2);
    return 0;
}
