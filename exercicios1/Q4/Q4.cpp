// Created by IAGO GABRIEL NOBRE DE MACEDO on 20/03/2023.
//  matricula: 20220037927

#include <iostream>
#include <string.h>
int appears(std::string  str_value,std::string  str_sequence, int size ){
    if(size==1){
        return str_value[0]==str_sequence[0];
    } else{
        int newSize = size-1;
        char charVerify = str_sequence[newSize];
        int retorno = str_value[0]==(charVerify);
        return   retorno + appears(str_value,str_sequence, newSize);
    }
}

int main(){
    int value;
    int sequence;
    std::cin >> value;
    std::cin >> sequence;

    std::cout << "valor final: " <<appears(std::to_string(value), std::to_string(sequence),std::to_string(sequence).size()) << std::endl;
    return 0;
}