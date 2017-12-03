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

#include "class/pessoa/funcionario/Funcionario.h"
#include "class/pessoa/funcionario/Funcionario.cpp"
#include "class/pessoa/funcionario/FuncionarioClinicoGeral.h"
#include "class/pessoa/funcionario/FuncionarioOrtodontista.h"
#include "class/pessoa/funcionario/FuncionarioPediatra.h"
#include "class/pessoa/funcionario/FuncionarioSecretaria.h"
#include "class/pessoa/paciente/Paciente.h"
#include "class/pessoa/paciente/Paciente.cpp"
#include "class/pessoa/paciente/PacientePediatria.h"
#include "class/pessoa/paciente/PacienteClinicaGeral.h"
#include "class/pessoa/paciente/PacienteOrtodontia.h"

using namespace std;

int main(int argsc, char **argsv) {

    // Captura nomes dos funcionarios
    char nome[50];
    
    cout << "- Funcionarios\n";
    
    cout << "Informe o nome do Clinico Geral: ";
    scanf("%s", nome);
    string nomeClinicoGeral(nome);

    cout << "Informe o nome do Ortodontista: ";
    scanf("%s", nome);
    string nomeOrtodontista(nome);

    cout << "Informe o nome do Pediatra: ";
    scanf("%s", nome);
    string nomePediatra(nome);

    cout << "Informe o nome da Secretaria: ";
    scanf("%s", nome);
    string nomeSecretaria(nome);

    // Captura nomes dos pacientes
    cout << "\n-Pacientes\n";

    cout << "Informe o nome de um(a) paciente de Clinica Geral: ";
    scanf("%s", nome);
    string nomePacienteClinica(nome);

    cout << "Informe o nome de um(a) paciente de Ortodontia: ";
    scanf("%s", nome);
    string nomePacienteOrtodontia(nome);

    cout << "Informe o nome de um(a) paciente de Pediatria: ";
    scanf("%s", nome);
    string nomePacientePediatria(nome);

    // Cria funcionarios
    cout << "\n\n";
    vector<Funcionario> funcionarios;
    
    funcionarios.push_back(FuncionarioClinicoGeral(nomeClinicoGeral));
    funcionarios.push_back(FuncionarioOrtodontista(nomeOrtodontista));
    funcionarios.push_back(FuncionarioPediatra(nomePediatra));
    funcionarios.push_back(FuncionarioSecretaria(nomeSecretaria));

    // Cria pacientes
    cout << "\n\n";

    vector<Paciente> pacientes;
    pacientes.push_back(PacienteClinicoGeral(nomePacienteClinica));
    pacientes.push_back(PacienteOrtodontia(nomePacienteOrtodontia));
    pacientes.push_back(PacientePediatria(nomePacientePediatria));

    // Identifica funcionarios
    cout << "\nTestando funcionarios: \n";

    for (uint i = 0; i < funcionarios.size(); i++) {
        funcionarios[i].identificar();
    }

    // Identifica pacientes
    cout << "\nTestando pacientes: \n";

    for (uint i = 0; i < pacientes.size(); i++) {
        pacientes[i].identificar();
    }
}