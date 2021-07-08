#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
//declaracion de clase
class Factura
{ private:
  char sumin[12];
  char fecha[12];
  float consumo;
  float costou;
  float costo_sa;
  float cargo_fijo;//Es un costo constante por concepto de facturación ,lectura,etc
  float igv;// almacena el impuesto
  float pago; //almacena el pago total por el consumo incluido igv
  public:
      Factura(char ns[],char fe[],float c,float cf);

      Factura(const Factura &t);//Constructor copia
      friend void CapturaDatos(Factura &q); //realiza la lectura de datos

};
//definicion de funciones miembros
void CapturaDatos(Factura &q)
{
    cout<<"Lectura de datos"<<endl;
    cout<<"Ingrese el numero de suministro:"<<endl;fflsuh(stdin);gets(q.sumin);
    cout<<"Ingrese fecha de emision"<<endl;gets(q.fecha);
    cout<<"Ingrese consumo en metros cubicos"<<endl;cin>>q.consumo;
    cout<<"Cargo fijo por serv. alcantarillado"<<endl;cin>>q.cargo_fijo;
}


//implementacion de la funcion principal
int main()
{
return 0;
}
