#include "Tribo.h"

int Tribo::getTribonacci(int number){
    if(number<=2){
        return (number-1>=0 ? number-1 : 0);
    }
    return (getTribonacci(number-1)+getTribonacci(number-2)+getTribonacci(number-3)); 
}    