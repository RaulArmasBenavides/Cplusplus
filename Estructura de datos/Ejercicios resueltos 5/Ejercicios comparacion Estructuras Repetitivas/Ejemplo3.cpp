#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

main()
{
      double mayor=0, peso;
      int n, con1=0, con2=0, con3=0, cm=0, cf=0, con;
      char sexo;
      cout<<"Ingresar cantidad de deportistas: ";
      cin>>n;
      for(con=1; con<= n; con++){
          cout<<"Ingresar sexo (M/F)";
          cin>>sexo;
          sexo=tolower(sexo);
          cout<<"Ingresar peso ";
          cin>>peso;
          if (peso<55)
             con1++;
          else if(peso<70)
              con2++;
          else
              con3++;
          if(peso>mayor)
               mayor=peso;
          switch(sexo){
              case 'm': cm++;  break;
              case 'f': cf++;  break;
          }
                   
      }
      cout<<"Cantidad de deportistas con menos de 55 kg"<<con1<<endl
          <<"Cantidad de deportistas con peso entre 55 kg y 70 kg"<<con2<<endl
          <<"Cantidad de deportistas con mas de 70 kg"<<con3<<endl
          <<"El mayor peso es "<<mayor<<endl
          <<"Cantidad de deportistas varones"<<cm<<endl
          <<"Cantidad de deportistas mujeres"<<cf<<endl;
       system ("PAUSE");
}  
