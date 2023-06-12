#include "../include/Funcionario.h"
#include "../include/Ordenador.h"
void Ordenador::ordena(Funcionario *vetorFuncionario, int quantidade, bool crescente){
    int min = 0;
    for(int i =0;i<(quantidade);i++){
        min = i;
        for(int j =i+1;j<quantidade;j++){
            if(crescente){
                if(vetorFuncionario[j].getSalario() < vetorFuncionario[min].getSalario()){
                        min = j;
                }
            } else{
                if(vetorFuncionario[j].getSalario() > vetorFuncionario[min].getSalario()){
                        min = j;
                }
            }
 
        }
        if(min!=i){
            //SWAP
            Funcionario aux = vetorFuncionario[i];
            vetorFuncionario[i] = vetorFuncionario[min];
            vetorFuncionario[min]= aux;
        }
    }   
}