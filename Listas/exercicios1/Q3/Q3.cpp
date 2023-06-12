// Created by IAGO GABRIEL NOBRE DE MACEDO on 20/03/2023.
//  matricula: 20220037927
#include <iostream>
double harm(double value){
    if(value==1){
        //caso base da função recursiva
        return 1;
    } else{
        /*nos demais casos, retorna a soma de 1/parametro + uma nova chamada de função
        ,que irá retornar (1/parametro-1) */
        return (1/value) + harm(value-1);
    }
}
int main(){
    double value;
    std::cin >> value;
    //chamada da função
    std::cout << harm(value);

    return 0;
}