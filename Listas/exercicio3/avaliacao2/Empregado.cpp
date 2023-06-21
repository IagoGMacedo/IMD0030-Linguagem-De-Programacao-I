#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado{
    protected:
        std::string nome;
        std::string endereco;
    public:
        Empregado(std::string n, std::string e) : nome(n), endereco(e){}
        ~Empregado();
        virtual double calcularSalario() = 0;
        virtual void printarInformacoes() = 0;
        friend bool operator<(Empregado& empre1, Empregado& empre2);  
        
        
};
        bool operator<(Empregado& empre1, Empregado& empre2)
        {
            return empre1.calcularSalario() > empre2.calcularSalario();
        }
    

#endif