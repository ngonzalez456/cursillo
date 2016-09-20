#ifndef FRACCIONES_H
#define FRACCIONES_H

#include <iostream>
using namespace std;

class Fracciones {
public:
    Fracciones();
    Fracciones(int numerador, int denominador);
    Fracciones(const Fracciones& orig);
    virtual ~Fracciones();

    int numerador;
    int denominador;

    Fracciones operator+(Fracciones b);
    Fracciones operator-(Fracciones b);
    Fracciones operator*(Fracciones b);
    Fracciones operator/(Fracciones b);
    virtual void operator~();

};



#endif /* FRACCIONES_H */

