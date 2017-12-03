/**
 * File: main.cpp
 * Author: hjCostaBR
 * 
 * Arquivo principal do sistema
 * Smile Clinic
 */
#include <iostream>
#include <vector>
#include <exception>

#include "class/pessoa/funcionario/FuncionarioClinicoGeral.h"
#include "class/pessoa/funcionario/FuncionarioOrtodontista.h"
#include "class/pessoa/funcionario/FuncionarioPediatra.h"
#include "class/pessoa/funcionario/FuncionarioSecretaria.h"
#include "class/pessoa/paciente/Paciente.h"
#include "class/pessoa/paciente/Paciente.cpp"

using namespace std;

int main(int argsc, char **argsv) {

    // Captura nomes dos funcionarios
    char nome[50];

    cout << "Informe o nome do Clinico Geral: ";
    scanf("%s", nome);
    string nomeClinicoGeral(nome);

    cout << "\n\nInforme o nome do Ortodontista: ";
    scanf("%s", nome);
    string nomeOrtodontista(nome);

    cout << "\n\nInforme o nome do Pediatra: ";
    scanf("%s", nome);
    string nomePediatra(nome);

    cout << "\n\nInforme o nome da Secretaria: ";
    scanf("%s", nome);
    string nomeSecretaria(nome);

    // Cria funcionarios
    vector<Funcionario> funcionarios;
    funcionarios.push_back(FuncionarioClinicoGeral(nomeClinicoGeral));
    funcionarios.push_back(FuncionarioOrtodontista(nomeOrtodontista));
    funcionarios.push_back(FuncionarioPediatra(nomePediatra));
    funcionarios.push_back(FuncionarioSecretaria(nomeSecretaria));

    // Cria pacientes
    vector<Paciente> pacientes;
    // pacientes.push_back(Paciente(nomePaciente));

    // Identifica funcionarios
    cout << "Testando funcionarios: ";

    for (uint i = 0; i < funcionarios.size(); i++) {
        funcionarios[i].identificar();
    }

    // Identifica pacientes
    cout << "Testando pacientes: ";

    for (uint i = 0; i < funcionarios.size(); i++) {
        pacientes[i].identificar();
    }

    exit(0);
}