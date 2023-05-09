#include <iostream>
class Tempo{
    private:
        short horas;
        short minutos;
        short segundos;

    public:
        Tempo();
        Tempo(short hor, short min, short seg);
        short getHoras();
        short getMinutos();
        short getSegundos();
        Tempo operator+(Tempo &time);
        friend std::istream& operator >> (std::istream &i, Tempo &time);
        friend std::ostream& operator << (std::ostream &o, Tempo &time);
};

Tempo::Tempo(){
    horas = 0;
    minutos = 0;
    segundos = 0;
};
    
Tempo::Tempo(short hor, short min, short seg){
    horas = hor;
    minutos = min;
    segundos = seg;
};

short Tempo::getHoras(){
    return this->horas;
}

short Tempo::getMinutos(){
    return this->minutos;
}

short Tempo::getSegundos(){
    return this->segundos;
}

//sobrecarga do operador de soma
Tempo Tempo::operator+(Tempo &time){
    short horas = this->horas+time.getHoras();
    short minutos = this->minutos+time.getMinutos();
    short segundos = this->segundos+time.getSegundos();
    return Tempo(horas, minutos, segundos);
}
//sobrecarga do operador << para output
//repare que eles não são acessados de tempo, por isso são friends

 std::istream& operator>> (std::istream &i, Tempo &time){
    i >> time.horas >> time.minutos >> time.segundos;
    return i;
 };
 std::ostream& operator<< (std::ostream &o, Tempo &time){
    o<< time.getHoras() <<":"<<time.getMinutos()<<":"<<time.getSegundos();
    return o;
 };
