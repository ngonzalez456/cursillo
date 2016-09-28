/**
 * @file main.cpp
 * @author Jose Fernando Gonzalez Salas & Isaac Gomez Sanchez
 * @date 20 de setiembre, 2016
 * @brief En este programa se hace uso de los templates para hacer una calculadora con los métodos suma, resta, división, multiplicación e impresión de diferentes objetos. 
 * En este caso dichos objetos del tipo Matriz, Fracciones y Polinomio.
 */


#include <cstdlib>
#include <string>
#include <ctime>

#include "Calculadora.h"
#include "Fracciones.h"
#include "Matriz.h"
#include "Polinomios.h"

using namespace std;

int main(int argc, char** argv) {
	
    double d1[] = {1,2,3};
    double d2[] = {3,2,1};

    int size1 = (sizeof(d1)/sizeof(*d1));
    int size2 = (sizeof(d2)/sizeof(*d2)); 
    
    Polinomios p1(d1, size1, d2, size2);
    
    Calculadora<Fracciones> fr;
    
    Fracciones fa;
    fa.numerador=3;
    fa.denominador=4;
    
    Fracciones fb;
    fb.numerador=2;
    fb.denominador=4;
    
    Fracciones f;
    
    f=fr.add(fa, fb);    
    fr.print(f);
    
        
    return 0;

}
