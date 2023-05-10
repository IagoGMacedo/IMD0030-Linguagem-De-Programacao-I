#include "../include/ListaFuncionario.h"
#include <iostream>
ListaFuncionario::ListaFuncionario(Funcionario primeiroFuncionario){
    quantidade = 1;
    this->vetorFuncionario = new Funcionario[1];
    //vetorFuncionario = new Funcionario[1];
    vetorFuncionario[0] = primeiroFuncionario;
};

void ListaFuncionario::imprimeFuncionarios(){
    for(int i =0;i<quantidade;i++){
        std::cout << vetorFuncionario[i] <<std::endl;
    }
};

void ListaFuncionario::adicionaFuncionario(Funcionario novoFuncionario){
    quantidade++;
    //Funcionario * pAuxiliarFuncionario;
    Funcionario * pAuxiliarFuncionario = new Funcionario[quantidade];

    for(int i =0;i<quantidade-1;i++){
        *(pAuxiliarFuncionario+i) = *(this->vetorFuncionario+i);
    }
    *(pAuxiliarFuncionario+quantidade-1) = novoFuncionario;
    delete[] vetorFuncionario;
    this->vetorFuncionario = new Funcionario[quantidade];
    for(int i =0;i<quantidade;i++){
        *(vetorFuncionario+i) = *(pAuxiliarFuncionario+i);
    }
    delete[] pAuxiliarFuncionario;
};
void ListaFuncionario::ordena(){
    int min = 0;
    for(int i =0;i<(quantidade);i++){
        min = i;
        for(int j =i+1;j<quantidade;j++){
                if(this->vetorFuncionario[j].getSalario() < this->vetorFuncionario[min].getSalario()){
                    min = j;
                }
        }
        if(min!=i){
            //SWAP
            Funcionario aux = this->vetorFuncionario[i];
            this->vetorFuncionario[i] = this->vetorFuncionario[min];
            this->vetorFuncionario[min]= aux;
        }
    }   
}

void ListaFuncionario::ordenaMaior(){
    this->ordena();
    std::cout << "imprimindo 3 maiores salarios" << std::endl;
    for(int i =(quantidade-1);i>(quantidade-4);i--){
        std::cout << vetorFuncionario[i] << std::endl;
    }
};

void ListaFuncionario::ordenaMenor(){
    this->ordena();
    std::cout << "imprimindo 3 menores salarios" << std::endl;
    for(int i =0;i<3;i++){
        std::cout << vetorFuncionario[i] << std::endl;
    }
};

