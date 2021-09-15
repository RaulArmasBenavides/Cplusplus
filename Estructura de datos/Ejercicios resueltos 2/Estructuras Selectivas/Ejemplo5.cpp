#include<iostream>
#include<cstdlib>
using namespace std;
main(){
       int mes, anio, dias, res;
       cout<<"Ingresar mes: ";
       cin>>mes;
       switch(mes){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: dias=31;  break;
            case 4:
            case 6:
            case 9:
            case 11: dias=30;  break;
            case 2: cout<<"Ingresar anio: ";
                    cin>>anio;
                    res=anio%4;
                    if(res==0)
                         dias=29;
                    else
                         dias=28;
                    break;
            default: cout<<"Mes no valido"<<endl;            
       }
       if(mes>=1 && mes<=12)
              cout<<"La cantidad de dias del mes ingresado es "<<dias<<endl;
       
       system("PAUSE");
}
