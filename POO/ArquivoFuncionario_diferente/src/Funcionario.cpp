#include "../include/Funcionario.h"
#include <iostream>
        Funcionario::Funcionario(){
            
        }
        Funcionario::Funcionario(std::string nom, double salar){
            nome = nom;
            salario = salar;
        };
        std::string Funcionario::getNome(){
            return nome;
        };
        double Funcionario::getSalario(){
            return salario;
        };
        void Funcionario::setNome(std::string nom){
            nome = nom;
        };
        void Funcionario::setSalario(double salar){
            salario = salar;
        };
        void Funcionario::aumentarSalario(double percentAumento){
            if(percentAumento>=0 and percentAumento<=100){
                this->salario = this->salario + this->salario*(percentAumento/100);
                std::cout << "Novo salário: "<< salario << std::endl;
            } else{
                std::cout << "Insira um valor válido para aumento de salário" << std::endl;
            }
        };
        void operator++(Funcionario& func,int)
        {
        func.aumentarSalario(10);
        }
        std::ostream& operator<< (std::ostream &o, Funcionario &func){
            o << func.getNome() <<", "<<func.getSalario();
            return o;
        };
        