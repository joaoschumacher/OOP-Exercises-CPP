#include "Transacao.h"
#include <string>

using namespace std;

Transacao::Transacao(){
    this->tipo = DEPOSITO;
    this->valor = 0;
    this->data = "";
    this->de = 0;
    this->pare = 0;
}

Transacao::Transacao(TipoTransacao tipo, float valor, string data, int *de, int *pare) {
    this->tipo = tipo;
    this->valor = valor;
    this->data = data;
    this->de = de;
    this->pare = pare;
}

Transacao::~Transacao() {
}

TipoTransacao Transacao::getTipo() {
    return tipo;
}

float Transacao::getValor() {
    return valor;
}

string Transacao::getData() {
    return data;
}

int *Transacao::getDe() {
    return de;
}

int *Transacao::getPare() {
    return pare;
}

