#include <iostream>
#include <fstream>
#include "../include/Funcionario.h"
#define FILE_NAME "emp.dat"

using namespace std;

Funcionario*listaFuncionario = new Funcionario[1];
int quantidadeFuncionarios = 0;


int salvarArquivoFuncionarios(){
    std::fstream file;

	file.open(FILE_NAME,ios::out|ios::binary);

	if(!file){
		cout<<"Erro ao criar arquivo...\n";
		return -1;
	}
	
	file.write((char*)&listaFuncionario,sizeof(listaFuncionario));
	file.close();
	cout<<"Dados salvos no arquivo (array).\n";
    return 1;
}

int lerArquivoFuncionarios(){
    //Abrindo arquivo novamente
    std::fstream file;
	Funcionario*listaFuncionarioRecuperados;
	file.open(FILE_NAME,ios::in|ios::binary);
	if(!file){
		cout<<"Erro ao abrir arquivo...\n";
		return -1;
	}
	
	if( file.read((char*)&listaFuncionarioRecuperados, sizeof(listaFuncionarioRecuperados)) ){
			cout<<endl<<endl;
			cout<<"Dado extraido do arquivo...\n";
			//Imprime o objeto
            for(int i =0;i<quantidadeFuncionarios;i++){
                listaFuncionarioRecuperados[i].printFuncionario();
            }
            return 1;

	}
	else{
		cout<<"Erro ao ler dado do arquivo...\n";
	}
	file.close();	
    return -1;

}



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
}

int main(){

    Funcionario *funcionario3 = new Funcionario("iago",1300);
    Funcionario *funcionario4 = new Funcionario("Humberto",200);
    Funcionario *funcionario5 = new Funcionario("Claudio",100);

    adicionaFuncionario(*funcionario3);
    adicionaFuncionario(*funcionario4);
    adicionaFuncionario(*funcionario5);
    salvarArquivoFuncionarios();
    lerArquivoFuncionarios();

	return 0;
}
