/*Diseñe un algoritmo que permita guardar en un vector el numero de RUC y en otro vector la razon social
del cliente y además deberá registrar en un vector de tipo flotante las ventas registradas en base a estos se pide lo siguiente:
a)Lectura de datos (asumir que se tiene n clientes)
b)Determinar cual es el cliente que tiene la mayor venta ,luego deberá mostrar los resultados
c)Realizar el ordenamiento por orden alfabetico en forma ascendente

En base al problema resuelto implemente lo siguiente:
d)Determinar la cantindad de clientes existentes cuya venta sea superior al promedio
e)Filtrar todos los clientes cuyo nombre empienza con un caracter,el valor de este lo define usted
*/
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
//Declaracion de funciones prototipo
void LeerDatos(int n,char nm[80][80],int x[],char y[],float z[]);
void BusquedaMayor(int n,int x[],char y[80][80],float z[]);
void OrdenarDatos(char nm[80][80],int &n);
void Listar(char nm[80][80],int &n);
float Calculoprom(float v[],int n);
void Evaluar(float v[],int n,float prom);
void Filtrar(int n,char nm[80][80]);
//Definicion de funciones
void LeerDatos(int &n,char nm[80][80],int x[],char y[80][80],float z[])
{
    cout<<"Ingrese el numero de clientes"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {   cout<<"Ingrese el nombre del cliente  #"<<i<<endl;
        fflush(stdin);gets(nm[i]);
        cout<<"Ingrese el RUC del cliente #"<<i<<endl;
        cin>>x[i];
        cout<<"Ingrese la razon social del cliente #"<<i<<endl;
        fflush(stdin);
        gets(y[i]);
        cout<<"Ingrese las ventas "<<endl;
        fflush(stdin);cin>>z[i];
    }
}
void BusquedaMayor(int &n,char nm[80][80],int x[],char y[80][80],float z[])
{ float mayor;
  int i,in;
  mayor=z[0];
  for(i=0;i<n-1;i++)
  {    if(z[i]<z[i+1])
      {
       mayor=z[i+1];
       in=i+1;
      }
  }
cout<<"La mayor venta se registro en el cliente #"<<in<<" siendo esta de "<<mayor<<endl;
cout<<"El cliente es " <<nm[in]<<endl;
cout<<"con numero de RUC: "<<x[in]<<endl;
cout<<"razon social: "<<y[in]<<endl;
}
void OrdenarDatos(char nm[80][80],int &n)
{
int j, i;
char temp[80];
for(i=0;i<n-1; i++)
for(j=n-1;j>i;j--)
if(strcmp(nm[j-1],nm[j])>0)
{
strcpy(temp, nm[j-1]);
strcpy(nm[j-1], nm[j]);
strcpy(nm[j], temp);
}
}
void Listar(char nm[80][80],int &n)
{
int i;
cout <<"***LISTADO DE NOMBRES ORDENADO DE FORMA ASCENDENTE***"<<endl<<endl;
for(i=0;i<n;i++)
{
cout << nm[i] << endl;
}
cout<<endl;
}
float Calculoprom(float v[],int n)
{ float sum,prom;
  sum=0;
    for(int i=0;i<n;i++)
     {
        sum+=v[i];
     }
    prom=sum/n;
    cout<<"El promedio de las ventas es "<<prom<<endl;
    return prom;
}
void Evaluar(float v[],int n,float prom)
{ int cant=0; //utilizaremos un contador(cant)que exprese la cantidad de empleados que superan el promedio de las ventas
  for(int i=0;i<n;i++)
  {
      if(v[i]>prom)
        cant++;
  }
  cout<<"Existen "<<cant<<" empleados que superan el promedio de ventas"<<endl;
}
void Filtrar(int n,char nm[80][80])
{ char car;
  int i,k;
  char filtro[80][80];
  cout<<"Ingrese el caracter(que sera la inicial del nombre) que desea filtrar"<<endl;
  fflush(stdin);
  cin.get(car);
  k=0;
  cout<<endl;
   for(i=0;i<n;i++)
    { if(nm[i][0]!=car)
      { //se mete en el vector de cadenas
          strcpy(filtro[k],nm[i]);
          cout<<filtro[k]<<endl; //imprime el nombre que no comienza con dicho caracter
          k++;
      }
    }
}
int main()
{   //declaracion de variables
    int n,ruc[80];
    char rs[80][80],nom[80][80];
    float v[80],prom;
    LeerDatos(n,nom,ruc,rs,v);
    BusquedaMayor(n,nom,ruc,rs,v);
    OrdenarDatos(nom,n);
    Listar(nom,n);
    prom=Calculoprom(v,n);
    Evaluar(v,n,prom);
    Filtrar(n,nom);
    return 0;
}
