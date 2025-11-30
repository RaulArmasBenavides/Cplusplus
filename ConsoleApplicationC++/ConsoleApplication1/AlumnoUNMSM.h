#pragma once

class alumnoUNMSM
{
public:
	alumnoUNMSM();                          // constructor por defecto
	alumnoUNMSM(char cod[], char nom[]);    // constructor alternativo
	alumnoUNMSM(alumnoUNMSM& a);            // constructor de copia
	~alumnoUNMSM();                         // destructor

	void  getDatos();       // mostrar datos
	float promedio();       // promedio simple
	float promPonderado();  // promedio ponderado

private:
	char  codigo[10];       // código alumno
	char  nombre[40];       // nombre de alumno
	int   notasFinales[5];  // notas finales en 5 cursos
	float creditaje[5];     // creditaje en cada curso
};
