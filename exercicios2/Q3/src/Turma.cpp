#include "Turma.h"
        Turma::Turma(int cap){
            capacidade = cap;
            vagas = capacidade;
        }
        Turma::~Turma(){

        }

        int Turma::getCapacidade(){
            return capacidade;
        }
        int Turma::getVagas(){
            return vagas;
        }

        Aluno* Turma::getListaAlunos(){
            return listaAlunos;
        }

        void Turma::setCapacidade(int cap){
            capacidade = cap;
        }
        void Turma::setVagas(int vag){
            vagas = vag;
        }
        void Turma::setListaAlunos(int vag){
            vagas = vag;
        }

        void Turma::imprimeAlunos(){

        }

        void Turma::ordenaCampo(std::string campo){

        }