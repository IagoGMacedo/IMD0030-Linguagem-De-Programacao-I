#include <string>

class Aluno{
    private:
        std::string nome;
        int matricula;
        float nota1;
        float nota2;
        float nota3;
    public:
        Aluno();
        ~Aluno();
        float calculaMedia();

        std::string getNome();
        int getMatricula();
        float getNota1();
        float getNota2();
        float getNota3();

        void setNome(std::string nome);
        void setMatricula(int matricula);
        void setNota1(float nota1);
        void setNota2(float nota2);
        void setNota3(float nota3);

};