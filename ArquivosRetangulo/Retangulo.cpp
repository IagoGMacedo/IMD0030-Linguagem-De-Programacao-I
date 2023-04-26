#include "retangulo.h"

Retangulo::Retangulo(){
    largura = 0;
    altura = 0;
}

Retangulo::~Retangulo(){
}

Retangulo::Retangulo(int l, int a){
    largura = l;
    altura = a;
}

Retangulo::Retangulo(Retangulo &r){
    largura = r.getAltura;
    altura = r.getAltura;
}

int Retangulo:getAltura(){
    return altura;
}

int Retangulo:getLargura(){
    return largura;
}

void Retangulo:setAltura(int a){
     altura = a;
}

void Retangulo:setLargura(int l){
    return largura = l;
}