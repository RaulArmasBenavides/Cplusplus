#include <iostream>
#include "pregunta2.h"
using namespace std;

int main()
{
    /*PROBAR EL PRIMER CONSTRUCTOR*/
    centro_espectaculo ce1("Ruiz Lopez", "Av. Peru cda. 8", "987654321"); //centro de espectaculos 1
    ce1.imprimir();
    cout<<endl<<endl;

    /*PROBAR ingresar()*/
    centro_espectaculo ce2(" ", " ", " "); //centro de espectaculos 2
    ce2.ingresar();
    ce2.imprimir();
    cout<<endl<<endl;

    /*PROBAR CINE*/
    cine cn1("Ruiz Lopez", "Av. Peru cda. 8", "987654321","Cinepolis",20,17.8); //cine 1
    cn1.imprimir(); //NOTA: AL IMPRIMIR SALE BASURA (AL FINAL) PORQUE NO SE LLENARON LOS OTROS DOS DATOS MIEMBRO CON EL CONSTRUCTOR
    cout<<endl<<endl;
    //cine 2
    cine cn2(" ", " ", " ", " ", 0, 0); //A falta de constructor por defecto
    cn2.ingresar();
    cn2.imprimir();
    cn2.cartelera();
    cout<<"\nTotal recaudado: "<<cn2.taquilla();
    cout <<endl<< endl;
    return 0;
}
