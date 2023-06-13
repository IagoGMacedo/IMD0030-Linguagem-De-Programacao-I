class P{
    public:
        int y;
};

class A{
    int x;
    protected:
    int y;
    public:
    int z;
    virtual void f()=0;
};

class B: public A{
    static int p;
    public:
        virtual void f(){x=0;y=0;z=0;}
        static void g(){p++;}
        int h (int x){return p+x;}
};

