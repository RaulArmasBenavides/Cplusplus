/*
a)Dado 2 numeros enteros positivos ,donde el primero es mayor que el segundo.Se pide calcular la division y el residuo
pero mediante resta sucesivas.
Implementar el algoritmo mediante punteros
b)Dados 2 numeros enteros positivos que corresponde una fraccion a/b , se pide simplificar dicha fraccion
a su expresion minima.Implementar el programa usando punteros.
c)Dado una cadena cualquiera se pide diseñar un algoritmo que permita
borrar los caracteres de la cadena ingresada pero de la derecha e izquiera luego el resultado almacenar en otra cadena
Aplicar punteros

*/
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#define GetSize(array_enteros) (sizeof(array_enteros)/sizeof(*(array_enteros)))
using namespace std;
//declaracion de funciones prototipo
int mcd(int num1, int num2);
void Simplificar(int *a,int *b);
bool VectorCapicula(int a , int b ,int X[], int &k);
bool EsCapicua(int num );
int CalcularCifras(int num);

//definicion de funciones prototipo
int division(int n,int d)
{
  if(n==d)
    return 0;
  else
    if(n>d)
    {  if ((n-d)!=d)
      {
        if((n-d)>d)
            return division(n-d,d);
      }
    else
        return 0;
        }
    else
        return n;
}
int mcd(int num1, int num2) {
    int mcd = 0;
    int a = max(num1, num2);
    int b = min(num1, num2);
    do {
        mcd = b;
        b = a%b;
        a = mcd;
    } while(b!=0);
    return mcd;
}
void Simplificar(int *a,int *b)
{   int k,A,B;
    cout<<"Ingrese numerador";cin>>*a;
    cout<<"Ingrese denominador";cin>>*b;
    A=*a;
    B=*b;
    k=mcd(A,B);
    cout<<"La forma simplificada al maximo de "<< *a<<"/"<<*b<<" es "<<endl;
    cout<<A/k<<"/"<<B/k<<" es "<<endl;
}
void ProcesarCadena(char c[])
{
//{ cout<<"Ingrese cuantos caracteres quiere borrar"<<endl;
//  char car=getch();
//  int k;// contador
//  while(car!=13)
//  {
//      if(car==8)
//        ++k;
//  }
// cout<<c;
// size_t tam= c.length(); //obtenemos el tamaño del string
// c.erase(tam-k);
//cout<<endl;
//cout<<"Nueva cadena"<<endl;
//cout<<c;
}




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


    int longitud=GetSize(X);
    if(longitud > 0)
    {
        cout<<" El arreglo tiene " << k<< "elementos" <<endl;
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



 //Método recursivo para fibonacci
 float fibo(int n)
{
    if(n==0 || n==1) //caso base
        return n;
    else
        return fibo(n-1)+fibo(n-2); // la funcion se llama asi mismo
}


//implementacion de la funcion principal
int main()
{
// char palabra= "ejemploalgoritmos";
 int a,b;
 int n,m;
 char c[30];
 cout<<"Ingrese los para la  evaluar la division numeros: ";cin>>n>>m;
 cout<<"El residuo es:"<<division(n,m);
 cout<<endl;
 //Simplificar(&a,&b);
 //LeerCadena(c);
 //ProcesarCadena(c);


 int x[100];
 int numeros =0;
 //test de vector capicuas
 VectorCapicula(1,199,x,numeros);
 return 0;
}


