/**
* @file Turma.h
* @brief Arquivo header Turma, que contém a definição da classe Turma e seus métodos
* @author Iago Gabriel Nobre de Macedo - 20220037927
* @since 01/05/2023
*/

#ifndef TURMA_H
#define TURMA_H

#include "Aluno.h"
#include <string>
class Turma{
    private:
        int capacidade; /**< Define a capacidade máxima da turma*/
        int vagas; /**< Define a quantidade atual de vagas*/
        Aluno *alunos; /**< Lista de alunos cadastrados na turma*/
        bool switchCampoEscol(int indiceJ, int indiceI, std::string campo); /**< Método auxiliar interno da classe para ordenação dos campos no método ordenaCampo()*/
    public:
        Turma(int cap); /**< Construtor da classe passando a capacidade máxima dela*/
        ~Turma(); /**< Desturtor da classe*/
        void imprimeAlunos(); /**< Método que imprime no console todos os alunos existentes na turma bem como suas informações*/
        void ordenaCampo(std::string campo); /**< Método que ordena a lista de alunos segundo um atributo de cada aluno, podendo ser: Nota, Matrícula e Nome*/

        int getCapacidade();
        int getVagas();
        Aluno* getAlunos();

        void setCapacidade(int cap);
        void setVagas(int vag);
        void setAlunos(Aluno listaAlu[], int quantidadeAlunos);
        void addAlunos(Aluno listaAlu[], int quantidadeAlunos);
};
#endif // ALUNO_H
