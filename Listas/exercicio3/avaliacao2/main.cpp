
#include <iostream>
#include "Chefe.cpp"
#include "Comissionado.cpp"
#include "Empregado.cpp"
#include <vector>
#include <fstream>

template <class T>
void ordenaPorSalario(T d[], int N){
 int i,j,indMenor;
 T aux;
 for(i=0; i<N-1; i++){
indMenor=i;
for(j=i+1; j<N; j++){
if(d[j]<d[indMenor]){
indMenor=j;
}
}
aux=d[i];
d[i]=d[indMenor];
d[indMenor]=aux;
 }
}

std::vector<Empregado*> departamento;
std::vector<Empregado*> empregadosRecuperados;


int recuperarArquivo(){
    std::fstream arquivoEmpregados;

    arquivoEmpregados.open("empregados.dat", std::ios::in | std::ios::binary);
    if(arquivoEmpregados.is_open()){
        arquivoEmpregados.read((char*)&empregadosRecuperados,sizeof(empregadosRecuperados));
        Chefe* novoChefe1 = (Chefe*)(empregadosRecuperados[0]);
        novoChefe1->printarInformacoes();
        novoChefe1 = (Chefe*)(empregadosRecuperados[1]);
        novoChefe1->printarInformacoes();

        Comissionado* novoComissionado1 = (Comissionado*)(empregadosRecuperados[2]);
        novoComissionado1->printarInformacoes();

        novoComissionado1 = (Comissionado*)(empregadosRecuperados[3]);
        novoComissionado1->printarInformacoes();

        novoComissionado1 = (Comissionado*)(empregadosRecuperados[4]);
        novoComissionado1->printarInformacoes();
        std::cout << "programa feito com sucesso" << std::endl;
        
    }
    arquivoEmpregados.close();
    return 0;
}

int salvarArquivo(){
    std::fstream arquivoEmpregados;
    arquivoEmpregados.open("empregados.dat", std::ios::out | std::ios::binary);
    if(arquivoEmpregados.is_open()){
        arquivoEmpregados.write((char*)&departamento,sizeof(departamento));
        std::cout << "arquivo salvo com sucesso" << std::endl;
        arquivoEmpregados.close();
    }
    return 0;
}


int main(){
    Chefe *chefe1 = new Chefe(5000, "Willian", "Parnamirim");
    Chefe *chefe2 = new Chefe(1000, "iago", "igapo");
    Comissionado *comissionado1 = new Comissionado(1000, 100, 1, "Claudio", "CRedondo");
    Comissionado *comissionado2 = new Comissionado(2000, 100, 2, "Caio", "Ares");
    Comissionado *comissionado3 = new Comissionado(3000, 100, 3, "Guilherme", "Parque");

    departamento.push_back(chefe1);
    departamento.push_back(chefe2);
    departamento.push_back(comissionado2);
    departamento.push_back(comissionado3);
    departamento.push_back(comissionado1);

    salvarArquivo();
    std::cout << "---------------------" << std::endl;
    recuperarArquivo();
    //departamento.push_back(*chefe1);
    //Empregado* departamento = {chefe1, chefe2, comissionado1, comissionado2, comissionado3};
    std::cout << "---------------------" << std::endl;
    std::cout << "ordenando:" << std::endl;

    Empregado* arrayEmpregados;
    std::copy(empregadosRecuperados.begin(), empregadosRecuperados.end(), arrayEmpregados);
    ordenaPorSalario<Empregado>(arrayEmpregados, 5);

    for(int i =0;i<5;i++){
        arrayEmpregados[0].printarInformacoes();
    }

    return 0;
}