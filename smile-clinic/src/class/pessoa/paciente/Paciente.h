/**
 * File: Paciente.h
 * Class: Paciente
 * Author: hjCostaBR
 * 
 * Define interface da classe Paciente no sistema
 * Smile Clinic
 */
#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
#include "../Pessoa.h"

using namespace std;

class Paciente : public Pessoa {

public:
    Paciente(const string nome) : Pessoa(nome){};
    virtual void identificar(void);
};

#endif