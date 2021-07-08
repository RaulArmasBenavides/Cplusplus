#include <iostream>
#include "matriz.h"
using namespace std;
Matriz :: Matriz()
{
    orden = 0;
}

Matriz :: Matriz(int od,int m[20][20])
{
    orden = od;
    for(int i=0;i<orden;i++)
        for(int c=0;c<orden;c++)
            mat[i][c]=m[i][c];
}

Matriz :: Matriz(const Matriz& m)
{
    orden = m.orden;
    for(int i=0;i<orden;i++)
        for(int c=0;c<orden;c++)
            mat[i][c]=m.mat[i][c];
}

Matriz :: ~Matriz()
{

}

void Matriz :: printMatriz()
{
    for(int i=0;i<orden;i++)
        for(int c=0;c<orden;c++)
            cout<<" "<<mat[i][c];
}

Matriz Matriz :: operator+(const Matriz& m)
{
    Matriz mr; //matriz resultante
    mr.orden = orden;
    for(int i=0;i<orden;i++)
        for(int c=0;c<orden;c++)
            mr.mat[i][c] = mat[i][c] + m.mat[i][c];
    return mr;
}

Matriz Matriz :: operator-(const Matriz& m)
{
    Matriz mr; //matriz resultante
    mr.orden = orden;
    for(int i=0;i<orden;i++)
        for(int c=0;c<orden;c++)
            mr.mat[i][c] = mat[i][c] - m.mat[i][c];
    return mr;
}

Matriz Matriz :: operator*(const Matriz& m)
{

}

Matriz& Matriz :: operator~()
{
    for(int i=0;i<orden;i++)
        for(int c=0;c<orden;c++)
            mat[i][c] = (-1)*mat[i][c];
    return *this;
}

Matriz& Matriz :: operator!()
{
    for(int i=0;i<orden;i++)
        for(int c=0;c<orden;c++)
            mat[i][c] = mat[c][i];
    return *this;
}

Matriz& Matriz :: operator++()
{
     for(int i=0;i<orden;i++)
        for(int c=0;c<orden;c++)
            mat[i][c] = mat[i][c] + 1;
    return *this;
}
