// Created by Iago Gabriel Nobre de Macedo on 19/03/2023.
//  matricula: 20220037927
#include <iostream>

int min(int array[], int tam){
    if(tam==1){
        return array[0];
    }
    else{
        return array[tam-1] < min(array,tam-1) ? array[tam-1]:min(array,tam-1);
    }
    return 0;
}

int main(){
    int array[] = {1,-3,0,4,7};
    int tam = 5;
    std::cout << "menor:"<< min(array,tam) << std::endl;
    return 0;
}
