// Programa de pilas con menú
#include <iostream>
#include <iomanip>

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
void menu()
{
    cout<<"\n<1>  Poner  \n";
    cout<< "<2>  Quitar  \n" ;
    cout<<"<3>  Ver    \n";
    cout<<"<4>  Salir   \n";
}

bool ocupado ()
{
if (i>=tope)
return true;
else
return false;
}

bool vacio()
{
    if(i<=0)
     return true;
    else
     return false
}

void meter(int dato){
vector[i]=dato;
         			 i=i+1;
      		   }
     		    int sacar(){
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
int main(int argc, char** argv) {
	char op;
int dato;
PILA p(5);
for(;;){
p.menu();
cout<<"\nIngrese opcion ";
op=cin.get();
switch(op){
case '1':
if(!p.ocupado()){
cout<<"\n ingrese numero: ";cin>>dato;
p.meter(dato);
cout<<"se ingreso correctamente";
  		                             }
else
cout<<"la pila esta llena";
break;
case '2':
    if(!p.vacio())
    {
        p.sacar();
        cout<<"se retiro correctamente";
    }
    else
    {
     cout<<"\n La pila esta vacia";
     break;
    }
case '3':p.ver(); break;
case '4':return 0;
           	}
cin.get();
   	}
	return 0;
}
