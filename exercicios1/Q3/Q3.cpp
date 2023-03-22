// Created by IAGO GABRIEL NOBRE DE MACEDO on 20/03/2023.
//  matricula: 20220037927
#include <iostream>
double harm(double value){
    if(value==1){
        return 1;
    } else{
        return (1/value) + harm(value-1);
    }
}
int main(){
    double value;
    std::cin >> value;
    std::cout << harm(value);

    return 0;
}