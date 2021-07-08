//Escribir un programa que lea una cadena de caracteres y cuente el numero de palabras
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int nroPalabras=1,n,i,x;
    char s1[100];
    cout<<"Ingrese cadena: "<<endl;
    gets(s1);
    n=strlen(s1);
    for(i=0;i<n;i++)
    {
        if(s1[i]==' ')
          nroPalabras=nroPalabras+1;
    }
    x=nroPalabras;
    cout<<"Numero de palabras " <<x<<endl;
    return 0;
}
