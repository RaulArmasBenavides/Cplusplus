#include<iostream>
#include<cstdlib>
#define mant 15.00
using namespace std;
main(){
       //variables
       double monto, inte, tint, tota;
       int mes;
       //ingreso
       cout<<"Ingresar deposito: ";
       cin>>monto;
       cout<<"Ingresar meses: ";
       cin>>mes;
       //calculos
       inte=0.03*monto;
       tint=inte*mes;
       tota=monto+tint-mant;          
       //salida
       cout<<"Interes mensual: "<<inte<<endl
           <<"Interes total: "<<tint<<endl
           <<"Mantenimiento: "<<mant<<endl
           <<"Total a recibir: "<<tota<<endl;
       system("PAUSE");       
}
