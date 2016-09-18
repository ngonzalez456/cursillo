#ifndef POLINOMIOS_H
#define POLINOMIOS_H

#include <string>

class Polinomios {
public:
    Polinomios();
    Polinomios(double p1[], int size1, double p2[], int size2);
    Polinomios(const Polinomios& orig);
    virtual ~Polinomios();

    double d1[];
    double d2[];
    int size1;
    int size2;

    virtual void operator+();
    virtual void operator-();
    virtual void operator*();
    virtual void operator/();
    virtual void operator~();

private:
    double resultado[];

};

#endif // FIGURAS_H
