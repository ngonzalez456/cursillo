/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Authors: Fernando Gonzalez & Isaac Gomez
 *
 * Created on November 19, 2016, 9:53 AM
 */

#include <cstdlib>
#include"Perceptron.h"
#include"Punto.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    vector<Punto*> vec;
    
    //Usando el ejemplo del PDF, mismos puntos
    Punto* x1 = new Punto(1, 1);
    vec.push_back(x1);
    Punto* x2 = new Punto(2, -2);
    vec.push_back(x2);
    Punto* x3 = new Punto(-1, -1.5);
    vec.push_back(x3);
    Punto* x4 = new Punto(-2, -1);
    vec.push_back(x4);
    Punto* x5 = new Punto(1.5, -0.5);
    vec.push_back(x5);
    
    Perceptron perceptron = Perceptron();
    
    perceptron.learn(0.2, vec);
    
    return 0;
}

