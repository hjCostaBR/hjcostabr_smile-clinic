/**
 * File: Orcamento.cpp
 * Class: Orcamento
 * Author: hjCostaBR
 * 
 * Define implementacao da classe Orcamento no sistema
 * Smile Clinic
 */
#ifndef ORCAMENTO_CPP
#define ORCAMENTO_CPP

#include <string>
#include <vector>

#include "../../../date/Date.h"
#include "pessoa/paciente/Paciente.h"
#include "Procedimento.h"
#include "Orcamento.h"

using namespace std;

// Construtor
Orcamento::Orcamento() {
    cout << "Gerando novo orcamento...\n";
}

// Determina se o orcamento jah foi pago
bool Orcamento::isPago() {
    return (this->dataPagamento.getDate() == "1/1/1970") ? false : true;
}

// Calcula & retorna o valor total do orcamento
double Orcamento::getValorTotal(void) {

    double valorTotal = 0;

    for (uint i = 0; i < this->procedimentos.size(); i++) {
        valorTotal += procedimentos[i].getValor();
    }

    return valorTotal;
}

// Getter: Data de pagamento
Date &Orcamento::getDataPagamento(void) {
    return this->dataPagamento;
}

// Getter: Paciente
Paciente Orcamento::getPaciente(void) {
    return this->paciente;
}

// Getter: Lista de procedimentos
vector<Procedimento> Orcamento::getProcedimentos() {
    return this->procedimentos;
}

// Adiciona procedimento ao orcamento
void Orcamento::addProcedimento(const Procedimento procedimento) {
    this->procedimentos.push_back(procedimento);
}

// Define data de pagamento
void Orcamento::setDataPagamento(const Date dataPagamento) {
    this->dataPagamento = dataPagamento;
}

// Define paciente
void Orcamento::setPaciente(const Paciente paciente) {
    this->paciente  = paciente;
}

#endif