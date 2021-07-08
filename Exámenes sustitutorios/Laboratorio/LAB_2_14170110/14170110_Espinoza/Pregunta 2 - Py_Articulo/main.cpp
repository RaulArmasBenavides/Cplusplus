#include <iostream>
#include <cstdio>
#include "articulo.h"
using namespace std;

int main()
{
    Articulo ar[N];
    int n; //CANTIDAD DE OBJETOS
    cout<<"Ingrese la cantidad de datos del arreglo: ";cin>>n;
    LlenarArticulos(ar,n); cout<<endl;
    ImprimirArticulos(ar,n);

    cout<<"\nBUSQUEDA DEL ARTICULO POR CODIGO\n";
    char cod[N]; fflush(stdin);
    cout<<"Ingrese el codigo a buscar: "; gets(cod);
    BuscarArticulo(ar,n,cod);
    cout<<"\nBUSQUEDA DEL ARTICULO POR DESCRIPCION Y MARCA\n";
    char des[N],marca[N];
    cout<<"Ingrese la descripcion: "; gets()
    PrecioArticulo(ar,n,des,marca);
    cout << endl << endl;
    return 0;
}
/*ME FALTO TIEMPO PARA PONER TODAS LAS FUNCIONES EN EL MAIN PERO SÍ ESTÁN*/
