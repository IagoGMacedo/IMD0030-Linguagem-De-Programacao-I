// TEMPLATES DE FUNÇÕES, FORMA DE FAZER POLIMORFISMO. FUNÇÕES GENÉRICAS
//TEMPLATES, POLIMORFISMO PARAMÉTRICO, OCORRE EM TEMPO DE COMPILAÇÃO
#include <iostream>
#include <cstring>

template <class T>
T funcao(T a);

int main(){
    std::cout<<funcao("iago gabriel")<<std::endl;
    return 0;
}

template <class T>
T funcao(T a){
    return a+1;
}

//função genérica que pode receber qualquer tipo de parâmetro
template <class T>
T max(T num1, T num2){
    return num1<num2?num2:num1;
}

//especialização de uma função genérica
template<>
char* max<char*>(char* a, char* b){
    return strcmp(a,b)>0?b:a;
}

//função genérica com diversos tipos
template <typename T, typename U>
T divisao(T a, T b){
    return a/b;
}