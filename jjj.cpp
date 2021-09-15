#include<iostream>
using namespace std;
//declaracion de funciones prototipo


//definicion de funciones


//implementacion de la funcion principal
int main()
{   int i,j;
    int m=0, x=0;
    int a[]={17,10,3,12,14,9};
    int b[]={0,0,0,0,0,0};

for(i=0; i<6; i++)
     {

              if(a[i]>x+m){
                  x=x+m;
                  b[x]=a[i];
      }
      }

      cout<<endl;

for(int z =0; z<6;z++)
    cout<<b[z]<<endl;
return 0;
}
