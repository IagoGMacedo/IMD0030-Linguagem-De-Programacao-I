//
// discente: iago gabriel nobre de macedo on 18/03/2023.
//  matricula: 20220037927
//
#include <iostream>
#include <math.h>
int sum(int upperLimit){
    if(upperLimit>=1){
        return pow(upperLimit,3)+sum(upperLimit-1);
    }
}
int main(){
    int upperLimit;
    std::cin >> upperLimit;
    std::cout << sum(upperLimit);
    return 0;
}
