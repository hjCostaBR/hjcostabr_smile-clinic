/**
 * File: Orcamento.h
 * Class: Orcamento
 * Author: hjCostaBR
 * 
 * Define interface da classe Orcamento no sistema
 * Smile Clinic
 */
#ifndef ORCAMENTO_H
#define ORCAMENTO_H

#include <string>
#include <vector>

#include "../../../date/Date.h"
#include "pessoa/paciente/Paciente.h"
#include "Procedimento.h"

using namespace std;

class Orcamento {

public:
    Orcamento();
    Date getDataPagamento(void);
    Paciente getPaciente(void);
    vector<Procedimento> getProcedimentos();
    double getValorTotalo(void);

private:
    Date DataPagamento;
    Paciente paciente;
    vector<Procedimento> procedimentos;
};

#endif