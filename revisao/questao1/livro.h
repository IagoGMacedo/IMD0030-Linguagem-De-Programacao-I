#ifndef LIVRO_H
#define LIVRO_H
#include <Conhecimento.h>

class Livro : public Conhecimento{
    protected:
        char nome[150];
    public:
        Livro();
        ~Livro();
        char* getNome();
        void setNome(char* n);

};

#endif