#include<iostream>
#include<stdio.h>
#include<string.h>
 //Villalta Pachas Rodrigo 20170299
using namespace std;
struct Fecha
{
    int dia,mes,anio;
};
class Publicacion{
private:
    int npag;
    Fecha fp;
    float precio;
public:
    Publicacion(){}
    Publicacion(int, Fecha ,float); // constructor
    ~Publicacion(){}
    void print();
};
//definicion de funciones miembros de la clase base
Publicacion :: Publicacion(int n,Fecha fp2,float precio2)
{
    npag = n;
    fp=fp2;
    precio=precio;
}
void Publicacion :: print()
{
    cout<<"El número de pagina es "<<npag <<"pags"<<endl;
    cout<<"La fecha de registro de la publicacion es  " <<fp.dia<<"/"<<fp.mes<<"/"<<fp.anio<<" "<<endl;
    cout<<"el precio es "<<precio<<" soles"<<endl;
}
//clase derivada
class Revista : public Publicacion //se refiere a una herencia publica
{ private:
     char titulo[80];
     char periodo[20];
     char tipo[20];
     char editor[80];
  public:
      Revista(){};
      Revista(int n, Fecha fp2, float precio2, char a1[80] ,char b1[80],char  c1[80],char  d1[80]);
      Revista(char,char,char,char); // constructor
      ~Revista(){};
      void getTitulo(char tit[]);
      void getPeriodo(char peri[]);
      void getTipo(char tipo[]);
      void getEditor(char edit[]);
      void print();
};
Revista :: Revista(int n, Fecha fp2, float precio2, char a1[80] ,char b1[80],char  c1[80],char  d1[80]):Publicacion(n,fp2, precio2)
{
    strcpy(titulo,a1);
    strcpy(periodo,b1);
    strcpy(tipo,c1);
    strcpy(editor,d1);
}
void Revista :: getTitulo(char tit[])
{
   tit = titulo;
}
void Revista :: getPeriodo(char peri[])
{
   peri = periodo;
}
void Revista :: getTipo(char tip[])
{
    tip = tipo;;
}
void Revista :: getEditor(char edi[])
{
   edi = editor;
}
void Revista :: print()
{
    Publicacion :: print(); // heredando de la case padre
    cout<<"El título de la revista es  "<<titulo<<endl;
    cout<<"El periodo de la revista es  "<<periodo<<endl;
    cout<<"El tipo de la revista es  "<<tipo<<endl;
    cout<<"El editor de la revista es  "<<editor<<endl;
}


class Libro : public Publicacion //se refiere a una herencia publica
{ private:
     char titulo[80];
     char autor[20];
     char editorial[20];
     char edicion[80];
  public:
      Libro(){};
      Libro(int n, Fecha fp2, float precio2, char a1[80] ,char b1[80],char  c1[80],char  d1[80]);
      Libro(char,char,char,char); // constructor
      ~Libro(){};
      void getTitulo(char tit[]);
      void getEdicion(char tipo[]);
      void getEditorial(char edit[]);
      void getAutor(char peri[]);
      void print();
};


Libro :: Libro(int n, Fecha fp2, float precio2, char a1[80] ,char b1[80],char  c1[80],char  d1[80]):Publicacion(n,fp2, precio2)
{
    strcpy(titulo,a1);
    strcpy(edicion,b1);
    strcpy(autor,c1);
    strcpy(editorial,d1);
}
void Libro :: getTitulo(char tit[])
{
   tit = titulo;
}
void Libro :: getAutor(char peri[])
{
   peri = autor;
}
void Libro :: getEdicion(char tip[])
{
    tip = edicion;;
}
void Libro :: getEditorial(char edi[])
{
   edi = editorial;
}
void Libro :: print()
{
    Publicacion :: print(); // heredando de la case padre
    cout<<"El título del libro es  "<<titulo<<endl;
    cout<<"El edicion de la libro es  "<<edicion<<endl;
    cout<<"El autor de la libro es  "<<autor<<endl;
    cout<<"El editorial de la libro es  "<<editorial<<endl;
}



int main()
{
 //testear
  Publicacion pu();
  Revista re ();
  Libro l();
  return 0;
}
