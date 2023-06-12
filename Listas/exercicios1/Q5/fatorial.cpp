// discente: iago gabriel nobre de macedo on 18/03/2023.
//  matricula: 20220037927

#include "fatorial.h"

int fatorial::getFactorial(int number) {
    //caso base da função recursiva
    if(number==1){
        return 1;
    } else{
        //retorna o numero atual multiplicado do seu antecessor ate que chegue em 1
        return number*getFactorial(number-1);
    }
}

