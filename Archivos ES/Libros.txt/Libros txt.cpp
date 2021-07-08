#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
using namespace std;
const int N=50;
//Declarar la estructura
struct book
{ char c[15],tit[35],aut[30],fi[12];
float precio;
int cant;
};
void Ordenar(book x[],int n)
{ int i,j; book t;
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(strcmp(x[i].c,x[j].c)>0)
{ t=x[i];
x[i]=x[j];
x[j]=t;
}
}
void LeerGuardar(ofstream &f1)
{ book a[N];int n,i;
cout<<"Numero de Librois a procesar:";
cin>>n;
for(i=0;i<n;i++)
{ cout<<"Procesando libro #"<<i+1<<endl;
cout<<"Codigo:";fflush(stdin);gets(a[i].c);
cout<<"Titulo:";gets(a[i].tit);
cout<<"Autor:";gets(a[i].aut);
cout<<"Fecha (dd/mm/aaaa:";gets(a[i].fi);
cout<<"Precio:";cin>>a[i].precio;
cout<<"Cantidad:";cin>>a[i].cant;
}
Ordenar(a,n);
f1.open("Libros.txt");
//Grabando datos en el archivo
for(i=0;i<n;i++)
f1<<a[i].c<<" "<<a[i].tit<<" "<<a[i].aut<<" "
<<a[i].fi<<" "<<a[i].precio<<" "<<a[i].cant<<endl;
f1.close();
}

void Listar(ifstream &f2)
{ char cad[180];
f2.open("Libros.txt");
f2.getline(cad,180);
while(f2.eof()==false)
{ cout<<cad<<endl;
f2.getline(cad,180);
}
f2.close();
}


//Funcion principal
int main()
{ ofstream arch1;

   ifstream arch2;
   LeerGuardar(arch1);

  Listar(arch2);

}

