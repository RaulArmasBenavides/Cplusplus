#include<iostream>
using namespace std;
//declaracion de funciones prototipo


//definicion de funciones


//implementacion de la funcion principal
int main()
{
 int x=6, y=10;

	do {

		x=x+4;

		if(x%3==0)

			y=y-2;

	}

	while(x<20);

	cout<<"El valor de y es "<<y<<endl;
return 0;
}
