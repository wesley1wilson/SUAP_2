//
// Created by marilia on 17/08/22.
//
#include "includes.h"
using std::cout;
using std::endl;
using std::cin;
#include <fstream>

int main(){

//    criando um curso
    cursos engenharia_da_computacao;
    engenharia_da_computacao.nome_curso = "engenharia_da_computação";
    engenharia_da_computacao.id_curso = "2456";

//    criando um professor
    professor professor1;
    professor1.nome_professor = "Daniel Madalena Marques";
    professor1.email = "daniel@academico.suap2.com.br";

//    criando uma materia
    materia POO;
    POO.carga_horaria = 62;
    POO.professor_responsavel = professor1.nome_professor;
    POO.nome_materia = "Progamação Orientada a Objeto";

// criando um aluno
    aluno_superior aluno1;

    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░┉┉        ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░    ┉░░░┉┉┉░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒░░░░▒▒▒▒▒░░┉┉┉┉░░▒▒▒▒▒▒░░░░▒▒▒░┉┉┉┉░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░    ┉▒▒▒▒▒▒▒▒▒▒▒░   ┉▒▒▒▒▒▒░   ┉▒▒▒░         ┉░▒▒▒▒░   ░┉        ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░┉    ┉┉░▒▒▒▒▒▒▒░   ┉▒▒▒▒▒▒░   ┉▒▒▒▒┉░▒▒▒▒░┉   ░▒▒▒░     ┉░░░░┉   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░┉      ┉░▒▒▒▒░   ┉▒▒▒▒▒▒░   ┉▒▒▒▒▒▒▒▒▒▒▒▒   ┉▒▒▒░    ░▒▒▒▒▒▒┉   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░┉┉    ┉▒▒▒░   ┉▒▒▒▒▒▒░   ┉▒▒▒▒▒░░┉┉┉┉┉    ▒▒▒░   ┉▒▒▒▒▒▒▒░    ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░┉   ┉▒▒░   ┉▒▒▒▒▒▒░   ┉▒▒▒░┉   ┉┉┉┉    ▒▒▒░   ┉▒▒▒▒▒▒▒▒    ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░    ▒▒░   ┉▒▒▒▒▒▒░   ┉▒▒░   ┉▒▒▒▒▒┉   ▒▒▒░   ┉▒▒▒▒▒▒▒░   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░   ┉▒▒▒    ░▒▒▒▒▒┉   ┉▒▒┉   ▒▒▒▒▒▒┉   ▒▒▒░   ┉▒▒▒▒▒▒▒┉   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░┉┉░░░▒░░┉    ░▒▒▒┉   ┉░░░░┉    ┉▒▒┉   ┉▒▒▒░┉    ▒▒▒░    ┉░▒▒▒░┉   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒┉           ┉▒▒▒▒▒▒┉       ┉░┉  ┉▒▒░┉    ┉  ┉┉   ▒▒▒░   ┉┉        ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░┉┉┉┉┉┉░░▒▒▒▒▒▒▒▒▒░┉┉┉┉┉░▒▒░░░░▒▒▒▒░┉┉┉┉░░▒░░░░▒▒▒░   ┉▒░┉┉┉┉┉░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░   ┉▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░┉┉┉░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<< std::endl;
    std::cout<<""<< std::endl;

    cout << "=============================================================================================="<< endl;
    cout << "----------> [0] cadastro de administrador"<< endl;
    cout << "----------> [1] login de professor"<< endl;
    cout << "----------> [2] cadastro de aluno"<< endl;
    cout << "----------> [5] ver o menu novamente"<< endl;
    cout << "----------> [6] Sair do programa"<< endl;
    cout << "=============================================================================================="<< endl;
    int var;
    cin >> var;

    switch (var) {
        case 0:
            cout<< "oxe";
            break;
        case 1:
            cout<< "oxe";
            break;
        case 2:
            cout<< "oxe";
            break;
        case 3:
            cout<< "oxe";
            break;
        case 4:
            cout<< "oxe";
            break;
        case 5:
            cout<< "oxe";
            break;
        case 6:
            exit(0);
        default:
            cout << "Nenhuma opção é válida";
    }
    
    std::cout<< "Criando um aluno do ensino superior no SUAP2:" << std::endl;
    std::cout << "digite o nome do aluno: ";
    std::getchar();
    std::getline (std::cin,aluno1.nome_aluno);
    std::cout << "digite a data de nascimento, como o moedelo '12/12/1212': ";
    std::cin >> aluno1.data_nascimento_aluno;
    boletim alana;
    alana.materias.push_back(POO);

    std::cout<< "olá, " << aluno1.nome_aluno << " bem vindo(a) ao BPFI, você esta matriculado"
      <<" no curso de Engenharia da Computação, seu email será:" << endl;
    alana.print_boletim();
    cout << aluno1;
    return 0;
}
