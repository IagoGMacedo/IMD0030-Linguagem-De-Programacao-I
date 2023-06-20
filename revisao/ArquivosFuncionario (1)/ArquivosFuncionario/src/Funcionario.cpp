#include "../include/Funcionario.h"
#include <iostream>
        Funcionario::Funcionario(){
            this->nome = "";
            this->salario = 0;
        }
        Funcionario::Funcionario(std::string nom, double salar){
            this->nome = nom;
            this->salario = salar;
        };
        std::string Funcionario::getNome(){
            return this->nome;
        };
        double Funcionario::getSalario(){
            return this->salario;
        };
        void Funcionario::setNome(std::string nom){
            this->nome = nom;
        };
        void Funcionario::setSalario(double salar){
            this->salario = salar;
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

        void Funcionario::readFuncionario(){
		std::cout<<"DADOS DO FUNCIONARIO"<<std::endl;
		std::cin.ignore(1);
		std::cout<<"NOME DO EMPREGADO : ";
        char funNome[100];
        double salario;
		std::cin.getline(funNome,100);
		std::cout<<"INSIRA O SALARIO : ";
        std::cin >> salario;
        this->setNome(funNome);
        this->setSalario(salario);
	    };

        void Funcionario::printFuncionario(){
		std::cout<<"DADOS DO FUNCIONARIO"<<std::endl;
		std::cout<<"NOME DO EMPREGADO : "<<std::endl;
		std::cout << this->getNome() << std::endl;
		std::cout<<"SALARIO DO EMPREGADO SALARIO : ";
		std::cout << this->getSalario() << std::endl;
	    };


        