#include<iostream>
using namespace std;
//declaracion de funciones prototipo


//definicion de funciones
int enigma (int n)
{ static int s=0;
 int m;
 int k=n,i=-1;
  if(n==0)
    return s;//caso base
  else
  {
    k=k-1;
    i=-i;
    return enigma(n-1)+i*k*k;
  }
}

//implementacion de la funcion principal
int main()
{ int n;
 cout<<"Ingrese un numero"<<endl;
 cin>>n;
 cout<<enigma(n);

return 0;
}
