#ifndef PREGUNTA2_H
#define PREGUNTA2_H

class centro_espectaculo{
private:
    char dueno[30];	// nombre del  dueño
    char direccion[40]; // dirección del centro de espectáculos
    char telefono[10]; // teléfono del centro de espectáculos
public:
    centro_espectaculo( char du[30], char di[40] , char t[10] );
    ~centro_espectaculo();
    void ingresar();	// ingreso de los datos del centro de espectáculos
    void imprimir(); // impresión de los datos del centro de espectáculos
};

class cine :  public centro_espectaculo {
private:
	char nombre[20];  // nombre del cine
	int cantsalas;	// cantidad de salas que tiene el cine
	float entrada;	// costo de la entrada
	char pelicula[20][40]; // nombre de las películas que se proyectan en cada sala
	int asistentes[20]; // cantidad de espectadores en cada sala
public:
	cine(char du[30],char di[40],char t[10],char n[20], int c, float e);
    ~cine();
    void ingresar();	// ingreso de todos los datos del cine
    void imprimir();	// impresión de los datos generales del cine
    void cartelera();	// impresión de las películas y su número de sala
    float taquilla();  // devuelve el total recaudado considerando todas las salas
};


#endif // PREGUNTA2_H
