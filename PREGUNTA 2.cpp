//LISTA ENLAZADA
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stdio.h>
using namespace std;
class ENTERO
{
public:int num;
public:
void menu()
	{
		cout<< "\nMENU DE OPCIONES\n";
		cout<< "----------------\n" ;
		cout<< "<1>. Ingresar Lista\n";
        cout<< "<2>. Mostrar  Lista\n";
		cout<<" <3>. Eliminar pares\n";
		cout<< "<4>. Salir\n";
	}
	void ingresarEntero()
	{
		fflush(stdin);
cout<<"\n Ingresar entero: ";cin>>num;
}
void mostrarEntero()
	{
		cout<<num<<setw(4);
	}
};
class LISTA
{
ENTERO info;
LISTA *sgte;
public:
void ingresarLista(LISTA *&raiz,ENTERO x)
		{
			LISTA *q;
			LISTA *n =new LISTA;
			n->info=x;
			if(raiz==NULL)
				raiz=n;
			else
			{
				q=raiz;
				while(q->sgte!= NULL)
					q=q->sgte;
				q->sgte=n;
			}
			n->sgte=NULL;
		}
/*
void concatenarLista(LISTA *raiz1, LISTA *raiz2, LISTA *&raiz3)
		{
LISTA *p,*q;
			p=raiz1;
			while(p!=NULL)
			{
ingresarLista(raiz3,p->info);
p=p->sgte;
}
			q=raiz2;
while(q!=NULL)
			{
ingresarLista(raiz3,q->info);
q=q->sgte;
}
}
*/
void mostrarLista(LISTA *raiz)
{
LISTA *p=raiz;
while(p!=NULL)
			{
p->info.mostrarEntero();
p=p->sgte;
}
}

void eliminarPares(LISTA *raiz)
{
    // Se pregunta si la lista no está vacía
  LISTA *p=raiz;
while(p!=NULL)
{
     LISTA *aux_borrar;
     LISTA *anterior = NULL;

     aux_borrar= raiz;
     //Recorriendo la lista
     while(aux_borrar!=NULL)
     {
         anterior = aux_borrar;
         aux_borrar = aux_borrar->sgte;
     }

     if(aux_borrar->info.num%2==0)
     {
         raiz = raiz->sgte;
         delete aux_borrar;
     }
}
}
}
;


int main()
{
char opcion;
ENTERO e;
	LISTA list,*raiz1=NULL;
	do
	{
		e.menu();
		cout<<"ingrese opcion : ";
		opcion =cin.get();
		switch (opcion)
		{
			case '1':
        e.ingresarEntero();
        list.ingresarLista(raiz1,e);
        break;
        case '2':
        cout<<"\n Lista 1 \n";
        list.mostrarLista(raiz1);
        break;
        case '3':
        cout<<"\n Lista\n";
        list.eliminarPares(raiz1);
		}
		cin.ignore();
	}
	   while (opcion !='4');
       return 0;
}

