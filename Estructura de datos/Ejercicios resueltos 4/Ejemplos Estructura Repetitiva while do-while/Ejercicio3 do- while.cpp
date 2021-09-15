#include<iostream>
#include<cstdlib>
using namespace std;
main(){
       double mayor=0, peso;
       char nac, resp, nacion;
       do{
           cout<<"Ingresar nacionalidad ";
           cin>>nac;
           cout<<"Ingresar peso ";     
           cin>>peso;
           if (peso>mayor){
               mayor=peso;
               nacion=nac;
           }
           cout<<"Desea registrar otro atleta (S/N) ";
           cin>>resp;
       }
       while(resp=='S');
       cout<<"El mayor peso es "<<mayor<<" y es de nacionalidad "<<nacion<<endl;
       system("PAUSE");
}
