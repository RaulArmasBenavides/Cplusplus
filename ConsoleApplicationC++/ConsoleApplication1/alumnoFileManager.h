#pragma once
#include <iostream>
#include <fstream>
#include <cstring>   
 
const int N = 50;
struct alumno
{
    char nombre[15];
    char apellido[15];
    char fec[35];   
    char sexo[10];
    char estado[12]; 
};

class alumnoFileManager
{
private:
    // Ordenar alfabéticamente por apellido (o por nombre si prefieres)
    //selection sort / intercambio
    void Ordenar(alumno x[], int n)
    {
        int i, j;
        alumno t;
        for (i = 0; i < n - 1; i++)
            for (j = i + 1; j < n; j++)
                // aquí comparo por apellido; podrías usar x[i].nombre si quieres
                if (strcmp(x[i].apellido, x[j].apellido) > 0)
                {
                    t = x[i];
                    x[i] = x[j];
                    x[j] = t;
                }
    }

public:
    void LeerGuardar(std::ofstream& f1)
    {
        alumno a[N];
        int n, i;

        std::cout << "Numero de Alumnos a procesar: ";
        std::cin >> n;
        std::cin.ignore(); // limpiar el salto de línea pendiente

        for (i = 0; i < n; i++)
        {
            std::cout << "Procesando alumno #" << i + 1 << std::endl;
            std::cout << "Nombre: ";
            std::cin.getline(a[i].nombre, 15);
            std::cout << "Apellido: ";
            std::cin.getline(a[i].apellido, 15);
            std::cout << "Fecha nacimiento (dd/mm/aaaa): ";
            std::cin.getline(a[i].fec, 35);
            std::cout << "Sexo: ";
            std::cin.getline(a[i].sexo, 10);
            std::cout << "Estado civil: ";
            std::cin.getline(a[i].estado, 12);
            std::cout << std::endl;
        }

        // Ordenar por apellido
        Ordenar(a, n);

        // Guardar datos en el archivo
        f1.open("datos.txt");
        if (!f1)
        {
            std::cout << "No se pudo abrir el archivo datos.txt para escritura" << std::endl;
            return;
        }

        for (i = 0; i < n; i++)
        {
            f1 << a[i].nombre << " "
                << a[i].apellido << " "
                << a[i].fec << " "
                << a[i].sexo << " "
                << a[i].estado << std::endl;
        }

        f1.close();
    }

    void Listar(std::ifstream& f2)
    {
        char cad[180];

        f2.open("datos.txt");   // mismo archivo que usamos al grabar
        if (!f2)
        {
            std::cout << "No se pudo abrir el archivo datos.txt para lectura" << std::endl;
            return;
        }

        f2.getline(cad, 180);
        while (!f2.eof())
        {
            std::cout << cad << std::endl;
            f2.getline(cad, 180);
        }

        f2.close();
    }
};
