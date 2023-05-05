/**
* @file main.cpp
* @brief Arquivo cpp main, que contém testes da função desenvolvida
* @author Iago Gabriel Nobre de Macedo - 20220037927
* @since 01/05/2023
*/

#include <iostream>
#include "Tribo.h"

int main(){
    Tribo objetoTribo; /**< criação do objeto de classe Tribo*/
    /**
     * @brief varia i de 0 a 19, chamando a função para cada i */
    for(int i =0;i<20;i++){
        std::cout <<"n= "<<i<<", " <<objetoTribo.getTribonacci(i) << std::endl;
    }

}