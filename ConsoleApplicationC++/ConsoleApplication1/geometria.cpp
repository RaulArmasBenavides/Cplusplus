#include "circulo.h"
#include <cmath>
using namespace std;

// ====== circulo ======

circulo::circulo()
{
    c.x = 0.0f;
    c.y = 0.0f;
    r = 0.0f;
}

circulo::circulo(float xx, float yy, float rr)
{
    c.x = xx;
    c.y = yy;
    r = rr;
}

circulo::~circulo()
{
}

punto circulo::getc()
{
    return c;
}

float circulo::getr()
{
    return r;
}

void circulo::setc(punto cc)
{
    c = cc;
}

void circulo::setr(float rr)
{
    r = rr;
}

void circulo::leer()
{
    cout << "Centro (x y): ";
    cin >> c.x >> c.y;
    cout << "Radio: ";
    cin >> r;
}

void circulo::ecuacion()
{
    cout << "(x - " << c.x << ")^2 + (y - " << c.y << ")^2 = " << r * r << endl;
}

void circulo::interseccionx(punto& p, bool& ok)
{
    // TODO: implementar lógica real; de momento, decir que no hay intersección
    ok = false;
}

// ====== funciones amigas ======

bool pertenece(circulo k, punto p)
{
    punto c = k.getc();
    float r = k.getr();
    float dx = p.x - c.x;
    float dy = p.y - c.y;
    float dist2 = dx * dx + dy * dy;
    return dist2 <= r * r;
}

void desplazar(circulo& k, int s, float d)
{
    punto ck = k.getc();

    switch (s)
    {
    case 1: // arriba
        ck.y = ck.y + d;
        break;
    case 2: // abajo
        ck.y = ck.y - d;
        break;
    case 3: // derecha
        ck.x = ck.x + d;
        break;
    case 4: // izquierda
        ck.x = ck.x - d;
        break;
    }

    k.setc(ck);
}

// ====== Circulo2 ======

void Circulo2::setRadio(float a)
{
    radio = a;
}

float Circulo2::getRadio()
{
    return radio;
}

double Circulo2::area()
{
    return 3.14 * pow(radio, 2);
}

double Circulo2::perimetro()
{
    return 2.0 * 3.14 * radio;
}

void Circulo2::print()
{
    cout << "Radio: " << radio
        << ", area: " << area()
        << ", perimetro: " << perimetro()
        << endl;
}
