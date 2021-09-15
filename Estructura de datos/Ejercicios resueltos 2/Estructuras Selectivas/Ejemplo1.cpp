#include <iostream>
#include <cstdlib>
using namespace std;
main(){
     //declaracion de variables
     double prec, desc;
     int edad;
     //ingreso de datos
     cout<<"Ingresar precio de entrada ";
     cin>>prec;
     cout<<"Ingresar edad: ";
     cin>>edad;     
     //calculos
     if (edad<10)
        desc=0.25*prec;
     prec=prec-desc;
     //salida de resultados
     cout<<"El precio final es "<<prec<<endl;
     system("PAUSE");  
}

