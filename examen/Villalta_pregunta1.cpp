//Pregunta 1
//Alumno : Villalta Pachas Rodrigo Manuel Tito
//Código : 20170299
#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#define T reinterpret_cast <char *>
using namespace std;
//Declaracion de la estructura producto
struct producto
{ char cod[10],desc[30],um[4];
  int qty;
  float cu,puv;
};

//Definicion de las funciones
void CreaArchivo(ofstream &f1)
{ producto p; int n,i;
  f1.open("almacen.dat",ios::binary);
  cout<<"Numero de productos a procesar:"; cin>>n;
  for(i=1;i<=n;i++)
  {cout<<"Producto #"<<i<<endl;
    cout<<"Codigo:";fflush(stdin);gets(p.cod);
    cout<<"Descripcion:";gets(p.desc);
    cout<<"Unidad comercial:";gets(p.um);
    cout<<"Cantidad:";cin>>p.qty;
    cout<<"Costo unitario:";cin>>p.cu;     p.puv=1.25*p.cu;
    //Salvando los datos en disco
    f1.write(T(&p.cod),sizeof(p.cod));
    f1.write(T(&p.desc),sizeof(p.desc));
    f1.write(T(&p.um),sizeof(p.um));
    f1.write(T(&p.qty),sizeof(int));
    f1.write(T(&p.cu),sizeof(p.cu));
    f1.write(T(&p.puv),sizeof(p.puv));
  }
  f1.close();
}

void Listar(ifstream &f2)
{ producto p;
  f2.open("almacen.dat",ios::binary);
  cout<<endl;
  f2.read(T(&p.cod),sizeof(p.cod));
  for(;f2.peek()!=EOF;)
  { f2.read(T(&p.desc),sizeof(p.desc));
    f2.read(T(&p.um),sizeof(p.um));
    f2.read(T(&p.qty),sizeof(int));
    f2.read(T(&p.cu),sizeof(p.cu));
    f2.read(T(&p.puv),sizeof(p.puv));
    cout<<p.cod<<"\t"<<p.desc<<"\t"<<p.um<<"\t"<<p.qty<<"\t"<<p.cu
    <<"\t"<<p.puv<<endl;
    f2.read(T(&p.cod),sizeof(p.cod));
  }
  f2.close();
}

void Compra(ifstream &f2, ofstream &f3)
{ producto p;char x[10];float nc;int cant;
  f2.open("almacen.dat",ios::binary);
  f3.open("tempo.dat",ios::binary);
  cout<<"codigo de producto comprado:";fflush(stdin);gets(x);
  f2.read(T(&p.cod),sizeof(p.cod));
  for(;f2.peek()!=EOF;)
  { f2.read(T(&p.desc),sizeof(p.desc));
    f2.read(T(&p.um),sizeof(p.um));
    f2.read(T(&p.qty),sizeof(int));
    f2.read(T(&p.cu),sizeof(p.cu));
    f2.read(T(&p.puv),sizeof(p.puv));
    if(strcmp(p.cod,x)==0)
    { cout<<"Cantidad comprada:";cin>>cant;
      cout<<"Cuanto costo:";cin>>nc;
      p.qty=p.qty+cant;p.cu=(p.cu+nc)/2;
      p.puv=p.cu*1.25;
    }
    f3.write(T(&p.cod),sizeof(p.cod));
    f3.write(T(&p.desc),sizeof(p.desc));
    f3.write(T(&p.um),sizeof(p.um));
    f3.write(T(&p.qty),sizeof(int));
    f3.write(T(&p.cu),sizeof(p.cu));
    f3.write(T(&p.puv),sizeof(p.puv));

    f2.read(T(&p.cod),sizeof(p.cod));
  }
  f2.close();f3.close();
  //eliminado el arechivo almacen y renombrando
  system("erase almacen.dat");
  system("rename tempo.dat almacen.dat"); //cambiando de nombre
}
//Funcion principal
int main()
{ ofstream file1,file3; ifstream file2;

  CreaArchivo(file1);
  Listar(file2);
  Compra(file2,file3);
  Listar(file2);
}

