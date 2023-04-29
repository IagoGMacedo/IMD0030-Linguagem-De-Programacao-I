#include <iostream>
int trib(int number){
    if(number<=2){
        return (number-1>=0 ? number-1 : 0);
    }
    return (trib(number-1)+trib(number-2)+trib(number-3)); 
}

int main(){
    std::cout << trib(1);
}