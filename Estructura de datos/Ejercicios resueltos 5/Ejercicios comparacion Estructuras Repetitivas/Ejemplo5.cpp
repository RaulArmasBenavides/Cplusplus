#include <cstdlib>
#include <iostream>

using namespace std;

main()
{
      int n, nro, con=0;
      cout<<"Ingresar limite superior: ";
      cin>>n;
      for(nro=1; nro<=n; nro++)
           if(nro%7==0){
               cout<<nro<<"\t";
               con++;         
           }
      cout<<endl<<"La cantidad de numeros multiplos de 7 es "<<con<<endl;
      system("PAUSE");
}
