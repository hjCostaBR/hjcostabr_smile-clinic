/**
 * File: Pessoa.cpp
 * Class: Pessoa
 * Author: hjCostaBR
 * 
 * Define implementacao da classe Pessoa no sistema
 * Smile Clinic
 */
#ifndef PESSOA_CPP
#define PESSOA_CPP

#include <string>
#include <iostream>

#include "Pessoa.h"

using namespace std;

// Construtor
Pessoa::Pessoa(string nome) {
    this->nome = nome;
    cout << "Criando uma nova pessoa: " << nome << "...\n";
}

// Getter: Nome
string Pessoa::getNome() {
    return this->nome;
}

// Destrutor
Pessoa::~Pessoa() {
    cout << "Destruindo pessoa: " << this->nome << "...\n";
}

#endif