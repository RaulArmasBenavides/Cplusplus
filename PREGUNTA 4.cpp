// LISTA DOBLEMENTE ENLAZADA
//LA PREGUNTA 4 SE RESUELVE CON LA OPCIÓN 6 DEL MENU
#include <iostream>
#include <cstdlib>
#include<stdio.h>
using namespace std;
class nodo
{ public:
nodo *sig;
nodo *ant;
int dato;
friend class lista;
};

class Lista
{
   nodo *h;
   nodo *t;
   public:
   void Inicializa();
    bool Vacia();
    int Tamano();
    void Mostrar();
    void InsertarInicio(int dato);
    void InsertarFinal(int dato);
    void InsertarPosicion(int dato,int posicion);
    void Eliminar(int posicion);
    void Anular();
    int Recupera(int posicion);
    int Localiza(int dato);
    void Ordena();
};


void Lista::Inicializa()
{
  h=NULL;
  t=NULL;
}

bool Lista::Vacia()
{
  if(h== NULL && t== NULL)
  {
    return true;
  }
  else
  {
     return false;
  }
}

int Lista::Tamano()
{ int cont =0;
  nodo *aux;
  aux = t;
  while ( aux !=NULL)
  {
     cont++;
     aux = aux->sig;
  }
   return cont;
}


void Lista::Mostrar()
{
  nodo *aux;
  aux=h;
  while(aux!= NULL)
   {
       cout<<aux->dato<<endl;
       aux= aux->sig;
   }
}


void Lista::InsertarInicio(int dato)
{
nodo *tmp= new nodo;
tmp ->dato = dato;
tmp->sig = NULL;
tmp->ant = NULL;

if(Vacia())
 {
   h=tmp;
   t=tmp;
 }
else
 { tmp->sig=h;
  h->ant = tmp;
  h=tmp;
 }
}

void Lista::InsertarFinal(int dato)
{
 nodo *tmp= new nodo;
tmp ->dato = dato;
tmp->sig = NULL;
tmp->ant = NULL;

if(Vacia())
{
   h=tmp;
   t=tmp;
}
else
{ t->sig=tmp;
  tmp->ant = t;
  t=tmp;
}
}

void Lista::InsertarPosicion(int dato, int posicion)
{
    nodo *tmp = new nodo;
    tmp ->dato = dato;
    tmp->sig =NULL;
    tmp->ant=NULL;
    if(Vacia())
    {
        h=tmp;
        t=tmp;
    }
   else
   {
       if(posicion=1)
       {
           InsertarInicio(dato);
       }
       else if(posicion == Tamano()+1)
       {
           InsertarFinal(dato);
       }
       else if(posicion >1 && posicion <Tamano()+1)
       {
           nodo *aux;
            aux = h;
         for(int i=1;i<posicion;i++)
         {
             aux = aux ->sig;
         }
         aux->ant->sig=tmp;
         tmp->sig = aux;
         aux->ant = aux->ant;
         aux->ant=tmp;
       }
       else
        { cout<<"POSICION INVALIDA"<<endl;
        }
   }
}


void Lista::Eliminar(int posicion)
{
 nodo *aux;
  if(posicion==1)
  {  aux=h;
    h=h->sig;
   delete(aux);
  }
  else if ( posicion==Tamano())
  {
   aux=t;
   t=t->ant;
   delete(aux);
  }
  else if(posicion >1 || posicion <Tamano())
  {
    aux = h;
    for(int i=1;i<posicion;i++)
    {
      aux=aux->sig;
    }
    aux->ant->sig=aux->sig;
    t->ant=aux->ant;
   delete(aux);
  }
  else
  {
    cout<<"Error,posicion invalida"<<endl;
   }
}


void Lista :: Anular()
{
  nodo *aux;
 while(h!=NULL)
  {
   aux = h;
   h= h->sig;
  delete (aux);
  }
}

int Lista :: Recupera(int posicion)
{
nodo *aux;
if(posicion >=1 && posicion<=Tamano())
 {
  aux = h;
  for(int i=1;i<posicion;i++)
  {
     aux= aux ->sig;
  }
  return aux->dato;
  }
return -1;
}

