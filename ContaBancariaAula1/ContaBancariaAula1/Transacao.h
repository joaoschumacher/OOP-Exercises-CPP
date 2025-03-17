#pragma once
#include <string>

using namespace std;

enum TipoTransacao {
    DEPOSITO,
    SAQUE,
    TRANSFERENCIA
};

class Transacao {
public:
    Transacao();
    ~Transacao();
    Transacao(TipoTransacao tipo, float valor, string data, int* de, int* pare);
    TipoTransacao getTipo();
    float getValor();
    string getData();
    int* getDe();
    int* getPare();
private:
    TipoTransacao tipo;
    float valor;
    string data;
    int* de;
    int* pare;
};