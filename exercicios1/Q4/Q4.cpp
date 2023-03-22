// Created by IAGO GABRIEL NOBRE DE MACEDO on 20/03/2023.
//  matricula: 20220037927

#include <iostream>
#include <string.h>
int appears(std::string  str_value,std::string  str_sequence, int size ){
    if(size==1){
        //caso base da função recursiva
        return str_value[0]==str_sequence[0];
    } else{
        /*
         o newsize armazena a posição passada no parametro -1
         o charVerify extrai da sequencia o caractere na posição newsize para
         se comparar o digito (str_value). A variavel retorno armazena o resultado
         da comparação (1 ou 0). A variavel retorno irá armazenar recursivamente
         os resultados de comparações
        */
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
    /* A variavel value lê o digito a ser analisado. A variavel sequence lê a sequência de números
     * em que o digito será contado. Para fazer isso, além de chamar a função, também fiz o cast dos
     * valores inteiros para string, facilitando a minha recursão*/
    std::cout << "contagem: " <<appears(std::to_string(value), std::to_string(sequence),std::to_string(sequence).size()) << std::endl;
    return 0;
}