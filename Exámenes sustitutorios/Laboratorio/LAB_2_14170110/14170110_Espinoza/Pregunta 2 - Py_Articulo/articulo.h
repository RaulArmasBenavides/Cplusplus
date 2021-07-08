#ifndef ARTICULO_H
#define ARTICULO_H

#define N 256

class Articulo{
public:
    Articulo();
    ~Articulo();

    friend void LlenarArticulos(Articulo a[N], int n);
    friend void ImprimirArticulos(Articulo a[N], int n);
    friend void BuscarArticulo(Articulo a[N], int n, char cod[N]);
    friend void PrecioArticulo(Articulo a[N], int n, char des[N], char marca[N]);
    friend void Totalizar(Articulo a[N], int n);

private:
    char Codigo[12];
    char Descri[N];
    char Marca[30];
    float Precio;
    int Cantidad;
};

#endif // ARTICULO_H
