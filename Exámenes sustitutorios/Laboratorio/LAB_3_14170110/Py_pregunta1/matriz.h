#ifndef MATRIZ_H
#define MATRIZ_H

class Matriz{
private:
    int orden;
    int mat[20][20];

public:
    Matriz();
    Matriz(int od,int m[20][20]);
    Matriz(const Matriz& m);
    ~Matriz();

    void printMatriz();
    Matriz operator+(const Matriz& m);
    Matriz operator-(const Matriz& m);
    Matriz operator*(const Matriz& m);
    Matriz& operator~();
    Matriz& operator!();
    Matriz& operator++();
};

#endif // MATRIZ_H
