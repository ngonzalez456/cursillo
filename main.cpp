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
	
    Calculadora<Fracciones> pol;
	
    double a[] = {1, 2, 3};
    Polinomios p1(3, a);
   
    double b[] = {4, 5, 6};
    Polinomios p2(3, b);

    Polinomios p3;  
    p3=pol.add(p1, p2);
    pol.print(p3);
    
        
    return 0;

}
