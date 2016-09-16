#include "Calculadora.h"
#include "Polinomioss.h"
#include <iostream>

Polinomios::Polinomios() {};

Polinomios::Polinomios(double arreglo[]) {

    this -> arreglo[] = arreglo[];
    
};

Polinomios::Polinomios(const Figuras& orig){};

Polinomios::~Polinomios(){};

void Polinomios::operator+(Polinomios d1, Polinomios d2){
    
    if(d1.size() > d2.size()){
        
        cout << "Error al escribir los polinomios" << endl; 
        
    }
        
    else {       
        
        for(i = 0; i < d1.size(); i++) {
        
        d1[i] += d2[i];
        
        };
    
        return d1;
    
    }
}

void Polinomios::operator-(Polinomios d1, Polinomios d2){
    
    if(d1.size() > d2.size()){
        
        cout << "Error al escribir los polinomios" << endl; 
        
    }
        
    else {       
        
        for(i = 0; i < d1.size(); i++) {
        
        d1[i] -= d2[i];
        
        };
    
        return d1;
    
    }
    
}

void Polinomios::operator*(Polinomios d1, Polinomios d2){
    
    double total[d1.size() * d2.size()];
    
    for(i = 0; i < d1.size(); i++) {
        
        for (j = 0; j < d2.size(); j++) {
            
            total[i*j] += d1[i] * d2[j]; 
            
        }
        
    };
    
    return total[];
    
}

void Polinomios::operator/(){
    
}

void Polinomios::operator~(){
    
}