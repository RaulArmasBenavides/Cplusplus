#include <cstdlib>
#include <iostream>
#include <ctype.h>
using namespace std;

main()
{
      int n, con, cn1=0, cn2=0, cnio=0, cnia=0;
      double talla, peso, sta=0, sp=0, ppes, ptal;
      char gen;
      cout<<"Ingresar cantidad de pacientes";
      cin>>n;
      for(con=0; con<n; con++){
          cout<<"Ingresar peso:";
          cin>>peso;
          cout<<"Ingresar talla:";
          cin>>talla;
          cout<<"Ingresar genero (M/F): ";
          cin>>gen;  
          gen=tolower(gen);
          switch(gen){
              case 'm':if(peso>17)
                           cn1++;                        
                        sta=sta+talla;
                        cnio++;
                        break;
              case 'f': if(talla<0.50)
                           cn2++;
                        sp=sp+peso;
                        cnia++;
                        break;       
          }           
      }     
      ppes=sp/cnia;
      ptal=sta/cnio;
      cout<<"Cantidad de niños que pesan mas de 17 kg "<<cn1<<endl
          <<"Cantidad de niñas que miden menos de 0.50 cm "<<cn2<<endl 
          <<"Promedio de peso de las niñas "<<ppes<<endl
          <<"promedio de talla de los niños "<<ptal<<endl;
      system("PAUSE");
}
