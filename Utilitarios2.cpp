#include<iostream>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<conio.h> // para getch()
using namespace std;
const int N=20;
//declaracion de funciones prototipo
bool CadenasCirculares(char x1[],char x2[]);
void Ejemplo1(char x,char y);
int RedondearNumero(float a);
bool Esvocal(char x);
void Ejemplo2(char cad[]);
void LeerCodigo1(char c[]);
bool Bisiesto(int a);
void GeneraVectorCadena(char c[],char v[N][N],int &k);
void Generar(char c[N],char nc[N][N]);
//definicion de funciones
bool Bisiesto(int a)
{
     ((a%4==0  && a%100!=0) || (a%400==0))?(true):(false);
}
bool CadenasCirculares(char x1[],char x2[])
{  int tam;
    if(strlen(x1)==strlen(x2))
   { tam=strlen(x1);
     char sub1[N],sub2[N];
     strncpy(sub1,x1,tam/2);
     strncpy(sub2,x1,tam/2);
     char sub3[N],sub4[N];
     strncpy(sub3,x2,tam/2);
     strncpy(sub4,x2,tam/2);
     if((strcmp(sub1,sub4)) && (strcmp(sub2,sub3)))
     return true;
     else
     return false;
   }
   else
        return false;
}
bool Esvocal(char x)
{ tolower(x);
   if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
    return true;
   else
    return false;
}
void Ejemplo1(char x,char y)
{ cout<<"Este ejemplo calcula el numero de consonantes que hay entre dos caracteres"<<endl;
  tolower(x); tolower(y);int conso=0;
  if((x>='a' && x<='z') && (y>='a' && y<='z'))
  {
      for(;x<=y;x++)
      {
          if(Esvocal(x)==false)
            conso++;
      }
  }
    cout<<"Entre ambos caracteres existen " <<conso-1<<"consonantes"<<endl;
}
int RedondearNumero(float a) //MUCHACHOS ACA HAY UN PROBLEMA NO ENCUENTRO EL ALGORITMO CORRECTO , ESTO ES LO QUE MAS SE ASEMEJA
{   int b;
    b=a;
    float m = *(float *)&b; // CONVERSION DE ENTERO A FLOAT ESTE ES LA UNICA MANERA
    float r;
    r=a-m;
    if(r>=0.5)
    return ceil(a);
    else
    return ((ceil(a))-1);
}
void Ejemplo2(char cad[])
{
    int i=0;
 strlwr(cad); //pasa todo a minusculas
 while(cad[i]!='\0')
 {
     if(cad[i]>='a' && cad[i]<='z')
     { if(i%2)
       cad[i]=cad[i]-32;
     }
     i++;
 }

}
void LeerCodigo1(char c[])
{
    int ca,i=0;
    char car;
    cout<<"Ingrese codigo"<<endl;
    cout<<"Ingrese la cantidad maxima de caracteres"<<endl;cin>>ca;
    while(i<ca)
    {
        car=getch();
        //Aqui puedes utilizar los asterisco para no mostrar
        cout<<"*";
        c[i]=car;
        i++;
    }
    cout<<endl;
    c[i]='\0';
}
void Generar(char c[N],char nc[N][N])
{
    int i=0,j,k=0;
    char pal[20];
    while(c[i]!='\0')
    {
        j=0;
        while(c[i]!=' ')
        {
            pal[j]=c[i];
            j++;
            i++;
            if(c[i]== '\0')
                break;
        }
             pal[j]='\0';
            strcpy(nc[k],pal);
            cout<<nc[k]<<endl;
            k++;
            i++;
    }

}
//implementacion de la funcion principal
int main()
{ //declaracion de las variables a utilizar en todos los ejemplos
  char a1[N],a2[N];
  char x,y;
  float n;
  int numero,sistema;
  cout<<"Ejemplo que evalua si dos cadenas son circulares (ejm aviacion y cionavia)"<<endl;
  cout<<"Ingrese primera cadena"<<endl; gets(a1);
  cout<<"Ingrese segunda cadena"<<endl; gets(a2);
  if(CadenasCirculares(a1,a2)==true)
    cout<<"Son circulares "<<endl;
  else
    cout<<"No son circulares"<<endl;
 cout<<"**************************************************************"<<endl;
 cout<<"Redondeo"<<endl;
 cout<<"Ingrese un numero para redondear "<<endl;fflush(stdin);cin>>n;
 cout<<"EL numero redondeado es "<<RedondearNumero(n)<<endl;fflush(stdin);
 cout<<"Este algoritmo sirve para los ejemplos de notas evitando la funcion floor"<<endl;
 cout<<"***************************************************************"<<endl;
 cout<<"Algoritmo para saber cuantas consonantes hay entre dos caracteres"<<endl;
 cout<<"Ingrese un primer caracter"<<endl;fflush(stdin);cin>>x;
 cout<<"Ingrese un segundo caracter"<<endl;fflush(stdin);cin>>y;
 Ejemplo1(x,y);
 cout<<"*****************************************************************"<<endl;
 char cade[N];
 cout<<"ejemplo consiste en una funcion que recibe una cadena de caracteres y que pase de minuscula a mayuscula en posiciones pares"<<endl;
 cout<<"Ingrese una cadena"<<endl;fflush(stdin);gets(cade);
 Ejemplo2(cade);cout<<endl; cout<<"La nueva cadena es..."<<endl;
 puts(cade);
 cout<<"************************************************"<<endl;
 char cadee[N];
 LeerCodigo1(cadee);
 cout<<"*************************************************"<<endl;
 int ano;
 cout<<"Ingrese un año para saber si es bisiesto"<<endl;cin>>ano;
 if(Bisiesto(ano)==true)
    cout<<"Si es bisiesto"<<endl;
 else
    cout<<"No es bisiesto"<<endl;
 cout<<"*********************************************************"<<endl;
 cout<<"Ingrese una cadena larga para separla en vector de cadenas "<<endl;
 char e[N];
 char v[N][N];
 fflush(stdin);gets(e);
 Generar(e,v);
 return 0;
}
