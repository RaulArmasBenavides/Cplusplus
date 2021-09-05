#include<iostream>
using namespace std;
//fibonacci
float fibo(int n);
int main()
{ int n;
cout<<"Ingrese un numero"<<endl;
cin>>n;
cout<<"El fibonacci es "<<fibo(n)<<endl;
return 0;
}
float fibo(int n)
{
    if(n==0 || n==1) //caso base
        return n;
    else
        return fibo(n-1)+fibo(n-2); // la funcion se llama asi mismo
}

