#include<stdlib.h>
#include<iostream>
const int TAM=10;
using namespace std;
//declaracion de clase stack
class stack {
private:
char stck[TAM]; //array para guardar caracteres
int icp; //indice a la cabeza o tope de la pila
public:
    void inicio();
    void push(char ch);//meter o inserat caracter
    char pop();//retirar caracter
};
//inicilizar pila
void stack :: inicio()
{
    icp=0;
}
//operacion push
void stack :: push(char ch)
{
    if(icp == TAM)
    {
        cout<<"Pilla llena...overflow"<<endl;
        exit(1);
    }
    stck[icp]=ch;
    icp++;
}
//operacion pop
char stack :: pop()
{
    if(icp==0)
    {
        cout<<"Pila vacia...underflow"<<endl;
        return 0;
    }
    icp--;
   return stck[icp];
}
//funcion principal
int main()
{
    stack p1,p2;
    int i;
    p1.inicio();p2.inicio();
    p1.push('p');
    p1.push('u');
    p1.push('t');
    p1.push('a');
    for(i=0;i<4;i++)
        cout<<p1.pop()<<endl;
        cout<<endl;
    return 0;
}
