#include<iostream>
#include<cstdlib>
using namespace std;
main(){
       int nro;
       cout<<"Ingresar un numero: ";
       cin>>nro;
       switch(nro){
           case 1: cout<<"Lunes";           
           case 2: cout<<"Martes";   
           case 3: cout<<"Miercoles";   
           case 4: cout<<"Jueves";   
           case 5: cout<<"Viernes";   
           case 6: cout<<"Sabado";   
           case 7: cout<<"Domingo";     
           default: cout<<"Valor no valido";        
       }
       cout<<endl;
       system("PAUSE");
}
