//
// discente: iago gabriel nobre de macedo on 18/03/2023.
//  matricula: 20220037927
//
#include <iostream>
#include <math.h>
int sum(int upperLimit){
    if(upperLimit>=1){
        /*tendo o parametro passado >=1, a função retorna o cubo desse valor, somado
        ainda com o retorno da função para o valor do parametro -1, garantindo a recursao*/
        return pow(upperLimit,3)+sum(upperLimit-1);
    }
}
int main(){
    int upperLimit;
    std::cin >> upperLimit;
    //chamada da função
    std::cout << sum(upperLimit);
    return 0;
}
