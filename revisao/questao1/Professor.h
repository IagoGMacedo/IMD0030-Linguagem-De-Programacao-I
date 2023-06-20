#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"
#include "Conhecimento.h"
#include "Universidade.h"
#include "Departamento.h"


class Professor : public Pessoa, public Conhecimento{
    private:
        Universidade* UnivFiliado;
        Departamento* DptoFiliado;
    public:
        Professor();
        Professor();
        ~Professor();
        void UnivFiliado(Universidade* u);
};
#endif