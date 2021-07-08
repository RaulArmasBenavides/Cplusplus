/*ESCRIBA UN PROGRAMA QUE DEFINA UNA FUNCIÓN QUE RECIBA COMO PARÁMETROS: UNA CADENA, UN VECTOR DE CADENAS.
LA FUNCIÓN ALMACENARÁ EN EL VECTOR DE CADENAS TODAS LAS PALABRAS DE LA CADENA QUE TENGAN DOS VOCALES JUNTAS.
POR EJEMPLO:

Cad = "La próxima semana viajo a Piura con mi guitarra yeah"

EN EL VECTOR DE CADENAS SE ALMACENARÁ: "viajo", "Piura", "guitarra"

ADICIONALMENTE SE DEBE REPORTAR LA CANTIDAD DE PALABRAS GUARDADAS EN EL VECTOR DE CADENAS */

#include <iostream>
#include <cstring>
#include <cstdio>
#define N 256

//PROTOTIPOS
void LlenarVector(char c[N], char v[][N]);
bool EsVocal(char c);

using namespace std;
int main()
{
    char cad[N], vec[N][N];
    cout<<"Ingrese una cadena:\n"; gets(cad);
    LlenarVector(cad,vec);
    cout<<endl<<endl;
    return 0;
}

void LlenarVector(char c[N], char v[][N])
{
    int cant=0; //CANTIDAD DE PALABRAS ALMACENADAS
    int j=0; //ÍNDICE DEL VECTOR
    int aux=0;//AUXILIAR PARA SEPARAR PALABRAS
    int ind=0;//ÍNDICE PARA EL VECTOR
    for(int i=0;i<=strlen(c);i++)
    {
        if(c[i]==' '||c[i]=='\0')
        {
            for(int k=aux;k<i;k++)
            {
              if(EsVocal(c[k-1])==true && EsVocal(c[k])==true)
               {
                  for(int d=aux;d<i;d++)
                    {
                        v[cant][ind]=c[d];
                        ind++;
                    }
                cant++;
               }

            }
            aux=i+1;
        }

    }
    cout<<"Cantidad de palabras almacenadas: "<<cant;
}

bool EsVocal(char c)
{
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        return true;
    else
        return false;
}
