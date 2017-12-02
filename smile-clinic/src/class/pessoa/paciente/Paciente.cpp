/**
 * File: Paciente.cpp
 * Class: Paciente
 * Author: hjCostaBR
 * 
 * Define implementacao da classe Paciente no sistema
 * Smile Clinic
 */
#ifndef PACIENTE_CPP
#define PACIENTE_CPP

#include <string>
#include <iostream>

#include "Paciente.h"

using namespace std;

// Identificar
void Paciente::identificar() {
    cout << "Eu sou um paciente! Meu nome eh " << this->nome << "\n";
}

#endif