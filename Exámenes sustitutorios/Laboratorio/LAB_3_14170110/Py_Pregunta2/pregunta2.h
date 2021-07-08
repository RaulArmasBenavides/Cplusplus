#ifndef PREGUNTA2_H
#define PREGUNTA2_H

class centro_espectaculo{
private:
    char dueno[30];	// nombre del  due�o
    char direccion[40]; // direcci�n del centro de espect�culos
    char telefono[10]; // tel�fono del centro de espect�culos
public:
    centro_espectaculo( char du[30], char di[40] , char t[10] );
    ~centro_espectaculo();
    void ingresar();	// ingreso de los datos del centro de espect�culos
    void imprimir(); // impresi�n de los datos del centro de espect�culos
};

class cine :  public centro_espectaculo {
private:
	char nombre[20];  // nombre del cine
	int cantsalas;	// cantidad de salas que tiene el cine
	float entrada;	// costo de la entrada
	char pelicula[20][40]; // nombre de las pel�culas que se proyectan en cada sala
	int asistentes[20]; // cantidad de espectadores en cada sala
public:
	cine(char du[30],char di[40],char t[10],char n[20], int c, float e);
    ~cine();
    void ingresar();	// ingreso de todos los datos del cine
    void imprimir();	// impresi�n de los datos generales del cine
    void cartelera();	// impresi�n de las pel�culas y su n�mero de sala
    float taquilla();  // devuelve el total recaudado considerando todas las salas
};


#endif // PREGUNTA2_H
