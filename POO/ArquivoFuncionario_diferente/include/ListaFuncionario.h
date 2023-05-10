#include "Funcionario.h"
class ListaFuncionario{
    private:
        Funcionario *vetorFuncionario;
        int quantidade;
    public:
        ListaFuncionario(Funcionario primeiroFuncionario);
        void imprimeFuncionarios();
        void adicionaFuncionario(Funcionario novoFuncionario);
        void ordenaMaior();
        void ordenaMenor();
        void ordena();
};