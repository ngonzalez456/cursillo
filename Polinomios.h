#ifndef POLINOMIOS_H
#define POLINOMIOS_H

#include <string>

using namespace std;

class Polinomios {
public:
    Polinomios();
    Polinomios(int base, double* coeficientes);
    Polinomios(const Polinomios& orig);
    virtual ~Polinomios();

    int base;
    double* coeficientes;

    Polinomios operator+(Polinomios b);
    Polinomios operator+= (Polinomios b);
    Polinomios operator-= (Polinomios b);
    Polinomios operator-(Polinomios b);
    Polinomios operator*(Polinomios b);
    Polinomios operator*= (Polinomios b);
    Polinomios operator/(Polinomios b);
    void operator~();

private:
    double resultado[];

};

#endif // POLINOMIOS_H
