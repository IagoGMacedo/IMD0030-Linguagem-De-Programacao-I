#include "../include/Aluno.h"
#include "../include/Turma.h"
#include <iostream>

int main(){
    Aluno aluno1("iago", 1234, 7.5, 4.5, 2.3);
    Aluno aluno2("patrick", 1235, 10, 8, 7);
    Aluno aluno3("carlos", 1236, 5, 5, 5);
    Aluno aluno4("jefferson", 1237, 5, 6, 7);
    Aluno aluno5("vitor", 1238, 3, 3, 3);

    Aluno listaAlunos[5]{aluno1, aluno2, aluno3, aluno4, aluno5};
    int quantidadeNovosAlunos = sizeof(listaAlunos)/sizeof(Aluno);
    Turma turma(5);
    turma.setAlunos(listaAlunos, quantidadeNovosAlunos);
    turma.imprimeAlunos();
    std::cout << "imprimindo após ordenar por nota: " << std::endl;
    turma.ordenaCampo("matricula");
    turma.imprimeAlunos();


    return 0;
}