#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>
using namespace std;

class Matriz{
public:
    Matriz();
    Matriz(int columnas, int filas, double** arreglo);
    Matriz(const Matriz& orig);
    virtual ~Matriz();
    
    int columnas;
    int filas;
    double ** arreglo;

    
    Matriz operator+(Matriz b);
    Matriz operator-(Matriz b);
    Matriz operator*(Matriz b);
    Matriz operator/(Matriz b);
    virtual void operator~();
};
#endif /* MATRIZ_H */
