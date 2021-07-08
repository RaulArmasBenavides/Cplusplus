/* PREGUNTA 1: (7 Puntos)
Escriba un programa que sobrecargue la funci�n Sobrecarga seg�n los siguientes prototipos:

void Sobrecarga (char c[ ]).- Funci�n que reciba una cadena de caracteres
y realiza el tratamiento caracter por caracter y lo alterne entre min�scula
y may�scula; por ejemplo si la cadena de caracteres fuera: �aviacion peruANA�
deber� imprimir: �aViAcIoN pErUaNa�

double Sobrecarga(int Nums[N][M], int nf, int nc).- Devuelve el resultado de dividir
el mayor elemento con el menor elemento de la matriz Nums.
Los par�metros nf y nc representan el n�mero de filas y el n�mero de columnas
respectivamente.

NOTA.- Cualquier funci�n adicional tambi�n debe estar en sobrecarga.
*/

#include <iostream>
#include <cstdio>
#define LLENAR_MATRIZ(Nums,nf,nc) for(int f=0;f<nf;f++)                     \
                              {                                             \
                                  for(int c=0;c<nc;c++)                     \
                                  {                                         \
                                      cout<<"Nums["<<f<<"]["<<c<<"] = ";    \
                                      cin>>Nums[f][c];                      \
                                  }                                         \
                              }
#define N 200
#define M 100
//PROTOTIPOS
void Sobrecarga (char c[N]);
double Sobrecarga(int Nums[N][M], int nf, int nc);

using namespace std;
int main()
{
    char cad[N];
    cout<<"Ingrese una cadena: "; gets(cad);
    Sobrecarga(cad);

    int nf,nc;
    int Nums[N][M];
    double div;
    cout<<"\nIngrese la cantidad de filas y columnas: ";cin>>nf>>nc;
    LLENAR_MATRIZ(Nums,nf,nc);
    div=Sobrecarga(Nums,nf,nc);
    cout<<"\ndivision = "<<div;
    return 0;
}

//DEFINICI�N DE FUNCIONES
void Sobrecarga (char c[ ])
{
    for(int i=0;c[i]!='\0';i++)
    {
        if(c[i]>=65 && c[i]<=90)
        c[i]=c[i]+32; //Pasar a minusculas
        if(c[i]>=97 && c[i]<=122)
        c[i]=c[i]-32; //Pasar a mayusculas

    }
    cout<<"\nCadena cambiada\n";
    for(int i=0;c[i]!='\0';i++)
        cout<<c[i];
}
double Sobrecarga(int Nums[N][M], int nf, int nc)
{
    int mayor=Nums[0][0],menor=Nums[0][0];
    for(int f=0;f<nf;f++)
    {
        for(int c=0;c<nc;c++)
        {
            if(mayor<Nums[f][c])
                mayor=Nums[f][c];

            if(menor>Nums[f][c])
                menor=Nums[f][c];
        }
    }
    return mayor*1.0/menor*1.0;
}
