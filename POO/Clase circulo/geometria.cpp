#include<iostream>
#include<cmath>
using namespace std;
//declaracion de la estructura
struct punto
{
    float x,y;
};
//declaracion de clase
class circulo
{
private:
punto c;//cetrno
float r;//radio
public:
circulo();
circulo(float xx,float yy,float rr);
~circulo();
void leer();
void ecuacion();
void setc(punto cc);
void setr(float rr);
punto getc();
float getr();
void interseccionx(punto &p,bool &ok);
//si interseca al eje x devuelve un punto de interseccion y ok=true
//en caso constrario ok=false
friend bool pertenece (circulo  k ,punto p);
//verifica si el punto p esta dentro del circulo k
friend void desplazar(circulo &k,int s ,float d);
//desplaza el circulo k una distancia d segun el valor de s
};

punto circulo :: getc()
{  // punto p;//= this.c;
   // p.x = c.x;
   // p.y = c.y;
    return c;
}
//definicion de funciones miembro
void circulo :: interseccionx(punto &p, bool &ok)
{

}
bool pertenece(circulo k , punto p)
{

}
void desplazar (circulo &k,int s,float d)
{
    punto ck;
    ck=k.getc();
    switch(s)
    {
    case 1:ck.y=ck.y+d;
           break;
    case 2:ck.y=ck.y-d;
           break;
    case 3:ck.x=ck.y+d;
           break;
    case 4:ck.x=ck.y-d;
           break;
    }
}


class Circulo2{
public:
void setRadio(float a); // asignar el radio
float getRadio(); // recuperar el radio
double area(); //calcular y devolver area
double perimetro(); //calcular y devolver perimetro
void print(); //funciones de utileria
private:
float radio;
};
void Circulo2 :: setRadio(float a)
{
    radio=a;
}
float Circulo2 :: getRadio() // recuperar radio
{
    return radio;
}
double Circulo2 :: area()
{
    return  3.14* pow(radio, 2);
}



class angulo{
public:
    angulo(){} //constructor por defecto
    angulo(int);//constructor
    void print();
private:
    int ang;
};

class seno : public angulo{
public:
    void valor(int ang);
    };
void seno :: valor(int ang)
{
    cout<<"el seno de "<<ang<< " es "<<sin(ang*M_PI/180)<<endl;
}
angulo::angulo(int a)
{
    ang=a;
}
void angulo :: print()
{
    cout<<"el angulo es "<<ang<<endl;
}



//implementacion de la funcion principal
int main()
{
  Circulo2 c;
  c.setRadio(10);
  cout<<"El radio del circulo es " << c.getRadio()<<endl;
  cout<<"El área del círculo es " <<c.area()<<endl;

  //angulo
  angulo ang(30);
  seno x;
  ang.print();
  x.valor(30);
return 0;
}
