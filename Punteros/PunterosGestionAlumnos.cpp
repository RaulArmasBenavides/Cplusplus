#include<iostream>
using namespace std;
void leer(int *n,int *nota)
{   int i;
        cout<<"ingrese numero de alumnos: ";
        cin>>*n;
    for(i=0;*n>i;i++)
    {
        cout<<"alumno #"<<i+1<<": ";cin>>*(nota+i);
        cout<<endl;
    }
    cout<<endl;
}
void contar(int *n,int *nota)
{
    int a=0,d=0,i;
    for(i=0;*n>i;i++)
    {
        if(*(nota+i)>=10.5)
            a++;
        else
            d++;
    }
        cout<<"Hay "<<a<<" aprobados"<<endl;
        cout<<"Hay "<<d<<" desaprobados"<<endl;
}
void mostrar(int *n,int *nota)
{
    int i;
    for(i=0;*n>i;i++)
    {
        cout<<"alumno #"<<i+1<<": ";cout<<*(nota+i);
        cout<<endl;
    }
    cout<<endl;

}
int main()
{
    int n,nota[20];
    leer(&n,nota);
    mostrar(&n,nota);
    contar(&n,nota);
    return 0;
}
