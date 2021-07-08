//Dividir en Tokens
#include <iostream>
#include<stdio.h>
using std::cout;
using std::endl;
#include<string.h>
int main()
{
  char frase[]="Me hola papa se jajajaja van a dividir jojo jojo ji";
  char *ptr;
  cout << "LA FRASE ANTES: " << frase << endl;
  ptr = strtok(frase," ");//argumentos: frase, caracter delimitador
  while(ptr != NULL)
    {
      if((strlen(ptr))%2!=0)
      {
         cout << ptr << endl;
         ptr = strtok(NULL, " ");
      }
    }

  return 0;
}
