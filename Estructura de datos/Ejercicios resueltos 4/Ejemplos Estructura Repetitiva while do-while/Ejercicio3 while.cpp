#include<iostream>
#include<cstdlib>
using namespace std;
main(){
       int con=0, ct=0, tiempo;
       double suma=0, prom;
       while(con<6){
           cout<<"Ingresar tiempo "<<con+1<<": ";
           cin>>tiempo;
           suma=suma+tiempo;
           if(tiempo<35)
              ct++;
           con++;
       }
       prom=suma/6;
       cout<<"El promedio de tiempo es: "<<prom<<endl
           <<"La cantidad de dias que llego en menos de 35 minutos es: "<<ct<<endl;
       system("PAUSE");
}
