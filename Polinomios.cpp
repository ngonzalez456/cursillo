#include "Calculadora.h"
#include "Polinomios.h"
#include <iostream>

Polinomios::Polinomios() {};

Polinomios::Polinomios(double d1[], int size1, double d2[], int size2) {

    this -> size1 = size1;
    this -> size2 = size2;
    this -> d1[size1] = d1[size1];
    this -> d2[size2] = d2[size2];
    
};

Polinomios::~Polinomios(){};

void Polinomios::operator+(){
    
    if(size1 > size2){
        
        cout << "Error al escribir los polinomios" << endl; 
        
    }
        
    else {       
        
        for(int i = 0; i < size1; i++) {
        
        d1[i] += d2[i];
        
        };   
    }
}

void Polinomios::operator-(){
    
    if(size1 > size2){
        
        cout << "Error al escribir los polinomios" << endl; 
        
    }
        
    else {       
        
        for(int i = 0; i < size1; i++) {
        
        d1[i] -= d2[i];
        
        };
    }
    
}

void Polinomios::operator*(){
    
    resultado[size1 + size2];
    
    for(int i = 0; i < size1; i++) {
        
        for (int j = 0; j < size2; j++) {
            
            resultado[i+j] += d1[i] * d2[j]; 
            
        }
        
    };

}

void Polinomios::operator/(){
    
}

void Polinomios::operator~(){

    for(int i = 0; i < size1; i++) {
        
        cout << resultado[i] << "x" << i << " ";
        
    };

    cout << endl;
    
}
