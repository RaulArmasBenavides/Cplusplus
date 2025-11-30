#pragma once
#include <iostream>

struct punto
{
	float x, y;
};

class circulo
{
private:
	punto c;     // centro
	float r;     // radio
public:
	circulo();
	circulo(float xx, float yy, float rr);
	~circulo();

	void   leer();
	void   ecuacion();
	void   setc(punto cc);
	void   setr(float rr);
	punto  getc();                   // ? ESTA FIRMA
	float  getr();
	void   interseccionx(punto& p, bool& ok);

	friend bool pertenece(circulo k, punto p);
	friend void desplazar(circulo& k, int s, float d);
};

class Circulo2 {
public:
	void   setRadio(float a);  // asignar el radio
	float  getRadio();         // recuperar el radio
	double area();             // calcular y devolver área
	double perimetro();        // calcular y devolver perímetro
	void   print();            // funciones de utilería
private:
	float radio;
};
