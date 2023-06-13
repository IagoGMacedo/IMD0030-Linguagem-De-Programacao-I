/*
podemos estender o conceito de template de função e criar 
elementos genéricos com templates também para classes

Sintaxe: acréscimo do prefixo de template antes da definição do nome 
da classe template<typename NomeTipo>
*/

template<class T>
class Par{
    private:
        T primeiro;
        T segundo;
    public:
        Par(T primei, T segund);
        T getPrimeiro();
        T getSegundo();
        void setPrimeiro(T primei);
        void setSegundo(T segund);
};

template<class T>
Par<T>::Par(T a, T b){
    this->primeiro = a;
    this->segundo = b;
}

template<class T>
T Par<T>::getPrimeiro(){
    return this->primeiro;
}

template<class T>
T Par<T>::getSegundo(){
    return this->segundo;
}

//a identificação do tipo de dados a ser utilizado para o objeto é 
//feita especializando o template da classe.
