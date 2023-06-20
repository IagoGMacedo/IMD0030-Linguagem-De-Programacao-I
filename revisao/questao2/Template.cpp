#include <iostream>

template <class T> 
T maxMin(T v[], int n, T &ma,T &me){
    me = v[0];
    for(int i =0;i<n;i++){
        if(v[i]>ma){
            //maior
            ma = v[i];
        }
        if(v[i]<me){
            //menor
            me = v[i];
        }
    }
};


int main(){
    int vetorInteiros[] = {1, 2, 3, 4, 5, 6};
    std::string vetorString[] = {"d","b","a","f","i","u"};
    int quantidade = 6;
    std::string maior = "";
    std::string menor = "";
    maxMin<std::string>(vetorString, 6, maior, menor);
    std::cout << "maior: "<< maior << std::endl;
    std::cout << "menor: "<< menor << std::endl;
    return 0;
}