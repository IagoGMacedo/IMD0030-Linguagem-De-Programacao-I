//Pra usar arquivos sem o header, basta declarar normalmente. Não tem inclusão
//mesmo os arquivos unicos de classe precisam de um campo de definição.

//ARQUIVO NÃO MODULARIZADO
class RetanguloSimples{
    private:
    int largura;
    int altura;
    public:
    RetanguloSimples(int l, int a);
    int getArea();
    int getPerimetro();

};

RetanguloSimples::RetanguloSimples(int l, int a){
    largura = l;
    altura = a;
}
int RetanguloSimples::getArea(){
    return largura*altura;
}

int RetanguloSimples::getPerimetro(){
    return largura*2 + altura*2;
}