int Lista :: Localiza(int dato)
{
int cont=1;
  nodo *aux;
  aux =h;
  while(aux != NULL)
  {
   if(aux->dato == dato)
   {
       return cont;
   }
    cont++;
    aux=aux->sig;
}
return -1;
}
void Lista::Ordena()
{
     nodo *aux,*aux2;
    int temp;
    aux = h;
    while(aux->sig != NULL)
    {
    while(aux->sig!=NULL)
     {
         if(aux2->dato < aux->dato)
         {
             temp= aux->dato;
              aux ->dato = aux2->dato;
              aux2->dato= temp;
         }
         aux2= aux2->sig;
     }
     aux=aux->sig;
    }
}
//FUNCION PRINCIPAL
int main()
{
   int opc;
  Lista l;
  l.Inicializa();
  do
  {
  cout<<"1.Ingresar al principio"<<endl;
  cout<<"2.Ingresar al final"<<endl;
  cout<<"3.Ingresar en posicion"<<endl;
  cout<<"4.Mostrar"<<endl;
  cout<<"5.Recuperar"<<endl;
  cout<<"6.Localizar y Eliminar"<<endl;
  cout<<"7.Ordenar"<<endl;
  cout<<"8.Eliminar "<<endl;
  cout<<"9.Anular"<<endl;
  cout<<"10.Salir"<<endl;
  cout<<endl<<"Elija una opcion";
  cin>>opc;
   switch(opc)
   {
   case 1:
   { int num;
    cout<<"Ingresa un numero"<<endl;
     cin>>num;
     l.InsertarInicio(num);
     cin.get();
     cin.get();
    break;
   }
   case 2:
   {
     int num;
     cout<<"Ingrese un numero : "<<endl;
     cin >> num;
     l.InsertarFinal(num);
      cin.get();
     cin.get();
    break;
   }
   case 3:
  {
   int num,pos;
    cout<<"Ingrese un numero"<<endl;
    cin>>num;
    cout<<"Ingrese la posicion"<<endl;
    cin>>pos;
    l.InsertarPosicion(num,pos);
     cin.get();
     cin.get();
    break;
   }
   case 4:
   {
    if(l.Vacia())
    {
      cout<<"La lista esta vacia"<<endl;
     }
    else
    {
      l.Mostrar();
     }
     cin.get();
     cin.get();
    break;
   }
  case 5:
   { int pos;
     if(l.Vacia())
     {
      cout<<"La lista esta vacia"<<endl;
     }
     else
     {  cout<<"Ingrese la posicion";
         cin>>pos;
         if(l.Recupera(pos) ==-1)
      {
          cout<<"Posicion invalida"<<endl;
       }
       else
      {
        cout<<endl<<"Elemento"<<l.Recupera(pos)<<endl;
       }
         cin.get();
     cin.get();
    break;
   }
   case 6:
  {
    int num;
   if(l.Vacia())
   {
    cout<<"La lista esta vacia"<<endl;
   }
   else
   {
    cout<<"Ingrese el elemento";
    cin>>num;
    if(l.Localiza(num) ==-1)
   {
    cout<<"Ese elemento no existe"<<endl;
   }
   else
   {
    cout<<endl<<"Posicion: "<<l.Localiza(num)<<endl;
    cout<<"Eliminando elemento ..."<<endl;
    l.Eliminar(l.Localiza(num));
    }
     cin.get();
     cin.get();
    break;
    }
  case 7:
  {
    if(l.Vacia())
   {  cout<<"La lista esta vacia"<<endl;
   }
   else
  {
    l.Ordena();
   cout<<"Elementos ordenados"<<endl;
   }
 cin.get();
     cin.get();
    break;
   }
   }

  case 8:
{
  int pos;
  if(l.Vacia())
  {  cout<<"La lista esta vacia"<<endl;
   }
  else
   { cout<<"Ingrese la posicion :" ;
    cin>>pos;
    l.Eliminar(pos);
    cout<<"Elemento eliminado"<<endl;
 }
     cin.get();
     cin.get();
    break;
   }
}

case 9:
{
  if(l.Vacia())
  {  cout<<"La lista esta vacia"<<endl;
  }
 else
  { l.Anular();
    cout<<"Elementos eliminados"<<endl;
  }
 cin.get();
     cin.get();
    break;
   }

case 10:
{
 cin.get();
 break;
}
}
}
while(opc!=10);

return 0;
}
