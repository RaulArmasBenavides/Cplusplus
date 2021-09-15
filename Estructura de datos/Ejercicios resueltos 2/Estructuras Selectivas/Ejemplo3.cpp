#include<iostream>
#include<cstdlib>
using namespace std;
main(){       
       int prom;
       char calf;
       cout<<"Ingresar promedio";
       cin>>prom;
       if(prom>=18 && prom<=20)
                   calf='A';
       else if(prom>=14 && prom<=17)
                        calf='B';
            else if(prom>=11 && prom<=13)
                             calf='C';
                 else if(prom>=6 && prom<=10)
                                 calf='D';
                      else
                                 calf='E';
       cout<<"La calificacion es "<<calf<<endl;
       system("PAUSE");       
}
