
#include "Empregado.cpp"
#include <iostream>

class Chefe : public Empregado{
    private:
        double salarioMensal;
    public:
        //polimorfismo VERDADEIRO
        Chefe(double salarioMensal, std::string n, std::string e) : Empregado(n, e){this->salarioMensal = salarioMensal;};
        ~Chefe();
        double calcularSalario(){return salarioMensal;}
        void printarInformacoes(){std::cout << "Nome: "<<this->nome <<"(Chefe)" <<std::endl;
    std::cout << "Endereco: "<<this->endereco  <<std::endl;
    std::cout << "Salario: "<<this->calcularSalario() <<std::endl;}
};

//double Chefe::calcularSalario(){
  //  return this->salarioMensal;
//}

/*
void Chefe::printarInformacoes(){
    std::cout << "Nome: "<<this->nome <<"(Chefe)" <<std::endl;
    std::cout << "Endereco: "<<this->endereco  <<std::endl;
    std::cout << "Salario: "<<this->calcularSalario() <<std::endl;


}
*/

