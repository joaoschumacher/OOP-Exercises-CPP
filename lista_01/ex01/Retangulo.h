class Retangulo {
    public:
        // Construtor padrão
        Retangulo();
        Retangulo(int altura, int base);
        // Destrutor
        ~Retangulo();

        // Métodos
        int getAltura();
        int getBase();
        int getArea();
        bool calculaArea();
    private:
        int altura;
        int base;
        int area;
};