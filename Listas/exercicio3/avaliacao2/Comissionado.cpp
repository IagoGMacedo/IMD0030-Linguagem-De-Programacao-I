
#include <iostream>
#include "Empregado.cpp"

class Comissionado : public Empregado{
    private:
        double salarioBase;
        double comissao;
        int quantidade;
    public:
        //polimorfismo VERDADEIRO
        Comissionado(double salarioBase, double comissao, int quantidade, std::string n, std::string e) : Empregado(n, e){this->salarioBase = salarioBase; this->comissao = comissao; this->quantidade = quantidade;};
        ~Comissionado();
        double calcularSalario(){return (this->salarioBase+ this->comissao*this->quantidade);}; 
        void printarInformacoes(){    std::cout << "Nome: "<<this->nome <<"(Comissionado)" <<std::endl;
    std::cout << "Endereco: "<<this->endereco  <<std::endl;
    std::cout << "Salario: "<<this->calcularSalario() <<std::endl;}; 
};





