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
#include "class/Orcamento.h"
#include "class/Orcamento.cpp"
#include "class/Procedimento.h"
#include "class/Procedimento.cpp"
#include "../../date/Date.h"

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

    // Inicia simulacao (se necessario)
    char iniciar;
    cout << "\nIniciar simulacao? (s/n) ";
    cin >> iniciar;
    
    if (iniciar == 's') {

        // Lista de procedimentos
        vector<Procedimento> procedimentos;

        // Procedimento: Limpeza
        Date dataProcedimento = Date("dd/mm/aaaa", "01/12/2017");
        procedimentos.push_back(Procedimento());
        procedimentos[0].setNome("Limpeza");
        procedimentos[0].setDentista(funcionarios[0]);
        procedimentos[0].setValor(50);
        procedimentos[0].setDataProcedimento(dataProcedimento);

        // Procedimento: Remover Siso
        dataProcedimento = Date("dd/mm/aaaa", "01/11/2017");
        procedimentos.push_back(Procedimento());
        procedimentos[1].setNome("Remover Siso");
        procedimentos[1].setDentista(funcionarios[1]);
        procedimentos[1].setValor(350);
        procedimentos[1].setDataProcedimento(dataProcedimento);

        // Lista de orcamentos
        vector<Orcamento> orcamentos;

        // Orcamento: Bruno
        orcamentos.push_back(Orcamento());
        orcamentos[0].addProcedimento(procedimentos[0]);
        orcamentos[0].addProcedimento(procedimentos[1]);
        orcamentos[0].setPaciente(pacientes[0]);

        // Orcamento: Breno
        Date dataPagamento = Date("dd/mm/aaaa", "25/12/2017");
        orcamentos.push_back(Orcamento());
        orcamentos[1].addProcedimento(procedimentos[0]);
        orcamentos[1].addProcedimento(procedimentos[1]);
        orcamentos[1].setPaciente(pacientes[1]);
        orcamentos[1].setDataPagamento(dataPagamento);

        // Lista dados dos orcamentos
        cout << "\n\nListando orcamentos...\n";

        for (uint j = 0; j < orcamentos.size(); j++) {
            Orcamento orcamento = orcamentos[j];

            cout << "- " << (j + 1) << " - Orcamento do paciente " << orcamento.getPaciente().getNome() << ":";

            if (orcamento.isPago()) {
                cout << "\n\t- Pago na data: " << orcamento.getDataPagamento().getDate() << ";";

            } else {
                cout << "\n\t- Ainda nao foi pago;";
            }

            cout << "\n\t- Lista de procedimentos:";

            for (uint k = 0; k < orcamento.getProcedimentos().size(); k++) {
                Procedimento procedimento = orcamento.getProcedimentos()[k];
                cout << "\n\t\t- " << (k + 1) << " - " << procedimento.getNome();
                cout << "\n\t\t\t Dentista: " << procedimento.getDentista().getNome() << ";";
                cout << "\n\t\t\t Preco: " << procedimento.getValor() << ";";
                cout << "\n\t\t\t Data: " << procedimento.getDataProcedimento().getDate() << ";";
                cout << "\n";
            }

            cout << "\n";
        }
    }

    // Fim
    cout << "\nFinalizando execucao...\n";
}