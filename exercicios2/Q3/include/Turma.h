
#ifndef TURMA_H
#define TURMA_H

#include "Aluno.h"
#include <string>
class Turma{
    private:
        int capacidade;
        int vagas;
        Aluno *alunos;
        bool switchCampoEscol(int indiceJ, int indiceI, std::string campo);
    public:
        Turma(int cap);
        ~Turma();
        void imprimeAlunos();
        void ordenaCampo(std::string campo);

        int getCapacidade();
        int getVagas();
        Aluno* getAlunos();

        void setCapacidade(int cap);
        void setVagas(int vag);
        void setAlunos(Aluno listaAlu[], int quantidadeAlunos);
        void addAlunos(Aluno listaAlu[], int quantidadeAlunos);
};
#endif // ALUNO_H
