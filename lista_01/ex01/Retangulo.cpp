#include "Retangulo.h"

    Retangulo::Retangulo(){
        altura = 0;
        base = 0;
        area = 0;
    };
    
    Retangulo::Retangulo(int altura, int base){
        this->altura = altura;
        this->base = base;
        calculaArea();
    };

    Retangulo::~Retangulo(){};

    int Retangulo::getAltura(){
        return altura;
    };

    int Retangulo::getBase(){
        return base;
    };

    int Retangulo::getArea(){
        return area;
    };

    bool Retangulo::calculaArea(){
        area = base * altura;
        return true;
    }