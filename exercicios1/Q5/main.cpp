//
// Created by iagog on 21/03/2023.
//
#include "fatorial.h"
#include "primalidade.h"
#include "iostream"

int main(int argc, char **argv){
    if (argc > 1) {
        int number = std::stoi(argv[1]);
        fatorial myFatorial;
        primalidade myPrimalidade;
        std::cout << myPrimalidade.getBiggerPrime(myFatorial.getFactorial(number));
    }

    return 0;
}