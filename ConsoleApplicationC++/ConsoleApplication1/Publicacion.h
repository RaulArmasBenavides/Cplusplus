#pragma once
struct Fecha
{
    int dia, mes, anio;
};

class Publicacion {
protected:
    int   npag;
    Fecha fp;
    float precio;
public:
    Publicacion() = default;
    Publicacion(int n, Fecha fp2, float precio2);
    virtual ~Publicacion() = default;

    virtual void print() const;
};


// =================== Revista ===================

class Revista : public Publicacion
{
private:
    char titulo[80];
    char periodo[20];
    char tipo[20];
    char editor[80];

public:
    Revista() = default;
    Revista(int n, Fecha fp2, float precio2,
        char a1[80], char b1[80], char c1[80], char d1[80]);
    ~Revista() override = default;

    void getTitulo(char tit[]);
    void getPeriodo(char peri[]);
    void getTipo(char tip[]);
    void getEditor(char edit[]);

    void print() const override;
};


// =================== Libro ===================

class Libro : public Publicacion
{
private:
    char titulo[80];
    char autor[20];
    char editorial[20];
    char edicion[80];

public:
    Libro() = default;
    Libro(int n, Fecha fp2, float precio2,
        char a1[80], char b1[80], char c1[80], char d1[80]);
    ~Libro() override = default;

    void getTitulo(char tit[]);
    void getAutor(char peri[]);
    void getEdicion(char tip[]);
    void getEditorial(char edi[]);

    void print() const override;
};
