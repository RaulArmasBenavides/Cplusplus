#include <cstdlib>
#include <iostream>
#include <ctype.h>
using namespace std;

main()
{
      int n, con, edad, mayor=0, cp=0, cs=0, cr=0, c1=0;
      char grad;      
      cout<<"Cantidad de personas que participan en una encuesta: ";
      cin>>n;
      for(con=0; con<n; con++){
           cout<<"Ingresar grado de instruccion (P/S/R): ";
           cin>>grad;
           cout<<"Ingresar edad: ";
           cin>>edad;
           grad=toupper(grad);
           if(edad>mayor)
              mayor=edad;
           switch(grad){
                case 'P': cp++;  break;
                case 'S': cs++;  break;
                case 'R': cr++;  
                          if(edad != 35) 
                             c1++;
                          break;
           }
      }
      cout<<"La mayor edad es "<<mayor<<endl
          <<"Cantidad de personas con primaria "<<cp<<endl
          <<"Cantidad de personas con secundaria "<<cs<<endl
          <<"Cantidad de personas con superior "<<cr<<endl
          <<"Cantidad de personas con grado superior que no tienen 35 años "<<c1<<endl;
      system("PAUSE");
}
      
