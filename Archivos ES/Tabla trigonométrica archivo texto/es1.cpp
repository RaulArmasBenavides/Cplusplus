#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<iomanip>
#include<cmath>
#define DRAYA for(i=0;i<80;i++) f1<<"="; f1<<endl;
using namespace std;
int main()
{ ofstream f1; // Objeto para escribir en el flujo de archivo
  f1.open("Tablatrigo.txt");
  //prueba de la apertura
  if(!f1)
  {
      cerr<<"Error en la apertura ..."<<endl;
      cin.get();
      exit(1);
  }
  //validando la entrada de datos
  float inf,sup;
  do{
    cout<<"Intervalo [int,sup] ?";
    cin>>inf>>sup;
  }while(inf<0 || sup>360);
  float paso;
  do{
    cout<<"Tamano de paso?";
    cin>>paso;
  }while(paso<=0);
  //Generando la tabla y guardando en el archivo
  int i;
  //Escribiendo en el flujo de archivo
  f1<<"Tabla trigonometrica "<<endl;
  DRAYA;
  float j;
  //formateando el flujo de archivo
  f1<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint)<<setprecision(7);
  for(j=inf;j<=sup;j+=paso)
  {
      f1<<j<<"\t"<<sin(j*M_PI/180)<<"\t"<<cos(j*M_PI/180)<<endl;
  }
  DRAYA;
  //cerrando el flujo
  f1.close();
  cout<<"Los datos se guardaron con exito "<<endl;
  return 0;
}
