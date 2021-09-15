/*1 3   5   7   9   11  .....*/
#include<iostream>
#include<cstdlib>
using namespace std;
main(){
       int ter=1, con=0, suma=0, n;
       cout<<"Ingresar cantidad de terminos:";
       cin>>n;
       while(con<n){
           cout<<ter<<"\t";
           suma=suma+ter;
           ter=ter+2;
           con++;        //con=con+1;    
       }
       cout<<endl<<"La suma es "<<suma<<endl;
       system("PAUSE");
}
