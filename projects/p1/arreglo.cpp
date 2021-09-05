#include <iostream>
#include<fstream>
#include "arreglo.h"
using namespace std;

//aleatoriamente se llena n numeros enteros hasta el 100
Arreglo::Arreglo(int n)
{
      nact= n;
      for(int i=0;i<nact;i++)
    {
        datos[i]=1+rand()%N;
        cout<<datos[i];
        cout<<endl;
    }

}

//determina si un numero es primo
bool Arreglo ::esPrimo(int numero) {
  // Casos especiales
  if (numero == 0 || numero == 1 || numero == 4) return false;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return false;
  }
  // Si no se pudo dividir por ninguno de los de arriba, sí es primo
  return true;
}


//determina las ocurrencias de un numero
void Arreglo::operator+(int k)
{ int contador = 0;
    for (int i=0; i<nact; i++){
    //si k se repite
		if (k == datos[i]){
			contador++;
		}
    }
    cout<<"El número se repite " << contador << " veces"<<endl;

}

//imprime los primos del vector
void Arreglo::operator-()
{  //devuelve los numeros primos
   int primos[N];
   int i =0;
   int j =0; // contador de las matrices primas
   for( i = 0; i<nact;i++)
    {
      if(esPrimo(datos[i])==true)
      {
          primos[j] = datos[i];
          j++;
      }
    }
    cout<<"Se contaron " << j+1 <<" números primos" <<endl;
    cout<<"Reporte de números primos"<<endl;
     for (i=0;i<j;i++)
        cout<<primos[i]<<endl;
}



ostream& operator<<(ostream& os,Arreglo &a)
{


}
