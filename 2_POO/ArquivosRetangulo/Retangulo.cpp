#include "Retangulo.h"

int Retangulo::total;

int Retangulo::getTotal(){
    return total;
}

Retangulo::Retangulo(){
    largura = 0;
    altura = 0;
    total++;
}

Retangulo::~Retangulo(){
    //destrutor padrão
}

Retangulo::Retangulo(int l , int a){
    largura = l;
    altura = a;
    total++;
}

Retangulo::Retangulo(Retangulo &r){
    largura = r.getLargura();
    altura = r.getAltura();
    total++;
}

int Retangulo::getAltura(){
    return altura;
}

int Retangulo::getLargura(){
    return largura;
}

void Retangulo::setAltura(int a = 1){
    //Argumento padrão
     altura = a;
}

void Retangulo::setLargura(int l = 1){
    //Argumento padrão
     largura = l;
}

//exemplo de função com passagem por referencia
//ela pode ser void porque altera o objeto lá
//com certeza a melhor alternativa para algoritmos de ordenação: passagem por referencia
//pois o conteudo é mudado diretamente na variavel
void Retangulo::soma(int &resultado){
    resultado = largura+altura;
}