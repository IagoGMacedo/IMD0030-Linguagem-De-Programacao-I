class Retangulo{
    private:
        int largura;
        int altura;
    public:
        Retangulo();
        Retangulo(int l, int a);
        Retangulo(Retangulo &r);
        ~Retangulo();
        int getLargura();
        int getAltura();
        void setLargura(int l);
        void setAltura(int a);
        static int total;
        static int getTotal();
        void soma(int &resultado);
};