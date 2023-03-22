// discente: iago gabriel nobre de macedo on 18/03/2023.
//  matricula: 20220037927

#include "primalidade.h"

bool primalidade::isCousing(int number) {
    //função para verificar se um numero é primo ou não
    for(int i = 2; i < number/2;i++){
        if(number%i==0){
            return false;
        }
    }
    return true;
}

int primalidade::getBiggerPrime(int number) {
    /*
     função recursiva para encontrar o maior numero primo disponivel
     quando o numero for primo, ele será retornado. Do contrário, a
     função chama a si mesmo para number-1, verificando os numeros
     anteriores
     */
    if(isCousing(number)){
        //caso base da função recursiva
        return number;
    } else{
        return getBiggerPrime(number-1);
    }
}