#include<iostream>
#include<cstdlib>
#define c 1234
using namespace std;
main(){
       int clave, con=0;
       do{
            cout<<"Ingresar clave: ";
            cin>>clave;
            if(clave!=c)
               con++;
            else
               cout<<"Usted ingreso al sistema"<<endl;
            if(con==3)
               cout<<"Realizo su tercer intento"<<endl;    
       }
       while(clave!=c && con<3);
                
       system("PAUSE");
}
