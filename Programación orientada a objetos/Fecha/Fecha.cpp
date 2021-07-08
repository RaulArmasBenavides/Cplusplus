#include<iostream>
using namespace std;
//declaracion de funciones prototipo


//definicion de funciones


//implementacion de la funcion principal
int main()
{char nmes[15];
int mesactual;
Fecha P(15,"Febrero",1989);
P.VerFechaActualFormato();
P.CalcularMesNumero();
P.VerFechaNuevoFormato();
P.LeerNuevaFecha();
P.CalcularMesNumero();
P.VerFechaNuevoFormato();
cout<<"Mes= "<<P.MesNumerioc()<<endl;
cout<<"Ingrese nuevo mes en letras"<<endl;gets(nmes);
P.UpdateMes(nmes);
P.MesNumero(mesactual);
cout<<"Mes ="<<mesactual<<endl<<endl;

return 0;
}
