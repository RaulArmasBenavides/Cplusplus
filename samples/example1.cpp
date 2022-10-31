//inclusion de librrias
#include<iostream>
using namespace std;
const char NULO = '\0';
//declaracion de funciones prototipo
int procesar (int a ,int b );
void procesar (char a, char b, char c[3]);
void procesar (char a[20], char b[20] , char c[20]);
//definicion de funciones

int reemplazar( char f[100], char c1, char c2 )
{
	int i,nr;
	nr = 0;
	i = 0;
	while ( f[i] != NULO )
	{
		if ( f[i] == c1 )
		{
			f[i] = c2;
			nr++;
		}
		i++;
	}
	return nr;
}
int procesar ( int a , int b)
{   //variable local
    int n;
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
    char frase[100], car1, car2;
	int nremp;
	cout << "Ingrese una frase: ";
	gets( frase );
	cout << "Ingrese caracter que desea reemplazar: ";
	cin >> car1;
	cout << "Ingrese el nuevo caracter: ";
	cin >> car2;
	nremp = reemplazar( frase, car1, car2);
	if ( nremp == 0 )
	{
		cout << endl << "No se realizo ningun reemplazo" << endl;
		cout << "La frase sigue siendo: " << frase << endl;
	}
	else
	{
		cout << endl << "Se realizaron " << nremp << " reemplazos de " << car1 << " por " << car2 << endl;
		cout << "La nueva frase es: " << frase << endl;
	}
 	return 0;
   return 0;
}


