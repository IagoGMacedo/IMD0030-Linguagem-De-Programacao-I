#include <iostream>
#include <fstream>
#include <string>

int main(){
    const int MAX=80; char buff[MAX];
std::ifstream fin("entrada_q1.txt"); // Abre arquivo para leitura
 //em modo texto
 while(fin) // Enquanto não for fim de arquivo
 { fin.getline(buff, MAX); // Lê uma linha do arquivo
 std::cout << buff; } // Exibe no vídeo
    return 0;
}