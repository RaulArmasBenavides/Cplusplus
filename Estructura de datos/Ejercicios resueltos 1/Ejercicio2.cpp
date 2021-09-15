#include<iostream>
#include<cstdlib>
#define PI 3.1416
using namespace std;
main(){
       //variables
       double rad, alt, area, vol;
       //ingreso
       cout<<"Ingresar radio: ";
       cin>>rad;
       cout<<"Ingresar altura: ";
       cin>>alt;
       //calculos
       area=2*PI*rad*alt;
       vol=PI*rad*rad*alt;
       //salidas
       cout<<"El area lateral es: "<<area<<endl
           <<"El volumen es: "<<vol<<endl;
       system("PAUSE");       
}
