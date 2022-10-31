#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
const char NULO = '\0';

bool FindItem(char y[5],char itemToFind)
{
    bool resultado = false;
    for(int i = 0; i < sizeof(y); i++){
     if(y[i] == itemToFind){
        resultado= true;
     }
    }
    return resultado;
}

int proceso( char p1[100], char p2[100] )
{
    int resultado = 0;
	int i;
	i = 0;
	while ( p1[i] != NULO )
	{
		if (FindItem(p2,p1[i]))
		{
			resultado = 1;
		}
		else{
            resultado = 0;
		}
		i++;
	}
	if(resultado ==1)
    {
        cout<<"Se encontraron todas las letras"<<endl;
    }
	return resultado;
}

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    char enteros[] = "hola que tal";
    char enteros2[] = "hola";
    cout<<"RESULTADO : "<<proceso(enteros,enteros2);
}
