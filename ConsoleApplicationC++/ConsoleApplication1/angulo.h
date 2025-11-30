#pragma once
#include <iostream>

class angulo {
public:
    angulo();          // constructor por defecto
    angulo(int a);     // constructor con valor
    void print();      // muestra el ángulo

    int  get() const;  // (opcional) obtener valor
    void set(int a);   // (opcional) asignar valor

private:
    int ang;
};

class seno : public angulo {
public:
    // usa el constructor de la base
    using angulo::angulo;

    // muestra el seno del ángulo actual
    void valor();
};