class Retangulo{
    private:
        int largura;
        int altura;
    public:
        Retangulo();
        ~Retangulo();
        Retangulo(int l, int a);
        Retangulo(Retangulo, &r);
        int getLargura();
        int getAltura();
        void setLargura(int l);
        void setAltura(int a);



}