#ifndef CONHECIMENTO_H
#define CONHECIMENTO_H

class Conhecimento{
    protected:
        char dominio[150];
    public:
        Conhecimento();
        ~Conhecimento();
        char* getDominio();
        void setDominio(char* d);
};
#endif