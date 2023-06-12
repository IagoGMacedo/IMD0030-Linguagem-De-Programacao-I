// discente: iago gabriel nobre de macedo on 18/03/2023.
//  matricula: 20220037927
#include "fatorial.h"
#include "primalidade.h"
#include "iostream"

int main(int argc, char **argv){
    if (argc > 1) {
        int number = std::stoi(argv[1]);
        fatorial myFatorial;
        primalidade myPrimalidade;
        /*
         duas chamadas de função. Uma para obter o fatorial do numero(getFacotorial) e outra para
         obter o maior primo(getbiggerprime)
         */
        std::cout << myPrimalidade.getBiggerPrime(myFatorial.getFactorial(number));
    }

    return 0;
}