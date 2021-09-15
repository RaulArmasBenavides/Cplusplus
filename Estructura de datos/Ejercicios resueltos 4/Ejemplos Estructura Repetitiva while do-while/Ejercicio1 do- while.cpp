#include<iostream>
#include<cstdlib>
using namespace std;
main(){
     int nro, cp=0, cn=0;  
     do{
         cout<<"Ingresar numero: ";
         cin>>nro;
         if(nro>0)
            cp++;
         if(nro<0)
            cn++;         
     }
     while(nro!=0);
     cout<<"Se ingresaron "<<cp<<" numeros positivos y "
         <<cn<<" numeros negativos"<<endl;
     system("PAUSE");
}
