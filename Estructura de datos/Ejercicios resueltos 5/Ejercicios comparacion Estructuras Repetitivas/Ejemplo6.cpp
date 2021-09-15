#include <cstdlib>
#include <iostream>

using namespace std;

main()
{
      int voto, c1=0, c3=0, c2=0, tot;
      double pc1, pc2, pc3;
      do{
           cout<<"Ingresar voto (1, 2, 3): ";
           cin>>voto;     
           switch(voto){
               case 1: c1++;    break;
               case 2: c2++;    break;
               case 3: c3++;    break;         
           }
      }  
      while(voto!=0);
      tot=c1+c2+c3;
      pc1=(double)(c1*100)/tot;
      pc2=(double)(c2*100)/tot;
      pc3=(double)(c3*100)/tot;
      cout<<"Cantidad de votos para el candidato 1 es "<<c1
          <<" y representa el "<<pc1<<"%"<<endl
          <<"Cantidad de votos para el candidato 2 es "<<c2
          <<" y representa el "<<pc2<<"%"<<endl
          <<"Cantidad de votos para el candidato 3 es "<<c3
          <<" y representa el "<<pc3<<"%"<<endl;
      system ("PAUSE");
}
