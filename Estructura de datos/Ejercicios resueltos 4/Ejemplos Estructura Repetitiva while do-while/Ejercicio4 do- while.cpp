#include<iostream>
#include<cstdlib>
using namespace std;
main(){
       char tipo;
       double gal, pago, reca=0;
       do{
           cout<<"Ingresar tipo de gasolina ";
           cin>>tipo;
           if(tipo=='A' || tipo=='B' || tipo=='C'){
               cout<<"Ingresar cantidad de galones ";
               cin>>gal;
               switch(tipo){
                   case 'A': case 'a': pago=15.20*gal;  break;         
                   case 'B': case 'b': pago=14.50*gal;  break;
                   case 'C': case 'c': pago=13.30*gal;  break;
               }
               cout<<"El cliente paga "<<pago<<endl;
               reca=reca+pago;
           }
       }
       while(tipo=='A' || tipo=='B' || tipo=='C');
       cout<<"La gasolinera recaudo "<<reca<<endl;
       system("PAUSE");
}
