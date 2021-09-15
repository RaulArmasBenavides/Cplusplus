#include<iostream>
using namespace std;
class PILA{
int vector[100];
int tope;
int i;
public:
PILA(){}
PILA(int TAMANO){
tope=TAMANO;
i=0;
}
bool vacio(){
if(i<=0)
return true;
else
return false;
}

void meter(int dato){
vector[i]=dato;
i=i+1;
      		   }
int sacar()
{
int temp;
temp=vector[i];
i--;
return temp;
}
void ver(){
for(int j=0; j<i;j++)
cout<<"  "<<vector[j];
    		    }
};
/*
Procedimiento MOVER()
    PILA: c, b, p
    carácter: x,y
    Mientras(No c.VACIO()) hacer
        Mientras( No p.VACIO()) hacer
                   yp.SACAR()
                   Si(No esdigito(y)) entonces
                                   c.METER(y)
                   Sino
                                   b.METER(y)
                   Fin-si
         Fin-mientras
         b.METER(c.SACAR())
    Fin-mientras
Fin-procedimiento
*/
int main(int argc, char** argv)
{

PILA  c,b,p;
char x,y;
int dato;
while (c.vacio()!=true)
{
    while(p.vacio()!=true)
    {
        p.sacar();
        if(esdigito(y)!=true)
            c.meter(y);
        else if
            b.meter(y)
    }
    b.meter(c.sacar());
}
return 0;
}


