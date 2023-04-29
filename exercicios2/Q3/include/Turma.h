#include "Aluno.h"
#include <string>
class Turma{
    private:
        int capacidade;
        int vagas;
        //tentando fazer desse 1º jeito. Talvez melhor usar vector
        Aluno * listaAlunos;
    public:
        int getCapacidade();
        int getVagas();
        Aluno* getListaAlunos();

        void setCapacidade(int cap);
        void setVagas(int vag);

        Turma(int cap);
        ~Turma();
        void imprimeAlunos();
        void ordenaCampo(std::string campo);

};