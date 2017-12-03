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
#include "../Pessoa.cpp"
#include "../../../enum/PessoaTipoEnum.cpp"
#include "../../../enum/FuncionarioTipoEnum.cpp"

using namespace std;

class Funcionario : public Pessoa {

public:
    Funcionario(const string nome, const FuncionarioTipoEnum tipoFuncionario) : Pessoa(nome, PessoaTipoEnum::FUNCIONARIO) {
        this->tipoFuncionario   = tipoFuncionario;
    };

    void identificar(void);
    FuncionarioTipoEnum getTipoFuncionario(void);

protected:
    FuncionarioTipoEnum tipoFuncionario;
    string getTipoFuncionarioNome(void);
};

#endif