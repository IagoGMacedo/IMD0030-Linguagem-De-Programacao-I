#include "../include/Turma.h"
#include <iostream>
#include <iomanip>

        Turma::Turma(int cap){
            capacidade = cap;
            vagas = capacidade;
            alunos = new Aluno[vagas];
        }
        Turma::~Turma(){
            delete []alunos;
        }

        int Turma::getCapacidade(){
            return capacidade;
        }
        int Turma::getVagas(){
            return vagas;
        }
        Aluno* Turma::getAlunos(){
            return alunos;
        }

        void Turma::setCapacidade(int cap){
            int quantidadeAtualAlunos = capacidade-vagas;
            //capacidade menor que o numero de alunos
            if(cap<quantidadeAtualAlunos){
                std::cout << "não é possivel reduzir a capacidade de turma para um numero" <<
                "menor que o de alunos já existente nelas" << std::endl;
            } else{
                capacidade = cap;
                vagas = capacidade-quantidadeAtualAlunos;
            }
        }
        void Turma::setVagas(int vag){
            int quantidadeAtualAlunos = capacidade-vagas;
            if(vag-quantidadeAtualAlunos<0){
                std::cout << "a quantidade de vagas não é o suficiente" << std::endl;
            } else{
                vagas = vag-quantidadeAtualAlunos;

            }
        }
        void Turma::setAlunos(Aluno listaAlu[], int quantidadeAlunos){
            if(quantidadeAlunos<=capacidade){
                delete []alunos;
                alunos = new Aluno[quantidadeAlunos];
                vagas = capacidade-quantidadeAlunos;
                for(int i =0;i<quantidadeAlunos;i++){
                    *(alunos+i) = listaAlu[i];
                }
                std::cout << quantidadeAlunos<<"aluno(s) foram inseridos" << std::endl;
            }else{
                std::cout << "não existem vagas suficientes, inserção sem sucesso" << std::endl;
            }
            
        }

        void Turma::addAlunos(Aluno listaAlu[], int quantidadeAlunos){
            if(quantidadeAlunos<=vagas){
                int quantidadeAntigaAlunos = capacidade-vagas;
                int quantidadeNovaAlunos = quantidadeAntigaAlunos+quantidadeAlunos;
                Aluno * pAuxiliarAluno;
                pAuxiliarAluno = new Aluno[quantidadeNovaAlunos];
                for(int i =0;i<quantidadeNovaAlunos;i++){
                    if(i<quantidadeAntigaAlunos){
                        *(pAuxiliarAluno+i) = *(alunos+i);
                    } else{
                        *(pAuxiliarAluno+i) = listaAlu[i-quantidadeAntigaAlunos];
                    }
                }
                vagas-=quantidadeAlunos;
                delete []alunos;
                alunos = new Aluno[quantidadeNovaAlunos];
                for(int i =0;i<quantidadeNovaAlunos;i++){
                    *(alunos+i) = *(pAuxiliarAluno+i);
                }
                std::cout << quantidadeAlunos<<"aluno(s) foram adicionados" << std::endl;
                for(int i =0;i<quantidadeNovaAlunos;i++){
                    std::cout << alunos[i].getNome() << std::endl;
                }
            } else{
                std::cout << "não existem vagas suficientes, inserção sem sucesso" << std::endl;
            }
        }

        void Turma::imprimeAlunos(){
            std::cout << "Imprimindo alunos: "<<(capacidade-vagas) << std::endl;
            for(int i =0; i<(capacidade-vagas);i++){
                std::string infoAlunos = "";
                infoAlunos += alunos[i].getNome()+", ";
                infoAlunos += std::to_string(alunos[i].getMatricula())+", ";
                std::stringstream valoresNotas;
                valoresNotas << std::fixed << std::setprecision(1) << alunos[i].getNota1()<<", " 
                << alunos[i].getNota2()<<", " << alunos[i].getNota3()<<", " <<alunos[i].calculaMedia();
                infoAlunos += valoresNotas.str();
                std::cout << infoAlunos << std::endl;
            }
            std::cout << "fim"<< std::endl;
        }

        bool Turma::switchCampoEscol(int indiceJ, int indiceI, std::string campo){
            int min = 0;
            if(campo=="matricula"){ 
                if(alunos[indiceJ].getMatricula()<alunos[indiceI].getMatricula()){
                    return true;
                }
            } else if(campo=="nome"){
                if(alunos[indiceJ].getNome()<alunos[indiceI].getNome()){
                    return true;
                }
            } else if(campo=="nota"){
                if(alunos[indiceJ].calculaMedia()<alunos[indiceI].calculaMedia()){
                    return true;
                }
            }
            return false;
        }

        void Turma::ordenaCampo(std::string campo){
            int min = 0;
            for(int i =0;i<(capacidade-vagas-1);i++){
                min = i;
                for(int j =i+1;j<capacidade-vagas;j++){
                        if(switchCampoEscol(j, min, campo)){
                            min = j;
                        }
                }
                if(min!=i){
                    //SWAP
                    Aluno aux = alunos[i];
                    alunos[i] = alunos[min];
                    alunos[min]= aux;
                }
            }   
        }