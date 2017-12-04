/**
 * File: Procedimento.h
 * Class: Procedimento
 * Author: hjCostaBR
 * 
 * Define interface da classe Procedimento no sistema
 * Smile Clinic
 */
#ifndef PROCEDIMENTO_H
#define PROCEDIMENTO_H

#include <string>

#include "../../../date/Date.h"
#include "pessoa/funcionario/Funcionario.h"

using namespace std;

class Procedimento {

public:
    Procedimento();

    // Getters
    string getNome(void);
    double getValor(void);
    Date getDataProcedimento(void);
    Funcionario getDentista(void);

    // Setters
    void setNome(const string nome);
    void setValor(const double valor);
    void setDataProcedimento(const Date dataProcedimento);
    void setDentista(const Funcionario dentista);

private:
    string nome;
    double valor;
    Date dataProcedimento;
    Funcionario dentista;
};

#endif