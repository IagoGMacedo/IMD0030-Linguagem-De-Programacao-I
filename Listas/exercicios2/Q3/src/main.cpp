/**
* @file main.cpp
* @brief Arquivo cpp main, que contém testes  da classe Aluno e Turma, bem como seus métoods
* @author Iago Gabriel Nobre de Macedo - 20220037927
* @since 01/05/2023
*/

#include "../include/Aluno.h"
#include "../include/Turma.h"
#include <iostream>

int main(){
    Aluno aluno1 = *new Aluno("iago", 1234, 7.5, 4.5, 2.3);
    Aluno aluno2 = *new Aluno("patrick", 1235, 10, 8, 7);
    Aluno aluno3= *new Aluno("carlos", 1236, 5, 5, 5);
    Aluno aluno4= *new Aluno("jefferson", 1237, 5, 6, 7);
    Aluno aluno5= *new Aluno("vitor", 1238, 3, 3, 3);

    Aluno listaAlunos[5]{aluno1, aluno2, aluno3, aluno4, aluno5};
    int quantidadeNovosAlunos = sizeof(listaAlunos)/sizeof(Aluno);
    Turma turma = *new Turma(5);
    turma.setAlunos(listaAlunos, quantidadeNovosAlunos);
    turma.imprimeAlunos();
    std::cout << "imprimindo após ordenar por nota: " << std::endl;
    turma.ordenaCampo("nota");
    turma.imprimeAlunos();

    return 0;
}