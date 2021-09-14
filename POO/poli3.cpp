#include<iostream>
#include<cmath>
using namespace std;
class punto {
public:
punto(){};  //constructor
punto(int,int);
~punto(){}//destructor
void setx(int);
void sety(int);
int getx()const;
int gety()const;
friend double distancia(punto,punto);// funcion amiga
protected:
    int x;
    int y;
};
punto :: punto(int a,int b)
{
    x=a;
    y=b;
}
int punto :: getx()const
{
    return x;
}
void punto :: setx(int a)
{
  x=a;
}
int punto :: gety()const
{
    return y;
}
void punto :: sety(int b)
{
  y=b;
}
double distancia(punto p1,punto p2)
{
    return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
}
//Clase derivada:punto 3D
class punto3D: public punto{
public:
    punto3D(){};
    punto3D(int,int,int);
    ~punto3D(){};
    void setz(int);
    int getz();
    friend double distancia(punto3D,punto3D);
private:
    int z;
    };
punto3D :: punto3D(int x0,int y0,int z0):punto(x0,y0)
{
    z=z0;
}
int punto3D :: getz()
{
    return z;
}
void punto3D :: setz(int z0)
{
    z=z0;
}
double distancia(punto3D p1,punto3D p2)
{
    return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2)+pow(p1.z-p2.z,2));
}
int main()
{   punto p1(1,1),p2(2,2);

cout<<"herencia con la clase punto "<<endl;
cout<<"----------------------------------PUNTO 2D--------------------------------------"<<endl;
cout<<"coordenadas de p1 ("<< p1.getx()<<","<<p1.gety()<<")"<<endl;
cout<<"coordenadas de p2 ("<< p2.getx()<<","<<p2.gety()<<")"<<endl;
punto3D p3(1,1,1),p4(2,2,2);
    cout<<"----------------------------------PUNTO 3D -------------------------------------"<<endl;
cout<<"coordenadas de p3 ("<< p3.getx()<<","<<p3.gety()<<","<<p3.getz()<<")"<<endl;
cout<<"coordenadas de p4 ("<< p4.getx()<<","<<p4.gety()<<","<<p4.getz()<<")"<<endl;
    return 0;
}
