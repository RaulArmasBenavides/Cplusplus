#include <iostream>
#include <iomanip>
using namespace std;

int main()
{    int a[]={ 2, 9 , 12, 8, 7, 4};
     int b[]={5, 6,  7 ,9};
     int n1=6,n2=4;
     int i;
         for (i = 0; i < n1; i++)      {
                   if (a[i] % 2 == 0)   {
                             b[n2]=a[i];
                            n2 = n2 + 1;
                            cout<<b[n2]<<endl;
                   }
           }

           for( int j=0;j<n2;j++)
           {
               cout<<b[j];
           }
return 0;
}
