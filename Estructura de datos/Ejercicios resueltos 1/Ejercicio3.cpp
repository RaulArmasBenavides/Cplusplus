#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
main(){
       //variables
       double c1, c2, h, p, a;
       //ingreso
       cout<<"Ingresar catetos: ";
       cin>>c1>>c2;       
       //calculos
       h=sqrt(c1*c1+c2*c2);
       p=c1+c2+h;
       a=(c1*c2)/2;
       //salida
       cout<<"Hipotenusa: "<<h<<endl
           <<"Perimetro: "<<p<<endl
           <<"Area: "<<a<<endl;
       system("PAUSE");       
}
