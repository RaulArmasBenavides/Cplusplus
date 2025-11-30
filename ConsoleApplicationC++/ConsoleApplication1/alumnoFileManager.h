#pragma once
#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
using namespace std;
const int N = 50;
//Declarar la estructura
struct alumno
{
	char nombre[15], apellido[15], fec[35], sexo[10], estado[12];
};
class alumnoFileManager
{
	void Ordenar(alumno x[], int n)
	{
		int i, j; alumno t;
		for (i = 0;i < n - 1;i++)
			for (j = i + 1;j < n;j++)
				if (strcmp(x[i].c, x[j].c) > 0)
				{
					t = x[i];
					x[i] = x[j];
					x[j] = t;
				}
	}
	void LeerGuardar(ofstream& f1)
	{
		alumno a[N];int n, i;
		cout << "Numero de Alumnos a procesar:";
		cin >> n;
		for (i = 0;i < n;i++)
		{
			cout << "Procesando alumno #" << i + 1 << endl;
			cout << "Nombre:";fflush(stdin);gets(a[i].c);
			cout << "Apelldio:";gets(a[i].tit);
			cout << "Fecha (dd/mm/aaaa:";gets(a[i].fi);
			cout << "Sexo (dd/mm/aaaa:";gets(a[i].fi);
			cout << "Estado civil (dd/mm/aaaa:";gets(a[i].fi);
		}
		Ordenar(a, n);
		f1.open("datos.txt");
		//Grabando datos en el archivo
		for (i = 0;i < n;i++)
			f1 << a[i].c << " " << a[i].tit << " " << a[i].aut << " "
			<< a[i].fi << " " << a[i].precio << " " << a[i].cant << endl;
		f1.close();
	}

	void Listar(ifstream& f2)
	{
		char cad[180];
		f2.open("Libros.txt");
		f2.getline(cad, 180);
		while (f2.eof() == false)
		{
			cout << cad << endl;
			f2.getline(cad, 180);
		}
		f2.close();
	}

};

