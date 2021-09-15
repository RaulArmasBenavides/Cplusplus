#include<iostream>
#include<cmath>
using namespace std;
//declaracion de la estructura


class angulo{
public:
    angulo(){} //constructor por defecto
    angulo(int);//constructor
    void print();
    int ang;
protected:

};

class seno : public angulo{
public:
    void valor(int ang);
    };
void seno :: valor(int ang)
{
    cout<<"el seno de "<<ang<< " es "<<sin(ang*M_PI/180)<<endl;
}

class coseno : public angulo{
public:
    void valor(int ang);
    };
void coseno :: valor(int ang)
{
    cout<<"el coseno de "<<ang<< " es "<<cos(ang*M_PI/180)<<endl;
}
angulo::angulo(int a)
{
    ang=a;
}
void angulo :: print()
{
    cout<<"el angulo es "<<ang<<endl;
}




class Triangle
{
	private:
    float l1,l2,l3;
	float base, height;
	angulo alfa;
	public:
    void setAngulo(int b)
	{
		alfa.ang = b;
	}
	 void setLados(float lx, float ly, float lz)
	{
		l1 = lx;
		l2 = ly;
		l3 = lz;
	}
	void setBase(float b)
	{
		base = b;
	}
	void setHeight(float h)
	{
		height = h;
	}
	float area()
	{
		float a;
		a= 1.0 / 2.0 * base * height;
		return a;
	}

};


//implementacion de la funcion principal
int main()
{
  char criterio;
  //angulo
  angulo ang(30);
  seno x;
  ang.print();
  x.valor(30);


  cout<<"Ingrese el criterio (L) o (A)"<<endl;
  cin.get(criterio);

return 0;
}
