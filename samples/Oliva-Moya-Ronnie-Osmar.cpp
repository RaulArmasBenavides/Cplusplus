#include<iostream>
#include<string.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
const int N=100;
const int M=100;
class Aleatorio
{ private:
    int nf,nc; //Almacena el número de filas (nf) y numero de columnas(nc)
    //Almacena el tamaño del vector
    char a[M][N];//Almacena en la matriz por cada elemento un carácter en
                         // función al codigo Ascii.
    char c[M]; // Almacena solo caracteres alfabéticos
  public:
   Aleatorio(int, int);
  ~Aleatorio();
    void Generar(); //Rellena la matriz con caracteres en función al código Ascii
                             //dado en forma pseudo aleatorio. Tener presente que los
                             // códigos Ascii imprimibles van del 32 al 255.
  void Print();// Muestra el contenido de la matriz generada.
  void Copiar();//Copia de la matriz a hacia el vector c solo los caracteres
                        // alfabéticos.
  friend void Ver(Aleatorio P);//Muestra el contenido del vector c o en su defecto
                                             // “vector c no fue generado”.
  void Contar(int &, int &, int &);//Cuenta la cantidad de caracteres alfabéticos,
                                                 //dígitos y especiales que existe en la matriz.
  void Mostrar(int , int , int );//Muestra los datos calculados en la pregunta anterior.
};
Aleatorio::Aleatorio(int f,int c)
{
    nf=f;nc=c;

}
Aleatorio::~Aleatorio()
{
    cout<<"destruyendo el objeto..!"<<endl;
}
void Aleatorio::Generar()
{      int i,j;
    srand(time(0));
    for(i=0;i<nf;i++)
    {
        for(j=0;j<nc;j++)
             a[i][j]=32+rand()%(255+1-32);
    }
}
void Aleatorio::Print()
{
     int i,j;
    for(i=0;i<nf;i++)
    {
        for(j=0;j<nc;j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;
}
void Aleatorio::Copiar()
{   int i,j;
     for(i=0;i<nf;i++)
    {
        for(j=0;j<nc;j++)
            if((a[i][j]>='a' && a[i][j]<='z') || (a[i][j]>='A' && a[i][j]<='Z'))
                c[i]=a[i][j];
        cout<<endl;
    }
}
void Ver(Aleatorio P)
{   int i;
     for(i=0;i<P.nf;i++)
    {
        cout<<P.c[i]<<"\t";
        cout<<endl;
    }
}
void Aleatorio::Contar(int &alf, int &dig, int &esp)
{
    int i,j;alf=dig=esp=0;
     for(i=0;i<nf;i++)
    {   for(j=0;j<nc;j++)
            {
              if((a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'&&a[i][j]<='Z'))
                        alf++;
                else if(a[i][j]>='0' && a[i][j]<='9')
                        dig++;
                  else   esp++;
            }
        cout<<endl;
    }
}
void Aleatorio::Mostrar(int alf, int dig, int esp)
{
   cout<<"especiales: "<<esp<<endl;
   cout<<"alfabeticos: "<<alf<<endl;
   cout<<"digitos: "<<dig<<endl;
}
int main()
{   int f,c,alf,dig,esp;
    cout<<"numero de filas: ";cin>>f;
    cout<<"numero de columnas: ";cin>>c;
    cout<<endl;
    Aleatorio  A(f,c);
    A.Generar();
    A.Print();
    A.Copiar();
    Ver(A);
    A.Contar(alf,dig,esp);
    A.Mostrar(alf,dig,esp);

}
