#include<iostream>
using namespace std;
class Empleado{
protected:
    int edad;
public:
    Empleado(){};
    Empleado(int n);
    ~Empleado(){};
    };
Empleado :: Empleado(int n)
{
    edad=n;
}
class Asalariado :public Empleado { //Herencia
protected:
float salario;
public:
    Asalariado(){};
    Asalariado(float sal,int n);
    ~Asalariado(){};
};
Asalariado ::  Asalariado(float sal,int n):Empleado(n)
{
    salario=sal;
}
class Estudiante{
public:
    Estudiante(){};
    Estudiante(int n1,int n2,int n3);
    ~Estudiante(){};
protected:
    int ident;
    int grado;
    int peso;
};
Estudiante :: Estudiante(int n1,int n2,int n3)
{
    ident=n1;
    grado=n2;
    peso=n3;
}
class Practicante:public Estudiante,public Asalariado
{
public:
    Practicante(){};
    Practicante(int,int,int,float,int);
    ~Practicante(){};
    void print();
};
Practicante :: Practicante(int n1,int n2,int n3,float sal,int n):Estudiante(n1,n2,n3),Asalariado(sal,n)
{}
void Practicante :: print()
{
    cout<<"DNI:   "<<ident<<endl;
    cout<<"EDAD:  "<<edad<<endl;
    cout<<"PESO:  "<<peso<<endl;
    cout<<"GRADO: "<<grado<<endl;
    cout<<"SALARIO: "<<salario<<endl;
}
int main()
{
    Practicante Raul(15170111,2,75,1000,18);//DECLARO OBJETO
    Raul.print();

    return 0;
}
