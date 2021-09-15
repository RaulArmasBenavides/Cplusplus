#include<iostream>
#include<cstdlib>
using namespace std;
main(){
       double n1, n2, res;
       char op;
       int band=0;
       cout<<"Ingresar 1er numero: ";
       cin>>n1;
       cout<<"Ingresar operacion: ";
       cin>>op;
       cout<<"Ingresar 2do numero: ";
       cin>>n2;
       switch(op){
           case '+': res=n1+n2;    break;
           case '-': res=n1-n2;    break;
           case '*': res=n1*n2;    break;
           case '/': if(n2==0){ 
                        cout<<"Indefinido"<<endl;
                        band=1;
                     }
                     else
                         res=n1/n2;    break;
          default: cout<<"Operador no valido"<<endl; 
                   band=1;             
       }
       if(band==0)
              cout<<"El resultado es "<<res<<endl;
       system("PAUSE");
}
