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
#include "../../../enum/PacienteTipoEnum.cpp"

using namespace std;

// Identificar
void Paciente::identificar() {
    cout << "Eu sou um paciente! Meu nome eh " << this->nome << "\n";
}

// Retorna string nome do tipo de paciente
string Paciente::getTipoPacienteNome() {
    
    switch (this->tipoPaciente) {
        case PacienteTipoEnum::CLINICA_GERAL :
            return "Clinica Geral";

        case PacienteTipoEnum::ORTOPEDIA:
            return "Ortopedia";

        case PacienteTipoEnum::PEDIATRIA:
            return "Pediatria";

        default:
            return "";
    }
}

#endif