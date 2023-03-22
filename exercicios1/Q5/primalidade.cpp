//
// Created by iagog on 21/03/2023.
//

#include "primalidade.h"

bool primalidade::isCousing(int number) {
    for(int i = 2; i < number/2;i++){
        if(number%i==0){
            return false;
        }
    }
    return true;
}

int primalidade::getBiggerPrime(int number) {
    if(isCousing(number)){
        return number;
    } else{
        return getBiggerPrime(number-1);
    }
}