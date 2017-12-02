/**
 * File: Funcionario.cpp
 * Class: Funcionario
 * Author: hjCostaBR
 * 
 * Define implementacao da classe Funcionario no sistema
 * Smile Clinic
 */
#ifndef FUNCIONARIO_CPP
#define FUNCIONARIO_CPP

#include <string>
#include <iostream>

#include "Funcionario.h"

using namespace std;

// Identificar
void Funcionario::identificar() {
    cout << "Eu sou um funcionario! Meu nome eh " << this->nome << "\n";
}

#endif