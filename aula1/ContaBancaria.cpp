#include "ContaBancaria.h"
#include <iostream>
#include <string>

using namespace std;

ContaBancaria::ContaBancaria() {
    numeroDaConta = 0;
    numeroDaAgencia = 0;
    nomeCliente = "";
    senha = "";
    tipoDaConta = 0;
    saldo = 0;
    ativa = false;
}

ContaBancaria::~ContaBancaria() {
}

bool ContaBancaria::Abrir(int numeroConta, int numeroAgencia, std::string nome, int tipo) {
    if(ativa == false) {
        numeroDaConta = numeroConta;
        numeroDaAgencia = numeroAgencia;
        nomeCliente = nome;
        tipoDaConta = tipo;
        ativa = true;
        return true;
    } else {
        return false;    
    }
}

bool ContaBancaria::AlteraSenha(std::string senhaNova){
    if(ativa) {
        senha = senhaNova;
        return true;
    }
    return false;
}

void ContaBancaria::Depositar(float valor){
    if(ativa) {
        saldo += valor;
    }
}

void ContaBancaria::Sacar(float valor){
    if(ativa) {
        saldo -= valor;
    }
}

void ContaBancaria::Consultar(){
    if(ativa) {
        cout << "Saldo: " << saldo << endl;
    }
}

void ContaBancaria::Fechar(){
    if(ativa) {
        numeroDaConta = 0;
        numeroDaAgencia = 0;
        nomeCliente = "";
        tipoDaConta = 0;
        saldo = 0;
        ativa = false;
    }
}

int main() {
    ContaBancaria conta;
    conta.Abrir(1234, 5678, "Joao", 1);
    conta.Depositar(1000);
    conta.Consultar();
    conta.Sacar(500);
    conta.Consultar();
    conta.Fechar();
    int teste1;
    int teste2;
    cin >> teste1 >> teste2;  

    return 0;
}