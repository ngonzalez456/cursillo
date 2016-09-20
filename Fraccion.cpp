#include "Fraccion.h"

/**
 * @brief Constructor vacio de clase Fracciones.
 */
Fracciones::Fracciones() {
};

/**
 * @brief Constructor sobrecargado de la clase Fracciones.
 *
 * @param nombre Nombre de la figura.
 * @param color Color de la figura.
 */
Fracciones::Fracciones(int numerador, int denominador) {

    this->numerador = numerador;
    this->denominador = denominador;

};

/**
 * @brief Constructor de la clase Fracciones.
 *
 * @param Fracciones& Constante objeto.
 */
Fracciones::Fracciones(const Fracciones& orig){};

/**
 * @brief Destructor de la clase Fracciones.
 */
Fracciones::~Fracciones() {
};

/**
 * @brief Sobrecarga el operador + para sumar dos objetos tipo Fracciones.
 */
Fracciones Fracciones::operator+(Fracciones b) {
    Fracciones c;
    c.denominador;
    c.numerador;
    if (this->denominador == b.denominador) {
        c.numerador = this->numerador + b.numerador;
        c.denominador = this->denominador;
    } else {
        c.numerador = b.denominador * this->numerador + this->denominador * b.numerador;
        c.denominador = this->denominador * b.denominador;
    }
    return c;
}

/**
 * @brief Sobrecarga el operador - para restar dos objetos tipo Fracciones.
 */
Fracciones Fracciones::operator-(Fracciones b) {
    Fracciones c;
    c.denominador;
    c.numerador;
    if (this->denominador == b.denominador) {
        c.numerador = this->numerador - b.numerador;
        c.denominador = this->denominador;
    } else {
        c.numerador = b.denominador * this->numerador - this->denominador * b.numerador;
        c.denominador = this->denominador * b.denominador;
    }
    return c;
}

/**
 * @brief Sobrecarga el operador * para sumar dos objetos tipo Fracciones.
 */
Fracciones Fracciones::operator*(Fracciones b) {
    Fracciones c;
    c.denominador;
    c.numerador;
    c.numerador = this->numerador * b.numerador;
    c.denominador = this->denominador * b.denominador;
    return c;
}

/**
 * @brief Sobrecarga el operador / para dividir dos objetos tipo Fracciones.
 */
Fracciones Fracciones::operator/(Fracciones b) {
    Fracciones c;
    c.denominador;
    c.numerador;
    c.numerador = this->numerador * b.denominador;
    c.denominador = this->denominador * b.numerador;
    return c;
}

/**
 * @brief Sobrecarga el operador ~ para imprimir los atributos de la clase.
 */
void Fracciones::operator~() {
     cout << this->numerador << "/" << this->denominador;
}
