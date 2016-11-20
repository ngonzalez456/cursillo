/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Perceptron.cpp
 * Authors: Fernando Gonzalez & Isaac Gomez
 * 
 * Created on November 19, 2016, 9:53 AM
 */

#include "Perceptron.h"
#include"Punto.h"
#include<iostream>

using namespace std;

/**
 * @brief Constructor de clase Perceptron.
 *
 */
Perceptron::Perceptron() {
    this->puntos.clear();
    this->w.clear();
}

/**
 * @brief Constructor sobrecargado de clase Perceptron.
 *
 * @param vec Vector de puntos definido por el usuario
 */
Perceptron::Perceptron(vector<Punto*> vec){
    for (int i = 0; i < vec.size(); i++){
        this->puntos.push_back(vec[i]);
    }
}

/**
 * @brief Constructor sobrecargado de clase Mesa.
 * 
 * @param Perceptron& Objeto del tipo Perceptron
 */
Perceptron::Perceptron(const Perceptron& orig) {
}

/**
 * @brief Destructor de clase Mesa.
 *
 */
Perceptron::~Perceptron() {
}

/**
 * @brief Realiza el producto punto de dos objetos especificos.
 * Usa un vector transpuesto de pesos y un orden que identifica el punto
 *
 * @param vec Vector de puntos definido por el usuario
 * @param w Vector de pesos
 */
double Perceptron::dotProduct(vector<Punto*> vec, vector<double> w, int order) {
    double resultado = 0;
    for (int i = 0; i < w.size(); i++) {
        resultado += w[w.size() - i] * vec[order]->pos[i];
    }
    //cout << resultado << endl;
    return resultado;
}

/**
 * @brief Ejecuta el algoritmo de aprendizaje Perceptron.
 *
 * @param n Tamano de umbral (threshold)
 * @param vec Vector de puntos definido por el usuario
 */
void Perceptron::learn(double n, vector<Punto*> vec){
    
    // Definicion del vector de pesos
    this->w.push_back(0);
    this->w.push_back(1);
    this->w.push_back(0.5);
    
    for (int j = 0; j < vec.size(); j++) {
        if (this->dotProduct(vec, w, j) < 0) { //Cambiar condicion para efectos de Perceptron
            for (int i = 0; i < w.size(); i++) {
                this->w[i] = w[i] - n * vec[j]->pos[i];
                //cout << w[i] << endl;
            }
        }
    }
    
}
