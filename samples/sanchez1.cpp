//inclusion de librrias
#include<iostream>
using namespace std;
const char NULO = '\0';
//definicion de funciones
bool EsEntero(float n)
{
    int res=n/1;
       if(n<=0 || n>=0 && res*1==n)
    {
        return true;
    //cout<<"Entered Number Is An Integer.\n";
    }
    else
    {
        return false;
    //cout<<"Entered Number Is Not An Integer.\n";
    }
}

bool FindItem(int y[5],int itemToFind)
{
    bool resultado = false;
    for(int i = 0; i < sizeof(y); i++){
     if(y[i] == itemToFind){
        resultado= true;
     }
    }
    return resultado;
}
void proceso( float x[5], int y[5], bool &Z)
{
        for(int j=0;j<sizeof(x)-1;j++)
            {
                if(EsEntero(x[j]))
                {
                    int itemToFind= (int)x[j];
                    if(FindItem(y,itemToFind))
                    {
                        cout<<"Se encontró el item "<<itemToFind<<endl;
                        Z =true;
                    }
                    else{

                        Z=false;
                    }
                }
            }
            if(Z==false) {
               cout<<"No se encontraron todos los enteros"<<endl;
            }
            else
            cout<<" Resultado del proceso Z es TRUE";
}

//implementacion de la funcion principal
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    int enteros[] = { 3, 2, 1, 7, 1, 2, 3 };
    float decimales[] = { 5.5,4.3,7};
    bool Z = false;
    proceso(decimales,enteros,Z);

 	return 0;
}


