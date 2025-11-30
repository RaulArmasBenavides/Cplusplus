#include "Publicacion.h"
#include <cstring>
#include <iostream>

using namespace std;

// ========== Publicacion ==========

Publicacion::Publicacion(int n, Fecha fp2, float precio2)
{
    npag = n;
    fp = fp2;
    precio = precio2;    // <- antes ponías precio = precio;
}

void Publicacion::print() const
{
    cout << "El número de páginas es " << npag << " pags" << endl;
    cout << "La fecha de registro de la publicación es "
        << fp.dia << "/" << fp.mes << "/" << fp.anio << endl;
    cout << "El precio es " << precio << " soles" << endl;
}


// ========== Revista ==========

Revista::Revista(int n, Fecha fp2, float precio2,
    char a1[80], char b1[80], char c1[80], char d1[80])
    : Publicacion(n, fp2, precio2)
{
    strcpy_s(titulo, sizeof(titulo), a1);
    strcpy_s(periodo, sizeof(periodo), b1);
    strcpy_s(tipo, sizeof(tipo), c1);
    strcpy_s(editor, sizeof(editor), d1);
}

void Revista::getTitulo(char tit[])
{
    strcpy_s(tit, 80, titulo);
}

void Revista::getPeriodo(char peri[])
{
    strcpy_s(peri, 20, periodo);
}

void Revista::getTipo(char tip[])
{
    strcpy_s(tip, 20, tipo);
}

void Revista::getEditor(char edit[])
{
    strcpy_s(edit, 80, editor);
}

void Revista::print() const
{
    Publicacion::print();
    cout << "El título de la revista es  " << titulo << endl;
    cout << "El periodo de la revista es " << periodo << endl;
    cout << "El tipo de la revista es    " << tipo << endl;
    cout << "El editor de la revista es  " << editor << endl;
}


// ========== Libro ==========

Libro::Libro(int n, Fecha fp2, float precio2,
    char a1[80], char b1[80], char c1[80], char d1[80])
    : Publicacion(n, fp2, precio2)
{
    strcpy_s(titulo, sizeof(titulo), a1);
    strcpy_s(edicion, sizeof(edicion), b1);
    strcpy_s(autor, sizeof(autor), c1);
    strcpy_s(editorial, sizeof(editorial), d1);
}

void Libro::getTitulo(char tit[])
{
    strcpy_s(tit, 80, titulo);
}

void Libro::getAutor(char peri[])
{
    strcpy_s(peri, 20, autor);
}

void Libro::getEdicion(char tip[])
{
    strcpy_s(tip, 80, edicion);
}

void Libro::getEditorial(char edi[])
{
    strcpy_s(edi, 20, editorial);
}

void Libro::print() const
{
    Publicacion::print();
    cout << "El título del libro es    " << titulo << endl;
    cout << "La edición del libro es   " << edicion << endl;
    cout << "El autor del libro es     " << autor << endl;
    cout << "La editorial del libro es " << editorial << endl;
}
