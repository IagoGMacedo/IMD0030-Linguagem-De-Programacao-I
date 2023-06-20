#include <iostream>
#include "Pessoa.hpp"

class Veiculo{
    protected:
        std::string cor;
        std::string modelo;
        std::string ano;
        std::string placa;
        Pessoa proprietario;
    
    public:
        void ligar();
        void setModelo(std::string model);
        void setPlaca(std::string plac);
};

void Veiculo::ligar(){
    std::cout<< "O veículo foi ligado" <<std::endl;
};

void Veiculo::setModelo(std::string modelo){
    this->modelo = modelo;
};
void Veiculo::setPlaca(std::string placa){
    this->placa = placa;
};