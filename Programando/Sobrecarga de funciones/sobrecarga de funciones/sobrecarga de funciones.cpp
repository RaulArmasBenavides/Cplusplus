/* sobrecargar una funcion enigma, que cuando reciba como parámetro
 un numero entero convierta un numero entero a un numero romano
 y cuando reciba como parámetro el nombre de una persona diga el numero de la
 suerte, que se calcula como el modulo de dicho numero entre 9
*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
//Declaracion de funciones prototipo
void Enigma(int);
void Enigma(char);
//Definicion de funciones
void Enigma(int n)
{
int entero,res;
cout<<"Ingrese un numero"<<endl;
cin>>n;
entero = n/100;
res = n%100;
switch(entero)
{
case 1: cout<<"C"; break;
case 2: cout<<"CC"; break;
case 3: cout<<"CCC"; break;
case 4: cout<<"CD"; break;
case 5: cout<<"D"; break;
case 6: cout<<"DC"; break;
case 7: cout<<"DCC"; break;
case 8: cout<<"DCCC"; break;
case 9: cout<<"CM"; break;
}
entero = res/10;
res=res%10;
switch(entero)
{
case 1: cout<<"X"; break;
case 2: cout<<"XX"; break;
case 3: cout<<"XXX"; break;
case 4: cout<<"XL"; break;
case 5: cout<<"L"; break;
case 6: cout<<"LX"; break;
case 7: cout<<"LXX"; break;
case 8: cout<<"LXXX"; break;
case 9: cout<<"XC"; break;
}
switch(res)
{
case 1: cout<<"I"; break;
case 2: cout<<"II"; break;
case 3: cout<<"III"; break;
case 4: cout<<"IV"; break;
case 5: cout<<"V" ; break;
case 6: cout<<"VI"; break;
case 7: cout<<"VII"; break;
case 8: cout<<"VIII"; break;
case 9: cout<<"IX"; break;
}
cout<<endl;
}
void Enigma(char x[])
{   //nro de suerte(pseudoaleatorio)
    int nro;
    cout<<"Ingrese su nombre(1 solo nombre)"<<endl;
    fflush(stdin);gets(x);
    if(strlen(x)!=0)
    {
    nro=rand()%9;
    cout<<"El numero de suerte es "<<nro<<endl;
    }
    else
    cout<<"No hay nombre"<<endl;
}
//funcion principal
int main()
{
//declaracion de variables
int m;
char nom[20];
//invocacion de funciones
Enigma(m);
Enigma(nom);
return 0;
}
