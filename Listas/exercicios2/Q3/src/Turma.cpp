/**
* @file Turma.cpp
* @brief Arquivo cpp Turma, que contém a implementação da classe Turma e seus métodos
* @author Iago Gabriel Nobre de Macedo - 20220037927
* @since 01/05/2023
*/

#include "../include/Turma.h"
#include <iostream>
#include <iomanip>
        /** @brief Construtor da classe com passagem de parâmetro para a capacidade da turma
        *   @param cap capacidade máxima da turma
        */
        Turma::Turma(int cap){
            capacidade = cap;
            vagas = capacidade;
            alunos = new Aluno[vagas];
        }
        /** @brief Destrutor da classe, também desaloca o ponteiro lista de alunos */
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
        /** @brief Método setter para o atributo capacidade.
         *  @details Não permite alterar a capacidade máxima da turma para
         * um número menor do que o de alunos já existentes. Ao receber um valor válido,
         * também já altera a quantidade vagas existentes.
        *   @param cap capacidade máxima da turma
        */
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
        /** @brief Método setter para o atributo vagas.
        *   @details Não permite alterar a capacidade de vagas para
        * um número maior do que o da Capacidade máxima. 
        *   @param cap número de vagas disponível da turma
        */
        void Turma::setVagas(int vag){
            if(vag>capacidade){
                std::cout << "A capacidade máxima da turma não permite esse número de vagas, altere a capacidade primeiro" << std::endl;
            } else{
                vagas = vag;
            }
        }
        /** @brief Método setter para o atributo alunos.
        *   @details Ao receber uma lista de Alunos (ListaAlu), caso haja vagas o suficiente, 
        * cria dinamicamente uma nova lista de alunos no ponteiro local alunos, com a quantidade passada. 
        * Cada um dos alunos em listaAluno é adicionado ao atributo alunos através de um método for.
        *   @param um array de Alunos que devem ser setados, e sua respectiva quantidade
        */
        void Turma::setAlunos(Aluno listaAlu[], int quantidadeAlunos){
            if(quantidadeAlunos<=capacidade){
                delete []alunos;
                alunos = new Aluno[quantidadeAlunos];
                vagas = capacidade-quantidadeAlunos;
                for(int i =0;i<quantidadeAlunos;i++){
                    *(alunos+i) = listaAlu[i];
                }
                std::cout << quantidadeAlunos<<" aluno(s) foram inseridos" << std::endl;
            }else{
                std::cout << "não existem vagas suficientes, inserção sem sucesso" << std::endl;
            }
            
        }
        /** @brief Método para adicionar uma lista de alunos à lista já existente.
        *   @details Ao receber uma lista de Alunos (ListaAlu), diferente do método anterior,
        * esses alunos são alocados no vetor já existente de alunos. Logo no início, os alunos já existentes
        * são salvos em um ponteiro auxiliar pAuxiliarAluno. Após isso, são adicionados os novos alunos 
        * passados através da chamada da função.
        *   @param um array de Alunos que devem ser ADICIONADOS, e sua respectiva quantidade
        */
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
        /** @brief Método para imprimir a lista de alunos existente no objeto.
        *   @details Percorre cada posição do ponteiro de alunos, concatenando as informações
        * em forma de string para exibi-las no console de uma forma mais prática.
        */
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
        /** @brief Método auxiliar interno para facilitar a comparação de alunos a partir de um determinado campo.
         *  @param Indice J e I dos alunos que estão sendo comparado, e o campo sobre o qual a comparação é feita
         *  @return verdairo ou falso para a comparação de antecedência entre o aluno do indice J e I
        *   @details Com as informações de parâmetro, realiza a comparação de antecedência entre os alunos da posição
        * J e I de acordo com o campo do aluno que foi selecionado. Caso o campo passado seja nota, o método irá retornar o resultado
        * da comparação das duas notas, assumindo que uma será menor que a outra. Com isso é possível facilitar a implementação
        * do selection sort definido no método ordenaCampo()
        */
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
        /** @brief Método para ordenar o objeto alunos de acordo com um determinado campo da classe ALuno
         *  @param campo sobre o qual a comparação é feita
        *   @details Implementa um algoritmo selection sort para ordenar os alunos. De acordo com o campo passado,
        * a comparação desejada é passada para o método switchCampoEscol, para facilitar essa comparação. De acordo com
        * o resultado da comparação, ocorre a troca de posições dos alunos iterados.
        */
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