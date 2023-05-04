#include <iostream>
#include "Tribo.h"

int main(){
    Tribo objetoTribo;
    for(int i =0;i<20;i++){
        std::cout <<"n= "<<i<<", " <<objetoTribo.getTribonacci(i) << std::endl;
    }

}