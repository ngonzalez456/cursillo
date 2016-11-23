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
#include <algorithm>
#include <list>
#include"Perceptron.h"
#include"Punto.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    vector<Punto*> vec0;
    vector<Punto*> vec1;
    
    //Usando el ejemplo del PDF, mismos puntos
    Punto* x0 = new Punto(-2, 1);
    vec1.push_back(x0);
    Punto* x1 = new Punto(1, 1);
    vec1.push_back(x1);
    Punto* x2 = new Punto(2, -2);
    vec0.push_back(x2);
    Punto* x3 = new Punto(-1, -1.5);
    vec0.push_back(x3);
    Punto* x4 = new Punto(-2, -1);
    vec0.push_back(x4);
    Punto* x5 = new Punto(1.5, -0.5);
    vec1.push_back(x5);
    
    Perceptron perceptron = Perceptron();
    
    perceptron.learn(0.2, vec0, vec1);
   
    cout << endl;
    for (int i = 0; i < perceptron.w.size(); i++) {
        cout << perceptron.w[i] << endl;        
    }
    
    return 0;
}

