#include<iostream>
#include<stdio.h>
using namespace std;
//declaracion de funciones prototipo
void procesar1(char *p);
int miStrlen(char *s);
bool esVocal(char c);
bool esMayuscula(char c);
bool esMinuscula(char c);
char *proceso2(char *p);
//definicion de funciones prototipo
int miStrlen(char *s)
{ int i=0;
  while(*s++)
    i++;
  return i;
}
bool esVocal(char c)
{ if(c=='A' || c=='E'|| c=='|'||c=='O' || c=='U'|| c=='a'|| c=='e' || c=='i'|| c=='o'|| c=='u')
    return true;
    else
    return false;
}
bool esMayuscula(char c)
{ if(c>='A' && c<='Z')
   return true;
   else
    return false;
}
bool esMinuscula(char c)
{  if(c>='a' && c<='z')
   return true;
   else
    return false;
}
char *proceso2(char *p)//consonantes a mayusculas y vocales a minusculas
{ char c;
int tam=miStrlen(p);
cout<<"El tamanio de p es "<<tam<<endl;
char *q = new char [tam+1];
q=p;
char *r =q;
while(*q)
{
    if(((*q)>='A' && (*q)<='Z' || (*q)>='a' && (*q)<='z'  ))
    {
        if(esVocal(*q)==true)
        {
            if(esMayuscula(*q)==true)
                *q=*q+32;

        }
        else
            if(esMinuscula(*q)==true)
            *q=*q-32;
    }
    q++;
}
return r;
}


void proceso1 ( char *p)
{
    char *q,c;
    while(*p!='\0')
    {
        q=p+1;
        if(*q!='\0')
        {
            c=*p;
            *p=*q;
            *q=c;
            p=p+2;
        }
        else
            break;
    }
}
//implementacion del main
int main()
{ char palabra[20],cadena[20];
  cout<<"Ingrese una palabra"<<endl;
  gets(palabra);
  proceso1(palabra);
  puts(palabra);
  cout<<"Ingrese una cadena para el proceso2"<<endl;
  gets(cadena);
  cout<<proceso2(cadena);

return 0;
}
