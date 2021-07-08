/* Una empresa dedicada a la comercializacion de articulos de seguridad industrial le encarga a usted
calcular unas estadisticas para el area de ventas. Para ello usted analiza el problema y
toma los datos y implementa las siguientes funciones:
a) void ProcesarVentas(int v[], int n).- Esta función recibe como parámetro la cantidad de clientes y lo almacena en n.
Luego en el vector v debe almacenar las ventas (numeros enteros) la cual debe generarse pseudoaleatoriamente en forma automatica.
 Las ventas estaran comprendidos entre 1000 y 10000
b) int ProcesarVentas(int v[],int n, int vm[],int m, int smay, int nc).- Tomando como datos el valor de las ventas almacenadas en v,
se pide copiar en el vector vm todas las ventas superiores a m, donde este ultimo debe ingresar usted.
Ademas deberá calcular la segunda venta mayor y almacenar en smay e indicar a que cliente corresponde la cual se almacena en nc.
Implemente la funcion principal, las 2 funciones dadas y
ademas deberá implementar otras funciones para mostrar las ventas iniciales generadas y las calculadas en la parte b).
*/
#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
//Declaracion de funciones prototipo
void ProcesarVentas(int v[], int n);
int ProcesarVentas(int v[],int n, int vm[],int m, int smay, int nc);
void MostrarVentas(int v[],int n);
//Definicion de funciones
void ProcesarVentas(int v[], int n)
{   int i;
    cout<<"Ingrese la cantidad de clientes"<<endl;
    cin>>n;
    srand(time(0));
    for(i=0;i<n;i++)
    {
        v[i]=1000+rand()% 9001;
    }
    //invocacion de una funcion para visualizar los datos generados
    MostrarVentas(v,n);

}

int ProcesarVentas(int v[],int n, int vm[],int m, int smay, int nc)
{  int i,j=0;
   int m1=0, m2=0, pos;
   cout<<"Ingrese el patron(m) "<<endl;
   cin>>m;


}

void MostrarVentas(int v[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
}
//Funcion principal
int main()
{
 int n,v[80],vm[80],m,smay,nc;
 ProcesarVentas(v,n);
 ProcesarVentas(v,n,vm,m,smay,nc);

return 0;
}
