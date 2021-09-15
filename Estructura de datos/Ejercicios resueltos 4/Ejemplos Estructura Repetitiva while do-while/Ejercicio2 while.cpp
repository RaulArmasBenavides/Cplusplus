#include<iostream>
#include<cstdlib>
using namespace std;
main(){
       int nro, dig, suma=0;
       cout<<"Ingresar numero: ";
       cin>>nro;
       while (nro!=0){
             dig=nro%10;
             nro=nro/10;
             suma=suma+dig;             
       }
       cout<<"La suma es "<<suma<<endl;
       
       system("PAUSE");
}
