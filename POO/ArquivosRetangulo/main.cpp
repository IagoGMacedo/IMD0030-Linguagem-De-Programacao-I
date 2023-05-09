#include "Retangulo.h"
#include <iostream>
int main(){

    //criação dinamica de um objeto da classe retângulo
    //todo objeto é um ponteiro
    Retangulo* retangulo = new Retangulo(1, 2);

    /*Se um objeto foi criado de maneira dinâmica, o operador de acesso a 
    ser utilizado é o mesmo usado para acessar campos de um ponteiro 
    para struct com ->*/
    std::cout << retangulo->getAltura() << std::endl;
    std::cout << retangulo->getLargura() << std::endl;

    //criação estática de um objeto da classe retângulo
    Retangulo retangulo2;
    retangulo2.setAltura(2);
    retangulo2.setLargura(2);

    std::cout << retangulo2.getAltura() << std::endl;
    std::cout << retangulo2.getLargura() << std::endl;


    Retangulo *retangulo3 = new Retangulo(retangulo2);

    std::cout << retangulo3->getAltura() << std::endl;
    std::cout << retangulo3->getLargura() << std::endl;
    
    /*atributos estaticos armazenam informações geral de uma classe,
    como um contador de instâncias. Independente da quantidade de objetos
    declarados, atributos e metodos estaticos tem instancia unica */
    std::cout << "quantidade total de instancias: " << Retangulo::getTotal() << std::endl;

    
    return 0;
}