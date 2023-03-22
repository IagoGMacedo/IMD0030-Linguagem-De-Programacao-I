// Created by Iago Gabriel Nobre de Macedo on 19/03/2023.
//  matricula: 20220037927
#include <iostream>

int min(int array[], int tam){
    //caso base da recursao
    if(tam==1){
        return array[0];
    }
    else{
    /*verifica se o array na posicao atual é menor do que o valor do array na posição -1,
     * caso seja, esse valor é retornado, do contrário, o retorno é uma nova chamada da função
     * para posição -1
    */
        return array[tam-1] < min(array,tam-1) ? array[tam-1]:min(array,tam-1);
    }
    return 0;
}

int main(){
    //inicialização do vetor
    int array[] = {1,-3,0,4,7};
    int tam = 5;
    //chamada da função
    std::cout << "menor:"<< min(array,tam) << std::endl;
    return 0;
}
