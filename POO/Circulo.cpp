#include<iostream>
#include<cmath>
using namespace std;
class Circulo{
public:
void setRadio(float a); // asignar el radio
float getRadio(); // recuperar el radio
double area(); //calcular y devolver area
double perimetro(); //calcular y devolver perimetro
void print(); //funciones de utileria
private:
float radio;
};
void Circulo :: setRadio(float a)
{
    radio=a;
}
float Circulo :: getRadio() // recuperar radio
{
    return radio;
}
double Circulo :: area()
{
    return  3.14* pow(radio, 2);
}
int main()
{
  Circulo c;
  c.setRadio(10);
  cout<<"El radio del circulo es " << c.getRadio()<<endl;
  cout<<"El área del círculo es " <<c.area()<<endl;

}
