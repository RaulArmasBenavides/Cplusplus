#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

main()
{
      int menor=999, nota, con;
      double suma=0, prom;
      for(con=1; con<=5; con++){
          cout<<"Ingresar nota";
          cin>>nota;
          suma=suma+nota;
          if(nota<menor)
              menor=nota;              //menor=9
      }
      prom=(suma-menor)/4;             //15+12+10+9+18-9
      cout<<"El promedio es"<<prom<<endl;
      system("PAUSE");
}
