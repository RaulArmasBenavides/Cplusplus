#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#define GetSize(array_enteros) (sizeof(array_enteros)/sizeof(*(array_enteros)))
using namespace std;
//declaracion de funciones prototipo
bool VectorCapicula(int a , int b ,int X[], int &k);
bool EsCapicua(int num );
int CalcularCifras(int num);

//definicion de funciones prototipo
bool VectorCapicula(int a , int b ,int X[], int &k)
{
    k = 0;
    for (int i=a ; i< b; i++)
    {
        if(EsCapicua(i))
        {
            X[k] = i;
            k++;
        }
    }
   // int longitud=GetSize(X);
    if(k > 0)
    {
        cout<<" El arreglo tiene " << k<< " elementos" <<endl;
        return true;
    }
    else
    {
        return false;
    }
}

 bool EsCapicua(int num )
{
    int resto = 0;
    int cantcifras = CalcularCifras(num);
    if (cantcifras == 2)
   { int aux = num;
     int numInv = 0;
     // método para 2 cifras
     while(aux>0){
         resto=aux%10;
      aux=aux/10;
      numInv=numInv*10+resto;
    }

     if(numInv==num){
        cout << "NUMERO CAPICUO "<<num<<endl;
          return true;
     }
     else{
        cout << "NUMERO NO CAPICUO "<<num<<endl;
          return false;
     }
   }
    else if (cantcifras == 3)
   {
     //método para 3 cifras
     int c1, c2, r1, r2;
     c1 = (num-(num%100))/100;
     r1 = num%100;
     c2 = (r1-(r1%10))/10;
     r2 = r1%10;
     if (num==((r2*100)+(c2*10)+c1)) {
          cout << "NUMERO CAPICUO "<<num<<endl;
          return true;
     } else {
          cout << "NUMERO NO CAPICUO "<<num<<endl;
          return false;
     }
   }
}

//método para calcular las cifras de un número
int CalcularCifras(int num)
 {
     int cifras = 1;

     while (num >=10)
     {
         num/=10;
         cifras++;
     }

     return cifras;
 }


//implementacion de la funcion principal
int main()
{
  int x[100];
  int numeros =0;
  //test de vector capicuas
  VectorCapicula(1,199,x,numeros);
  return 0;
}
