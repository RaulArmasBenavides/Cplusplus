#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

main()
{
      int menor=999999, nro;
      do{
          cout<<"Ingresar numero: ";
          cin>>nro;
          if (nro<menor)
             menor=nro;
      }
      while(nro!=0);
      cout<<"El emnor numero es: "<<menor<<endl;
      system("PAUSE");
}
