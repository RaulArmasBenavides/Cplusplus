//declaracion de librer�as
#include<iostream>

//definici�n de clases
class cuenta{
public:
    cuenta();
    float saldo_cuenta();
    float retirar(float);
    void  depositar(float);
private:
    float saldo;
};

cuenta :: cuenta()
{
    saldo=0.0;
}

float cuenta :: saldo_cuenta()
{
    return saldo;
}
float cuenta :: retirar(float cantidad)
{
    if(cantidad<=saldo)
    {
        saldo=saldo - cantidad;
        return cantidad;
    }
    else
    {
        return 0;
    }
}
void cuenta :: depositar(float cantidad)
{
    saldo=saldo + cantidad;
}
using namespace std;
int main()
{ cuenta raul;
  cout<<"El saldo de raul es " <<raul.saldo_cuenta()<<endl;
  raul.depositar(500);
  cout<<"El saldo de raul es " <<raul.saldo_cuenta()<<endl;
  raul.retirar(20);
  cout<<"El saldo de raul es " <<raul.saldo_cuenta()<<endl;
  raul.retirar(20);
  cout<<"El saldo de raul es "<<raul.saldo_cuenta()<<endl;
  return 0;
}
