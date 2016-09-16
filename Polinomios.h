#ifndef POLINOMIOS_H
#define POLINOMIOS_H

#include <string>

class Polinomios {
public:
    Polinomios();
    Polinomios(double arreglo[]);
    Polinomios(const Polinomios& orig);
    virtual ~Polinomios();

    double arreglo[];

    void operator+();
    void operator-();
    void operator*();
    void operator/();
    void operator~();
};

#endif // FIGURAS_H