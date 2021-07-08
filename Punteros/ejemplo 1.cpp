#include<iostream>
#include<stdio.h>
using namespace std;
void Read(char *c);
void LeerNumero(int *n);
void procesar(char *p);
void precaucion(char *x);
int main()
{ char x[30],p[40],t[40];
  int n;
  Read(x);
  //LeerNumero(&n);
  cout<<"Ingrese una cadena"<<endl;
  gets(p);
  procesar(p);
  cout<<"La palabra procesada es "<<p<<endl;
  cout<<"Ingrese otra cadena"<<endl;
  gets(t);
  precaucion(t);
  return 0;
}
void Read(char *c) //lee cadena caracter por caracter y devuelve el numero de vocales fuertes y debiles
{cout<<"Cual es la cadena?" <<endl;
 int f=0,d=0;
 while((*c=getchar())!='\n')
    if(*c=='a' || *c=='e' || *c=='o')
    f++;
    else
    if(*c=='i'|| *c=='u')
    d++;
    c++;
 *c='\0';
 cout<<"Hay "<<f<< " vocales fuertes "<<endl;
 cout<<"Hay "<<d<<" vocales debiles "<<endl;
 cout<<endl;
}
/*void LeerNumero(int *n) //se encarga de leer un numero entero mayor a 10 (validando )
{
    do{
    cout<<"Ingrese numero : ";
    cin>>*n;
    cout<<"El numero ingresado es "<<*n<<endl;
    }while(*n<=10);
    cout<<endl;
}*/
void procesar(char *p) //modifica de esta manera : puntero ---> uptnreo
{
    char *q,c;
    while(*p!='\0')
    {
        q=p+1;
        while(*q!='\0')
        { c=*p;
          *p=*q;
          *q=c;
           p=p+2;
        }
    }
}
void precaucion(char *x)
{
    char *y;
    while(*x!='\0')
    {
        y=x+1;
        while(*y!='\0')
        {
            if(((*x=='a') || (*x=='e') || (*x=='i') || (*x=='o') || (*x=='u'))
               && ((*y=='a') || (*y=='e') || (*y=='i') || (*y=='o') || (*y=='u')) )
                   cout<<"PRECAUCION HAY DOS VOCALES SEGUIDAS "<<endl;
        }
    }
}


