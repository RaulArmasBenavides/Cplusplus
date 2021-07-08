/* PREGUNTA 3: (6 Puntos)
Escriba un programa que defina una función cuyo prototipo es:
void ProcesaFecha(char s1[ ], char s2[ ]).- En s1 se recibe una fecha
en el siguiente formato: “18/09/2014” a partir de esta se deberá almacenar
en s2 la fecha según lo siguiente: s2 = “18 de Setiembre de 2014”
*/
#include <iostream>
#include <cstdio>
#define N 256

//PROTOTIPOS
void ProcesaFecha(char s1[N], char s2[N]);

using namespace std;
int main()
{
    char s1[N],s2[N];
    cout<<"Ingrese la fecha (dd/mm/aaaa): ";gets(s1);
    ProcesaFecha(s1,s2);
   return 0;
}

//DEFINICIÓN DE FUNCIONES
void ProcesaFecha(char s1[N], char s2[N])
{
    int mes1,mes2; // Identifican el mes
    mes1=s1[4];
    mes2=s1[5];
    s2[2]=' ';s2[3]='d';s2[4]='e';s2[5]=' ';
    for(int i=0;i<100;i++)
    {
        if(i<2)
        s2[i]=s1[i];
        if(i>5)
        {
            if(s2[6]==0)
            {
              switch(s2[7])
              case 1:s2[6]="enero";break;
              case 2:s2[6]="febrero";break;
              case 3:s2[6]="marzo";break;
              case 4:s2[6]="abril";break;
              case 5:s2[6]="mayo";break;
              case 6:s2[6]="junio";break;
              case 7:s2[6]="julio";break;
              case 8:s2[6]="agosto";break;
              case 9:s2[6]="octubre";break;

            }
            if(s2[6]==1)
            {
                switch(s2[7])
                case 1: s2[6]="noviembre";break;
                case 1: s2[6]="diciembre";break;
            }
        }
    }
    s2[7]=' ';s2[8]='d';s2[9]='e';s2[10]=' ';s2[11]=s1[7];
    s2[12]=s1[8];s2[13]=s1[9];s2[14]=s1[10];s2[15]='\0';
}
