//
// Created by iagog on 21/03/2023.
//

#include "fatorial.h"

int fatorial::getFactorial(int number) {
    if(number==1){
        return 1;
    } else{
        return number*getFactorial(number-1);
    }
}

