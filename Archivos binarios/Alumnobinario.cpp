/*Se creará el archivo llamado "Alumno.dat" donde se grabe los datos de alumno politicos del peru */
#include<fstream>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#define Q reinterpret_cast<char*>
using namespace std;
//declarar funciones prototipo
void Creararchivo(ofstream &f1);
void Listado(ifstream &f2);
//declaramos a un partido como una estructura
struct Alumno
{ char Codigo[9];
  char Nombre[80];
  int Prac[4];
  int Labos[4];
  //Campos calculados
  float Notas[4];
  float Pf; //promedio final
  char Situacion[15]; // Aprobado o desaprobado
    //char nom[20],fe[20],lider[20];
};
//definicion de funciones
void Creararchivo(ofstream &f1)
{   partido p;
    int n,i;
    f1.open("Partidos.dat",ios::binary);
    if(!f1)
    {
        cerr<<"El archivo no se puedo abrir"<<endl;
        cin.get();
        exit(1);
    }
    cout<<"El archivo se pudo abrir con exito"<<endl;
    cout<<"Ingrese el numero de partidos politicos que va a ingresar"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
    cout<<"Escriba el nombre del partido"<<endl;fflush(stdin);gets(p.nom);
    cout<<"Ingrese la fecha de fundacion del partido"<<endl;fflush(stdin);gets(p.fe);
    cout<<"Escriba el nombre del lider politico"<<endl;gets(p.lider);
    //escribir los datos en el archivo binario
    f1.write(Q(&p.nom),sizeof(p.nom));
    f1.write(Q(&p.fe),sizeof(p.fe));
    f1.write(Q(&p.lider),sizeof(p.lider));
    }
    f1.close();
}
void Listado(ifstream &f2)
{partido p;
 f2.open("Partidos.dat",ios::binary);
 //asumimos que no hay errores
 //lectura adelantada
 cout<<"NOMBRE"<<"\t"<<"FECHA DE FUNDACION"<<"\t"<<"LIDER"<<endl;
 f2.read(Q(&p.nom),sizeof(p.nom));
 while(f2.peek()!=EOF)
 {f2.read(Q(&p.fe),sizeof(p.fe));
  f2.read(Q(&p.lider),sizeof(p.lider));
  f2.read(Q(&p.nom),sizeof(p.nom));
  //mostrar en la pantalla
  cout<<p.nom<<"\t"<<p.fe<<"\t"<<p.lider<<endl;
 }
 f2.close();
}
void BusquedadeRegistro(ifstream &f3)
{partido p;
 int tamr,tam,tbyte,nr,n;
 f3.open("Partidos.dat",ios::binary);
 f3.seekg(0,ios::end);
 tbyte=f3.tellg();
 tamr=sizeof(p);
 nr=tbyte/tamr;
 cout<<"Ingrese el numero de registro que desea buscar"<<endl;
 cin>>n;
 //lectura adelantada
 cout<<"NOMBRE DEL PARTIDO"<<"\t"<<"FECHA DE FUNDACION"<<"\t"<<"LIDER"<<endl;
 if(n>0 && n<=nr)
 {
  f3.seekg((n-1)*tam);
  f3.read(Q(&p.nom),sizeof(p.nom));
  f3.read(Q(&p.fe),sizeof(p.fe));
  f3.read(Q(&p.lider),sizeof(p.lider));
  //mostrando en la pantalla
  cout<<p.nom<<"\t"<<p.fe<<"\t"<<p.lider<<endl;
 }
 else
    cout<<"El registro buscado no existe"<<endl<<endl;
f3.close();
}
int main()
{ ofstream file1;
  ifstream file2,file3;
  Creararchivo(file1);
  Listado(file2);
  BusquedadeRegistro(file3);
 return 0;
}
