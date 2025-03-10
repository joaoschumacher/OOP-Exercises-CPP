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
        // Construtor padrão
        ContaBancaria();
        //Destrutor
        ~ContaBancaria();
    
        // Métodos
        bool abrir(int numeroConta, int numeroAgencia, string nome, TipoConta tipo);
        bool alteraSenha(string senha);
        void depositar(float valor);
        void sacar(float valor);
        void consultar();
        void fechar();
        void retirarExtrato();
    private:
        int numeroDaConta;
        int numeroDaAgencia;
        string nomeCliente;
        string senha;
        TipoConta tipoDaConta;
        float saldo;
        bool ativa;
        Transacao *historicoDasTransacoes;
        int quantidadeDeTransacoes;
};