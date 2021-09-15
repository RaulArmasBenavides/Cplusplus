/*
  Permite formar un nuevo numero con el contenido del vector x y lo almacena en a,
  si no se generó el vector x , se almacena -1 en a
*/

#include<iostream>
using namespace std;
class Numero
{ private:
 int n;
 int a;
 int m;
 int x[50];
 public:
 void Inicia(int b);
 int GetNumero();
 bool GeneraVector();
 void PrintVector();
 void NuevoNumero();
 void GetNuevoNumero(int &z);
};
//Implmentacion de las funciones miemmbros de la clase
void Numero:: Inicia(int b)
{
    n=b;
}
int Numero :: GetNumero()
{
    return n;
}
bool Numero :: GeneraVector()
{ int y,d;
 bool t=false;
 y=n;m=0;
 for(;y>0;)
 { d=y%10;
 if((d==2)||(d==3)||(d==5)||(d==7))
 { x[m]=d;
   m++;
   t=true;
 }
 y=y/10;
 }
 return t;
}
void Numero ::PrintVector()
{
    int i;
    cout<<"\nVector X"<<endl;
    for(i=0;i<m;i++)
    cout<<"X["<<i<<"]= "<<x[i]<<endl;
    cout<<endl;
}
void Numero :: NuevoNumero()
{ int i;
  a=0;
  for(i=0;i<m;i++)
    a=a*10+x[i];
}

void Numero :: GetNuevoNumero (int &z)
{
    z=a;
    cout<<"El nuevo numero "<<z<<endl;
}
//implementacion de la funcion principal
int main()
{ Numero num;
  int p,q;
  cout<<"Ingrese un numero"<<endl;cin>>p;
  num.Inicia(p);
  num.GeneraVector();
  num.PrintVector();
  num.NuevoNumero();
  num.GetNuevoNumero(q);
return 0;
}
