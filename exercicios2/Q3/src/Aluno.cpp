#include "../include/Aluno.h"
#include <iostream>
        Aluno::Aluno(){
            nota1 = 0;
            nota2 = 0;
            nota3 = 0;
        }

        Aluno::Aluno(std::string nom, int matricul, float not1, float not2, float not3){
            nome = nom;
            matricula = matricul;
            nota1 = not1;
            nota2 = not2;
            nota3 = not3;
        }
        Aluno::~Aluno(){

        }
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


