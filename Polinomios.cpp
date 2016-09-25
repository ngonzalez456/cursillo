#include <iostream>
#include <string.h>
#include "Polinomios.h"

/**
 * @brief Constructor vacio de clase Polinomios.
 */
Polinomios::Polinomios() {

    this -> base = 0;
    this -> coeficientes = 0;

};

/**
 * @brief Constructor sobrecargado de la clase Polinomios.
 *
 * @param d1 Arreglo de coeficientes del polinomio.
 * @param size Tamaño del arreglo d1.
 */
Polinomios::Polinomios(int base, double* coeficientes) {

    this -> base = base;
    this -> coeficientes = coeficientes;
    
};

/**
 * @brief Constructor de la clase Polinomios.
 *
 * @param Polinomios& Constante objeto.
 */
Polinomios::Polinomios(const Polinomios& orig) {
}


/**
 * @brief Destructor de la clase Polinomios.
 */
Polinomios::~Polinomios(){};

/**
 * @brief Sobrecarga el operador += para sumar constantes en tipo Polinomios.
 */
Polinomios Polinomios::operator+= (Polinomios b) {

    int tamano = (b.base > base) ? b.base : base;
    
    double *coefNuevo = new double [tamano]; 

    for (int i = 0; i < tamano; i++) {
        coefNuevo[i] = 0;
    }
    for (int i = 0; i < b.base; i++) {
        coefNuevo[i] += b.coeficientes[i];
    }
    for (int i = 0; i < base; i++) {
        coefNuevo[i] += coeficientes[i];
    }
    delete [] coeficientes; 
    coeficientes = coefNuevo;
    base = tamano;
    return *this;
}

/**
 * @brief Sobrecarga el operador + para sumar dos objetos tipo Polinomios.
 */
Polinomios Polinomios::operator + (Polinomios b){

    Polinomios resultado = *this;
      
    resultado += b;

    return resultado;
        
}

/**
 * @brief Sobrecarga el operador -= para restar constantes en tipo Polinomios.
 */
Polinomios Polinomios::operator-= (Polinomios b) {

    Polinomios negativo = *this;

    int size = (sizeof(coeficientes)/sizeof(*coeficientes));

    double* coef = this -> coeficientes;

    for (int i = 0; i < size; i++) {

        coef[i] = coeficientes[i] * -1.0;

    }

    negativo.coeficientes = coef;
 
    Polinomios resultado = *this + (negativo);
 
    this->base = resultado.base;
  
    this->coeficientes = resultado.coeficientes;
 
    return *this;
}


/**
 * @brief Sobrecarga el operador - para restar dos objetos tipo Polinomios.
 */
Polinomios Polinomios::operator - (Polinomios b){
    
    Polinomios resultado = *this;

    resultado -= b;

    return resultado;
  
}


/**
 * @brief Sobrecarga el operador *= para multiplicar constantes en tipo Polinomios.
 */
Polinomios Polinomios::operator*= (Polinomios b) {
 
    this->base = this->base + b.base;

    int size = (sizeof(coeficientes)/sizeof(*coeficientes));
 
    double* resultado = this->coeficientes;

    for (int i = 0; i < size; i++) {

        resultado[i] = coeficientes[i] * b.coeficientes[i];

    }
 
    this->coeficientes = resultado;
 
    return *this;
}

/**
 * @brief Sobrecarga el operador * para multiplicar dos objetos tipo Polinomios.
 */
Polinomios Polinomios::operator*(Polinomios b){
    
    Polinomios resultado = *this;

    resultado *= b;

    return resultado;

}

/**
 * @brief Sobrecarga el operador /= para dividir constantes en tipo Polinomios.
 */
Polinomios Polinomios::operator /= (Polinomios b)
{

    for (int i = 0; i <= base; ++i)
    {
        coeficientes[i] /= b.coeficientes[i];
    }

    return *this;
}

/**
 * @brief Sobrecarga el operador / para dividir dos objetos tipo Polinomios.
 */
Polinomios Polinomios::operator /(Polinomios b)
{
    return Polinomios(b) /= b.coeficientes;
}

/**
 * @brief Sobrecarga el operador ~ para imprimir los atributos de la clase.
 */
void Polinomios::operator~(){

    int size1 = (sizeof(coeficientes)/sizeof(*coeficientes));

    for(int i = 0; i < size1; i++) {
        
        cout << coeficientes[i] << "x" << i << " ";
        
    };

    cout << endl;
    
}
