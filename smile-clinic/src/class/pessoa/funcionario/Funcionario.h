/**
 * File: Funcionario.h
 * Class: Funcionario
 * Author: hjCostaBR
 * 
 * Define interface da classe Funcionario no sistema
 * Smile Clinic
 */
#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
#include "../Pessoa.h"

using namespace std;

class Funcionario : public Pessoa {

public:
    Funcionario(const string nome) : Pessoa(nome) {};
    virtual void identificar(void);
};

#endif