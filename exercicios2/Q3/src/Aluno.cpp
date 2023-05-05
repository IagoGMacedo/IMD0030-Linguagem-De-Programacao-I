/**
* @file Aluno.cpp
* @brief Arquivo cpp Aluno, que contém a implementação da classe Aluno e seus métodos
* @author Iago Gabriel Nobre de Macedo - 20220037927
* @since 01/05/2023
*/


#include "../include/Aluno.h"
#include <iostream>
        /** @brief Construtor da classe sem passagem de parametros */
        Aluno::Aluno(){
            nota1 = 0;
            nota2 = 0;
            nota3 = 0;
        }
        /** @brief Construtor da classe com passagem de parâmetros para cada atributo 
         *  @param nom Nome do aluno, matricul Matricula do aluno, not1 nota 1, not2 nota 2, not3 nota3
        */
        Aluno::Aluno(std::string nom, int matricul, float not1, float not2, float not3){
            nome = nom;
            matricula = matricul;
            nota1 = not1;
            nota2 = not2;
            nota3 = not3;
        }
        /** @brief Destrutor da classe */
        Aluno::~Aluno(){

        }
        /** @brief Função que calcula a média das 3 notas do aluno
         *  @return A média aritmética das 3 notas do aluno
        */
        float Aluno::calculaMedia(){
            return (nota1+nota2+nota3)/3;
        }
        std::string Aluno::getNome(){
            return nome;
        }
        int Aluno::getMatricula(){
            return matricula;
        }
        float Aluno::getNota1(void){
            return nota1;
        }
        float Aluno::getNota2(void){
            return nota2;
        }
        float Aluno::getNota3(void){
            return nota3;
        }

        void Aluno::setNome(std::string nom){
            nome = nom;
        }
        void Aluno::setMatricula(int matricul){
            matricula = matricul;
        }
        void Aluno::setNota1(float not1){
            nota1= not1;
        }
        void Aluno::setNota2(float not2){
            nota2=not2;
        }
        void Aluno::setNota3(float not3){
            nota3=not3;
        }


