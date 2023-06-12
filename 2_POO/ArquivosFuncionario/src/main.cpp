#include "../include/Funcionario.h"
#include "../include/Ordenador.h"
#include <iostream>

//declaração da lista de funcionarios
Funcionario*listaFuncionario = new Funcionario[1];
//declaração quantidade de funcionarios
int quantidadeFuncionarios = 0;

void adicionaFuncionario(Funcionario novoFuncionario){
    quantidadeFuncionarios++;
    Funcionario * pAuxiliarFuncionario = new Funcionario[quantidadeFuncionarios];

    for(int i =0;i<quantidadeFuncionarios-1;i++){
        *(pAuxiliarFuncionario+i) = *(listaFuncionario+i);
    }
    *(pAuxiliarFuncionario+quantidadeFuncionarios-1) = novoFuncionario;
    delete[] listaFuncionario;
    listaFuncionario = new Funcionario[quantidadeFuncionarios];
    for(int i =0;i<quantidadeFuncionarios;i++){
        *(listaFuncionario+i) = *(pAuxiliarFuncionario+i);
    }
    delete[] pAuxiliarFuncionario;
};

void imprimeFuncionarios( int quantidade){
        for(int i =0;i<quantidade;i++){
        std::cout << listaFuncionario[i] <<std::endl;
    }
}


int main(){
    std::cout << " questão 1:" << std::endl;
    Funcionario *funcionario1 =  new Funcionario("iago",1200);
    std::cout << funcionario1->getNome() << "; "<< funcionario1->getSalario() << std::endl;

    std::cout << "questão 2:" << std::endl;
    funcionario1->aumentarSalario(10);
    std::cout << funcionario1->getNome() << "; "<< funcionario1->getSalario() << std::endl;

    std::cout << "questão 5:" << std::endl;
    Funcionario *funcionario2 = new Funcionario ("gabriel",700);

    (*funcionario2)++;
    std::cout << *funcionario2 << std::endl;


    std::cout << "questão 6:" << std::endl;
    std::cout << *funcionario1 << std::endl;

    std::cout << "questão 7:" << std::endl;
    //criação de funcionarios
    Funcionario *funcionario3 = new Funcionario("jessica",1300);
    Funcionario *funcionario4 = new Funcionario("Humberto",200);
    Funcionario *funcionario5 = new Funcionario("Claudio",8000);
    Funcionario *funcionario6 = new Funcionario("Ingrid",7000);
    Funcionario *funcionario7 = new Funcionario("Kassia",12000);
    Funcionario *funcionario8 = new Funcionario("Joao",842);
    Funcionario *funcionario9 = new Funcionario("Fernanda",430);
    Funcionario *funcionario10 = new Funcionario("Rubem",100);
   
    //criação da lista de funcionarios
    adicionaFuncionario(*funcionario1);
    adicionaFuncionario(*funcionario2);
    adicionaFuncionario(*funcionario3);
    adicionaFuncionario(*funcionario4);
    adicionaFuncionario(*funcionario5);
    adicionaFuncionario(*funcionario6);
    adicionaFuncionario(*funcionario7);
    adicionaFuncionario(*funcionario8);
    adicionaFuncionario(*funcionario9);
    adicionaFuncionario(*funcionario10);
    
    imprimeFuncionarios(quantidadeFuncionarios);

    std::cout << "questões 3 e 4" << std::endl;
    Ordenador ordenador1;
    //ordenando de forma crescente
    std::cout << "3 menores salarios:" << std::endl;
    ordenador1.ordena(listaFuncionario, quantidadeFuncionarios, true);
    imprimeFuncionarios(3);

    //ordenando de forma decrescente
    std::cout << "3 maiores salarios:" << std::endl;
    ordenador1.ordena(listaFuncionario, quantidadeFuncionarios, false);
    imprimeFuncionarios(3);

    delete []listaFuncionario;
    return 0;
}