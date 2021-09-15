#include<iostream>
#include<cstdlib>
using namespace std;
main(){
       int d=1, nro, con=0;
      cout<<"Ingresar numero: ";
      cin>>nro;
      while(d<=nro){
          if(nro%d==0) 
              con++;
          d++;   
      }
      if(con==2)
         cout<<"Es primo"<<endl;
      else
         cout<<"No es primo"<<endl;
       system("PAUSE");
}
