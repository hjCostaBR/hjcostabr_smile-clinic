/**
 * File: Pessoa.h
 * Class: Pessoa
 * Author: hjCostaBR
 * 
 * Define interface da classe Pessoa no sistema
 * Smile Clinic
 */
#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa {

public:
    Pessoa(const string nome);
    string getNome(void);
    virtual void identificar(void) = 0;
    ~Pessoa();

protected:
    string nome;
};

#endif