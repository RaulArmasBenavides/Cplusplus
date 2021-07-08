#include<iostream>
#include<string.h>
using namespace std;
class Persona
{
public:
    Persona(){};
    Persona(char nom[]);
    char *LeerNombre();
    ~Persona(){};
private:
char nombre[40];
};
Persona :: Persona(char nom[])
{
    strcpy(nombre,nom);
}
char* Persona :: LeerNombre()
{
    return nombre;
}
int main()
{ Persona Raul("Raulito");
  cout<<Raul.LeerNombre();
  Raul.~Persona();
 return 0;
}
