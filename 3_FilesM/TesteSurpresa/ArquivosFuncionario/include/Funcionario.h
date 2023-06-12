#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
class Funcionario{
    private:
        std::string nome;
        double salario;
    public:
        Funcionario();
        Funcionario(std::string nom, double salar);
        std::string getNome();
        double getSalario();
        void setNome(std::string nom);
        void setSalario(double salar);
        void aumentarSalario(double percentAumento);
        friend void operator++( Funcionario& func, int );  
        friend std::ostream& operator << (std::ostream &o, Funcionario &func);
        void readFuncionario();
        void printFuncionario();
};

#endif