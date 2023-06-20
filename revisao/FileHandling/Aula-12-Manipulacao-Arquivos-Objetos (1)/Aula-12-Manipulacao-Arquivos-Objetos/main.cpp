#include <iostream>
#include <fstream>
#define FILE_NAME "emp.dat"

using namespace std;

//Declaracao da classe Empregado
class Funcionario {
private : 
	int 	funID;
	char 	funNome[100] ;
	char 	funAtrib[100];
	int 	dde,mme,aae;
	int 	ddn,mmn,aan;
public  :
	// Leitura dos Dados do Funcionario
	void readFuncionario(){
		cout<<"DADOS DO FUNCIONARIO"<<endl;
		cout<<"INSIRA A IDENTIDADE DO FUNCIONARIO : " ;
		cin >> funID;
		cin.ignore(1);
		cout<<"NOME DO EMPREGADO : ";
		cin.getline(funNome,100);

		cout<<"INSIRA A ATRIBUICAO : ";
		cin.getline(funAtrib,100);
		
		cout<<"INSIRA A DATA DE ENTRADA :"<<endl;
		cout<<"DIA : "; 
    cin >> dde;
		cout<<"MES : "; 
    cin >>mme;
		cout<<"ANO : "; 
    cin >>aae;
		
		cout<<"INSIRA A DATA DE NASCIMENTO :"<<endl;
		cout<<"DIA : "; 
    cin>>ddn;
		cout<<"MES : "; 
    cin>>mmn;
		cout<<"ANO : "; 
    cin>>aan;
	}
	// FUNCAO PARA IMPRIMIR DADOS DO EMPREGADO
	void printFuncionario(){
		cout <<"IDENTIDADE DO FUNCIONARIO: "<< funID<<endl
		     <<"NOME DO FUNCIONARIO: "<< funNome <<endl
		     <<"ATRIBUICAO: "<< funAtrib <<endl
		     <<"DATA DE ENTRADA: "<< dde << "/" << mme << "/" << aae           <<endl
		 <<"DATA DE NASCIMENTO: "<< ddn << "/" << mmn << "/"<< aan <<endl;
	}
};

int main(){
	
	// Funcionario
	Funcionario fun;
	//read employee details
	//fun.readFuncionario();
	
	//write object into the file
	fstream file;
  /**
	file.open(FILE_NAME,ios::out|ios::binary);
  
	if(!file){
		cout<<"Erro ao criar arquivo...\n";
		return -1;
	}
	
	file.write((char*)&fun,sizeof(fun));
	file.close();
	cout<<"Dado salvo no arquivo.\n";
	*/
	//Abrindo arquivo novamente
	file.open(FILE_NAME,ios::in|ios::binary);
	if(!file){
		cout<<"Erro ao abrir arquivo...\n";
		return -1;
	}
	
	if( file.read((char*)&fun, sizeof(fun)) ){
			cout<<endl<<endl;
			cout<<"Dado extraido do arquivo...\n";
			//Imprime o objeto
			fun.printFuncionario();
	}
	else{
		cout<<"Erro ao ler dado do arquivo...\n";
		return -1;
	}
	
	file.close();	
	return 0;
}
