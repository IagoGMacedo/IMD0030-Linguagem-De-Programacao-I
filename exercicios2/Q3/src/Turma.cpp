#include "../include/Turma.h"
#include <iostream>
#include <iomanip>

        Turma::Turma(int cap){
            capacidade = cap;
            vagas = capacidade;
            alunos = new Aluno[vagas];
        }
        Turma::~Turma(){

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
            capacidade = cap;
        }
        void Turma::setVagas(int vag){
            vagas = vag;
        }
        void Turma::setAlunos(Aluno &listaAlu, int quantidadeAlunos){
            if(quantidadeAlunos<=vagas){
                //fazer um for aqui pra percorrer e inserir com aritmetica de ponteiros
                alunos = listaAlu;
                vagas -= quantidadeAlunos;
                std::cout << quantidadeAlunos<<"aluno(s) foram inseridos" << std::endl;
            }else{
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