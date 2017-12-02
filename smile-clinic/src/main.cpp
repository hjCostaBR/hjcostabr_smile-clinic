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
#include "class/pessoa/paciente/Paciente.h"
#include "class/pessoa/paciente/Paciente.cpp"

using namespace std;

int main(int argsc, char **argsv) {

    // Valida parametrizacao
    if (argsc != 3) {
        cout << "Falha na parametrizacao!\nInforme os nomes de:"
             << "\n\t01 Funcionario;"
             << "\n\t01 Paciente;"
             << "\n\n";
        exit(1);
    }
    
    // Cria funcionarios
    vector<Funcionario> funcionarios;
    string nomeFuncionario = argsv[1];
    funcionarios.push_back(Funcionario(nomeFuncionario));

    // Cria pacientes
    vector<Paciente> pacientes;
    string nomePaciente = argsv[2];
    pacientes.push_back(Paciente(nomePaciente));

    cout << "Testando o Funcionario:\n";
    funcionarios[0].identificar();
    
    cout << "Testando o Paciente:\n";
    pacientes[0].identificar();
    // exit(0);
}