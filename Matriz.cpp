#include "Matriz.h"

/**
 * @brief Constructor vacio de clase Matriz.
 */
Matriz::Matriz() {
    
    arreglo = new double*[filas];
    for (int i = 0; i < filas; ++i) {
        arreglo[i] = new double[columnas];
    };
}

/**
 * @brief Constructor sobrecargado de la clase Matriz.
 *
 * @param nombre Nombre de la figura.
 * @param color Color de la figura.
 */
Matriz::Matriz(int columnas, int filas, double** arreglo) {
    this->columnas = columnas;
    this->filas = filas;
    this->arreglo = arreglo;
}

/**
 * @brief Constructor de la clase Matriz.
 *
 * @param Matriz& Constante objeto.
 */
Matriz::Matriz(const Matriz& orig) {
}

/**
 * @brief Destructor de la clase Matriz.
 */
Matriz::~Matriz() {
    for (int i = 0; i < this->filas; ++i) {
        delete [] arreglo[i];
    }
    delete [] arreglo;
}

/**
 * @brief Sobrecarga el operador + para sumar dos objetos tipo Matriz.
 */
Matriz Matriz::operator + (const Matriz &ELOTRO) {
    Matriz c;
    c.columnas = this->columnas;
    c.filas = this->filas;
    for (int i; i <= this->filas; i++) {
        for (int j; j <= this->columnas; j++) {
            c.arreglo[i][j] = this->arreglo[i][j] + ELOTRO.arreglo[i][j];
        }
    }
    return c; 
}

/**
 * @brief Sobrecarga el operador - para restar dos objetos tipo Matriz.
 */
Matriz Matriz::operator - (const Matriz &ELOTRO) {
    Matriz c;
    c.columnas = this->columnas;
    c.filas = this->filas;
    for (int i; i <= 7; i++) {
        for (int j; j <= 7; j++) {
            c.arreglo[i][j] = this->arreglo[i][j] - ELOTRO.arreglo[i][j];
        }
    }
    return (c);
}

/**
 * @brief Sobrecarga el operador * para sumar dos objetos tipo Matriz.
 */
Matriz Matriz::operator*(const Matriz &ELOTRO) {
    Matriz c;
    c.columnas = this->columnas;
    c.filas = this->filas;
    for (int i; i <= 7; i++) {
        for (int j; j <= 7; j++) {
            for (int k; k <= 7; k++)
                c.arreglo[i][j] = this->arreglo[i][k] += ELOTRO.arreglo[k][j];
        }
    }
    return (c);
}

/**
 * @brief Sobrecarga el operador / para dividir dos objetos tipo Matriz.
 */
Matriz Matriz::operator / (const Matriz &ELOTRO) {
    while (this->filas != ELOTRO.filas || this->columnas != ELOTRO.columnas) {
        cout << "Introduzca una matriz cuadrada";
    }
    Matriz c;
    c.columnas = this->columnas;
    c.filas = this->filas;
    for (int i; i <= 7; i++) {
        for (int j; j <= 7; j++) {
            c.arreglo[i][j] = this->arreglo[i][j] / ELOTRO.arreglo[i][j];
        }
    }
    return (c);

}

/**
 * @brief Sobrecarga el operador ~ para imprimir los atributos de la clase.
 */
void Matriz::operator~() {
    for (int i; i <= 7; i++) {
        cout << endl;
        for (int j; j <= 7; j++) {
            cout << this->arreglo[i][j];
        }
    }
}
