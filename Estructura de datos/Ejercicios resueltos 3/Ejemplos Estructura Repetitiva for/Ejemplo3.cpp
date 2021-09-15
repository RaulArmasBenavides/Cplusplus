#include <cstdlib>
#include <iostream>
#include <ctype.h>
using namespace std;

main()
{
   int n, con, cm=0, cf=0, ca=0, cb=0, cc=0, edad, mayor=0;
   double suma=0, sumf=0, pmas, pfem;
   char sexo, cat;
   cout<<"Ingresar cantidad de asegurados: ";   
   cin>>n;
   for(con=0; con<n; con++){
       cout<<"Ingresar sexo: ";
       cin>>sexo;
       cout<<"Ingresar categoria: ";
       cin>>cat;
       cout<<"Ingresar edad: ";
       cin>>edad;
       cat=toupper(cat);
       sexo=toupper(sexo);
       switch(sexo){
            case 'M': suma=suma+edad;
                      cm++;
                      break;
            case 'F': sumf=sumf+edad;
                      cf++;
                      break;                    
       }
       if(edad>mayor)
          mayor=edad;
       switch(cat){
            case 'A': ca++; break;       
            case 'B': cb++; break;
            case 'C': cc++; break;
       }
   }
   pmas=suma/cm;
   pfem=sumf/cf;
   cout<<"Promedio de edades de los varones "<<pmas<<endl
       <<"Promedio de edades de las mujeres "<<pfem<<endl
       <<"La mayor edad entre los asegurados es "<<mayor<<endl
       <<"Cantidad de asegurados con categoria A "<<ca<<endl
       <<"Cantidad de asegurados con categoria B "<<cb<<endl
       <<"Cantidad de asegurados con categoria C "<<cc<<endl;
   system("PAUSE");
}
