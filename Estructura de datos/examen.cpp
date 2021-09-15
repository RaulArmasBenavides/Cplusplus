#include<iostream>
using namespace std;
//declaracion de funciones prototipo


//definicion de funciones


//implementacion de la funcion principal
int main()
{ int con=1, s=0;
  int nro;
  cout<<"Ingrese numero "<<endl;
  cin>>nro;
  cout<<endl;
  while (con < nro) {
                               if (con % 2 == 0)
                                               s = s + con;
                               con = con + 1;
                }
   cout<<"esa suma es "<<s<<endl;
}

