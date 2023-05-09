#include "Animal.h"
#include <iostream>

Animal::Animal(int fome){
    nivelFome = fome;
    std::cout << "Um novo animal nasceu!" << std::endl;


}
void Animal::situacao(){
    std::cout << "Olá!" << std::endl;
    std::cout << "Meu nivel fome: "<< nivelFome << std::endl;
}
        
