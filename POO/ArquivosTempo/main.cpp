//include do hpp
#include "Tempo.hpp"
#include <iostream>
int main(){
    //alocação estática
    Tempo r(12, 30, 0);
    Tempo t(1, 20, 0);

    Tempo s(r + t);
    std::cout << "soma de tempo: "<< s.getHoras() <<std::endl;

    return 0;
}