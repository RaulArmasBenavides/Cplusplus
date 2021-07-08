/*
a)Dado 2 numeros enteros positivos ,donde el primero es mayor que el segundo.Se pide calcular la division y el residuo
pero mediante resta sucesivas.
Implementar el algoritmo mediante punteros
b)Dados 2 numeros enteros positivos que corresponde una fraccion a/b , se pide simplificar dicha fraccion
a su expresion minima.Implementar el programa usando punteros.
c)Dado una cadena cualquiera se pide diseñar un algoritmo que permita
borrar los caracteres de la cadena ingresada pero de la derecha e izquiera luego el resultado almacenar en otra cadena
Aplicar punteros
*/
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
//declaracion de funciones prototipo
int mcd(int num1, int num2);
void Simplificar(int *a,int *b);
//definicion de funciones prototipo
int division(int n,int d)
{
  if(n==d)
    return 0;
  else
    if(n>d)
    {  if ((n-d)!=d)
      {
        if((n-d)>d)
            return division(n-d,d);
      }
    else
        return 0;
        }
    else
        return n;
}
int mcd(int num1, int num2) {
    int mcd = 0;
    int a = max(num1, num2);
    int b = min(num1, num2);
    do {
        mcd = b;
        b = a%b;
        a = mcd;
    } while(b!=0);
    return mcd;
}
void Simplificar(int *a,int *b)
{   int k,A,B;
    cout<<"Ingrese numerador";cin>>*a;
    cout<<"Ingrese denominador";cin>>*b;
    A=*a;
    B=*b;
    k=mcd(A,B);
    cout<<"La forma simplificada al maximo de "<< *a<<"/"<<*b<<" es "<<endl;
    cout<<A/k<<"/"<<B/k<<" es "<<endl;
}
void ProcesarCadena(char c[])
{ cout<<"Ingrese cuantos caracteres quiere borrar"<<endl;
  char car=getch();
  int k;// contador
  while(car!=13)
  {
      if(car==8)
        ++k;
  }
 cout<<c;
 size_t tam= c.length(); //obtenemos el tamaño del string
 c.erase(tam-k);
cout<<endl;
cout<<"Nueva cadena"<<endl;
cout<<c;
}
//implementacion de la funcion principal
int main()
{ char palabra= "ejemploalgoritmos";
 int a,b;
 int n,m;
 char c[30];
 cout<<"Ingrese los para la  evaluar la division numeros: ";cin>>n>>m;
 cout<<"El residuo es:"<<division(n,m);
 cout<<endl;
 Simplificar(&a,&b);
 LeerCadena(c);
 ProcesarCadena(c);

return 0;
}
