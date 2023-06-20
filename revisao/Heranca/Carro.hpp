#include "Veiculo.hpp"
#include <iostream>
#include <string>
class Carro : public Veiculo{
    public:
        void ligar();    
        void setClassificacao(std::string classificacao);
        void ligarParabrisa();
    private:
        std::string classificacao;
};

void Carro::ligar(){
    std::cout <<"o carrão ligou "<<std::endl;
}

void Carro::setClassificacao(std::string classificacao){
    this->classificacao = classificacao;
}

void Carro::ligarParabrisa(){
    std::cout <<"TUC TUC TUC TUC TUC"<<std::endl;
}
