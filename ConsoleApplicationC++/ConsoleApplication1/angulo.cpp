#define _USE_MATH_DEFINES   // para que M_PI funcione en MSVC
#include "angulo.h"
#include <cmath>
#include <iostream>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
using namespace std;

angulo::angulo() : ang(0) {}

angulo::angulo(int a) : ang(a) {}

void angulo::print() {
    cout << "el angulo es " << ang << endl;
}

int angulo::get() const {
    return ang;
}

void angulo::set(int a) {
    ang = a;
}

// ====== seno ======

void seno::valor() {
    int a = get();
    cout << "el seno de " << a << " es "
        << sin(a * M_PI / 180.0) << endl;
}