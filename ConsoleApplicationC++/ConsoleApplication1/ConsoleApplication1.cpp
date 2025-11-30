// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string.h>
#include <stdio.h>

#include "circulo.h"
#include "angulo.h"
#include "AlumnoUNMSM.h"

using namespace std;
int main()
{
	char c[10], n[10];
	fflush(stdin);

	cout << "Ingrese codigo" << endl;
	cin.getline(c, sizeof(c));     // reemplaza gets(c);

	cout << "Ingrese nombre" << endl;
	cin.getline(n, sizeof(n));     // reemplaza gets(n);
	//creando el objeto
	alumnoUNMSM a(c, n);
	a.getDatos();
	std::cout << "Hello World!\n";
	cout << "El promedio simple es " << a.promedio() << endl;
	cout << "El promedio ponderado es " << a.promPonderado() << endl;

	Circulo2 cir;
	cir.setRadio(10);
	cout << "El radio del circulo es " << cir.getRadio() << endl;
	cout << "El área del círculo es " << cir.area() << endl;

	//angulo
	angulo ang(30);
	seno x;
	ang.print();
	x.valor();

	return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
