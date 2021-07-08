/*Construir un programa que permita ingresar codigo , nombre , sueldo  y condicion (Estable y contratado) de n empleados , de acuerdo
con su condición el sueldo varía en:
Estable---> 2600
Contratado--->2100 *
Luego calcula el total de empleados estables y contratados y ordene los datos de acuerdo con el codigo e imprima sus datos */
#include<iostream>
#include<stdio.h>
struct empleado {
char cod[20],nom[20],cond[10];
int suel;
};
void Ingresardatos();
void Imprimir datos();
using namespace std;//hace disponibles los nombres std sin el prefijo "std::"
int main()
{

}
