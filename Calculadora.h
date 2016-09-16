#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <cstdlib>
#include <string>
#include <ctime>
#include <iostream>

#include "Matriz.h"

using namespace std;

template <typename data>

class Calculadora {
    
public:
    
    Calculadora();
    Calculadora();
    Calculadora(const Calculadora& orig);
    virtual ~Calculadora();

    void add(data &d1, const data &d2){

        return (d1 + d2);

    }

    void sub(data &d1, const data &d2){

        return (d1 - d2);

    }

    void mul(data &d1, const data &d2){

        return (d1 * d2);

    }

    void div(data &d1, const data &d2){

        return (d1 / d2);

    }

    void print(data &d);

};

#endif /* CALCULADORA_H */
