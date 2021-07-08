#include<iostream>
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

//implementacion de la funcion principal
int main()
{
return 0;
}
