//inclusion de librrias
#include<iostream>
using namespace std;
//declaracion de funciones prototipo
int procesar (int a ,int b );
void procesar (char a, char b, char c[3]);
void procesar (char a[20], char b[20] , char c[20]);
//definicion de funciones

int procesar ( int a , int b)
{   //variable local
    int n
    if( a>b)
     n= a*10+b;
    else
     n= b*10+a;
   return n;
}

void procesar ( char a , char b, char c[3])
{
    if(a>b)
    {

        c[0]=a;
        c[1]=b;
    }

}

//implementacion de la funcion principal
int main()
{
return 0;
}


