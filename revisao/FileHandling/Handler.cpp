/*
ifstream - quando queremos abrir um arquivo para leitura
ofstream - quando queremos abrir um arquivo para escrita
fstream - quando se deseja que o arquivo possa ser lido e escrito ao mesmo tempo

#include <fstream>

*/

#include <fstream>
#include <iostream>
#include <string>


/*
fstream arqDados(“dados.dat", ios::in | ios::out | ios::binary);
*/
void metodoFstream(){
    std::fstream arqDados;
    //aqui temos esse metodo com mais parametros
    //ios::app : all output operations are performed at the end of the file, appending the content
    //to the current content of the file.
    arqDados.open("dados.dat",std::ios::in | std::ios::out | std::ios::binary);

}

void metodoIfstream(){
    std::ifstream arqDados;
    arqDados.open("dados.dat");
    //std::ifstream arqDados("dados.dat";
    /*o objecto arqDados é criado e o arquivo dados.dat é aberto em modo de 
    texto para leitura
    */
   std::string line;
   if(arqDados.is_open()){
    while(arqDados >> line){
        std::cout << line << '\n';
        //std::cout << line;

    }
    arqDados.close();
   } else{
    std::cout << "o arquivo não está aberto" <<std::endl;
   }
    //eof : end of the file
    std::cout << "-------------------------";
   std::ifstream arqPalavras;
   arqPalavras.open("palavras.txt");
   char next = 'a';
   do{
    //posso usar isso para leituras mais complexas usando isspace(char)
    arqPalavras.get(next);
    std::cout << next;
   } while(!arqPalavras.eof());

};

void metodoOfstream(){
    std::ofstream arqDados;
    //se for binario eu preciso dizer
    //se fosse binario:
    //arqDados.open("dados.dat",std::ios::binary);
    //se for txt:
    arqDados.open("palavras.txt", std::ios::app);
    if(arqDados.is_open()){
        arqDados << "é o meninin de papai?\n";
        arqDados << "é o meninin de papai!\n";
        arqDados.close();
    } else{
        std::cout << "o arquivo não está aberto" << std::endl;
    }
    //cuidado! isso aqui reescreve todo o conteudo do arquivo
};

int main(){
    metodoIfstream();
    //metodoOfstream();
    return 0;
};