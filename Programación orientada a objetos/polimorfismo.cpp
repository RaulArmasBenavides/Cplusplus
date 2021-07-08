#include<iostream>
#include<cmath>
using namespace std;
class angulo{
public:
    angulo(){}
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
int main()
{ angulo ang(30);
  seno x;
ang.print();
x.valor(30);
return 0;
}
