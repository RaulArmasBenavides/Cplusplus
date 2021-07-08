#include<iostream>
#include<stdio.h>
using namespace std;

int longcad(char *s)
{
    int i=0;
    while(*s++)
        i++;
 return i;
}
int comparacad( char*s1,char *s2)
{
    while(*s1 && *s1=*s2)
    {
        s1++;
        s2++;
    }
    return (int)(*s1-*s2);
}
int main()
{ int n ;
  char cad[80];
  cout<<"Ingrese cadena"<<endl;
  gets(cad);
  n=longcad(cad);
  cout<<"El tamanimo de la cadena es "<<n<<endl;
  return 0;
}
