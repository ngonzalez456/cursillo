/**
 * @file main.cpp
 * @author Jose Fernando Gonzalez Salas & Isaac Gomez Sanchez
 * @date 20 de setiembre, 2016
 * @brief En este programa se hace uso de los templates para hacer una calculadora con los métodos suma, resta, división, multiplicación e impresión de diferentes objetos. 
 * En este caso dichos objetos del tipo Matriz, Fracciones y Polinomio.
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>

#include "Calculadora.h"
#include "Polinomios.h"

using namespace std;

int main(int argc, char** argv) {
	   
    Calculadora<Polinomios> pol;
    
    double a[] = {1, 2, 3};
    Polinomios p1(3, a);

    cout << "El polinomio 1 es: " << endl;
    ~p1;
    
    double b[] = {4, 5, 6};
    Polinomios p2(3, b);

    cout << "El polinomio 2 es: " << endl;
    ~p2;

    Polinomios p3;  
    p3=pol.add(p1, p2);
    
    cout << "La suma de los polinomios es: " << endl;
    pol.print(p3);

    p3=pol.sub(p1, p2);
    
    cout << "La resta de los polinomios es: "<< endl;
    pol.print(p3);

    p3=pol.mul(p1, p2);
    
    cout << "La multiplicacion de los polinomios es: " << endl;
    pol.print(p3);

    p3=pol.div(p1, p2);
    
    cout << "La division de los polinomios es: " << endl;
    pol.print(p3);
        
    return 0;

}
