#pragma once
#include <string>
#include "Transacao.h"

using namespace std;

enum TipoConta {
    CONTA_CORRENTE,
    CONTA_POUPANCA,
    CONTA_SALARIO
};

class ContaBancaria {
public:
    // Construtor padr�o
    ContaBancaria();
    //Destrutor
    ~ContaBancaria();

    // M�todos
    bool abrir(int numeroConta, int numeroAgencia, string nome, TipoConta tipo);
    bool alterarSenha(string senha);
    void depositar(float valor);
    void sacar(float valor);
    void consultar();
    void fechar();
    Transacao* retirarExtrato();
    int getQuantidadeDeTransacoes();
private:
    int numeroDaConta;
    int numeroDaAgencia;
    string nomeCliente;
    string senha;
    TipoConta tipoDaConta;
    float saldo;
    bool ativa;
    Transacao* historicoDasTransacoes;
    int quantidadeDeTransacoes;
};