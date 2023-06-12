#include "Tribo.h"
/**
* @file Tribo.cpp
* @brief Arquivo cpp da classe Tribo, que contém a implementação método de gerar a sequência Tribonacci
* @author Iago Gabriel Nobre de Macedo - 20220037927
* @since 01/05/2023
*/

/**
 * @brief Função que retorna o n termo da sequência Tribonacci
 * @param recebe o termo n que deve ser gerado
 * @return o termo n da sequência
*/
int Tribo::getTribonacci(int number){
    if(number<=2){
        return (number-1>=0 ? number-1 : 0);
    }
    return (getTribonacci(number-1)+getTribonacci(number-2)+getTribonacci(number-3)); 
}    