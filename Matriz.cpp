#include "Calculadora.h"
#include "Matriz.h"


Matriz::Matriz() {}

Matriz::Matriz(double arreglo) {
    this->arreglo=arreglo;    
}

Matriz::Matriz(const Matriz& orig){}

Matriz::~Matriz(){}

void Matriz::operator+(double arreglo2, Matriz c){
    for(int i; i<=7; i++){
        for(int j; j<=7; j++){
            c[i][j]=this->arreglo[i][j] + arreglo2[i][j];
        }
    }
}

void Matriz::operator-(double arreglo2, Matriz c){
    
    for(int i; i<=7; i++){
        for(int j; j<=7; j++){
            c[i][j]= this->arreglo[i][j] - arreglo2[i][j];
        }
    }
}

void Matriz::operator*(double arreglo2, Matriz c){
    
    for(int i; i<=7; i++){
        for(int j; j<=7; j++){
            for(int k; k<=7; k++)
            c[i][j]= this->arreglo[i][k] += arreglo2[k][j];
        }
    }
}

void Matriz::operator/(Matriz c){
    while (sizeof(this->arreglo2)/4 != sizeof(c.arreglo)){
        cout << "Introduzca una matriz cuadrada";
    }    
        for(int i; i<=7; i++){
            for(int j; j<=7; j++){
                c[i][j]= this->arreglo[i][j] / arreglo2[i][j];
            }
        }
    
    
}

void Matriz::operator~(Matriz c){
    for(int i; i<=7; i++){
        cout << endl;
        for(int j; j<=7; j++){
            cout << c[i][j];
        }
    }
}
