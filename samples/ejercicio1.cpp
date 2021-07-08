#include<iostream>
using namespace std;
//declaracion de funciones prototipo
void ProcesarMatriz(int matriz[100][100],int tamf,int tamc);
void LeerMatriz (int matriz[100][100],int tamf,int tamc);
void EscribirMatriz (int matriz[100][100],int tamf,int tamc);
bool Esprimo(int n);
//definicion de funciones
bool Esprimo(int n)
{
    if (n <= 1)
        return false;
 for(int i = 2; i*i <= n; ++i)
 {
      if (n%i == 0)
      return false;
 }
 return true;
}

void ProcesarMatriz(int matriz[100][100],int tamf,int tamc)
{ int sum1=0; // suma de valores de posiciones multiplos de 5
       int sum2=0;
       int cont=0; // contador que sumar el numero de filas primo
       float promedio=0;
    for(int i=0; i<tamf;i++)
    {
        for(int j=0;j<tamc;j++)
        {
            if(matriz[i][j]>10)
              matriz[i][j]=matriz[i][j]*3;

            if(matriz[i][j]==0)
               matriz[i][j]=10;
        }

/* AQUI FALTA
          if(i%5==0 || j%5==0)
               sum1= sum1+matriz[i][j];

                 if(Esprimo(i)==true)
                 {
                     sum2=sum2+matriz[i][j];
                     cont++;
                 }
      promedio= sum2/cont;
        cout<<" La suma de los valores de las posiciones múltiplos de 5 es "<<sum1<<endl;
         cout<<"Promedio es "<< promedio<<endl;
           */

    }
}

void LeerMatriz (int matriz[100][100],int tamf,int tamc)
{
     for(int i=0; i<tamf;i++)
    {
        for(int j=0;j<tamc;j++)
        {  cout<< "ingresa elemento fila "<<i<< "  columna" <<j<<endl;
            cin>>matriz[i][j];

        }
        cout<<endl;
    }
}
void EscribirMatriz (int matriz[100][100],int tamf,int tamc)
{
     for(int i=0;
     i<tamf;i++)
    {
        for(int j=0;j<tamc;j++)
        {
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}
//implementacion de la funcion principal
int main()
{ int matriz[100][100];
  int tamf,tamc;
  cout<< "Ingrese tamaño de filas"<<endl;
  cin>>tamf;
  cout<<"Ingrese tamaño de columnas"<<endl;
  cin>>tamc;
  LeerMatriz(matriz,tamf,tamc);
  cout<<"La matriz antes de procesar"<<endl;
  EscribirMatriz(matriz,tamf,tamc);
  ProcesarMatriz(matriz,tamf,tamc);
  cout<<"La matriz después de procesar"<<endl;
  EscribirMatriz(matriz,tamf,tamc);
return 0;
}
