#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<cstdlib>

using namespace std;
const int N=50;
//Declarar la estructura
struct book
{ char c[15],tit[40],aut[30],fi[12];
float precio;
int cant;
};

void Ordenar(book x[],int n)
{
  int i,j; book t;
  for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
     if(strcmp(x[i].c,x[j].c)>0)
    {
         t=x[i];
         x[i]=x[j];
         x[j]=t;
    }
}


void RegistrarLibros(ofstream &f1)
{
    book a[N];
    int n,i;
    cout<<"Numero de Libros a procesar:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Procesando libro #"<<i+1<<endl;
        cout<<"Código:";fflush(stdin);gets(a[i].c);
        cout<<"Titulo:";gets(a[i].tit);
        cout<<"Autor:";gets(a[i].aut);
        cout<<"Fecha (dd/mm/aaaa):";gets(a[i].fi);
        cout<<"Precio:";cin>>a[i].precio;
        cout<<"Cantidad:";cin>>a[i].cant;
    }
        Ordenar(a,n);
        f1.open("Libros.txt");
        //Grabando datos en el archivo
        for(i=0;i<n;i++)
        f1<<a[i].c<<" "<<a[i].tit<<" "<<a[i].aut<<" "
        <<a[i].fi<<" "<<a[i].precio<<" "<<a[i].cant<<endl;
        f1.close();
}

void LeerArchivo(ifstream &f2,  book a[], int &cantidad)
    {
        //Variable
        ifstream archivo;
        string filaDatos;
        string registro[9];
        string nombArchivo ="Libros.txt";
        archivo.open(nombArchivo,ios::in);
        while(!archivo.eof())
        {
            // Lee una fila de datos
            getline(archivo, filaDatos);
            if(filaDatos.length() == 0){
                continue;
            }
            // Desgregar la fila
            int indice = 0, posicion;
            while( filaDatos.size() > 0){
                posicion = filaDatos.find(" ");
                if(posicion > 0){
                    registro[indice] = filaDatos.substr(0, posicion);
                    filaDatos.erase(0, posicion + 1);
                } else {
                    registro[indice] = filaDatos;
                    filaDatos = "";
                }
                indice++;
            }
            strcpy(a[cantidad].c,registro[0].c_str());
            strcpy(a[cantidad].tit,registro[1].c_str());
            strcpy(a[cantidad].aut,registro[2].c_str());
            strcpy(a[cantidad].fi,registro[3].c_str());
            a[cantidad].precio = atoi(registro[4].c_str());
            a[cantidad].cant = atoi(registro[5].c_str());
            cantidad++;
          }
        archivo.close();
    }
//void ImpresionDatos(vector<string> vLibros)
//{
//    cout<<"[ Reporte de Libros] "<<endl;
//    for (int k = 0; k < vLibros.size(); k++){
//    cout << vLibros[k];
//    cout << endl;
//    }
//}



//Método para Listado
void Imprimir(book a[], int &cantidad){
	system("cls");
	cout << "LISTADO DE LIBROS" << endl;
	cout << "============================================= " << endl;
	cout << endl;
	cout << "Código\tTitulo\tAutor\tFecha\tPrecio\tCantidad" << endl;
	cout << "-------------------------------------------------------------------------" << endl;
  for ( int j=0; j<cantidad;j++)
  {
        cout << a[j].c << "\t";
		cout << a[j].tit << "\t";
		cout << a[j].aut << "\t";
		cout << a[j].fi << "\t";
		cout << a[j].cant << "\t";
		cout << a[j].precio << "\t";
//		cout << a[i].examenFinal << "\t";
//		cout << a[i].promFinal << "\t";
		cout << endl;
  }
	cout << "-------------------------------------------------------------------------" << endl;
	cout << endl;
}


//Funcion principal
int main()
{

  // Configuracion
  setlocale(LC_CTYPE,"Spanish");
  book a[N];
  int cantlibros = 0;
  //Declarar vectores para cada variable
  // vector <string> vLibros;
  ofstream arch1;
  ifstream arch2;
  RegistrarArchivo(arch1);
  LeerArchivo(arch2,a,cantlibros);
  Imprimir(a,cantlibros);
  //ImpresionDatos(vLibros);
}

