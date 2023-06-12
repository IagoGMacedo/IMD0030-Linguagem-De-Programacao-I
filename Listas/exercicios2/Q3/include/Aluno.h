#ifndef ALUNO_H
/**
* @file Aluno.h
* @brief Arquivo header Aluno, que contém a definição da classe Aluno e seus métodos
* @author Iago Gabriel Nobre de Macedo - 20220037927
* @since 01/05/2023
*/

#define ALUNO_H

#include <string>
#include <iostream>

class Aluno{
    private:
        std::string nome;
        int matricula; 
        float nota1; 
        float nota2; 
        float nota3; 
    public:
        Aluno();
        Aluno(std::string nom, int matricul, float not1, float not2, float not3); 
        ~Aluno();
        float calculaMedia(void); 
        std::string getNome(); 
        int getMatricula();
        float getNota1();
        float getNota2();
        float getNota3();

        void setNome(std::string nom);
        void setMatricula(int matricul);
        void setNota1(float not1);
        void setNota2(float not2);
        void setNota3(float not3);

};

#endif // ALUNO_H