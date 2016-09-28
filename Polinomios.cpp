#include <iostream>
#include "Polinomios.h"

/**
 * @brief Constructor vacio de clase Polinomios.
 */
Polinomios::Polinomios() {

    this -> base = 1;
    this -> coeficientes = 0;

};

/**
 * @brief Constructor sobrecargado de la clase Polinomios.
 *
 * @param base Orden del polinomio.
 * @param coeficientes Puntero de coeficientes del polinomio.
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
 * @brief Sobrecarga el operador + para sumar dos objetos tipo Polinomios.
 *
 * @param &ELOTRO Objeto del tipo Polinomio.
 */
Polinomios Polinomios::operator + (const Polinomios &ELOTRO){
   
    int a;

    if (this->base < ELOTRO.base) {

        a = ELOTRO.base;

    }

    else {

        a = this -> base;

    }

    double *res = new double [a];

    for (int i = 0; i < a; i++) {
  
    res[i] = ELOTRO.coeficientes[i] + coeficientes[i];

    }

    Polinomios resultado(a, res);

    delete [] res;

    return resultado;
        
}


/**
 * @brief Sobrecarga el operador - para restar dos objetos tipo Polinomios.
 *
 * @param &ELOTRO Objeto del tipo Polinomio.
 */
Polinomios Polinomios::operator - (const Polinomios &ELOTRO){
    
    int a;

    if (this->base < ELOTRO.base) {

        a = ELOTRO.base;

    }

    else {

        a = this -> base;

    }

    double *res = new double [a];

    for (int i = 0; i < a; i++) {

    cout << coeficientes[i] << "   " << ELOTRO.coeficientes[i] << "    " << res[i] << endl;
  
    res[i] = coeficientes[i] - ELOTRO.coeficientes[i];

    }

    Polinomios resultado(a, res);

    delete [] res;

    return resultado;
        
}

/**
 * @brief Sobrecarga el operador * para multiplicar dos objetos tipo Polinomios.
 *
 * @param &ELOTRO Objeto del tipo Polinomio.
 */
Polinomios Polinomios::operator*(const Polinomios &ELOTRO){
    
    int a = this -> base;

    int b = ELOTRO.base;

    double *res = new double [a + b];

    for (int i = 0; i < a; i++) {
   
        for (int j = 0; j < b; j++) {
  
             res[i + j] = ELOTRO.coeficientes[i] * coeficientes[j];

        }

    }

    Polinomios resultado(a + b, res);

    delete [] res;

    return resultado;
        
}

/**
 * @brief Sobrecarga el operador / para dividir dos objetos tipo Polinomios.
 * Genera dos vectores, el vector q es el resultado de la division y el numero
 * entero del tipo int que es el residuo
 *
 * @param &ELOTRO Objeto del tipo Polinomio.
 */
Polinomios Polinomios::operator /(const Polinomios &ELOTRO)
{
    	Polinomios resultado;
        double *N,*D,*d,*q,*r = new double;	// vectors - N / D = q       N % D = r
	int i, dd, dq, dr;				
 
	this -> base = base;
        int base2 = ELOTRO.base;
	
	dq = this -> base - ELOTRO.base;  
	dr = this -> base - ELOTRO.base;
 
 	N = new double [this -> base + 1];					
	N = this -> coeficientes;
	 
	D = new double [ELOTRO.base + 1];
	D = ELOTRO.coeficientes;
 
	d = new double [this -> base + 1];
	for( i = ELOTRO.base + 1 ; i < this -> base + 1; i++ ) {
		D[i] = 0;
	}
 
	q = new double [dq + 1];
	for( i = 0 ; i < dq + 1 ; i++ ) {
		q[i] = 0;
	}
 
	r = new double [dr + 1];
	for( i = 0 ; i < dr + 1 ; i++ ) {
		r[i] = 0;
	}
 
	if( ELOTRO.base < 0) {
		cout << "El grado debe ser mayor a 0.";
	}
 
	if( this -> base >= ELOTRO.base ) {
		while(this -> base >= ELOTRO.base) {

			for( i = 0 ; i < this -> base + 1 ; i++ ) {
				d[i] = 0;
			}
			for( i = 0 ; i < ELOTRO.base + 1 ; i++ ) {
				d[i+ this -> base - ELOTRO.base] = D[i];
			}
			dd = this -> base;


			q[this -> base - ELOTRO.base] = N[this -> base]/d[dd];

 

			for( i = 0 ; i < dq + 1 ; i++ ) {
				d[i] = d[i] * q[this -> base - ELOTRO.base];
			}

 

			for( i = 0 ; i < this -> base + 1 ; i++ ) {
				N[i] = N[i] - d[i];
			}
			this -> base --;

			 
		}
 
	}
 
	for( i = 0 ; i < this -> base + 1 ; i++ ) {
		r[i] = N[i];
	}
	dr = this -> base;

	delete [] N;
	delete [] D;
	delete [] d;
	delete [] q;
	delete [] r;

        resultado.base = (sizeof(q)/sizeof(*q));
        resultado.coeficientes = q;

        return resultado;

}

/**
 * @brief Sobrecarga el operador ~ para imprimir los atributos de la clase.
 */
void Polinomios::operator~(){

   for(int i = 0; i < base; i++) {
        
        cout << coeficientes[i] << "x" << i << " ";
        
    };

    cout << endl;
    
}
