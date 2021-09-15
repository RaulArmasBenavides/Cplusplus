#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

main()
{
    int n, con=1, num=1, den=1;
    double prod=1, ter;  
    cout<<"Ingresar cantidad de terminos: "; 
    cin>>n;
    for(con=1; con<=n; con++){
         cout<<num<<"/"<<den<<"^2"<<"\t";
         ter=num/pow(den, 2);
         prod=prod*ter;
         num=num+2;
         den++;               
    }
    /*
    while (con<=n){
         cout<<num<<"/"<<den<<"^2"<<"\t";
         ter=num/pow(den, 2);
         prod=prod*ter;
         num=num+2;
         den++;  
         con++;             
    }*/
    cout<<endl<<"El producto de la serie es"<<prod<<endl;

    system("PAUSE");
   
}
