#include<iostream>
#include<cstdlib>
using namespace std;
main(){
       int num=1, den=1, n, con=0;
       double suma=0; 
       cout<<"Ingresar cantidad de terminos:";
       cin>>n;
       while(con<n){
            cout<<num<<"/"<<den<<"\t";
            suma=suma+((double)num/den);
            den=den+3;
            con++;        
       }
       cout<<endl<<"La suma es"<<suma<<endl;
       
       system("PAUSE");
}
