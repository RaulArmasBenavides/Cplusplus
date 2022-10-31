#include<iostream>
using namespace std;
//definicion de funciones

bool EsPar(int n)
{
    if(n%2==0)
    {
        return true;
    }
    else
        return false;
}

bool proceso(int X[5][5],int rows,int cols)
{
       int sumafilaspares=0;
       int sumafilasimpares=0;
       //int rows =  sizeof (X) / sizeof (X[0]);
       //int cols = sizeof (X[0]) / sizeof (int);
       cout<<"el numero de filas"<<rows<<endl;;
       cout<<"el número de columnas"<<cols<<endl;
       float promedio=0;
        for(int i=0; i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(EsPar(j))
                {
                    sumafilaspares+= X[i][j];
                }
                else if(!EsPar(i))
                {
                     sumafilasimpares+= X[i][j];
                }
            }
        }

        if(sumafilaspares==sumafilasimpares)
        {
             cout<<"Resultado del proceso"<< "true"<<endl;
            return true;

        }
        else{
           cout<<"Resultado del proceso"<< "false";
            return false;

        }
}


void LeerMatriz (int matriz[5][5],int tamf,int tamc)
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
void EscribirMatriz (int matriz[5][5],int tamf,int tamc)
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
{ int matriz[5][5];
  int tamf,tamc;
  cout<< "Ingrese tamaño de filas"<<endl;
  cin>>tamf;
  cout<<"Ingrese tamaño de columnas"<<endl;
  cin>>tamc;
  LeerMatriz(matriz,tamf,tamc);
  cout<<"La matriz antes de procesar"<<endl;
  EscribirMatriz(matriz,tamf,tamc);
  proceso(matriz,tamf,tamc);

return 0;
}
