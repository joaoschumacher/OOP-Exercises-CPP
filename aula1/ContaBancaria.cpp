#include "ContaBancaria.h"
#include "Transacao.cpp"
#include <iostream>
#include <string>

using namespace std;

ContaBancaria::ContaBancaria() {
    numeroDaConta = 0;
    numeroDaAgencia = 0;
    nomeCliente = "";
    senha = "";
    tipoDaConta = CONTA_CORRENTE;
    saldo = 0;
    ativa = false;
    historicoDasTransacoes = new Transacao[100];
    quantidadeDeTransacoes = 0;
}

ContaBancaria::~ContaBancaria() {
    delete historicoDasTransacoes;
}

bool ContaBancaria::abrir(int numeroConta, int numeroAgencia, string nome, TipoConta tipo) {
    if(ativa == false) {
        numeroDaConta = numeroConta;
        numeroDaAgencia = numeroAgencia;
        nomeCliente = nome;
        tipoDaConta = tipo;
        ativa = true;
        historicoDasTransacoes = new Transacao[100];
        quantidadeDeTransacoes = 0;
        return true;
    } else {
        return false;    
    }
}

bool ContaBancaria::alteraSenha(string senhaNova){
    if(ativa) {
        senha = senhaNova;
        return true;
    }
    return false;
}

void ContaBancaria::depositar(float valor){
    if(ativa) {
        saldo += valor;
        historicoDasTransacoes[quantidadeDeTransacoes] = Transacao(DEPOSITO, valor, "", &numeroDaConta, &numeroDaConta);
        quantidadeDeTransacoes++;
    }
}

void ContaBancaria::sacar(float valor){
    if(ativa) {
        saldo -= valor;
    }
    historicoDasTransacoes[quantidadeDeTransacoes] = Transacao(SAQUE, valor, "", &numeroDaConta, &numeroDaConta);
    quantidadeDeTransacoes++;
}

void ContaBancaria::consultar(){
    if(ativa) {
        cout << "Saldo: " << saldo << endl;
    }
}

void ContaBancaria::fechar(){
    if(ativa) {
        numeroDaConta = 0;
        numeroDaAgencia = 0;
        nomeCliente = "";
        tipoDaConta = CONTA_CORRENTE;
        saldo = 0;
        ativa = false;
        delete historicoDasTransacoes;
        quantidadeDeTransacoes = 0;
    }
}

Transacao *ContaBancaria::retirarExtrato(){
    return historicoDasTransacoes;
}

int ContaBancaria::getQuantidadeDeTransacoes(){
    return quantidadeDeTransacoes;
}