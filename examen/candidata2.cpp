//Programa que calcula calificaciones de alumnos
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#define Q reinterpret_cast<char *>
using namespace std;
const int MAXIMO = 100 ;
//Definición de estructuras
//Definicion de tipos
struct Alumno
{
 string n_alumno;
 int test1,test2;
 int parcial, final;
 string notaglobal;
};
typedef Alumno Curso[MAXIMO];
//Prototipos de funciones
bool LeerRegistro(ifstream& in_f, Alumno & alu);
void MostrarRegistro(ofstream& out_f, Alumno alu);
void CalcularNotaRegistro(Alumno & alu);

int main()
{
//Declaro un vector para almacenar la información de los alumnos
Curso micurso;
int i, elementos;
ifstream ent_f;
ofstream sal_f;
string nombre_in, nombre_out;
cout << "Introduce mi nombre de fichero con los datos\n";
//Leo nombre y almaceno en una variable tipo 'string'
cin >> nombre_in;
cout << nombre_in;
ent_f.open( nombre_in.c_str() );
if (!ent_f)
cout << "Error abriendo fichero de datos."<< endl;
else
{
i = 0;
//Leo registros almacenados en el fichero
while(LeerRegistro(ent_f, micurso[i]))
{
CalcularNotaRegistro(micurso[i]);
i++;
}
elementos = i;
ent_f.close(); //Cierro el fichero
//Fichero donde guardar los resultados
cout << "Introduce el nombre del fichero donde guardar el resultado\n";
cin >> nombre_out;
//Convierto a cadena de caracteres tipo C
sal_f.open( nombre_out.c_str() );
if ( !sal_f)
cout << "Error abriendo fichero\n";
else
{for (i = 0; i < elementos ; i++)
MostrarRegistro(sal_f, micurso[i]);
sal_f.close(); //Cierro el fichero
}
}
return 0;
}


bool LeerRegistro(ifstream& in_f, Alumno &alu)
{
//Leo cada elemento de la estructura de forma independiente
//Leo el nombre
getline(in_f,alu.n_alumno);
//Leo las notas
in_f >> alu.test1;
in_f >> alu.test2;
in_f >> alu.parcial;
in_f >> alu.final;
//Para saltar el salto de linea que queda en el buffer
in_f.ignore();
//Devuelvo true si todo ha ido bien, false en caso contrario
return !(in_f.eof()) ;
}
//Escribo los datos almacenados en el registro a un archivo
void MostrarRegistro(ofstream& out_f, Alumno alu)
{
//Escribo el resultado en el fichero asociado a out_f
out_f << alu.n_alumno << endl;
out_f << alu.test1 << " " << alu.test2 << " " << alu.parcial << " " << alu.final << " "
<< alu.notaglobal<< endl;
return;
}
//Calculo la nota final
void CalcularNotaRegistro(Alumno & alu)
{
float notanumerica;
notanumerica = (alu.test1 + alu.test2) * 25 / 20 +
(alu.final / 2 ) + (alu.parcial / 4);
if (notanumerica > 90.0)
alu.notaglobal= "Sobresaliente";
else if (notanumerica > 70.0)
alu.notaglobal= "Notable";
else if (notanumerica > 50.0 )
alu.notaglobal="Aprobado";
else
alu.notaglobal="Suspendido";
return;
}
