#include "Carro.hpp"

int main(){
    Carro carrinho = * new Carro();
    carrinho.ligar();
    return 0;

    /*Como eu criei a partir de um veiculo, eu não consigo acessar os métodos específicos de um carro
    observe o intelisense
    */
    Veiculo* v = new Carro();
    v->setModelo("celta");
    //não tenho os métodos da classe carro

    //upcasting and downcasting

    //upcasting ->  um ponteiro (ou referência) para uma classe derivada seja tratado como um ponteiro para a classe base
}