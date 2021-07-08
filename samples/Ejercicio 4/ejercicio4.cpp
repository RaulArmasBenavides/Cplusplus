#include<iostream>
#include<stdio.h>
#include<conio.h>//para getch()
#include<string.h> //para funciones predeterminadas de cadena
#include<stdlib.h>// para exit(1);
#include<ctype.h>
using namespace std;
class Correo
{ private:
  //declaracion de atributos privados
  char usuario[30];
  string clave1,clave2;
  public:
  //declaracion de metodos publicos
  Correo();//constructor
  ~Correo(){};//destructor
  void LeerUsuario();
  void GenerarCorreo();
};
//Definición de metodos
Correo :: Correo()
{
}
void Correo :: LeerUsuario()
{
    cout<<"Ingrese el nombre del usuario"<<endl;
    gets(usuario);
}
void Correo :: GenerarCorreo()
{
    for(int i=1;i<=3;i++)
    {
    cout<<endl;
    cout<<"Oportunidad "<<i<<" de "<<3<<endl;
    cout<<"Ingrese la contraseña"<<endl;
    char c1=getch();
    while(c1 !=13) // !=13 es para que pare de captar los caracteres cuando presionemos enter
    {
        clave1.push_back(c1);
        cout<<"*";
        c1=getch();
    }
    cout<<endl;
    cout<<"Ingrese nuevamente la contrasenia"<<endl;
    char c2=getch();
       while(c2 !=13)
    {
        clave2.push_back(c2);
        cout<<"*";
        c2=getch();
    }
    if(clave1==clave2)
    {   cout<<endl;
        cout<<"Las claves son iguales!..."<<endl;
        cout<<"Generando el correo ..."<<endl;
        cout<<"El correo generado es "<<strcat(usuario,"@unmsm.pe")<<endl;
        system("PAUSE");
        exit(1);
    }
    }
    cout<<endl;
    cout<<"Usted ha fallado todos los intentos"<<endl;
}
//funcion principal
int main()
{ //Creación del objeto
    Correo correo;
  //invocacion de los metodos
   correo.LeerUsuario();
   correo.GenerarCorreo();
return 0;
}
